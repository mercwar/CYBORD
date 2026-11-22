<?php
declare(strict_types=1);

// Detach and hide the Command Prompt console window immediately
$k32 = FFI::cdef("
    int FreeConsole(void);
    void* GetModuleHandleA(const char* lpModuleName);
", "kernel32.dll");
$k32->FreeConsole();

$u32 = FFI::cdef("
    typedef struct {
        void*         hwnd;
        unsigned int  message;
        size_t        wParam;
        intptr_t      lParam;
        unsigned long time;
        long          pt_x;
        long          pt_y;
    } MSG;

    typedef struct {
        unsigned long  style;
        unsigned long  dwExtendedStyle;
        unsigned short cdit;
        short          x;
        short          y;
        short          cx;
        short          cy;
        unsigned short menu;
        unsigned short windowClass;
        unsigned short title;
    } DLGTEMPLATE_EMPTY;

    typedef struct {
        unsigned int cbSize;
        unsigned int fMask;
        unsigned int fType;
        unsigned int fState;
        unsigned int wID;
        void*        hSubMenu;
        void*        hbmpChecked;
        void*        hbmpUnchecked;
        size_t       dwItemData;
        char*        dwTypeData;
        unsigned int cch;
        void*        hbmpItem;
    } MENUITEMINFOA;

    typedef intptr_t (__stdcall *DLGPROC)(void* hwnd, unsigned int msg, size_t wParam, intptr_t lParam);

    void* CreateDialogIndirectParamA(
        void* hInstance,
        const DLGTEMPLATE_EMPTY* lpTemplate,
        void* hWndParent,
        DLGPROC lpDialogFunc,
        intptr_t dwInitParam
    );
    void* CreateWindowExA(
        unsigned long dwExStyle,
        const char* lpClassName,
        const char* lpWindowName,
        unsigned long dwStyle,
        int X, int Y, int nWidth, int nHeight,
        void* hWndParent, void* hMenu, void* hInstance, void* lpParam
    );
    int SetWindowTextA(void* hWnd, const char* lpString);
    int ShowWindow(void* hWnd, int nCmdShow);
    int IsWindow(void* hWnd);
    int GetMessageA(MSG* lpMsg, void* hWnd, unsigned int wMsgFilterMin, unsigned int wMsgFilterMax);
    int IsDialogMessageA(void* hDlg, MSG* lpMsg);
    int TranslateMessage(const MSG* lpMsg);
    intptr_t DispatchMessageA(const MSG* lpMsg);
    int DestroyWindow(void* hWnd);
    int MessageBoxA(void* hWnd, const char* lpText, const char* lpCaption, unsigned int uType);
    intptr_t SetWindowLongPtrA(void* hWnd, int nIndex, DLGPROC dwNewLong);

    void* CreateMenu(void);
    void* CreatePopupMenu(void);
    int AppendMenuA(void* hMenu, unsigned int uFlags, unsigned int uIDNewItem, const char* lpNewItem);
    int InsertMenuItemA(void* hmenu, unsigned int item, int fByPosition, const MENUITEMINFOA* lpmi);
    int SetMenu(void* hWnd, void* hMenu);
    int DrawMenuBar(void* hWnd);
", "user32.dll");

const WS_OVERLAPPEDWINDOW = 0x00CF0000;
const WS_VISIBLE          = 0x10000000;
const WS_CHILD            = 0x40000000;

const WM_CLOSE   = 0x0010;
const WM_COMMAND = 0x0111;

const MF_STRING    = 0x00000000;
const MIIM_ID      = 0x00000002;
const MIIM_SUBMENU = 0x00000004;
const MIIM_STRING  = 0x00000040;

const DWLP_DLGPROC = 8;

const IDM_EXIT  = 1001;
const IDM_ABOUT = 1002;

$hInstance = $k32->GetModuleHandleA(null);

// 1. Create a properly initialized native Windows Dialog (#32770)
$tpl = $u32->new("DLGTEMPLATE_EMPTY");
$tpl->style = WS_OVERLAPPEDWINDOW | WS_VISIBLE;
$tpl->x     = 120;
$tpl->y     = 100;
$tpl->cx    = 260;
$tpl->cy    = 130;

$hwnd = $u32->CreateDialogIndirectParamA($hInstance, FFI::addr($tpl), null, null, 0);
$u32->SetWindowTextA($hwnd, "CYBORD Windows Application");

// 2. Build Menu Bar using InsertMenuItemA (passes void* hSubMenu natively without casting)
$hMenuBar  = $u32->CreateMenu();
$hFileMenu = $u32->CreatePopupMenu();
$hHelpMenu = $u32->CreatePopupMenu();

$u32->AppendMenuA($hFileMenu, MF_STRING, IDM_EXIT, "&Exit");
$u32->AppendMenuA($hHelpMenu, MF_STRING, IDM_ABOUT, "&About CYBORD...");

$addSubMenu = static function ($bar, int $pos, $subMenu, string $label) use ($u32): void {
    $buf = FFI::new("char[" . (strlen($label) + 1) . "]", false);
    FFI::memcpy($buf, $label, strlen($label));

    $mii = $u32->new("MENUITEMINFOA");
    $mii->cbSize     = FFI::sizeof($mii);
    $mii->fMask      = MIIM_STRING | MIIM_SUBMENU;
    $mii->hSubMenu   = $subMenu;
    $mii->dwTypeData = $buf;

    $u32->InsertMenuItemA($bar, $pos, 1, FFI::addr($mii));
    FFI::free($buf);
};

$addSubMenu($hMenuBar, 0, $hFileMenu, "&File");
$addSubMenu($hMenuBar, 1, $hHelpMenu, "&Help");

$u32->SetMenu($hwnd, $hMenuBar);
$u32->DrawMenuBar($hwnd);

// 3. Attach DialogProc for Menu Bar & Button events
$aboutText = "CYBORD Windows Runtime\n"
           . "PHP Engine: " . PHP_VERSION . "\n"
           . "Mercwar Constellation • CVBGOD Systems";

$dlgProc = static function ($hDlg, int $msg, int $wParam, int $lParam) use ($u32, $aboutText): int {
    if ($msg === WM_COMMAND) {
        $id = $wParam & 0xFFFF;
        if ($id === IDM_ABOUT) {
            $u32->MessageBoxA($hDlg, $aboutText, "About CYBORD", 0x00000040);
            return 1;
        }
        if ($id === IDM_EXIT) {
            $u32->DestroyWindow($hDlg);
            return 1;
        }
    } elseif ($msg === WM_CLOSE) {
        $u32->DestroyWindow($hDlg);
        return 1;
    }
    return 0;
};

$u32->SetWindowLongPtrA($hwnd, DWLP_DLGPROC, $dlgProc);

// 4. Child Label & About Button
$u32->CreateWindowExA(
    0,
    "STATIC",
    "CYBORD PHP " . PHP_VERSION . " Win32 Window Active.\nClick Help -> About CYBORD... or the button below.",
    WS_CHILD | WS_VISIBLE,
    24, 24, 420, 45,
    $hwnd,
    null,
    $hInstance,
    null
);

$u32->CreateWindowExA(
    0,
    "BUTTON",
    "About CYBORD",
    WS_CHILD | WS_VISIBLE,
    24, 85, 130, 32,
    $hwnd,
    FFI::cast("void*", IDM_ABOUT),
    $hInstance,
    null
);

$u32->ShowWindow($hwnd, 5);

// 5. Standard Dialog Message Loop
$msg = $u32->new("MSG");
while ($u32->IsWindow($hwnd) && $u32->GetMessageA(FFI::addr($msg), null, 0, 0) > 0) {
    if (!$u32->IsDialogMessageA($hwnd, FFI::addr($msg))) {
        $u32->TranslateMessage(FFI::addr($msg));
        $u32->DispatchMessageA(FFI::addr($msg));
    }
}
