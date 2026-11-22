<?php
// Ensure the configured session_save_path directory exists (handles relative paths like ..\sessions)
$configuredSavePath = session_save_path();
if ($configuredSavePath !== '' && !is_dir($configuredSavePath)) {
    @mkdir($configuredSavePath, 0777, true);
}

$binDir = dirname(PHP_BINARY);
$rootDir = dirname($binDir);

// Parse CLI arguments: [hex_payload] [--silent]
$args = array_slice($argv, 1);
$silent = in_array('--silent', $args, true);
$hex = '';
foreach ($args as $arg) {
    if ($arg !== '--silent') {
        $hex = $arg;
        break;
    }
}

// ============================================================================
// [1/7] PHP Engine & Runtime Paths
// ============================================================================
echo "  [1/7] PHP Engine   : " . PHP_VERSION . " (" . PHP_BINARY . ")" . PHP_EOL;

// ============================================================================
// [2/7] FFI Extension Check
// ============================================================================
$ffiReady = extension_loaded('ffi');
echo "  [2/7] FFI Module   : " . ($ffiReady ? 'ACTIVE' : 'MISSING (ext_dir=' . ini_get('extension_dir') . ')') . PHP_EOL;
if (!$ffiReady) {
    exit(2);
}

// ============================================================================
// [3/7] Core Runtime DLLs (cybord.dll / cbord.dll + win32api.dll)
// ============================================================================
$k32 = FFI::cdef("
    void* LoadLibraryA(const char* lpLibFileName);
    unsigned int GetLastError(void);
", "kernel32.dll");

$coreDll = file_exists($binDir . '\\cybord.dll')
    ? $binDir . '\\cybord.dll'
    : $binDir . '\\cbord.dll';

$hCore = $k32->LoadLibraryA($coreDll);
if ($hCore === null) {
    echo "  [3/7] Core DLL     : FAILED to load " . basename($coreDll) . " (Win32 Err " . $k32->GetLastError() . ")" . PHP_EOL;
    exit(3);
}
echo "  [3/7] Core DLL     : LOADED (" . basename($coreDll) . ")" . PHP_EOL;

$win32Dll = $binDir . '\\win32api.dll';
if (file_exists($win32Dll)) {
    $hWin32 = $k32->LoadLibraryA($win32Dll);
    if ($hWin32 === null) {
        echo "  [4/7] Win32 DLL    : FAILED to load win32api.dll (Win32 Err " . $k32->GetLastError() . ")" . PHP_EOL;
        exit(4);
    }
    echo "  [4/7] Win32 DLL    : LOADED (win32api.dll)" . PHP_EOL;
} else {
    echo "  [4/7] Win32 DLL    : SKIPPED (win32api.dll not in bin\\)" . PHP_EOL;
}

// ============================================================================
// [5/7] Cyborg Hex String (CBOR Payload) Decoding
// ============================================================================
$rawBytes = ($hex !== '' && ctype_xdigit($hex) && strlen($hex) % 2 === 0) ? hex2bin($hex) : false;
if ($hex !== '' && $rawBytes === false) {
    echo "  [5/7] Hex Payload  : INVALID HEX (" . $hex . ")" . PHP_EOL;
    exit(5);
}
$byteLen = $rawBytes !== false ? strlen($rawBytes) : 0;
echo "  [5/7] Hex Payload  : " . ($hex !== '' ? $hex : '<empty>') . " (" . $byteLen . " bytes)" . PHP_EOL;

// ============================================================================
// [6/7] Portable PHP Session Persistence Test (Write -> Close -> Reopen)
// ============================================================================
$testSessionId = 'cybord-verify-' . getmypid();
session_id($testSessionId);

if (!session_start()) {
    echo "  [6/7] PHP Session  : FAILED to start session in " . session_save_path() . PHP_EOL;
    exit(6);
}

$token = bin2hex(random_bytes(8));
$_SESSION['cybord_verified'] = true;
$_SESSION['hex_payload'] = $hex;
$_SESSION['verify_token'] = $token;
session_write_close();

// Re-open session to confirm disk persistence
$_SESSION = [];
session_id($testSessionId);
session_start();
$persisted = isset($_SESSION['verify_token']) && $_SESSION['verify_token'] === $token;
session_destroy();

if (!$persisted) {
    echo "  [6/7] PHP Session  : FAILED persistence check in " . session_save_path() . PHP_EOL;
    exit(6);
}
echo "  [6/7] PHP Session  : VERIFIED (ID=" . $testSessionId . ", Dir=" . realpath(session_save_path()) . ")" . PHP_EOL;

// ============================================================================
// [7/7] Native Win32 User32 MessageBoxA Execution
// ============================================================================
if ($silent) {
    echo "  [7/7] Win32 API    : SKIPPED (--silent mode)" . PHP_EOL;
} else {
    $u32 = FFI::cdef("
        int MessageBoxA(void* hWnd, const char* lpText, const char* lpCaption, unsigned int uType);
    ", "user32.dll");

    $msg = "CYBORD Full Verification Passed!\n\n"
         . "PHP Engine : " . PHP_VERSION . "\n"
         . "Core DLL   : " . basename($coreDll) . " (LOADED)\n"
         . "Hex Bytes  : " . $byteLen . " bytes (" . ($hex !== '' ? $hex : 'none') . ")\n"
         . "Session    : VERIFIED (" . $testSessionId . ")";

    // 0x00000040 = MB_ICONINFORMATION | 0x00000000 = MB_OK
    $u32->MessageBoxA(null, $msg, "CYBORD + Win32 API + Session Suite", 0x00000040);
    echo "  [7/7] Win32 API    : MessageBoxA executed successfully" . PHP_EOL;
}

exit(0);
