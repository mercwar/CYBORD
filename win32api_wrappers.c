#include <windows.h>
#include <stdint.h>

INT_PTR WINAPI RtlCaptureStackBackTrace_MWAI(INT_PTR* args){
    return (INT_PTR)RtlCaptureStackBackTrace((DWORD)*(args + 0), (DWORD)*(args + 1), (PVOID*)*(args + 2), (PDWORD)*(args + 3));
}
INT_PTR WINAPI RtlUnwind_MWAI(INT_PTR* args){
    RtlUnwind((PVOID)*(args + 0), (PVOID)*(args + 1), (PEXCEPTION_RECORD)*(args + 2), (PVOID)*(args + 3));
    return 0;
}
INT_PTR WINAPI RtlLookupFunctionEntry_MWAI(INT_PTR* args){
    return (INT_PTR)RtlLookupFunctionEntry((DWORD64)*(args + 0), (PDWORD64)*(args + 1), (PUNWIND_HISTORY_TABLE)*(args + 2));
}
INT_PTR WINAPI RtlRaiseException_MWAI(INT_PTR* args){
    RtlRaiseException((PEXCEPTION_RECORD)*(args + 0));
    return 0;
}
INT_PTR WINAPI RtlPcToFileHeader_MWAI(INT_PTR* args){
    return (INT_PTR)RtlPcToFileHeader((PVOID)*(args + 0), (PVOID*)*(args + 1));
}
INT_PTR WINAPI VerSetConditionMask_MWAI(INT_PTR* args){
    return (INT_PTR)VerSetConditionMask((ULONGLONG)*(args + 0), (DWORD)*(args + 1), (BYTE)*(args + 2));
}
INT_PTR WINAPI SetEnvironmentStringsW_MWAI(INT_PTR* args){
    return (INT_PTR)SetEnvironmentStringsW((LPWCH)*(args + 0));
}
INT_PTR WINAPI GetStdHandle_MWAI(INT_PTR* args){
    return (INT_PTR)GetStdHandle((DWORD)*(args + 0));
}
INT_PTR WINAPI SetStdHandle_MWAI(INT_PTR* args){
    return (INT_PTR)SetStdHandle((DWORD)*(args + 0), (HANDLE)*(args + 1));
}
INT_PTR WINAPI SetStdHandleEx_MWAI(INT_PTR* args){
    return (INT_PTR)SetStdHandleEx((DWORD)*(args + 0), (HANDLE)*(args + 1), (PHANDLE)*(args + 2));
}
INT_PTR WINAPI GetCommandLineA_MWAI(INT_PTR* args){
    return (INT_PTR)GetCommandLineA();
}
INT_PTR WINAPI GetCommandLineW_MWAI(INT_PTR* args){
    return (INT_PTR)GetCommandLineW();
}
INT_PTR WINAPI GetEnvironmentStrings_MWAI(INT_PTR* args){
    return (INT_PTR)GetEnvironmentStrings();
}
INT_PTR WINAPI GetEnvironmentStringsW_MWAI(INT_PTR* args){
    return (INT_PTR)GetEnvironmentStringsW();
}
INT_PTR WINAPI FreeEnvironmentStringsA_MWAI(INT_PTR* args){
    return (INT_PTR)FreeEnvironmentStringsA((LPCH)*(args + 0));
}
INT_PTR WINAPI FreeEnvironmentStringsW_MWAI(INT_PTR* args){
    return (INT_PTR)FreeEnvironmentStringsW((LPWCH)*(args + 0));
}
INT_PTR WINAPI GetEnvironmentVariableA_MWAI(INT_PTR* args){
    return (INT_PTR)GetEnvironmentVariableA((LPCSTR)*(args + 0), (LPSTR)*(args + 1), (DWORD)*(args + 2));
}
INT_PTR WINAPI GetEnvironmentVariableW_MWAI(INT_PTR* args){
    return (INT_PTR)GetEnvironmentVariableW((LPCWSTR)*(args + 0), (LPWSTR)*(args + 1), (DWORD)*(args + 2));
}
INT_PTR WINAPI SetEnvironmentVariableA_MWAI(INT_PTR* args){
    return (INT_PTR)SetEnvironmentVariableA((LPCSTR)*(args + 0), (LPCSTR)*(args + 1));
}
INT_PTR WINAPI SetEnvironmentVariableW_MWAI(INT_PTR* args){
    return (INT_PTR)SetEnvironmentVariableW((LPCWSTR)*(args + 0), (LPCWSTR)*(args + 1));
}
INT_PTR WINAPI ExpandEnvironmentStringsA_MWAI(INT_PTR* args){
    return (INT_PTR)ExpandEnvironmentStringsA((LPCSTR)*(args + 0), (LPSTR)*(args + 1), (DWORD)*(args + 2));
}
INT_PTR WINAPI ExpandEnvironmentStringsW_MWAI(INT_PTR* args){
    return (INT_PTR)ExpandEnvironmentStringsW((LPCWSTR)*(args + 0), (LPWSTR)*(args + 1), (DWORD)*(args + 2));
}
INT_PTR WINAPI SetCurrentDirectoryA_MWAI(INT_PTR* args){
    return (INT_PTR)SetCurrentDirectoryA((LPCSTR)*(args + 0));
}
INT_PTR WINAPI SetCurrentDirectoryW_MWAI(INT_PTR* args){
    return (INT_PTR)SetCurrentDirectoryW((LPCWSTR)*(args + 0));
}
INT_PTR WINAPI GetCurrentDirectoryA_MWAI(INT_PTR* args){
    return (INT_PTR)GetCurrentDirectoryA((DWORD)*(args + 0), (LPSTR)*(args + 1));
}
INT_PTR WINAPI GetCurrentDirectoryW_MWAI(INT_PTR* args){
    return (INT_PTR)GetCurrentDirectoryW((DWORD)*(args + 0), (LPWSTR)*(args + 1));
}
INT_PTR WINAPI SearchPathW_MWAI(INT_PTR* args){
    return (INT_PTR)SearchPathW((LPCWSTR)*(args + 0), (LPCWSTR)*(args + 1), (LPCWSTR)*(args + 2), (DWORD)*(args + 3), (LPWSTR)*(args + 4), (LPWSTR*)*(args + 5));
}
INT_PTR WINAPI SearchPathA_MWAI(INT_PTR* args){
    return (INT_PTR)SearchPathA((LPCSTR)*(args + 0), (LPCSTR)*(args + 1), (LPCSTR)*(args + 2), (DWORD)*(args + 3), (LPSTR)*(args + 4), (LPSTR*)*(args + 5));
}
INT_PTR WINAPI NeedCurrentDirectoryForExePathA_MWAI(INT_PTR* args){
    return (INT_PTR)NeedCurrentDirectoryForExePathA((LPCSTR)*(args + 0));
}
INT_PTR WINAPI NeedCurrentDirectoryForExePathW_MWAI(INT_PTR* args){
    return (INT_PTR)NeedCurrentDirectoryForExePathW((LPCWSTR)*(args + 0));
}
INT_PTR WINAPI CompareFileTime_MWAI(INT_PTR* args){
    return (INT_PTR)CompareFileTime((const FILETIME*)*(args + 0), (const FILETIME*)*(args + 1));
}
INT_PTR WINAPI CreateDirectoryA_MWAI(INT_PTR* args){
    return (INT_PTR)CreateDirectoryA((LPCSTR)*(args + 0), (LPSECURITY_ATTRIBUTES)*(args + 1));
}
INT_PTR WINAPI CreateDirectoryW_MWAI(INT_PTR* args){
    return (INT_PTR)CreateDirectoryW((LPCWSTR)*(args + 0), (LPSECURITY_ATTRIBUTES)*(args + 1));
}
INT_PTR WINAPI CreateFileA_MWAI(INT_PTR* args){
    return (INT_PTR)CreateFileA((LPCSTR)*(args + 0), (DWORD)*(args + 1), (DWORD)*(args + 2), (LPSECURITY_ATTRIBUTES)*(args + 3), (DWORD)*(args + 4), (DWORD)*(args + 5), (HANDLE)*(args + 6));
}
INT_PTR WINAPI CreateFileW_MWAI(INT_PTR* args){
    return (INT_PTR)CreateFileW((LPCWSTR)*(args + 0), (DWORD)*(args + 1), (DWORD)*(args + 2), (LPSECURITY_ATTRIBUTES)*(args + 3), (DWORD)*(args + 4), (DWORD)*(args + 5), (HANDLE)*(args + 6));
}
INT_PTR WINAPI DefineDosDeviceW_MWAI(INT_PTR* args){
    return (INT_PTR)DefineDosDeviceW((DWORD)*(args + 0), (LPCWSTR)*(args + 1), (LPCWSTR)*(args + 2));
}
INT_PTR WINAPI DeleteFileA_MWAI(INT_PTR* args){
    return (INT_PTR)DeleteFileA((LPCSTR)*(args + 0));
}
INT_PTR WINAPI DeleteFileW_MWAI(INT_PTR* args){
    return (INT_PTR)DeleteFileW((LPCWSTR)*(args + 0));
}
INT_PTR WINAPI DeleteVolumeMountPointW_MWAI(INT_PTR* args){
    return (INT_PTR)DeleteVolumeMountPointW((LPCWSTR)*(args + 0));
}
INT_PTR WINAPI FindClose_MWAI(INT_PTR* args){
    return (INT_PTR)FindClose((HANDLE)*(args + 0));
}
INT_PTR WINAPI FindCloseChangeNotification_MWAI(INT_PTR* args){
    return (INT_PTR)FindCloseChangeNotification((HANDLE)*(args + 0));
}
INT_PTR WINAPI FindFirstChangeNotificationA_MWAI(INT_PTR* args){
    return (INT_PTR)FindFirstChangeNotificationA((LPCSTR)*(args + 0), (BOOL)*(args + 1), (DWORD)*(args + 2));
}
INT_PTR WINAPI FindFirstChangeNotificationW_MWAI(INT_PTR* args){
    return (INT_PTR)FindFirstChangeNotificationW((LPCWSTR)*(args + 0), (BOOL)*(args + 1), (DWORD)*(args + 2));
}
INT_PTR WINAPI FindFirstFileA_MWAI(INT_PTR* args){
    return (INT_PTR)FindFirstFileA((LPCSTR)*(args + 0), (LPWIN32_FIND_DATAA)*(args + 1));
}
INT_PTR WINAPI FindFirstFileW_MWAI(INT_PTR* args){
    return (INT_PTR)FindFirstFileW((LPCWSTR)*(args + 0), (LPWIN32_FIND_DATAW)*(args + 1));
}
INT_PTR WINAPI FindFirstFileExA_MWAI(INT_PTR* args){
    return (INT_PTR)FindFirstFileExA((LPCSTR)*(args + 0), (FINDEX_INFO_LEVELS)*(args + 1), (LPVOID)*(args + 2), (FINDEX_SEARCH_OPS)*(args + 3), (LPVOID)*(args + 4), (DWORD)*(args + 5));
}
INT_PTR WINAPI FindFirstFileExW_MWAI(INT_PTR* args){
    return (INT_PTR)FindFirstFileExW((LPCWSTR)*(args + 0), (FINDEX_INFO_LEVELS)*(args + 1), (LPVOID)*(args + 2), (FINDEX_SEARCH_OPS)*(args + 3), (LPVOID)*(args + 4), (DWORD)*(args + 5));
}
INT_PTR WINAPI FindFirstVolumeW_MWAI(INT_PTR* args){
    return (INT_PTR)FindFirstVolumeW((LPWSTR)*(args + 0), (DWORD)*(args + 1));
}
INT_PTR WINAPI FindNextChangeNotification_MWAI(INT_PTR* args){
    return (INT_PTR)FindNextChangeNotification((HANDLE)*(args + 0));
}
INT_PTR WINAPI FindNextFileA_MWAI(INT_PTR* args){
    return (INT_PTR)FindNextFileA((HANDLE)*(args + 0), (LPWIN32_FIND_DATAA)*(args + 1));
}
INT_PTR WINAPI FindNextFileW_MWAI(INT_PTR* args){
    return (INT_PTR)FindNextFileW((HANDLE)*(args + 0), (LPWIN32_FIND_DATAW)*(args + 1));
}
INT_PTR WINAPI FindNextVolumeW_MWAI(INT_PTR* args){
    return (INT_PTR)FindNextVolumeW((HANDLE)*(args + 0), (LPWSTR)*(args + 1), (DWORD)*(args + 2));
}
INT_PTR WINAPI FindVolumeClose_MWAI(INT_PTR* args){
    return (INT_PTR)FindVolumeClose((HANDLE)*(args + 0));
}
INT_PTR WINAPI FlushFileBuffers_MWAI(INT_PTR* args){
    return (INT_PTR)FlushFileBuffers((HANDLE)*(args + 0));
}
INT_PTR WINAPI GetDiskFreeSpaceA_MWAI(INT_PTR* args){
    return (INT_PTR)GetDiskFreeSpaceA((LPCSTR)*(args + 0), (LPDWORD)*(args + 1), (LPDWORD)*(args + 2), (LPDWORD)*(args + 3), (LPDWORD)*(args + 4));
}
INT_PTR WINAPI GetDiskFreeSpaceW_MWAI(INT_PTR* args){
    return (INT_PTR)GetDiskFreeSpaceW((LPCWSTR)*(args + 0), (LPDWORD)*(args + 1), (LPDWORD)*(args + 2), (LPDWORD)*(args + 3), (LPDWORD)*(args + 4));
}
INT_PTR WINAPI GetDiskSpaceInformationA_MWAI(INT_PTR* args){
    return (INT_PTR)GetDiskSpaceInformationA((LPCSTR)*(args + 0), (DISK_SPACE_INFORMATION*)*(args + 1));
}
INT_PTR WINAPI GetDiskSpaceInformationW_MWAI(INT_PTR* args){
    return (INT_PTR)GetDiskSpaceInformationW((LPCWSTR)*(args + 0), (DISK_SPACE_INFORMATION*)*(args + 1));
}
INT_PTR WINAPI GetDriveTypeA_MWAI(INT_PTR* args){
    return (INT_PTR)GetDriveTypeA((LPCSTR)*(args + 0));
}
INT_PTR WINAPI GetDriveTypeW_MWAI(INT_PTR* args){
    return (INT_PTR)GetDriveTypeW((LPCWSTR)*(args + 0));
}
INT_PTR WINAPI GetFileAttributesA_MWAI(INT_PTR* args){
    return (INT_PTR)GetFileAttributesA((LPCSTR)*(args + 0));
}
INT_PTR WINAPI GetFileAttributesW_MWAI(INT_PTR* args){
    return (INT_PTR)GetFileAttributesW((LPCWSTR)*(args + 0));
}
INT_PTR WINAPI GetFileAttributesExA_MWAI(INT_PTR* args){
    return (INT_PTR)GetFileAttributesExA((LPCSTR)*(args + 0), (GET_FILEEX_INFO_LEVELS)*(args + 1), (LPVOID)*(args + 2));
}
INT_PTR WINAPI GetFileAttributesExW_MWAI(INT_PTR* args){
    return (INT_PTR)GetFileAttributesExW((LPCWSTR)*(args + 0), (GET_FILEEX_INFO_LEVELS)*(args + 1), (LPVOID)*(args + 2));
}
INT_PTR WINAPI GetFileInformationByHandle_MWAI(INT_PTR* args){
    return (INT_PTR)GetFileInformationByHandle((HANDLE)*(args + 0), (LPBY_HANDLE_FILE_INFORMATION)*(args + 1));
}
INT_PTR WINAPI GetFileSize_MWAI(INT_PTR* args){
    return (INT_PTR)GetFileSize((HANDLE)*(args + 0), (LPDWORD)*(args + 1));
}
INT_PTR WINAPI GetFileType_MWAI(INT_PTR* args){
    return (INT_PTR)GetFileType((HANDLE)*(args + 0));
}
INT_PTR WINAPI GetFinalPathNameByHandleA_MWAI(INT_PTR* args){
    return (INT_PTR)GetFinalPathNameByHandleA((HANDLE)*(args + 0), (LPSTR)*(args + 1), (DWORD)*(args + 2), (DWORD)*(args + 3));
}
INT_PTR WINAPI GetFinalPathNameByHandleW_MWAI(INT_PTR* args){
    return (INT_PTR)GetFinalPathNameByHandleW((HANDLE)*(args + 0), (LPWSTR)*(args + 1), (DWORD)*(args + 2), (DWORD)*(args + 3));
}
INT_PTR WINAPI GetFullPathNameW_MWAI(INT_PTR* args){
    return (INT_PTR)GetFullPathNameW((LPCWSTR)*(args + 0), (DWORD)*(args + 1), (LPWSTR)*(args + 2), (LPWSTR*)*(args + 3));
}
INT_PTR WINAPI GetFullPathNameA_MWAI(INT_PTR* args){
    return (INT_PTR)GetFullPathNameA((LPCSTR)*(args + 0), (DWORD)*(args + 1), (LPSTR)*(args + 2), (LPSTR*)*(args + 3));
}
INT_PTR WINAPI GetLogicalDrives_MWAI(INT_PTR* args){
    return (INT_PTR)GetLogicalDrives();
}
INT_PTR WINAPI GetLogicalDriveStringsW_MWAI(INT_PTR* args){
    return (INT_PTR)GetLogicalDriveStringsW((DWORD)*(args + 0), (LPWSTR)*(args + 1));
}
INT_PTR WINAPI GetLongPathNameA_MWAI(INT_PTR* args){
    return (INT_PTR)GetLongPathNameA((LPCSTR)*(args + 0), (LPSTR)*(args + 1), (DWORD)*(args + 2));
}
INT_PTR WINAPI GetLongPathNameW_MWAI(INT_PTR* args){
    return (INT_PTR)GetLongPathNameW((LPCWSTR)*(args + 0), (LPWSTR)*(args + 1), (DWORD)*(args + 2));
}
INT_PTR WINAPI AreShortNamesEnabled_MWAI(INT_PTR* args){
    return (INT_PTR)AreShortNamesEnabled((HANDLE)*(args + 0), (BOOL*)*(args + 1));
}
INT_PTR WINAPI GetShortPathNameW_MWAI(INT_PTR* args){
    return (INT_PTR)GetShortPathNameW((LPCWSTR)*(args + 0), (LPWSTR)*(args + 1), (DWORD)*(args + 2));
}
INT_PTR WINAPI GetTempFileNameW_MWAI(INT_PTR* args){
    return (INT_PTR)GetTempFileNameW((LPCWSTR)*(args + 0), (LPCWSTR)*(args + 1), (UINT)*(args + 2), (LPWSTR)*(args + 3));
}
INT_PTR WINAPI GetVolumeInformationByHandleW_MWAI(INT_PTR* args){
    return (INT_PTR)GetVolumeInformationByHandleW((HANDLE)*(args + 0), (LPWSTR)*(args + 1), (DWORD)*(args + 2), (LPDWORD)*(args + 3), (LPDWORD)*(args + 4), (LPDWORD)*(args + 5), (LPWSTR)*(args + 6), (DWORD)*(args + 7));
}
INT_PTR WINAPI GetVolumeInformationW_MWAI(INT_PTR* args){
    return (INT_PTR)GetVolumeInformationW((LPCWSTR)*(args + 0), (LPWSTR)*(args + 1), (DWORD)*(args + 2), (LPDWORD)*(args + 3), (LPDWORD)*(args + 4), (LPDWORD)*(args + 5), (LPWSTR)*(args + 6), (DWORD)*(args + 7));
}
INT_PTR WINAPI GetVolumePathNameW_MWAI(INT_PTR* args){
    return (INT_PTR)GetVolumePathNameW((LPCWSTR)*(args + 0), (LPWSTR)*(args + 1), (DWORD)*(args + 2));
}
INT_PTR WINAPI LockFile_MWAI(INT_PTR* args){
    return (INT_PTR)LockFile((HANDLE)*(args + 0), (DWORD)*(args + 1), (DWORD)*(args + 2), (DWORD)*(args + 3), (DWORD)*(args + 4));
}
INT_PTR WINAPI LockFileEx_MWAI(INT_PTR* args){
    return (INT_PTR)LockFileEx((HANDLE)*(args + 0), (DWORD)*(args + 1), (DWORD)*(args + 2), (DWORD)*(args + 3), (DWORD)*(args + 4), (LPOVERLAPPED)*(args + 5));
}
INT_PTR WINAPI QueryDosDeviceW_MWAI(INT_PTR* args){
    return (INT_PTR)QueryDosDeviceW((LPCWSTR)*(args + 0), (LPWSTR)*(args + 1), (DWORD)*(args + 2));
}
INT_PTR WINAPI ReadFile_MWAI(INT_PTR* args){
    return (INT_PTR)ReadFile((HANDLE)*(args + 0), (LPVOID)*(args + 1), (DWORD)*(args + 2), (LPDWORD)*(args + 3), (LPOVERLAPPED)*(args + 4));
}
INT_PTR WINAPI ReadFileEx_MWAI(INT_PTR* args){
    return (INT_PTR)ReadFileEx((HANDLE)*(args + 0), (LPVOID)*(args + 1), (DWORD)*(args + 2), (LPOVERLAPPED)*(args + 3), (LPOVERLAPPED_COMPLETION_ROUTINE)*(args + 4));
}
INT_PTR WINAPI ReadFileScatter_MWAI(INT_PTR* args){
    return (INT_PTR)ReadFileScatter((HANDLE)*(args + 0), (FILE_SEGMENT_ELEMENT*)*(args + 1), (DWORD)*(args + 2), (LPDWORD)*(args + 3), (LPOVERLAPPED)*(args + 4));
}
INT_PTR WINAPI RemoveDirectoryA_MWAI(INT_PTR* args){
    return (INT_PTR)RemoveDirectoryA((LPCSTR)*(args + 0));
}
INT_PTR WINAPI RemoveDirectoryW_MWAI(INT_PTR* args){
    return (INT_PTR)RemoveDirectoryW((LPCWSTR)*(args + 0));
}
INT_PTR WINAPI SetEndOfFile_MWAI(INT_PTR* args){
    return (INT_PTR)SetEndOfFile((HANDLE)*(args + 0));
}
INT_PTR WINAPI SetFileAttributesA_MWAI(INT_PTR* args){
    return (INT_PTR)SetFileAttributesA((LPCSTR)*(args + 0), (DWORD)*(args + 1));
}
INT_PTR WINAPI SetFileAttributesW_MWAI(INT_PTR* args){
    return (INT_PTR)SetFileAttributesW((LPCWSTR)*(args + 0), (DWORD)*(args + 1));
}
INT_PTR WINAPI SetFileInformationByHandle_MWAI(INT_PTR* args){
    return (INT_PTR)SetFileInformationByHandle((HANDLE)*(args + 0), (FILE_INFO_BY_HANDLE_CLASS)*(args + 1), (LPVOID)*(args + 2), (DWORD)*(args + 3));
}
INT_PTR WINAPI SetFilePointer_MWAI(INT_PTR* args){
    return (INT_PTR)SetFilePointer((HANDLE)*(args + 0), (LONG)*(args + 1), (PLONG)*(args + 2), (DWORD)*(args + 3));
}
INT_PTR WINAPI SetFileTime_MWAI(INT_PTR* args){
    return (INT_PTR)SetFileTime((HANDLE)*(args + 0), (const FILETIME*)*(args + 1), (const FILETIME*)*(args + 2), (const FILETIME*)*(args + 3));
}
INT_PTR WINAPI SetFileValidData_MWAI(INT_PTR* args){
    return (INT_PTR)SetFileValidData((HANDLE)*(args + 0), (LONGLONG)*(args + 1));
}
INT_PTR WINAPI UnlockFile_MWAI(INT_PTR* args){
    return (INT_PTR)UnlockFile((HANDLE)*(args + 0), (DWORD)*(args + 1), (DWORD)*(args + 2), (DWORD)*(args + 3), (DWORD)*(args + 4));
}
INT_PTR WINAPI UnlockFileEx_MWAI(INT_PTR* args){
    return (INT_PTR)UnlockFileEx((HANDLE)*(args + 0), (DWORD)*(args + 1), (DWORD)*(args + 2), (DWORD)*(args + 3), (LPOVERLAPPED)*(args + 4));
}
INT_PTR WINAPI WriteFile_MWAI(INT_PTR* args){
    return (INT_PTR)WriteFile((HANDLE)*(args + 0), (LPCVOID)*(args + 1), (DWORD)*(args + 2), (LPDWORD)*(args + 3), (LPOVERLAPPED)*(args + 4));
}
INT_PTR WINAPI WriteFileEx_MWAI(INT_PTR* args){
    return (INT_PTR)WriteFileEx((HANDLE)*(args + 0), (LPCVOID)*(args + 1), (DWORD)*(args + 2), (LPOVERLAPPED)*(args + 3), (LPOVERLAPPED_COMPLETION_ROUTINE)*(args + 4));
}
INT_PTR WINAPI WriteFileGather_MWAI(INT_PTR* args){
    return (INT_PTR)WriteFileGather((HANDLE)*(args + 0), (FILE_SEGMENT_ELEMENT*)*(args + 1), (DWORD)*(args + 2), (LPDWORD)*(args + 3), (LPOVERLAPPED)*(args + 4));
}
INT_PTR WINAPI GetTempPathW_MWAI(INT_PTR* args){
    return (INT_PTR)GetTempPathW((DWORD)*(args + 0), (LPWSTR)*(args + 1));
}
INT_PTR WINAPI GetVolumeNameForVolumeMountPointW_MWAI(INT_PTR* args){
    return (INT_PTR)GetVolumeNameForVolumeMountPointW((LPCWSTR)*(args + 0), (LPWSTR)*(args + 1), (DWORD)*(args + 2));
}
INT_PTR WINAPI GetVolumePathNamesForVolumeNameW_MWAI(INT_PTR* args){
    return (INT_PTR)GetVolumePathNamesForVolumeNameW((LPCWSTR)*(args + 0), (LPWCH)*(args + 1), (DWORD)*(args + 2), (PDWORD)*(args + 3));
}
INT_PTR WINAPI CreateFile2_MWAI(INT_PTR* args){
    return (INT_PTR)CreateFile2((LPCWSTR)*(args + 0), (DWORD)*(args + 1), (DWORD)*(args + 2), (DWORD)*(args + 3), (LPCREATEFILE2_EXTENDED_PARAMETERS)*(args + 4));
}
INT_PTR WINAPI SetFileIoOverlappedRange_MWAI(INT_PTR* args){
    return (INT_PTR)SetFileIoOverlappedRange((HANDLE)*(args + 0), (PUCHAR)*(args + 1), (ULONG)*(args + 2));
}
INT_PTR WINAPI GetCompressedFileSizeA_MWAI(INT_PTR* args){
    return (INT_PTR)GetCompressedFileSizeA((LPCSTR)*(args + 0), (LPDWORD)*(args + 1));
}
INT_PTR WINAPI GetCompressedFileSizeW_MWAI(INT_PTR* args){
    return (INT_PTR)GetCompressedFileSizeW((LPCWSTR)*(args + 0), (LPDWORD)*(args + 1));
}
INT_PTR WINAPI FindFirstStreamW_MWAI(INT_PTR* args){
    return (INT_PTR)FindFirstStreamW((LPCWSTR)*(args + 0), (STREAM_INFO_LEVELS)*(args + 1), (LPVOID)*(args + 2), (DWORD)*(args + 3));
}
INT_PTR WINAPI FindNextStreamW_MWAI(INT_PTR* args){
    return (INT_PTR)FindNextStreamW((HANDLE)*(args + 0), (LPVOID)*(args + 1));
}
INT_PTR WINAPI AreFileApisANSI_MWAI(INT_PTR* args){
    return (INT_PTR)AreFileApisANSI();
}
INT_PTR WINAPI GetTempPathA_MWAI(INT_PTR* args){
    return (INT_PTR)GetTempPathA((DWORD)*(args + 0), (LPSTR)*(args + 1));
}
INT_PTR WINAPI FindFirstFileNameW_MWAI(INT_PTR* args){
    return (INT_PTR)FindFirstFileNameW((LPCWSTR)*(args + 0), (DWORD)*(args + 1), (LPDWORD)*(args + 2), (PWSTR)*(args + 3));
}
INT_PTR WINAPI FindNextFileNameW_MWAI(INT_PTR* args){
    return (INT_PTR)FindNextFileNameW((HANDLE)*(args + 0), (LPDWORD)*(args + 1), (PWSTR)*(args + 2));
}
INT_PTR WINAPI GetVolumeInformationA_MWAI(INT_PTR* args){
    return (INT_PTR)GetVolumeInformationA((LPCSTR)*(args + 0), (LPSTR)*(args + 1), (DWORD)*(args + 2), (LPDWORD)*(args + 3), (LPDWORD)*(args + 4), (LPDWORD)*(args + 5), (LPSTR)*(args + 6), (DWORD)*(args + 7));
}
INT_PTR WINAPI GetTempFileNameA_MWAI(INT_PTR* args){
    return (INT_PTR)GetTempFileNameA((LPCSTR)*(args + 0), (LPCSTR)*(args + 1), (UINT)*(args + 2), (LPSTR)*(args + 3));
}
INT_PTR WINAPI SetFileApisToOEM_MWAI(INT_PTR* args){
    SetFileApisToOEM();
    return 0;
}
INT_PTR WINAPI SetFileApisToANSI_MWAI(INT_PTR* args){
    SetFileApisToANSI();
    return 0;
}
INT_PTR WINAPI GetTempPath2W_MWAI(INT_PTR* args){
    return (INT_PTR)GetTempPath2W((DWORD)*(args + 0), (LPWSTR)*(args + 1));
}
INT_PTR WINAPI GetTempPath2A_MWAI(INT_PTR* args){
    return (INT_PTR)GetTempPath2A((DWORD)*(args + 0), (LPSTR)*(args + 1));
}
INT_PTR WINAPI CreateFile3_MWAI(INT_PTR* args){
    return (INT_PTR)CreateFile3((LPCWSTR)*(args + 0), (DWORD)*(args + 1), (DWORD)*(args + 2), (DWORD)*(args + 3), (LPCREATEFILE3_EXTENDED_PARAMETERS)*(args + 4));
}
INT_PTR WINAPI DeleteFile2A_MWAI(INT_PTR* args){
    return (INT_PTR)DeleteFile2A((LPCSTR)*(args + 0), (DWORD)*(args + 1));
}
INT_PTR WINAPI DeleteFile2W_MWAI(INT_PTR* args){
    return (INT_PTR)DeleteFile2W((LPCWSTR)*(args + 0), (DWORD)*(args + 1));
}
INT_PTR WINAPI IsDebuggerPresent_MWAI(INT_PTR* args){
    return (INT_PTR)IsDebuggerPresent();
}
INT_PTR WINAPI DebugBreak_MWAI(INT_PTR* args){
    DebugBreak();
    return 0;
}
INT_PTR WINAPI OutputDebugStringA_MWAI(INT_PTR* args){
    OutputDebugStringA((LPCSTR)*(args + 0));
    return 0;
}
INT_PTR WINAPI OutputDebugStringW_MWAI(INT_PTR* args){
    OutputDebugStringW((LPCWSTR)*(args + 0));
    return 0;
}
INT_PTR WINAPI ContinueDebugEvent_MWAI(INT_PTR* args){
    return (INT_PTR)ContinueDebugEvent((DWORD)*(args + 0), (DWORD)*(args + 1), (DWORD)*(args + 2));
}
INT_PTR WINAPI WaitForDebugEvent_MWAI(INT_PTR* args){
    return (INT_PTR)WaitForDebugEvent((LPDEBUG_EVENT)*(args + 0), (DWORD)*(args + 1));
}
INT_PTR WINAPI DebugActiveProcess_MWAI(INT_PTR* args){
    return (INT_PTR)DebugActiveProcess((DWORD)*(args + 0));
}
INT_PTR WINAPI DebugActiveProcessStop_MWAI(INT_PTR* args){
    return (INT_PTR)DebugActiveProcessStop((DWORD)*(args + 0));
}
INT_PTR WINAPI CheckRemoteDebuggerPresent_MWAI(INT_PTR* args){
    return (INT_PTR)CheckRemoteDebuggerPresent((HANDLE)*(args + 0), (PBOOL)*(args + 1));
}
INT_PTR WINAPI WaitForDebugEventEx_MWAI(INT_PTR* args){
    return (INT_PTR)WaitForDebugEventEx((LPDEBUG_EVENT)*(args + 0), (DWORD)*(args + 1));
}
INT_PTR WINAPI EncodePointer_MWAI(INT_PTR* args){
    return (INT_PTR)EncodePointer((PVOID)*(args + 0));
}
INT_PTR WINAPI DecodePointer_MWAI(INT_PTR* args){
    return (INT_PTR)DecodePointer((PVOID)*(args + 0));
}
INT_PTR WINAPI EncodeSystemPointer_MWAI(INT_PTR* args){
    return (INT_PTR)EncodeSystemPointer((PVOID)*(args + 0));
}
INT_PTR WINAPI DecodeSystemPointer_MWAI(INT_PTR* args){
    return (INT_PTR)DecodeSystemPointer((PVOID)*(args + 0));
}
INT_PTR WINAPI Beep_MWAI(INT_PTR* args){
    return (INT_PTR)Beep((DWORD)*(args + 0), (DWORD)*(args + 1));
}
INT_PTR WINAPI CloseHandle_MWAI(INT_PTR* args){
    return (INT_PTR)CloseHandle((HANDLE)*(args + 0));
}
INT_PTR WINAPI DuplicateHandle_MWAI(INT_PTR* args){
    return (INT_PTR)DuplicateHandle((HANDLE)*(args + 0), (HANDLE)*(args + 1), (HANDLE)*(args + 2), (LPHANDLE)*(args + 3), (DWORD)*(args + 4), (BOOL)*(args + 5), (DWORD)*(args + 6));
}
INT_PTR WINAPI GetHandleInformation_MWAI(INT_PTR* args){
    return (INT_PTR)GetHandleInformation((HANDLE)*(args + 0), (LPDWORD)*(args + 1));
}
INT_PTR WINAPI SetHandleInformation_MWAI(INT_PTR* args){
    return (INT_PTR)SetHandleInformation((HANDLE)*(args + 0), (DWORD)*(args + 1), (DWORD)*(args + 2));
}
INT_PTR WINAPI RaiseException_MWAI(INT_PTR* args){
    RaiseException((DWORD)*(args + 0), (DWORD)*(args + 1), (DWORD)*(args + 2), (const ULONG_PTR*)*(args + 3));
    return 0;
}
INT_PTR WINAPI UnhandledExceptionFilter_MWAI(INT_PTR* args){
    return (INT_PTR)UnhandledExceptionFilter((struct _EXCEPTION_POINTERS*)*(args + 0));
}
INT_PTR WINAPI SetUnhandledExceptionFilter_MWAI(INT_PTR* args){
    return (INT_PTR)SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)*(args + 0));
}
INT_PTR WINAPI GetLastError_MWAI(INT_PTR* args){
    return (INT_PTR)GetLastError();
}
INT_PTR WINAPI SetLastError_MWAI(INT_PTR* args){
    SetLastError((DWORD)*(args + 0));
    return 0;
}
INT_PTR WINAPI GetErrorMode_MWAI(INT_PTR* args){
    return (INT_PTR)GetErrorMode();
}
INT_PTR WINAPI SetErrorMode_MWAI(INT_PTR* args){
    return (INT_PTR)SetErrorMode((UINT)*(args + 0));
}
INT_PTR WINAPI AddVectoredExceptionHandler_MWAI(INT_PTR* args){
    return (INT_PTR)AddVectoredExceptionHandler((ULONG)*(args + 0), (PVECTORED_EXCEPTION_HANDLER)*(args + 1));
}
INT_PTR WINAPI RemoveVectoredExceptionHandler_MWAI(INT_PTR* args){
    return (INT_PTR)RemoveVectoredExceptionHandler((PVOID)*(args + 0));
}
INT_PTR WINAPI AddVectoredContinueHandler_MWAI(INT_PTR* args){
    return (INT_PTR)AddVectoredContinueHandler((ULONG)*(args + 0), (PVECTORED_EXCEPTION_HANDLER)*(args + 1));
}
INT_PTR WINAPI RemoveVectoredContinueHandler_MWAI(INT_PTR* args){
    return (INT_PTR)RemoveVectoredContinueHandler((PVOID)*(args + 0));
}
INT_PTR WINAPI FatalAppExitA_MWAI(INT_PTR* args){
    FatalAppExitA((UINT)*(args + 0), (LPCSTR)*(args + 1));
    return 0;
}
INT_PTR WINAPI FatalAppExitW_MWAI(INT_PTR* args){
    FatalAppExitW((UINT)*(args + 0), (LPCWSTR)*(args + 1));
    return 0;
}
INT_PTR WINAPI GetThreadErrorMode_MWAI(INT_PTR* args){
    return (INT_PTR)GetThreadErrorMode();
}
INT_PTR WINAPI SetThreadErrorMode_MWAI(INT_PTR* args){
    return (INT_PTR)SetThreadErrorMode((DWORD)*(args + 0), (LPDWORD)*(args + 1));
}
INT_PTR WINAPI FlsAlloc_MWAI(INT_PTR* args){
    return (INT_PTR)FlsAlloc((PFLS_CALLBACK_FUNCTION)*(args + 0));
}
INT_PTR WINAPI FlsGetValue_MWAI(INT_PTR* args){
    return (INT_PTR)FlsGetValue((DWORD)*(args + 0));
}
INT_PTR WINAPI FlsSetValue_MWAI(INT_PTR* args){
    return (INT_PTR)FlsSetValue((DWORD)*(args + 0), (PVOID)*(args + 1));
}
INT_PTR WINAPI FlsFree_MWAI(INT_PTR* args){
    return (INT_PTR)FlsFree((DWORD)*(args + 0));
}
INT_PTR WINAPI IsThreadAFiber_MWAI(INT_PTR* args){
    return (INT_PTR)IsThreadAFiber();
}
INT_PTR WINAPI FlsGetValue2_MWAI(INT_PTR* args){
    return (INT_PTR)FlsGetValue2((DWORD)*(args + 0));
}
INT_PTR WINAPI CreatePipe_MWAI(INT_PTR* args){
    return (INT_PTR)CreatePipe((PHANDLE)*(args + 0), (PHANDLE)*(args + 1), (LPSECURITY_ATTRIBUTES)*(args + 2), (DWORD)*(args + 3));
}
INT_PTR WINAPI ConnectNamedPipe_MWAI(INT_PTR* args){
    return (INT_PTR)ConnectNamedPipe((HANDLE)*(args + 0), (LPOVERLAPPED)*(args + 1));
}
INT_PTR WINAPI DisconnectNamedPipe_MWAI(INT_PTR* args){
    return (INT_PTR)DisconnectNamedPipe((HANDLE)*(args + 0));
}
INT_PTR WINAPI SetNamedPipeHandleState_MWAI(INT_PTR* args){
    return (INT_PTR)SetNamedPipeHandleState((HANDLE)*(args + 0), (LPDWORD)*(args + 1), (LPDWORD)*(args + 2), (LPDWORD)*(args + 3));
}
INT_PTR WINAPI PeekNamedPipe_MWAI(INT_PTR* args){
    return (INT_PTR)PeekNamedPipe((HANDLE)*(args + 0), (LPVOID)*(args + 1), (DWORD)*(args + 2), (LPDWORD)*(args + 3), (LPDWORD)*(args + 4), (LPDWORD)*(args + 5));
}
INT_PTR WINAPI TransactNamedPipe_MWAI(INT_PTR* args){
    return (INT_PTR)TransactNamedPipe((HANDLE)*(args + 0), (LPVOID)*(args + 1), (DWORD)*(args + 2), (LPVOID)*(args + 3), (DWORD)*(args + 4), (LPDWORD)*(args + 5), (LPOVERLAPPED)*(args + 6));
}
INT_PTR WINAPI CreateNamedPipeW_MWAI(INT_PTR* args){
    return (INT_PTR)CreateNamedPipeW((LPCWSTR)*(args + 0), (DWORD)*(args + 1), (DWORD)*(args + 2), (DWORD)*(args + 3), (DWORD)*(args + 4), (DWORD)*(args + 5), (DWORD)*(args + 6), (LPSECURITY_ATTRIBUTES)*(args + 7));
}
INT_PTR WINAPI WaitNamedPipeW_MWAI(INT_PTR* args){
    return (INT_PTR)WaitNamedPipeW((LPCWSTR)*(args + 0), (DWORD)*(args + 1));
}
INT_PTR WINAPI GetNamedPipeClientComputerNameW_MWAI(INT_PTR* args){
    return (INT_PTR)GetNamedPipeClientComputerNameW((HANDLE)*(args + 0), (LPWSTR)*(args + 1), (ULONG)*(args + 2));
}
INT_PTR WINAPI ImpersonateNamedPipeClient_MWAI(INT_PTR* args){
    return (INT_PTR)ImpersonateNamedPipeClient((HANDLE)*(args + 0));
}
INT_PTR WINAPI GetNamedPipeInfo_MWAI(INT_PTR* args){
    return (INT_PTR)GetNamedPipeInfo((HANDLE)*(args + 0), (LPDWORD)*(args + 1), (LPDWORD)*(args + 2), (LPDWORD)*(args + 3), (LPDWORD)*(args + 4));
}
INT_PTR WINAPI GetNamedPipeHandleStateW_MWAI(INT_PTR* args){
    return (INT_PTR)GetNamedPipeHandleStateW((HANDLE)*(args + 0), (LPDWORD)*(args + 1), (LPDWORD)*(args + 2), (LPDWORD)*(args + 3), (LPDWORD)*(args + 4), (LPWSTR)*(args + 5), (DWORD)*(args + 6));
}
INT_PTR WINAPI CallNamedPipeW_MWAI(INT_PTR* args){
    return (INT_PTR)CallNamedPipeW((LPCWSTR)*(args + 0), (LPVOID)*(args + 1), (DWORD)*(args + 2), (LPVOID)*(args + 3), (DWORD)*(args + 4), (LPDWORD)*(args + 5), (DWORD)*(args + 6));
}
INT_PTR WINAPI QueryPerformanceCounter_MWAI(INT_PTR* args){
    return (INT_PTR)QueryPerformanceCounter((LARGE_INTEGER*)*(args + 0));
}
INT_PTR WINAPI QueryPerformanceFrequency_MWAI(INT_PTR* args){
    return (INT_PTR)QueryPerformanceFrequency((LARGE_INTEGER*)*(args + 0));
}
INT_PTR WINAPI HeapDestroy_MWAI(INT_PTR* args){
    return (INT_PTR)HeapDestroy((HANDLE)*(args + 0));
}
INT_PTR WINAPI HeapFree_MWAI(INT_PTR* args){
    return (INT_PTR)HeapFree((HANDLE)*(args + 0), (DWORD)*(args + 1), (LPVOID)*(args + 2));
}
INT_PTR WINAPI GetProcessHeap_MWAI(INT_PTR* args){
    return (INT_PTR)GetProcessHeap();
}
INT_PTR WINAPI HeapValidate_MWAI(INT_PTR* args){
    return (INT_PTR)HeapValidate((HANDLE)*(args + 0), (DWORD)*(args + 1), (LPCVOID)*(args + 2));
}
INT_PTR WINAPI HeapSummary_MWAI(INT_PTR* args){
    return (INT_PTR)HeapSummary((HANDLE)*(args + 0), (DWORD)*(args + 1), (LPHEAP_SUMMARY)*(args + 2));
}
INT_PTR WINAPI GetProcessHeaps_MWAI(INT_PTR* args){
    return (INT_PTR)GetProcessHeaps((DWORD)*(args + 0), (PHANDLE)*(args + 1));
}
INT_PTR WINAPI HeapLock_MWAI(INT_PTR* args){
    return (INT_PTR)HeapLock((HANDLE)*(args + 0));
}
INT_PTR WINAPI HeapUnlock_MWAI(INT_PTR* args){
    return (INT_PTR)HeapUnlock((HANDLE)*(args + 0));
}
INT_PTR WINAPI HeapWalk_MWAI(INT_PTR* args){
    return (INT_PTR)HeapWalk((HANDLE)*(args + 0), (LPPROCESS_HEAP_ENTRY)*(args + 1));
}
INT_PTR WINAPI CreateIoCompletionPort_MWAI(INT_PTR* args){
    return (INT_PTR)CreateIoCompletionPort((HANDLE)*(args + 0), (HANDLE)*(args + 1), (ULONG_PTR)*(args + 2), (DWORD)*(args + 3));
}
INT_PTR WINAPI GetQueuedCompletionStatus_MWAI(INT_PTR* args){
    return (INT_PTR)GetQueuedCompletionStatus((HANDLE)*(args + 0), (LPDWORD)*(args + 1), (PULONG_PTR)*(args + 2), (LPOVERLAPPED*)*(args + 3), (DWORD)*(args + 4));
}
INT_PTR WINAPI GetQueuedCompletionStatusEx_MWAI(INT_PTR* args){
    return (INT_PTR)GetQueuedCompletionStatusEx((HANDLE)*(args + 0), (LPOVERLAPPED_ENTRY)*(args + 1), (ULONG)*(args + 2), (PULONG)*(args + 3), (DWORD)*(args + 4), (BOOL)*(args + 5));
}
INT_PTR WINAPI PostQueuedCompletionStatus_MWAI(INT_PTR* args){
    return (INT_PTR)PostQueuedCompletionStatus((HANDLE)*(args + 0), (DWORD)*(args + 1), (ULONG_PTR)*(args + 2), (LPOVERLAPPED)*(args + 3));
}
INT_PTR WINAPI DeviceIoControl_MWAI(INT_PTR* args){
    return (INT_PTR)DeviceIoControl((HANDLE)*(args + 0), (DWORD)*(args + 1), (LPVOID)*(args + 2), (DWORD)*(args + 3), (LPVOID)*(args + 4), (DWORD)*(args + 5), (LPDWORD)*(args + 6), (LPOVERLAPPED)*(args + 7));
}
INT_PTR WINAPI GetOverlappedResult_MWAI(INT_PTR* args){
    return (INT_PTR)GetOverlappedResult((HANDLE)*(args + 0), (LPOVERLAPPED)*(args + 1), (LPDWORD)*(args + 2), (BOOL)*(args + 3));
}
INT_PTR WINAPI CancelIoEx_MWAI(INT_PTR* args){
    return (INT_PTR)CancelIoEx((HANDLE)*(args + 0), (LPOVERLAPPED)*(args + 1));
}
INT_PTR WINAPI CancelIo_MWAI(INT_PTR* args){
    return (INT_PTR)CancelIo((HANDLE)*(args + 0));
}
INT_PTR WINAPI GetOverlappedResultEx_MWAI(INT_PTR* args){
    return (INT_PTR)GetOverlappedResultEx((HANDLE)*(args + 0), (LPOVERLAPPED)*(args + 1), (LPDWORD)*(args + 2), (DWORD)*(args + 3), (BOOL)*(args + 4));
}
INT_PTR WINAPI CancelSynchronousIo_MWAI(INT_PTR* args){
    return (INT_PTR)CancelSynchronousIo((HANDLE)*(args + 0));
}
INT_PTR WINAPI InitializeSRWLock_MWAI(INT_PTR* args){
    InitializeSRWLock((PSRWLOCK)*(args + 0));
    return 0;
}
INT_PTR WINAPI ReleaseSRWLockExclusive_MWAI(INT_PTR* args){
    ReleaseSRWLockExclusive((PSRWLOCK)*(args + 0));
    return 0;
}
INT_PTR WINAPI ReleaseSRWLockShared_MWAI(INT_PTR* args){
    ReleaseSRWLockShared((PSRWLOCK)*(args + 0));
    return 0;
}
INT_PTR WINAPI AcquireSRWLockExclusive_MWAI(INT_PTR* args){
    AcquireSRWLockExclusive((PSRWLOCK)*(args + 0));
    return 0;
}
INT_PTR WINAPI AcquireSRWLockShared_MWAI(INT_PTR* args){
    AcquireSRWLockShared((PSRWLOCK)*(args + 0));
    return 0;
}
INT_PTR WINAPI TryAcquireSRWLockExclusive_MWAI(INT_PTR* args){
    return (INT_PTR)TryAcquireSRWLockExclusive((PSRWLOCK)*(args + 0));
}
INT_PTR WINAPI TryAcquireSRWLockShared_MWAI(INT_PTR* args){
    return (INT_PTR)TryAcquireSRWLockShared((PSRWLOCK)*(args + 0));
}
INT_PTR WINAPI InitializeCriticalSection_MWAI(INT_PTR* args){
    InitializeCriticalSection((LPCRITICAL_SECTION)*(args + 0));
    return 0;
}
INT_PTR WINAPI EnterCriticalSection_MWAI(INT_PTR* args){
    EnterCriticalSection((LPCRITICAL_SECTION)*(args + 0));
    return 0;
}
INT_PTR WINAPI LeaveCriticalSection_MWAI(INT_PTR* args){
    LeaveCriticalSection((LPCRITICAL_SECTION)*(args + 0));
    return 0;
}
INT_PTR WINAPI InitializeCriticalSectionAndSpinCount_MWAI(INT_PTR* args){
    return (INT_PTR)InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)*(args + 0), (DWORD)*(args + 1));
}
INT_PTR WINAPI InitializeCriticalSectionEx_MWAI(INT_PTR* args){
    return (INT_PTR)InitializeCriticalSectionEx((LPCRITICAL_SECTION)*(args + 0), (DWORD)*(args + 1), (DWORD)*(args + 2));
}
INT_PTR WINAPI SetCriticalSectionSpinCount_MWAI(INT_PTR* args){
    return (INT_PTR)SetCriticalSectionSpinCount((LPCRITICAL_SECTION)*(args + 0), (DWORD)*(args + 1));
}
INT_PTR WINAPI TryEnterCriticalSection_MWAI(INT_PTR* args){
    return (INT_PTR)TryEnterCriticalSection((LPCRITICAL_SECTION)*(args + 0));
}
INT_PTR WINAPI DeleteCriticalSection_MWAI(INT_PTR* args){
    DeleteCriticalSection((LPCRITICAL_SECTION)*(args + 0));
    return 0;
}
INT_PTR WINAPI InitOnceInitialize_MWAI(INT_PTR* args){
    InitOnceInitialize((PINIT_ONCE)*(args + 0));
    return 0;
}
INT_PTR WINAPI InitOnceExecuteOnce_MWAI(INT_PTR* args){
    return (INT_PTR)InitOnceExecuteOnce((PINIT_ONCE)*(args + 0), (PINIT_ONCE_FN)*(args + 1), (PVOID)*(args + 2), (LPVOID*)*(args + 3));
}
INT_PTR WINAPI InitOnceBeginInitialize_MWAI(INT_PTR* args){
    return (INT_PTR)InitOnceBeginInitialize((LPINIT_ONCE)*(args + 0), (DWORD)*(args + 1), (PBOOL)*(args + 2), (LPVOID*)*(args + 3));
}
INT_PTR WINAPI InitOnceComplete_MWAI(INT_PTR* args){
    return (INT_PTR)InitOnceComplete((LPINIT_ONCE)*(args + 0), (DWORD)*(args + 1), (LPVOID)*(args + 2));
}
INT_PTR WINAPI InitializeConditionVariable_MWAI(INT_PTR* args){
    InitializeConditionVariable((PCONDITION_VARIABLE)*(args + 0));
    return 0;
}
INT_PTR WINAPI WakeConditionVariable_MWAI(INT_PTR* args){
    WakeConditionVariable((PCONDITION_VARIABLE)*(args + 0));
    return 0;
}
INT_PTR WINAPI WakeAllConditionVariable_MWAI(INT_PTR* args){
    WakeAllConditionVariable((PCONDITION_VARIABLE)*(args + 0));
    return 0;
}
INT_PTR WINAPI SleepConditionVariableCS_MWAI(INT_PTR* args){
    return (INT_PTR)SleepConditionVariableCS((PCONDITION_VARIABLE)*(args + 0), (PCRITICAL_SECTION)*(args + 1), (DWORD)*(args + 2));
}
INT_PTR WINAPI SleepConditionVariableSRW_MWAI(INT_PTR* args){
    return (INT_PTR)SleepConditionVariableSRW((PCONDITION_VARIABLE)*(args + 0), (PSRWLOCK)*(args + 1), (DWORD)*(args + 2), (ULONG)*(args + 3));
}
INT_PTR WINAPI SetEvent_MWAI(INT_PTR* args){
    return (INT_PTR)SetEvent((HANDLE)*(args + 0));
}
INT_PTR WINAPI ResetEvent_MWAI(INT_PTR* args){
    return (INT_PTR)ResetEvent((HANDLE)*(args + 0));
}
INT_PTR WINAPI ReleaseSemaphore_MWAI(INT_PTR* args){
    return (INT_PTR)ReleaseSemaphore((HANDLE)*(args + 0), (LONG)*(args + 1), (LPLONG)*(args + 2));
}
INT_PTR WINAPI ReleaseMutex_MWAI(INT_PTR* args){
    return (INT_PTR)ReleaseMutex((HANDLE)*(args + 0));
}
INT_PTR WINAPI WaitForSingleObject_MWAI(INT_PTR* args){
    return (INT_PTR)WaitForSingleObject((HANDLE)*(args + 0), (DWORD)*(args + 1));
}
INT_PTR WINAPI SleepEx_MWAI(INT_PTR* args){
    return (INT_PTR)SleepEx((DWORD)*(args + 0), (BOOL)*(args + 1));
}
INT_PTR WINAPI WaitForSingleObjectEx_MWAI(INT_PTR* args){
    return (INT_PTR)WaitForSingleObjectEx((HANDLE)*(args + 0), (DWORD)*(args + 1), (BOOL)*(args + 2));
}
INT_PTR WINAPI WaitForMultipleObjectsEx_MWAI(INT_PTR* args){
    return (INT_PTR)WaitForMultipleObjectsEx((DWORD)*(args + 0), (const HANDLE*)*(args + 1), (BOOL)*(args + 2), (DWORD)*(args + 3), (BOOL)*(args + 4));
}
INT_PTR WINAPI CreateMutexA_MWAI(INT_PTR* args){
    return (INT_PTR)CreateMutexA((LPSECURITY_ATTRIBUTES)*(args + 0), (BOOL)*(args + 1), (LPCSTR)*(args + 2));
}
INT_PTR WINAPI CreateMutexW_MWAI(INT_PTR* args){
    return (INT_PTR)CreateMutexW((LPSECURITY_ATTRIBUTES)*(args + 0), (BOOL)*(args + 1), (LPCWSTR)*(args + 2));
}
INT_PTR WINAPI OpenMutexW_MWAI(INT_PTR* args){
    return (INT_PTR)OpenMutexW((DWORD)*(args + 0), (BOOL)*(args + 1), (LPCWSTR)*(args + 2));
}
INT_PTR WINAPI CreateEventA_MWAI(INT_PTR* args){
    return (INT_PTR)CreateEventA((LPSECURITY_ATTRIBUTES)*(args + 0), (BOOL)*(args + 1), (BOOL)*(args + 2), (LPCSTR)*(args + 3));
}
INT_PTR WINAPI CreateEventW_MWAI(INT_PTR* args){
    return (INT_PTR)CreateEventW((LPSECURITY_ATTRIBUTES)*(args + 0), (BOOL)*(args + 1), (BOOL)*(args + 2), (LPCWSTR)*(args + 3));
}
INT_PTR WINAPI OpenEventA_MWAI(INT_PTR* args){
    return (INT_PTR)OpenEventA((DWORD)*(args + 0), (BOOL)*(args + 1), (LPCSTR)*(args + 2));
}
INT_PTR WINAPI OpenEventW_MWAI(INT_PTR* args){
    return (INT_PTR)OpenEventW((DWORD)*(args + 0), (BOOL)*(args + 1), (LPCWSTR)*(args + 2));
}
INT_PTR WINAPI OpenSemaphoreW_MWAI(INT_PTR* args){
    return (INT_PTR)OpenSemaphoreW((DWORD)*(args + 0), (BOOL)*(args + 1), (LPCWSTR)*(args + 2));
}
INT_PTR WINAPI OpenWaitableTimerW_MWAI(INT_PTR* args){
    return (INT_PTR)OpenWaitableTimerW((DWORD)*(args + 0), (BOOL)*(args + 1), (LPCWSTR)*(args + 2));
}
INT_PTR WINAPI SetWaitableTimer_MWAI(INT_PTR* args){
    return (INT_PTR)SetWaitableTimer((HANDLE)*(args + 0), (const LARGE_INTEGER*)*(args + 1), (LONG)*(args + 2), (PTIMERAPCROUTINE)*(args + 3), (LPVOID)*(args + 4), (BOOL)*(args + 5));
}
INT_PTR WINAPI CancelWaitableTimer_MWAI(INT_PTR* args){
    return (INT_PTR)CancelWaitableTimer((HANDLE)*(args + 0));
}
INT_PTR WINAPI CreateMutexExA_MWAI(INT_PTR* args){
    return (INT_PTR)CreateMutexExA((LPSECURITY_ATTRIBUTES)*(args + 0), (LPCSTR)*(args + 1), (DWORD)*(args + 2), (DWORD)*(args + 3));
}
INT_PTR WINAPI CreateMutexExW_MWAI(INT_PTR* args){
    return (INT_PTR)CreateMutexExW((LPSECURITY_ATTRIBUTES)*(args + 0), (LPCWSTR)*(args + 1), (DWORD)*(args + 2), (DWORD)*(args + 3));
}
INT_PTR WINAPI CreateEventExA_MWAI(INT_PTR* args){
    return (INT_PTR)CreateEventExA((LPSECURITY_ATTRIBUTES)*(args + 0), (LPCSTR)*(args + 1), (DWORD)*(args + 2), (DWORD)*(args + 3));
}
INT_PTR WINAPI CreateEventExW_MWAI(INT_PTR* args){
    return (INT_PTR)CreateEventExW((LPSECURITY_ATTRIBUTES)*(args + 0), (LPCWSTR)*(args + 1), (DWORD)*(args + 2), (DWORD)*(args + 3));
}
INT_PTR WINAPI CreateSemaphoreExW_MWAI(INT_PTR* args){
    return (INT_PTR)CreateSemaphoreExW((LPSECURITY_ATTRIBUTES)*(args + 0), (LONG)*(args + 1), (LONG)*(args + 2), (LPCWSTR)*(args + 3), (DWORD)*(args + 4), (DWORD)*(args + 5));
}
INT_PTR WINAPI CreateWaitableTimerExW_MWAI(INT_PTR* args){
    return (INT_PTR)CreateWaitableTimerExW((LPSECURITY_ATTRIBUTES)*(args + 0), (LPCWSTR)*(args + 1), (DWORD)*(args + 2), (DWORD)*(args + 3));
}
INT_PTR WINAPI EnterSynchronizationBarrier_MWAI(INT_PTR* args){
    return (INT_PTR)EnterSynchronizationBarrier((LPSYNCHRONIZATION_BARRIER)*(args + 0), (DWORD)*(args + 1));
}
INT_PTR WINAPI InitializeSynchronizationBarrier_MWAI(INT_PTR* args){
    return (INT_PTR)InitializeSynchronizationBarrier((LPSYNCHRONIZATION_BARRIER)*(args + 0), (LONG)*(args + 1), (LONG)*(args + 2));
}
INT_PTR WINAPI DeleteSynchronizationBarrier_MWAI(INT_PTR* args){
    return (INT_PTR)DeleteSynchronizationBarrier((LPSYNCHRONIZATION_BARRIER)*(args + 0));
}
INT_PTR WINAPI Sleep_MWAI(INT_PTR* args){
    Sleep((DWORD)*(args + 0));
    return 0;
}
INT_PTR WINAPI SignalObjectAndWait_MWAI(INT_PTR* args){
    return (INT_PTR)SignalObjectAndWait((HANDLE)*(args + 0), (HANDLE)*(args + 1), (DWORD)*(args + 2), (BOOL)*(args + 3));
}
INT_PTR WINAPI WaitForMultipleObjects_MWAI(INT_PTR* args){
    return (INT_PTR)WaitForMultipleObjects((DWORD)*(args + 0), (const HANDLE*)*(args + 1), (BOOL)*(args + 2), (DWORD)*(args + 3));
}
INT_PTR WINAPI CreateSemaphoreW_MWAI(INT_PTR* args){
    return (INT_PTR)CreateSemaphoreW((LPSECURITY_ATTRIBUTES)*(args + 0), (LONG)*(args + 1), (LONG)*(args + 2), (LPCWSTR)*(args + 3));
}
INT_PTR WINAPI CreateWaitableTimerW_MWAI(INT_PTR* args){
    return (INT_PTR)CreateWaitableTimerW((LPSECURITY_ATTRIBUTES)*(args + 0), (BOOL)*(args + 1), (LPCWSTR)*(args + 2));
}
INT_PTR WINAPI QueueUserAPC_MWAI(INT_PTR* args){
    return (INT_PTR)QueueUserAPC((PAPCFUNC)*(args + 0), (HANDLE)*(args + 1), (ULONG_PTR)*(args + 2));
}
INT_PTR WINAPI QueueUserAPC2_MWAI(INT_PTR* args){
    return (INT_PTR)QueueUserAPC2((PAPCFUNC)*(args + 0), (HANDLE)*(args + 1), (ULONG_PTR)*(args + 2), (QUEUE_USER_APC_FLAGS)*(args + 3));
}
INT_PTR WINAPI GetCurrentProcess_MWAI(INT_PTR* args){
    return (INT_PTR)GetCurrentProcess();
}
INT_PTR WINAPI GetCurrentProcessId_MWAI(INT_PTR* args){
    return (INT_PTR)GetCurrentProcessId();
}
INT_PTR WINAPI ExitProcess_MWAI(INT_PTR* args){
    ExitProcess((UINT)*(args + 0));
    return 0;
}
INT_PTR WINAPI TerminateProcess_MWAI(INT_PTR* args){
    return (INT_PTR)TerminateProcess((HANDLE)*(args + 0), (UINT)*(args + 1));
}
INT_PTR WINAPI GetExitCodeProcess_MWAI(INT_PTR* args){
    return (INT_PTR)GetExitCodeProcess((HANDLE)*(args + 0), (LPDWORD)*(args + 1));
}
INT_PTR WINAPI SwitchToThread_MWAI(INT_PTR* args){
    return (INT_PTR)SwitchToThread();
}
INT_PTR WINAPI GetCurrentThread_MWAI(INT_PTR* args){
    return (INT_PTR)GetCurrentThread();
}
INT_PTR WINAPI GetCurrentThreadId_MWAI(INT_PTR* args){
    return (INT_PTR)GetCurrentThreadId();
}
INT_PTR WINAPI OpenThread_MWAI(INT_PTR* args){
    return (INT_PTR)OpenThread((DWORD)*(args + 0), (BOOL)*(args + 1), (DWORD)*(args + 2));
}
INT_PTR WINAPI SetThreadPriority_MWAI(INT_PTR* args){
    return (INT_PTR)SetThreadPriority((HANDLE)*(args + 0), (int)*(args + 1));
}
INT_PTR WINAPI SetThreadPriorityBoost_MWAI(INT_PTR* args){
    return (INT_PTR)SetThreadPriorityBoost((HANDLE)*(args + 0), (BOOL)*(args + 1));
}
INT_PTR WINAPI GetThreadPriorityBoost_MWAI(INT_PTR* args){
    return (INT_PTR)GetThreadPriorityBoost((HANDLE)*(args + 0), (PBOOL)*(args + 1));
}
INT_PTR WINAPI GetThreadPriority_MWAI(INT_PTR* args){
    return (INT_PTR)GetThreadPriority((HANDLE)*(args + 0));
}
INT_PTR WINAPI ExitThread_MWAI(INT_PTR* args){
    ExitThread((DWORD)*(args + 0));
    return 0;
}
INT_PTR WINAPI TerminateThread_MWAI(INT_PTR* args){
    return (INT_PTR)TerminateThread((HANDLE)*(args + 0), (DWORD)*(args + 1));
}
INT_PTR WINAPI GetExitCodeThread_MWAI(INT_PTR* args){
    return (INT_PTR)GetExitCodeThread((HANDLE)*(args + 0), (LPDWORD)*(args + 1));
}
INT_PTR WINAPI SuspendThread_MWAI(INT_PTR* args){
    return (INT_PTR)SuspendThread((HANDLE)*(args + 0));
}
INT_PTR WINAPI ResumeThread_MWAI(INT_PTR* args){
    return (INT_PTR)ResumeThread((HANDLE)*(args + 0));
}
INT_PTR WINAPI TlsAlloc_MWAI(INT_PTR* args){
    return (INT_PTR)TlsAlloc();
}
INT_PTR WINAPI TlsGetValue_MWAI(INT_PTR* args){
    return (INT_PTR)TlsGetValue((DWORD)*(args + 0));
}
INT_PTR WINAPI TlsSetValue_MWAI(INT_PTR* args){
    return (INT_PTR)TlsSetValue((DWORD)*(args + 0), (LPVOID)*(args + 1));
}
INT_PTR WINAPI TlsFree_MWAI(INT_PTR* args){
    return (INT_PTR)TlsFree((DWORD)*(args + 0));
}
INT_PTR WINAPI CreateProcessA_MWAI(INT_PTR* args){
    return (INT_PTR)CreateProcessA((LPCSTR)*(args + 0), (LPSTR)*(args + 1), (LPSECURITY_ATTRIBUTES)*(args + 2), (LPSECURITY_ATTRIBUTES)*(args + 3), (BOOL)*(args + 4), (DWORD)*(args + 5), (LPVOID)*(args + 6), (LPCSTR)*(args + 7), (LPSTARTUPINFOA)*(args + 8), (LPPROCESS_INFORMATION)*(args + 9));
}
INT_PTR WINAPI CreateProcessW_MWAI(INT_PTR* args){
    return (INT_PTR)CreateProcessW((LPCWSTR)*(args + 0), (LPWSTR)*(args + 1), (LPSECURITY_ATTRIBUTES)*(args + 2), (LPSECURITY_ATTRIBUTES)*(args + 3), (BOOL)*(args + 4), (DWORD)*(args + 5), (LPVOID)*(args + 6), (LPCWSTR)*(args + 7), (LPSTARTUPINFOW)*(args + 8), (LPPROCESS_INFORMATION)*(args + 9));
}
INT_PTR WINAPI SetProcessShutdownParameters_MWAI(INT_PTR* args){
    return (INT_PTR)SetProcessShutdownParameters((DWORD)*(args + 0), (DWORD)*(args + 1));
}
INT_PTR WINAPI GetProcessVersion_MWAI(INT_PTR* args){
    return (INT_PTR)GetProcessVersion((DWORD)*(args + 0));
}
INT_PTR WINAPI GetStartupInfoW_MWAI(INT_PTR* args){
    GetStartupInfoW((LPSTARTUPINFOW)*(args + 0));
    return 0;
}
INT_PTR WINAPI CreateProcessAsUserW_MWAI(INT_PTR* args){
    return (INT_PTR)CreateProcessAsUserW((HANDLE)*(args + 0), (LPCWSTR)*(args + 1), (LPWSTR)*(args + 2), (LPSECURITY_ATTRIBUTES)*(args + 3), (LPSECURITY_ATTRIBUTES)*(args + 4), (BOOL)*(args + 5), (DWORD)*(args + 6), (LPVOID)*(args + 7), (LPCWSTR)*(args + 8), (LPSTARTUPINFOW)*(args + 9), (LPPROCESS_INFORMATION)*(args + 10));
}
INT_PTR WINAPI SetThreadToken_MWAI(INT_PTR* args){
    return (INT_PTR)SetThreadToken((PHANDLE)*(args + 0), (HANDLE)*(args + 1));
}
INT_PTR WINAPI OpenProcessToken_MWAI(INT_PTR* args){
    return (INT_PTR)OpenProcessToken((HANDLE)*(args + 0), (DWORD)*(args + 1), (PHANDLE)*(args + 2));
}
INT_PTR WINAPI OpenThreadToken_MWAI(INT_PTR* args){
    return (INT_PTR)OpenThreadToken((HANDLE)*(args + 0), (DWORD)*(args + 1), (BOOL)*(args + 2), (PHANDLE)*(args + 3));
}
INT_PTR WINAPI SetPriorityClass_MWAI(INT_PTR* args){
    return (INT_PTR)SetPriorityClass((HANDLE)*(args + 0), (DWORD)*(args + 1));
}
INT_PTR WINAPI GetPriorityClass_MWAI(INT_PTR* args){
    return (INT_PTR)GetPriorityClass((HANDLE)*(args + 0));
}
INT_PTR WINAPI SetThreadStackGuarantee_MWAI(INT_PTR* args){
    return (INT_PTR)SetThreadStackGuarantee((PULONG)*(args + 0));
}
INT_PTR WINAPI ProcessIdToSessionId_MWAI(INT_PTR* args){
    return (INT_PTR)ProcessIdToSessionId((DWORD)*(args + 0), (DWORD*)*(args + 1));
}
INT_PTR WINAPI GetProcessId_MWAI(INT_PTR* args){
    return (INT_PTR)GetProcessId((HANDLE)*(args + 0));
}
INT_PTR WINAPI GetThreadId_MWAI(INT_PTR* args){
    return (INT_PTR)GetThreadId((HANDLE)*(args + 0));
}
INT_PTR WINAPI FlushProcessWriteBuffers_MWAI(INT_PTR* args){
    FlushProcessWriteBuffers();
    return 0;
}
INT_PTR WINAPI GetProcessIdOfThread_MWAI(INT_PTR* args){
    return (INT_PTR)GetProcessIdOfThread((HANDLE)*(args + 0));
}
INT_PTR WINAPI DeleteProcThreadAttributeList_MWAI(INT_PTR* args){
    DeleteProcThreadAttributeList((LPPROC_THREAD_ATTRIBUTE_LIST)*(args + 0));
    return 0;
}
INT_PTR WINAPI SetProcessDynamicEHContinuationTargets_MWAI(INT_PTR* args){
    return (INT_PTR)SetProcessDynamicEHContinuationTargets((HANDLE)*(args + 0), (USHORT)*(args + 1), (PPROCESS_DYNAMIC_EH_CONTINUATION_TARGET)*(args + 2));
}
INT_PTR WINAPI SetProcessDynamicEnforcedCetCompatibleRanges_MWAI(INT_PTR* args){
    return (INT_PTR)SetProcessDynamicEnforcedCetCompatibleRanges((HANDLE)*(args + 0), (USHORT)*(args + 1), (PPROCESS_DYNAMIC_ENFORCED_ADDRESS_RANGE)*(args + 2));
}
INT_PTR WINAPI SetProcessAffinityUpdateMode_MWAI(INT_PTR* args){
    return (INT_PTR)SetProcessAffinityUpdateMode((HANDLE)*(args + 0), (DWORD)*(args + 1));
}
INT_PTR WINAPI QueryProcessAffinityUpdateMode_MWAI(INT_PTR* args){
    return (INT_PTR)QueryProcessAffinityUpdateMode((HANDLE)*(args + 0), (LPDWORD)*(args + 1));
}
INT_PTR WINAPI GetCurrentThreadStackLimits_MWAI(INT_PTR* args){
    GetCurrentThreadStackLimits((PULONG_PTR)*(args + 0), (PULONG_PTR)*(args + 1));
    return 0;
}
INT_PTR WINAPI SetThreadContext_MWAI(INT_PTR* args){
    return (INT_PTR)SetThreadContext((HANDLE)*(args + 0), (const CONTEXT*)*(args + 1));
}
INT_PTR WINAPI OpenProcess_MWAI(INT_PTR* args){
    return (INT_PTR)OpenProcess((DWORD)*(args + 0), (BOOL)*(args + 1), (DWORD)*(args + 2));
}
INT_PTR WINAPI IsProcessorFeaturePresent_MWAI(INT_PTR* args){
    return (INT_PTR)IsProcessorFeaturePresent((DWORD)*(args + 0));
}
INT_PTR WINAPI GetProcessHandleCount_MWAI(INT_PTR* args){
    return (INT_PTR)GetProcessHandleCount((HANDLE)*(args + 0), (PDWORD)*(args + 1));
}
INT_PTR WINAPI GetCurrentProcessorNumber_MWAI(INT_PTR* args){
    return (INT_PTR)GetCurrentProcessorNumber();
}
INT_PTR WINAPI SetThreadIdealProcessorEx_MWAI(INT_PTR* args){
    return (INT_PTR)SetThreadIdealProcessorEx((HANDLE)*(args + 0), (PPROCESSOR_NUMBER)*(args + 1), (PPROCESSOR_NUMBER)*(args + 2));
}
INT_PTR WINAPI GetThreadIdealProcessorEx_MWAI(INT_PTR* args){
    return (INT_PTR)GetThreadIdealProcessorEx((HANDLE)*(args + 0), (PPROCESSOR_NUMBER)*(args + 1));
}
INT_PTR WINAPI GetCurrentProcessorNumberEx_MWAI(INT_PTR* args){
    GetCurrentProcessorNumberEx((PPROCESSOR_NUMBER)*(args + 0));
    return 0;
}
INT_PTR WINAPI GetProcessPriorityBoost_MWAI(INT_PTR* args){
    return (INT_PTR)GetProcessPriorityBoost((HANDLE)*(args + 0), (PBOOL)*(args + 1));
}
INT_PTR WINAPI SetProcessPriorityBoost_MWAI(INT_PTR* args){
    return (INT_PTR)SetProcessPriorityBoost((HANDLE)*(args + 0), (BOOL)*(args + 1));
}
INT_PTR WINAPI GetThreadIOPendingFlag_MWAI(INT_PTR* args){
    return (INT_PTR)GetThreadIOPendingFlag((HANDLE)*(args + 0), (PBOOL)*(args + 1));
}
INT_PTR WINAPI GetThreadInformation_MWAI(INT_PTR* args){
    return (INT_PTR)GetThreadInformation((HANDLE)*(args + 0), (THREAD_INFORMATION_CLASS)*(args + 1), (LPVOID)*(args + 2), (DWORD)*(args + 3));
}
INT_PTR WINAPI SetThreadInformation_MWAI(INT_PTR* args){
    return (INT_PTR)SetThreadInformation((HANDLE)*(args + 0), (THREAD_INFORMATION_CLASS)*(args + 1), (LPVOID)*(args + 2), (DWORD)*(args + 3));
}
INT_PTR WINAPI IsProcessCritical_MWAI(INT_PTR* args){
    return (INT_PTR)IsProcessCritical((HANDLE)*(args + 0), (PBOOL)*(args + 1));
}
INT_PTR WINAPI SetThreadIdealProcessor_MWAI(INT_PTR* args){
    return (INT_PTR)SetThreadIdealProcessor((HANDLE)*(args + 0), (DWORD)*(args + 1));
}
INT_PTR WINAPI SetProcessInformation_MWAI(INT_PTR* args){
    return (INT_PTR)SetProcessInformation((HANDLE)*(args + 0), (PROCESS_INFORMATION_CLASS)*(args + 1), (LPVOID)*(args + 2), (DWORD)*(args + 3));
}
INT_PTR WINAPI GetProcessInformation_MWAI(INT_PTR* args){
    return (INT_PTR)GetProcessInformation((HANDLE)*(args + 0), (PROCESS_INFORMATION_CLASS)*(args + 1), (LPVOID)*(args + 2), (DWORD)*(args + 3));
}
INT_PTR WINAPI GetSystemCpuSetInformation_MWAI(INT_PTR* args){
    return (INT_PTR)GetSystemCpuSetInformation((PSYSTEM_CPU_SET_INFORMATION)*(args + 0), (ULONG)*(args + 1), (PULONG)*(args + 2), (HANDLE)*(args + 3), (ULONG)*(args + 4));
}
INT_PTR WINAPI GetProcessDefaultCpuSets_MWAI(INT_PTR* args){
    return (INT_PTR)GetProcessDefaultCpuSets((HANDLE)*(args + 0), (PULONG)*(args + 1), (ULONG)*(args + 2), (PULONG)*(args + 3));
}
INT_PTR WINAPI SetProcessDefaultCpuSets_MWAI(INT_PTR* args){
    return (INT_PTR)SetProcessDefaultCpuSets((HANDLE)*(args + 0), (const ULONG*)*(args + 1), (ULONG)*(args + 2));
}
INT_PTR WINAPI GetThreadSelectedCpuSets_MWAI(INT_PTR* args){
    return (INT_PTR)GetThreadSelectedCpuSets((HANDLE)*(args + 0), (PULONG)*(args + 1), (ULONG)*(args + 2), (PULONG)*(args + 3));
}
INT_PTR WINAPI SetThreadSelectedCpuSets_MWAI(INT_PTR* args){
    return (INT_PTR)SetThreadSelectedCpuSets((HANDLE)*(args + 0), (const ULONG*)*(args + 1), (ULONG)*(args + 2));
}
INT_PTR WINAPI CreateProcessAsUserA_MWAI(INT_PTR* args){
    return (INT_PTR)CreateProcessAsUserA((HANDLE)*(args + 0), (LPCSTR)*(args + 1), (LPSTR)*(args + 2), (LPSECURITY_ATTRIBUTES)*(args + 3), (LPSECURITY_ATTRIBUTES)*(args + 4), (BOOL)*(args + 5), (DWORD)*(args + 6), (LPVOID)*(args + 7), (LPCSTR)*(args + 8), (LPSTARTUPINFOA)*(args + 9), (LPPROCESS_INFORMATION)*(args + 10));
}
INT_PTR WINAPI GetProcessShutdownParameters_MWAI(INT_PTR* args){
    return (INT_PTR)GetProcessShutdownParameters((LPDWORD)*(args + 0), (LPDWORD)*(args + 1));
}
INT_PTR WINAPI GetProcessDefaultCpuSetMasks_MWAI(INT_PTR* args){
    return (INT_PTR)GetProcessDefaultCpuSetMasks((HANDLE)*(args + 0), (PGROUP_AFFINITY)*(args + 1), (USHORT)*(args + 2), (PUSHORT)*(args + 3));
}
INT_PTR WINAPI SetProcessDefaultCpuSetMasks_MWAI(INT_PTR* args){
    return (INT_PTR)SetProcessDefaultCpuSetMasks((HANDLE)*(args + 0), (PGROUP_AFFINITY)*(args + 1), (USHORT)*(args + 2));
}
INT_PTR WINAPI GetThreadSelectedCpuSetMasks_MWAI(INT_PTR* args){
    return (INT_PTR)GetThreadSelectedCpuSetMasks((HANDLE)*(args + 0), (PGROUP_AFFINITY)*(args + 1), (USHORT)*(args + 2), (PUSHORT)*(args + 3));
}
INT_PTR WINAPI SetThreadSelectedCpuSetMasks_MWAI(INT_PTR* args){
    return (INT_PTR)SetThreadSelectedCpuSetMasks((HANDLE)*(args + 0), (PGROUP_AFFINITY)*(args + 1), (USHORT)*(args + 2));
}
INT_PTR WINAPI GetMachineTypeAttributes_MWAI(INT_PTR* args){
    return (INT_PTR)GetMachineTypeAttributes((USHORT)*(args + 0), (MACHINE_ATTRIBUTES*)*(args + 1));
}
INT_PTR WINAPI SetThreadDescription_MWAI(INT_PTR* args){
    return (INT_PTR)SetThreadDescription((HANDLE)*(args + 0), (PCWSTR)*(args + 1));
}
INT_PTR WINAPI GetThreadDescription_MWAI(INT_PTR* args){
    return (INT_PTR)GetThreadDescription((HANDLE)*(args + 0), (PWSTR*)*(args + 1));
}
INT_PTR WINAPI TlsGetValue2_MWAI(INT_PTR* args){
    return (INT_PTR)TlsGetValue2((DWORD)*(args + 0));
}
INT_PTR WINAPI GlobalMemoryStatusEx_MWAI(INT_PTR* args){
    return (INT_PTR)GlobalMemoryStatusEx((LPMEMORYSTATUSEX)*(args + 0));
}
INT_PTR WINAPI GetSystemInfo_MWAI(INT_PTR* args){
    GetSystemInfo((LPSYSTEM_INFO)*(args + 0));
    return 0;
}
INT_PTR WINAPI IsUserCetAvailableInEnvironment_MWAI(INT_PTR* args){
    return (INT_PTR)IsUserCetAvailableInEnvironment((DWORD)*(args + 0));
}
INT_PTR WINAPI GetVersion_MWAI(INT_PTR* args){
    return (INT_PTR)GetVersion();
}
INT_PTR WINAPI SetLocalTime_MWAI(INT_PTR* args){
    return (INT_PTR)SetLocalTime((const SYSTEMTIME*)*(args + 0));
}
INT_PTR WINAPI GetTickCount_MWAI(INT_PTR* args){
    return (INT_PTR)GetTickCount();
}
INT_PTR WINAPI GetTickCount64_MWAI(INT_PTR* args){
    return (INT_PTR)GetTickCount64();
}
INT_PTR WINAPI GetSystemTimeAdjustment_MWAI(INT_PTR* args){
    return (INT_PTR)GetSystemTimeAdjustment((PDWORD)*(args + 0), (PDWORD)*(args + 1), (PBOOL)*(args + 2));
}
INT_PTR WINAPI GetSystemDirectoryA_MWAI(INT_PTR* args){
    return (INT_PTR)GetSystemDirectoryA((LPSTR)*(args + 0), (UINT)*(args + 1));
}
INT_PTR WINAPI GetSystemDirectoryW_MWAI(INT_PTR* args){
    return (INT_PTR)GetSystemDirectoryW((LPWSTR)*(args + 0), (UINT)*(args + 1));
}
INT_PTR WINAPI GetWindowsDirectoryA_MWAI(INT_PTR* args){
    return (INT_PTR)GetWindowsDirectoryA((LPSTR)*(args + 0), (UINT)*(args + 1));
}
INT_PTR WINAPI GetWindowsDirectoryW_MWAI(INT_PTR* args){
    return (INT_PTR)GetWindowsDirectoryW((LPWSTR)*(args + 0), (UINT)*(args + 1));
}
INT_PTR WINAPI GetSystemWindowsDirectoryA_MWAI(INT_PTR* args){
    return (INT_PTR)GetSystemWindowsDirectoryA((LPSTR)*(args + 0), (UINT)*(args + 1));
}
INT_PTR WINAPI GetSystemWindowsDirectoryW_MWAI(INT_PTR* args){
    return (INT_PTR)GetSystemWindowsDirectoryW((LPWSTR)*(args + 0), (UINT)*(args + 1));
}
INT_PTR WINAPI GetComputerNameExA_MWAI(INT_PTR* args){
    return (INT_PTR)GetComputerNameExA((COMPUTER_NAME_FORMAT)*(args + 0), (LPSTR)*(args + 1), (LPDWORD)*(args + 2));
}
INT_PTR WINAPI GetComputerNameExW_MWAI(INT_PTR* args){
    return (INT_PTR)GetComputerNameExW((COMPUTER_NAME_FORMAT)*(args + 0), (LPWSTR)*(args + 1), (LPDWORD)*(args + 2));
}
INT_PTR WINAPI SetComputerNameExW_MWAI(INT_PTR* args){
    return (INT_PTR)SetComputerNameExW((COMPUTER_NAME_FORMAT)*(args + 0), (LPCWSTR)*(args + 1));
}
INT_PTR WINAPI SetSystemTime_MWAI(INT_PTR* args){
    return (INT_PTR)SetSystemTime((const SYSTEMTIME*)*(args + 0));
}
INT_PTR WINAPI GetVersionExA_MWAI(INT_PTR* args){
    return (INT_PTR)GetVersionExA((LPOSVERSIONINFOA)*(args + 0));
}
INT_PTR WINAPI GetVersionExW_MWAI(INT_PTR* args){
    return (INT_PTR)GetVersionExW((LPOSVERSIONINFOW)*(args + 0));
}
INT_PTR WINAPI GetLogicalProcessorInformation_MWAI(INT_PTR* args){
    return (INT_PTR)GetLogicalProcessorInformation((PSYSTEM_LOGICAL_PROCESSOR_INFORMATION)*(args + 0), (PDWORD)*(args + 1));
}
INT_PTR WINAPI GetLogicalProcessorInformationEx_MWAI(INT_PTR* args){
    return (INT_PTR)GetLogicalProcessorInformationEx((LOGICAL_PROCESSOR_RELATIONSHIP)*(args + 0), (PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX)*(args + 1), (PDWORD)*(args + 2));
}
INT_PTR WINAPI GetNativeSystemInfo_MWAI(INT_PTR* args){
    GetNativeSystemInfo((LPSYSTEM_INFO)*(args + 0));
    return 0;
}
INT_PTR WINAPI GetProductInfo_MWAI(INT_PTR* args){
    return (INT_PTR)GetProductInfo((DWORD)*(args + 0), (DWORD)*(args + 1), (DWORD)*(args + 2), (DWORD)*(args + 3), (PDWORD)*(args + 4));
}
INT_PTR WINAPI EnumSystemFirmwareTables_MWAI(INT_PTR* args){
    return (INT_PTR)EnumSystemFirmwareTables((DWORD)*(args + 0), (PVOID)*(args + 1), (DWORD)*(args + 2));
}
INT_PTR WINAPI GetSystemFirmwareTable_MWAI(INT_PTR* args){
    return (INT_PTR)GetSystemFirmwareTable((DWORD)*(args + 0), (DWORD)*(args + 1), (PVOID)*(args + 2), (DWORD)*(args + 3));
}
INT_PTR WINAPI DnsHostnameToComputerNameExW_MWAI(INT_PTR* args){
    return (INT_PTR)DnsHostnameToComputerNameExW((LPCWSTR)*(args + 0), (LPWSTR)*(args + 1), (LPDWORD)*(args + 2));
}
INT_PTR WINAPI GetPhysicallyInstalledSystemMemory_MWAI(INT_PTR* args){
    return (INT_PTR)GetPhysicallyInstalledSystemMemory((PULONGLONG)*(args + 0));
}
INT_PTR WINAPI SetComputerNameEx2W_MWAI(INT_PTR* args){
    return (INT_PTR)SetComputerNameEx2W((COMPUTER_NAME_FORMAT)*(args + 0), (DWORD)*(args + 1), (LPCWSTR)*(args + 2));
}
INT_PTR WINAPI SetSystemTimeAdjustment_MWAI(INT_PTR* args){
    return (INT_PTR)SetSystemTimeAdjustment((DWORD)*(args + 0), (BOOL)*(args + 1));
}
INT_PTR WINAPI InstallELAMCertificateInfo_MWAI(INT_PTR* args){
    return (INT_PTR)InstallELAMCertificateInfo((HANDLE)*(args + 0));
}
INT_PTR WINAPI SetComputerNameA_MWAI(INT_PTR* args){
    return (INT_PTR)SetComputerNameA((LPCSTR)*(args + 0));
}
INT_PTR WINAPI SetComputerNameW_MWAI(INT_PTR* args){
    return (INT_PTR)SetComputerNameW((LPCWSTR)*(args + 0));
}
INT_PTR WINAPI SetComputerNameExA_MWAI(INT_PTR* args){
    return (INT_PTR)SetComputerNameExA((COMPUTER_NAME_FORMAT)*(args + 0), (LPCSTR)*(args + 1));
}
INT_PTR WINAPI CreateFileMappingW_MWAI(INT_PTR* args){
    return (INT_PTR)CreateFileMappingW((HANDLE)*(args + 0), (LPSECURITY_ATTRIBUTES)*(args + 1), (DWORD)*(args + 2), (DWORD)*(args + 3), (DWORD)*(args + 4), (LPCWSTR)*(args + 5));
}
INT_PTR WINAPI OpenFileMappingW_MWAI(INT_PTR* args){
    return (INT_PTR)OpenFileMappingW((DWORD)*(args + 0), (BOOL)*(args + 1), (LPCWSTR)*(args + 2));
}
INT_PTR WINAPI UnmapViewOfFile_MWAI(INT_PTR* args){
    return (INT_PTR)UnmapViewOfFile((LPCVOID)*(args + 0));
}
INT_PTR WINAPI CreateMemoryResourceNotification_MWAI(INT_PTR* args){
    return (INT_PTR)CreateMemoryResourceNotification((MEMORY_RESOURCE_NOTIFICATION_TYPE)*(args + 0));
}
INT_PTR WINAPI QueryMemoryResourceNotification_MWAI(INT_PTR* args){
    return (INT_PTR)QueryMemoryResourceNotification((HANDLE)*(args + 0), (PBOOL)*(args + 1));
}
INT_PTR WINAPI CreateFileMappingNumaW_MWAI(INT_PTR* args){
    return (INT_PTR)CreateFileMappingNumaW((HANDLE)*(args + 0), (LPSECURITY_ATTRIBUTES)*(args + 1), (DWORD)*(args + 2), (DWORD)*(args + 3), (DWORD)*(args + 4), (LPCWSTR)*(args + 5), (DWORD)*(args + 6));
}
INT_PTR WINAPI PrefetchVirtualMemory_MWAI(INT_PTR* args){
    return (INT_PTR)PrefetchVirtualMemory((HANDLE)*(args + 0), (ULONG_PTR)*(args + 1), (PWIN32_MEMORY_RANGE_ENTRY)*(args + 2), (ULONG)*(args + 3));
}
INT_PTR WINAPI CreateFileMappingFromApp_MWAI(INT_PTR* args){
    return (INT_PTR)CreateFileMappingFromApp((HANDLE)*(args + 0), (PSECURITY_ATTRIBUTES)*(args + 1), (ULONG)*(args + 2), (ULONG64)*(args + 3), (PCWSTR)*(args + 4));
}
INT_PTR WINAPI UnmapViewOfFileEx_MWAI(INT_PTR* args){
    return (INT_PTR)UnmapViewOfFileEx((PVOID)*(args + 0), (ULONG)*(args + 1));
}
INT_PTR WINAPI AllocateUserPhysicalPages_MWAI(INT_PTR* args){
    return (INT_PTR)AllocateUserPhysicalPages((HANDLE)*(args + 0), (PULONG_PTR)*(args + 1), (PULONG_PTR)*(args + 2));
}
INT_PTR WINAPI FreeUserPhysicalPages_MWAI(INT_PTR* args){
    return (INT_PTR)FreeUserPhysicalPages((HANDLE)*(args + 0), (PULONG_PTR)*(args + 1), (PULONG_PTR)*(args + 2));
}
INT_PTR WINAPI MapUserPhysicalPages_MWAI(INT_PTR* args){
    return (INT_PTR)MapUserPhysicalPages((PVOID)*(args + 0), (ULONG_PTR)*(args + 1), (PULONG_PTR)*(args + 2));
}
INT_PTR WINAPI AllocateUserPhysicalPagesNuma_MWAI(INT_PTR* args){
    return (INT_PTR)AllocateUserPhysicalPagesNuma((HANDLE)*(args + 0), (PULONG_PTR)*(args + 1), (PULONG_PTR)*(args + 2), (DWORD)*(args + 3));
}
INT_PTR WINAPI GetMemoryErrorHandlingCapabilities_MWAI(INT_PTR* args){
    return (INT_PTR)GetMemoryErrorHandlingCapabilities((PULONG)*(args + 0));
}
INT_PTR WINAPI RegisterBadMemoryNotification_MWAI(INT_PTR* args){
    return (INT_PTR)RegisterBadMemoryNotification((PBAD_MEMORY_CALLBACK_ROUTINE)*(args + 0));
}
INT_PTR WINAPI UnregisterBadMemoryNotification_MWAI(INT_PTR* args){
    return (INT_PTR)UnregisterBadMemoryNotification((PVOID)*(args + 0));
}
INT_PTR WINAPI IsEnclaveTypeSupported_MWAI(INT_PTR* args){
    return (INT_PTR)IsEnclaveTypeSupported((DWORD)*(args + 0));
}
INT_PTR WINAPI InitializeEnclave_MWAI(INT_PTR* args){
    return (INT_PTR)InitializeEnclave((HANDLE)*(args + 0), (LPVOID)*(args + 1), (LPCVOID)*(args + 2), (DWORD)*(args + 3), (LPDWORD)*(args + 4));
}
INT_PTR WINAPI QueueUserWorkItem_MWAI(INT_PTR* args){
    return (INT_PTR)QueueUserWorkItem((LPTHREAD_START_ROUTINE)*(args + 0), (PVOID)*(args + 1), (ULONG)*(args + 2));
}
INT_PTR WINAPI UnregisterWaitEx_MWAI(INT_PTR* args){
    return (INT_PTR)UnregisterWaitEx((HANDLE)*(args + 0), (HANDLE)*(args + 1));
}
INT_PTR WINAPI CreateTimerQueue_MWAI(INT_PTR* args){
    return (INT_PTR)CreateTimerQueue();
}
INT_PTR WINAPI CreateTimerQueueTimer_MWAI(INT_PTR* args){
    return (INT_PTR)CreateTimerQueueTimer((PHANDLE)*(args + 0), (HANDLE)*(args + 1), (WAITORTIMERCALLBACK)*(args + 2), (PVOID)*(args + 3), (DWORD)*(args + 4), (DWORD)*(args + 5), (ULONG)*(args + 6));
}
INT_PTR WINAPI ChangeTimerQueueTimer_MWAI(INT_PTR* args){
    return (INT_PTR)ChangeTimerQueueTimer((HANDLE)*(args + 0), (HANDLE)*(args + 1), (ULONG)*(args + 2), (ULONG)*(args + 3));
}
INT_PTR WINAPI DeleteTimerQueueTimer_MWAI(INT_PTR* args){
    return (INT_PTR)DeleteTimerQueueTimer((HANDLE)*(args + 0), (HANDLE)*(args + 1), (HANDLE)*(args + 2));
}
INT_PTR WINAPI DeleteTimerQueue_MWAI(INT_PTR* args){
    return (INT_PTR)DeleteTimerQueue((HANDLE)*(args + 0));
}
INT_PTR WINAPI DeleteTimerQueueEx_MWAI(INT_PTR* args){
    return (INT_PTR)DeleteTimerQueueEx((HANDLE)*(args + 0), (HANDLE)*(args + 1));
}
INT_PTR WINAPI CreateThreadpool_MWAI(INT_PTR* args){
    return (INT_PTR)CreateThreadpool((PVOID)*(args + 0));
}
INT_PTR WINAPI SetThreadpoolThreadMaximum_MWAI(INT_PTR* args){
    SetThreadpoolThreadMaximum((PTP_POOL)*(args + 0), (DWORD)*(args + 1));
    return 0;
}
INT_PTR WINAPI SetThreadpoolThreadMinimum_MWAI(INT_PTR* args){
    return (INT_PTR)SetThreadpoolThreadMinimum((PTP_POOL)*(args + 0), (DWORD)*(args + 1));
}
INT_PTR WINAPI SetThreadpoolStackInformation_MWAI(INT_PTR* args){
    return (INT_PTR)SetThreadpoolStackInformation((PTP_POOL)*(args + 0), (PTP_POOL_STACK_INFORMATION)*(args + 1));
}
INT_PTR WINAPI QueryThreadpoolStackInformation_MWAI(INT_PTR* args){
    return (INT_PTR)QueryThreadpoolStackInformation((PTP_POOL)*(args + 0), (PTP_POOL_STACK_INFORMATION)*(args + 1));
}
INT_PTR WINAPI CloseThreadpool_MWAI(INT_PTR* args){
    CloseThreadpool((PTP_POOL)*(args + 0));
    return 0;
}
INT_PTR WINAPI CreateThreadpoolCleanupGroup_MWAI(INT_PTR* args){
    return (INT_PTR)CreateThreadpoolCleanupGroup();
}
INT_PTR WINAPI CloseThreadpoolCleanupGroupMembers_MWAI(INT_PTR* args){
    CloseThreadpoolCleanupGroupMembers((PTP_CLEANUP_GROUP)*(args + 0), (BOOL)*(args + 1), (PVOID)*(args + 2));
    return 0;
}
INT_PTR WINAPI CloseThreadpoolCleanupGroup_MWAI(INT_PTR* args){
    CloseThreadpoolCleanupGroup((PTP_CLEANUP_GROUP)*(args + 0));
    return 0;
}
INT_PTR WINAPI SetEventWhenCallbackReturns_MWAI(INT_PTR* args){
    SetEventWhenCallbackReturns((PTP_CALLBACK_INSTANCE)*(args + 0), (HANDLE)*(args + 1));
    return 0;
}
INT_PTR WINAPI ReleaseSemaphoreWhenCallbackReturns_MWAI(INT_PTR* args){
    ReleaseSemaphoreWhenCallbackReturns((PTP_CALLBACK_INSTANCE)*(args + 0), (HANDLE)*(args + 1), (DWORD)*(args + 2));
    return 0;
}
INT_PTR WINAPI ReleaseMutexWhenCallbackReturns_MWAI(INT_PTR* args){
    ReleaseMutexWhenCallbackReturns((PTP_CALLBACK_INSTANCE)*(args + 0), (HANDLE)*(args + 1));
    return 0;
}
INT_PTR WINAPI LeaveCriticalSectionWhenCallbackReturns_MWAI(INT_PTR* args){
    LeaveCriticalSectionWhenCallbackReturns((PTP_CALLBACK_INSTANCE)*(args + 0), (PCRITICAL_SECTION)*(args + 1));
    return 0;
}
INT_PTR WINAPI FreeLibraryWhenCallbackReturns_MWAI(INT_PTR* args){
    FreeLibraryWhenCallbackReturns((PTP_CALLBACK_INSTANCE)*(args + 0), (HMODULE)*(args + 1));
    return 0;
}
INT_PTR WINAPI CallbackMayRunLong_MWAI(INT_PTR* args){
    return (INT_PTR)CallbackMayRunLong((PTP_CALLBACK_INSTANCE)*(args + 0));
}
INT_PTR WINAPI DisassociateCurrentThreadFromCallback_MWAI(INT_PTR* args){
    DisassociateCurrentThreadFromCallback((PTP_CALLBACK_INSTANCE)*(args + 0));
    return 0;
}
INT_PTR WINAPI TrySubmitThreadpoolCallback_MWAI(INT_PTR* args){
    return (INT_PTR)TrySubmitThreadpoolCallback((PTP_SIMPLE_CALLBACK)*(args + 0), (PVOID)*(args + 1), (PTP_CALLBACK_ENVIRON)*(args + 2));
}
INT_PTR WINAPI CreateThreadpoolWork_MWAI(INT_PTR* args){
    return (INT_PTR)CreateThreadpoolWork((PTP_WORK_CALLBACK)*(args + 0), (PVOID)*(args + 1), (PTP_CALLBACK_ENVIRON)*(args + 2));
}
INT_PTR WINAPI SubmitThreadpoolWork_MWAI(INT_PTR* args){
    SubmitThreadpoolWork((PTP_WORK)*(args + 0));
    return 0;
}
INT_PTR WINAPI WaitForThreadpoolWorkCallbacks_MWAI(INT_PTR* args){
    WaitForThreadpoolWorkCallbacks((PTP_WORK)*(args + 0), (BOOL)*(args + 1));
    return 0;
}
INT_PTR WINAPI CloseThreadpoolWork_MWAI(INT_PTR* args){
    CloseThreadpoolWork((PTP_WORK)*(args + 0));
    return 0;
}
INT_PTR WINAPI CreateThreadpoolTimer_MWAI(INT_PTR* args){
    return (INT_PTR)CreateThreadpoolTimer((PTP_TIMER_CALLBACK)*(args + 0), (PVOID)*(args + 1), (PTP_CALLBACK_ENVIRON)*(args + 2));
}
INT_PTR WINAPI IsThreadpoolTimerSet_MWAI(INT_PTR* args){
    return (INT_PTR)IsThreadpoolTimerSet((PTP_TIMER)*(args + 0));
}
INT_PTR WINAPI WaitForThreadpoolTimerCallbacks_MWAI(INT_PTR* args){
    WaitForThreadpoolTimerCallbacks((PTP_TIMER)*(args + 0), (BOOL)*(args + 1));
    return 0;
}
INT_PTR WINAPI CloseThreadpoolTimer_MWAI(INT_PTR* args){
    CloseThreadpoolTimer((PTP_TIMER)*(args + 0));
    return 0;
}
INT_PTR WINAPI CreateThreadpoolWait_MWAI(INT_PTR* args){
    return (INT_PTR)CreateThreadpoolWait((PTP_WAIT_CALLBACK)*(args + 0), (PVOID)*(args + 1), (PTP_CALLBACK_ENVIRON)*(args + 2));
}
INT_PTR WINAPI WaitForThreadpoolWaitCallbacks_MWAI(INT_PTR* args){
    WaitForThreadpoolWaitCallbacks((PTP_WAIT)*(args + 0), (BOOL)*(args + 1));
    return 0;
}
INT_PTR WINAPI CloseThreadpoolWait_MWAI(INT_PTR* args){
    CloseThreadpoolWait((PTP_WAIT)*(args + 0));
    return 0;
}
INT_PTR WINAPI CreateThreadpoolIo_MWAI(INT_PTR* args){
    return (INT_PTR)CreateThreadpoolIo((HANDLE)*(args + 0), (PTP_WIN32_IO_CALLBACK)*(args + 1), (PVOID)*(args + 2), (PTP_CALLBACK_ENVIRON)*(args + 3));
}
INT_PTR WINAPI StartThreadpoolIo_MWAI(INT_PTR* args){
    StartThreadpoolIo((PTP_IO)*(args + 0));
    return 0;
}
INT_PTR WINAPI CancelThreadpoolIo_MWAI(INT_PTR* args){
    CancelThreadpoolIo((PTP_IO)*(args + 0));
    return 0;
}
INT_PTR WINAPI WaitForThreadpoolIoCallbacks_MWAI(INT_PTR* args){
    WaitForThreadpoolIoCallbacks((PTP_IO)*(args + 0), (BOOL)*(args + 1));
    return 0;
}
INT_PTR WINAPI CloseThreadpoolIo_MWAI(INT_PTR* args){
    CloseThreadpoolIo((PTP_IO)*(args + 0));
    return 0;
}
INT_PTR WINAPI IsProcessInJob_MWAI(INT_PTR* args){
    return (INT_PTR)IsProcessInJob((HANDLE)*(args + 0), (HANDLE)*(args + 1), (PBOOL)*(args + 2));
}
INT_PTR WINAPI CreateJobObjectW_MWAI(INT_PTR* args){
    return (INT_PTR)CreateJobObjectW((LPSECURITY_ATTRIBUTES)*(args + 0), (LPCWSTR)*(args + 1));
}
INT_PTR WINAPI FreeMemoryJobObject_MWAI(INT_PTR* args){
    FreeMemoryJobObject((void*)*(args + 0));
    return 0;
}
INT_PTR WINAPI OpenJobObjectW_MWAI(INT_PTR* args){
    return (INT_PTR)OpenJobObjectW((DWORD)*(args + 0), (BOOL)*(args + 1), (LPCWSTR)*(args + 2));
}
INT_PTR WINAPI AssignProcessToJobObject_MWAI(INT_PTR* args){
    return (INT_PTR)AssignProcessToJobObject((HANDLE)*(args + 0), (HANDLE)*(args + 1));
}
INT_PTR WINAPI TerminateJobObject_MWAI(INT_PTR* args){
    return (INT_PTR)TerminateJobObject((HANDLE)*(args + 0), (UINT)*(args + 1));
}
INT_PTR WINAPI SetInformationJobObject_MWAI(INT_PTR* args){
    return (INT_PTR)SetInformationJobObject((HANDLE)*(args + 0), (JOBOBJECTINFOCLASS)*(args + 1), (LPVOID)*(args + 2), (DWORD)*(args + 3));
}
INT_PTR WINAPI SetIoRateControlInformationJobObject_MWAI(INT_PTR* args){
    return (INT_PTR)SetIoRateControlInformationJobObject((HANDLE)*(args + 0), (JOBOBJECT_IO_RATE_CONTROL_INFORMATION*)*(args + 1));
}
INT_PTR WINAPI QueryInformationJobObject_MWAI(INT_PTR* args){
    return (INT_PTR)QueryInformationJobObject((HANDLE)*(args + 0), (JOBOBJECTINFOCLASS)*(args + 1), (LPVOID)*(args + 2), (DWORD)*(args + 3), (LPDWORD)*(args + 4));
}
INT_PTR WINAPI QueryIoRateControlInformationJobObject_MWAI(INT_PTR* args){
    return (INT_PTR)QueryIoRateControlInformationJobObject((HANDLE)*(args + 0), (PCWSTR)*(args + 1), (JOBOBJECT_IO_RATE_CONTROL_INFORMATION**)*(args + 2), (ULONG*)*(args + 3));
}
INT_PTR WINAPI Wow64EnableWow64FsRedirection_MWAI(INT_PTR* args){
    return (INT_PTR)Wow64EnableWow64FsRedirection((BOOLEAN)*(args + 0));
}
INT_PTR WINAPI Wow64DisableWow64FsRedirection_MWAI(INT_PTR* args){
    return (INT_PTR)Wow64DisableWow64FsRedirection((PVOID*)*(args + 0));
}
INT_PTR WINAPI Wow64RevertWow64FsRedirection_MWAI(INT_PTR* args){
    return (INT_PTR)Wow64RevertWow64FsRedirection((PVOID)*(args + 0));
}
INT_PTR WINAPI IsWow64Process_MWAI(INT_PTR* args){
    return (INT_PTR)IsWow64Process((HANDLE)*(args + 0), (PBOOL)*(args + 1));
}
INT_PTR WINAPI GetSystemWow64DirectoryA_MWAI(INT_PTR* args){
    return (INT_PTR)GetSystemWow64DirectoryA((LPSTR)*(args + 0), (UINT)*(args + 1));
}
INT_PTR WINAPI GetSystemWow64DirectoryW_MWAI(INT_PTR* args){
    return (INT_PTR)GetSystemWow64DirectoryW((LPWSTR)*(args + 0), (UINT)*(args + 1));
}
INT_PTR WINAPI IsWow64Process2_MWAI(INT_PTR* args){
    return (INT_PTR)IsWow64Process2((HANDLE)*(args + 0), (USHORT*)*(args + 1), (USHORT*)*(args + 2));
}
INT_PTR WINAPI IsWow64GuestMachineSupported_MWAI(INT_PTR* args){
    return (INT_PTR)IsWow64GuestMachineSupported((USHORT)*(args + 0), (BOOL*)*(args + 1));
}
INT_PTR WINAPI Wow64SetThreadContext_MWAI(INT_PTR* args){
    return (INT_PTR)Wow64SetThreadContext((HANDLE)*(args + 0), (const WOW64_CONTEXT*)*(args + 1));
}
INT_PTR WINAPI Wow64SuspendThread_MWAI(INT_PTR* args){
    return (INT_PTR)Wow64SuspendThread((HANDLE)*(args + 0));
}
INT_PTR WINAPI DisableThreadLibraryCalls_MWAI(INT_PTR* args){
    return (INT_PTR)DisableThreadLibraryCalls((HMODULE)*(args + 0));
}
INT_PTR WINAPI FindResourceExW_MWAI(INT_PTR* args){
    return (INT_PTR)FindResourceExW((HMODULE)*(args + 0), (LPCWSTR)*(args + 1), (LPCWSTR)*(args + 2), (WORD)*(args + 3));
}
INT_PTR WINAPI FindStringOrdinal_MWAI(INT_PTR* args){
    return (INT_PTR)FindStringOrdinal((DWORD)*(args + 0), (LPCWSTR)*(args + 1), (int)*(args + 2), (LPCWSTR)*(args + 3), (int)*(args + 4), (BOOL)*(args + 5));
}
INT_PTR WINAPI FreeLibrary_MWAI(INT_PTR* args){
    return (INT_PTR)FreeLibrary((HMODULE)*(args + 0));
}
INT_PTR WINAPI FreeLibraryAndExitThread_MWAI(INT_PTR* args){
    FreeLibraryAndExitThread((HMODULE)*(args + 0), (DWORD)*(args + 1));
    return 0;
}
INT_PTR WINAPI FreeResource_MWAI(INT_PTR* args){
    return (INT_PTR)FreeResource((HGLOBAL)*(args + 0));
}
INT_PTR WINAPI GetModuleFileNameA_MWAI(INT_PTR* args){
    return (INT_PTR)GetModuleFileNameA((HMODULE)*(args + 0), (LPSTR)*(args + 1), (DWORD)*(args + 2));
}
INT_PTR WINAPI GetModuleFileNameW_MWAI(INT_PTR* args){
    return (INT_PTR)GetModuleFileNameW((HMODULE)*(args + 0), (LPWSTR)*(args + 1), (DWORD)*(args + 2));
}
INT_PTR WINAPI GetModuleHandleA_MWAI(INT_PTR* args){
    return (INT_PTR)GetModuleHandleA((LPCSTR)*(args + 0));
}
INT_PTR WINAPI GetModuleHandleW_MWAI(INT_PTR* args){
    return (INT_PTR)GetModuleHandleW((LPCWSTR)*(args + 0));
}
INT_PTR WINAPI GetModuleHandleExA_MWAI(INT_PTR* args){
    return (INT_PTR)GetModuleHandleExA((DWORD)*(args + 0), (LPCSTR)*(args + 1), (HMODULE*)*(args + 2));
}
INT_PTR WINAPI GetModuleHandleExW_MWAI(INT_PTR* args){
    return (INT_PTR)GetModuleHandleExW((DWORD)*(args + 0), (LPCWSTR)*(args + 1), (HMODULE*)*(args + 2));
}
INT_PTR WINAPI GetProcAddress_MWAI(INT_PTR* args){
    return (INT_PTR)GetProcAddress((HMODULE)*(args + 0), (LPCSTR)*(args + 1));
}
INT_PTR WINAPI LoadLibraryExA_MWAI(INT_PTR* args){
    return (INT_PTR)LoadLibraryExA((LPCSTR)*(args + 0), (HANDLE)*(args + 1), (DWORD)*(args + 2));
}
INT_PTR WINAPI LoadLibraryExW_MWAI(INT_PTR* args){
    return (INT_PTR)LoadLibraryExW((LPCWSTR)*(args + 0), (HANDLE)*(args + 1), (DWORD)*(args + 2));
}
INT_PTR WINAPI LoadResource_MWAI(INT_PTR* args){
    return (INT_PTR)LoadResource((HMODULE)*(args + 0), (HRSRC)*(args + 1));
}
INT_PTR WINAPI LoadStringA_MWAI(INT_PTR* args){
    return (INT_PTR)LoadStringA((HINSTANCE)*(args + 0), (UINT)*(args + 1), (LPSTR)*(args + 2), (int)*(args + 3));
}
INT_PTR WINAPI LoadStringW_MWAI(INT_PTR* args){
    return (INT_PTR)LoadStringW((HINSTANCE)*(args + 0), (UINT)*(args + 1), (LPWSTR)*(args + 2), (int)*(args + 3));
}
INT_PTR WINAPI LockResource_MWAI(INT_PTR* args){
    return (INT_PTR)LockResource((HGLOBAL)*(args + 0));
}
INT_PTR WINAPI SizeofResource_MWAI(INT_PTR* args){
    return (INT_PTR)SizeofResource((HMODULE)*(args + 0), (HRSRC)*(args + 1));
}
INT_PTR WINAPI SetDefaultDllDirectories_MWAI(INT_PTR* args){
    return (INT_PTR)SetDefaultDllDirectories((DWORD)*(args + 0));
}
INT_PTR WINAPI EnumResourceLanguagesExA_MWAI(INT_PTR* args){
    return (INT_PTR)EnumResourceLanguagesExA((HMODULE)*(args + 0), (LPCSTR)*(args + 1), (LPCSTR)*(args + 2), (ENUMRESLANGPROCA)*(args + 3), (LONG_PTR)*(args + 4), (DWORD)*(args + 5), (LANGID)*(args + 6));
}
INT_PTR WINAPI EnumResourceLanguagesExW_MWAI(INT_PTR* args){
    return (INT_PTR)EnumResourceLanguagesExW((HMODULE)*(args + 0), (LPCWSTR)*(args + 1), (LPCWSTR)*(args + 2), (ENUMRESLANGPROCW)*(args + 3), (LONG_PTR)*(args + 4), (DWORD)*(args + 5), (LANGID)*(args + 6));
}
INT_PTR WINAPI EnumResourceNamesExA_MWAI(INT_PTR* args){
    return (INT_PTR)EnumResourceNamesExA((HMODULE)*(args + 0), (LPCSTR)*(args + 1), (ENUMRESNAMEPROCA)*(args + 2), (LONG_PTR)*(args + 3), (DWORD)*(args + 4), (LANGID)*(args + 5));
}
INT_PTR WINAPI EnumResourceNamesExW_MWAI(INT_PTR* args){
    return (INT_PTR)EnumResourceNamesExW((HMODULE)*(args + 0), (LPCWSTR)*(args + 1), (ENUMRESNAMEPROCW)*(args + 2), (LONG_PTR)*(args + 3), (DWORD)*(args + 4), (LANGID)*(args + 5));
}
INT_PTR WINAPI EnumResourceTypesExA_MWAI(INT_PTR* args){
    return (INT_PTR)EnumResourceTypesExA((HMODULE)*(args + 0), (ENUMRESTYPEPROCA)*(args + 1), (LONG_PTR)*(args + 2), (DWORD)*(args + 3), (LANGID)*(args + 4));
}
INT_PTR WINAPI EnumResourceTypesExW_MWAI(INT_PTR* args){
    return (INT_PTR)EnumResourceTypesExW((HMODULE)*(args + 0), (ENUMRESTYPEPROCW)*(args + 1), (LONG_PTR)*(args + 2), (DWORD)*(args + 3), (LANGID)*(args + 4));
}
INT_PTR WINAPI FindResourceW_MWAI(INT_PTR* args){
    return (INT_PTR)FindResourceW((HMODULE)*(args + 0), (LPCWSTR)*(args + 1), (LPCWSTR)*(args + 2));
}
INT_PTR WINAPI LoadLibraryA_MWAI(INT_PTR* args){
    return (INT_PTR)LoadLibraryA((LPCSTR)*(args + 0));
}
INT_PTR WINAPI LoadLibraryW_MWAI(INT_PTR* args){
    return (INT_PTR)LoadLibraryW((LPCWSTR)*(args + 0));
}
INT_PTR WINAPI EnumResourceNamesW_MWAI(INT_PTR* args){
    return (INT_PTR)EnumResourceNamesW((HMODULE)*(args + 0), (LPCWSTR)*(args + 1), (ENUMRESNAMEPROCW)*(args + 2), (LONG_PTR)*(args + 3));
}
INT_PTR WINAPI EnumResourceNamesA_MWAI(INT_PTR* args){
    return (INT_PTR)EnumResourceNamesA((HMODULE)*(args + 0), (LPCSTR)*(args + 1), (ENUMRESNAMEPROCA)*(args + 2), (LONG_PTR)*(args + 3));
}
INT_PTR WINAPI AccessCheck_MWAI(INT_PTR* args){
    return (INT_PTR)AccessCheck((PSECURITY_DESCRIPTOR)*(args + 0), (HANDLE)*(args + 1), (DWORD)*(args + 2), (PGENERIC_MAPPING)*(args + 3), (PPRIVILEGE_SET)*(args + 4), (LPDWORD)*(args + 5), (LPDWORD)*(args + 6), (LPBOOL)*(args + 7));
}
INT_PTR WINAPI AccessCheckAndAuditAlarmW_MWAI(INT_PTR* args){
    return (INT_PTR)AccessCheckAndAuditAlarmW((LPCWSTR)*(args + 0), (LPVOID)*(args + 1), (LPWSTR)*(args + 2), (LPWSTR)*(args + 3), (PSECURITY_DESCRIPTOR)*(args + 4), (DWORD)*(args + 5), (PGENERIC_MAPPING)*(args + 6), (BOOL)*(args + 7), (LPDWORD)*(args + 8), (LPBOOL)*(args + 9), (LPBOOL)*(args + 10));
}
INT_PTR WINAPI AccessCheckByType_MWAI(INT_PTR* args){
    return (INT_PTR)AccessCheckByType((PSECURITY_DESCRIPTOR)*(args + 0), (PSID)*(args + 1), (HANDLE)*(args + 2), (DWORD)*(args + 3), (POBJECT_TYPE_LIST)*(args + 4), (DWORD)*(args + 5), (PGENERIC_MAPPING)*(args + 6), (PPRIVILEGE_SET)*(args + 7), (LPDWORD)*(args + 8), (LPDWORD)*(args + 9), (LPBOOL)*(args + 10));
}
INT_PTR WINAPI AccessCheckByTypeResultList_MWAI(INT_PTR* args){
    return (INT_PTR)AccessCheckByTypeResultList((PSECURITY_DESCRIPTOR)*(args + 0), (PSID)*(args + 1), (HANDLE)*(args + 2), (DWORD)*(args + 3), (POBJECT_TYPE_LIST)*(args + 4), (DWORD)*(args + 5), (PGENERIC_MAPPING)*(args + 6), (PPRIVILEGE_SET)*(args + 7), (LPDWORD)*(args + 8), (LPDWORD)*(args + 9), (LPDWORD)*(args + 10));
}
INT_PTR WINAPI AccessCheckByTypeAndAuditAlarmW_MWAI(INT_PTR* args){
    return (INT_PTR)AccessCheckByTypeAndAuditAlarmW((LPCWSTR)*(args + 0), (LPVOID)*(args + 1), (LPCWSTR)*(args + 2), (LPCWSTR)*(args + 3), (PSECURITY_DESCRIPTOR)*(args + 4), (PSID)*(args + 5), (DWORD)*(args + 6), (AUDIT_EVENT_TYPE)*(args + 7), (DWORD)*(args + 8), (POBJECT_TYPE_LIST)*(args + 9), (DWORD)*(args + 10), (PGENERIC_MAPPING)*(args + 11), (BOOL)*(args + 12), (LPDWORD)*(args + 13), (LPBOOL)*(args + 14), (LPBOOL)*(args + 15));
}
INT_PTR WINAPI AccessCheckByTypeResultListAndAuditAlarmW_MWAI(INT_PTR* args){
    return (INT_PTR)AccessCheckByTypeResultListAndAuditAlarmW((LPCWSTR)*(args + 0), (LPVOID)*(args + 1), (LPCWSTR)*(args + 2), (LPCWSTR)*(args + 3), (PSECURITY_DESCRIPTOR)*(args + 4), (PSID)*(args + 5), (DWORD)*(args + 6), (AUDIT_EVENT_TYPE)*(args + 7), (DWORD)*(args + 8), (POBJECT_TYPE_LIST)*(args + 9), (DWORD)*(args + 10), (PGENERIC_MAPPING)*(args + 11), (BOOL)*(args + 12), (LPDWORD)*(args + 13), (LPDWORD)*(args + 14), (LPBOOL)*(args + 15));
}
INT_PTR WINAPI AccessCheckByTypeResultListAndAuditAlarmByHandleW_MWAI(INT_PTR* args){
    return (INT_PTR)AccessCheckByTypeResultListAndAuditAlarmByHandleW((LPCWSTR)*(args + 0), (LPVOID)*(args + 1), (HANDLE)*(args + 2), (LPCWSTR)*(args + 3), (LPCWSTR)*(args + 4), (PSECURITY_DESCRIPTOR)*(args + 5), (PSID)*(args + 6), (DWORD)*(args + 7), (AUDIT_EVENT_TYPE)*(args + 8), (DWORD)*(args + 9), (POBJECT_TYPE_LIST)*(args + 10), (DWORD)*(args + 11), (PGENERIC_MAPPING)*(args + 12), (BOOL)*(args + 13), (LPDWORD)*(args + 14), (LPDWORD)*(args + 15), (LPBOOL)*(args + 16));
}
INT_PTR WINAPI AddAccessAllowedAce_MWAI(INT_PTR* args){
    return (INT_PTR)AddAccessAllowedAce((PACL)*(args + 0), (DWORD)*(args + 1), (DWORD)*(args + 2), (PSID)*(args + 3));
}
INT_PTR WINAPI AddAccessAllowedAceEx_MWAI(INT_PTR* args){
    return (INT_PTR)AddAccessAllowedAceEx((PACL)*(args + 0), (DWORD)*(args + 1), (DWORD)*(args + 2), (DWORD)*(args + 3), (PSID)*(args + 4));
}
INT_PTR WINAPI AddAccessAllowedObjectAce_MWAI(INT_PTR* args){
    return (INT_PTR)AddAccessAllowedObjectAce((PACL)*(args + 0), (DWORD)*(args + 1), (DWORD)*(args + 2), (DWORD)*(args + 3), (GUID*)*(args + 4), (GUID*)*(args + 5), (PSID)*(args + 6));
}
INT_PTR WINAPI AddAccessDeniedAce_MWAI(INT_PTR* args){
    return (INT_PTR)AddAccessDeniedAce((PACL)*(args + 0), (DWORD)*(args + 1), (DWORD)*(args + 2), (PSID)*(args + 3));
}
INT_PTR WINAPI AddAccessDeniedAceEx_MWAI(INT_PTR* args){
    return (INT_PTR)AddAccessDeniedAceEx((PACL)*(args + 0), (DWORD)*(args + 1), (DWORD)*(args + 2), (DWORD)*(args + 3), (PSID)*(args + 4));
}
INT_PTR WINAPI AddAccessDeniedObjectAce_MWAI(INT_PTR* args){
    return (INT_PTR)AddAccessDeniedObjectAce((PACL)*(args + 0), (DWORD)*(args + 1), (DWORD)*(args + 2), (DWORD)*(args + 3), (GUID*)*(args + 4), (GUID*)*(args + 5), (PSID)*(args + 6));
}
INT_PTR WINAPI AddAce_MWAI(INT_PTR* args){
    return (INT_PTR)AddAce((PACL)*(args + 0), (DWORD)*(args + 1), (DWORD)*(args + 2), (LPVOID)*(args + 3), (DWORD)*(args + 4));
}
INT_PTR WINAPI AddAuditAccessAce_MWAI(INT_PTR* args){
    return (INT_PTR)AddAuditAccessAce((PACL)*(args + 0), (DWORD)*(args + 1), (DWORD)*(args + 2), (PSID)*(args + 3), (BOOL)*(args + 4), (BOOL)*(args + 5));
}
INT_PTR WINAPI AddAuditAccessAceEx_MWAI(INT_PTR* args){
    return (INT_PTR)AddAuditAccessAceEx((PACL)*(args + 0), (DWORD)*(args + 1), (DWORD)*(args + 2), (DWORD)*(args + 3), (PSID)*(args + 4), (BOOL)*(args + 5), (BOOL)*(args + 6));
}
INT_PTR WINAPI AddAuditAccessObjectAce_MWAI(INT_PTR* args){
    return (INT_PTR)AddAuditAccessObjectAce((PACL)*(args + 0), (DWORD)*(args + 1), (DWORD)*(args + 2), (DWORD)*(args + 3), (GUID*)*(args + 4), (GUID*)*(args + 5), (PSID)*(args + 6), (BOOL)*(args + 7), (BOOL)*(args + 8));
}
INT_PTR WINAPI AddMandatoryAce_MWAI(INT_PTR* args){
    return (INT_PTR)AddMandatoryAce((PACL)*(args + 0), (DWORD)*(args + 1), (DWORD)*(args + 2), (DWORD)*(args + 3), (PSID)*(args + 4));
}
INT_PTR WINAPI AddResourceAttributeAce_MWAI(INT_PTR* args){
    return (INT_PTR)AddResourceAttributeAce((PACL)*(args + 0), (DWORD)*(args + 1), (DWORD)*(args + 2), (DWORD)*(args + 3), (PSID)*(args + 4), (PCLAIM_SECURITY_ATTRIBUTES_INFORMATION)*(args + 5), (PDWORD)*(args + 6));
}
INT_PTR WINAPI AddScopedPolicyIDAce_MWAI(INT_PTR* args){
    return (INT_PTR)AddScopedPolicyIDAce((PACL)*(args + 0), (DWORD)*(args + 1), (DWORD)*(args + 2), (DWORD)*(args + 3), (PSID)*(args + 4));
}
INT_PTR WINAPI AdjustTokenGroups_MWAI(INT_PTR* args){
    return (INT_PTR)AdjustTokenGroups((HANDLE)*(args + 0), (BOOL)*(args + 1), (PTOKEN_GROUPS)*(args + 2), (DWORD)*(args + 3), (PTOKEN_GROUPS)*(args + 4), (PDWORD)*(args + 5));
}
INT_PTR WINAPI AdjustTokenPrivileges_MWAI(INT_PTR* args){
    return (INT_PTR)AdjustTokenPrivileges((HANDLE)*(args + 0), (BOOL)*(args + 1), (PTOKEN_PRIVILEGES)*(args + 2), (DWORD)*(args + 3), (PTOKEN_PRIVILEGES)*(args + 4), (PDWORD)*(args + 5));
}
INT_PTR WINAPI AllocateAndInitializeSid_MWAI(INT_PTR* args){
    return (INT_PTR)AllocateAndInitializeSid((PSID_IDENTIFIER_AUTHORITY)*(args + 0), (BYTE)*(args + 1), (DWORD)*(args + 2), (DWORD)*(args + 3), (DWORD)*(args + 4), (DWORD)*(args + 5), (DWORD)*(args + 6), (DWORD)*(args + 7), (DWORD)*(args + 8), (DWORD)*(args + 9), (PSID*)*(args + 10));
}
INT_PTR WINAPI AllocateLocallyUniqueId_MWAI(INT_PTR* args){
    return (INT_PTR)AllocateLocallyUniqueId((PLUID)*(args + 0));
}
INT_PTR WINAPI AreAllAccessesGranted_MWAI(INT_PTR* args){
    return (INT_PTR)AreAllAccessesGranted((DWORD)*(args + 0), (DWORD)*(args + 1));
}
INT_PTR WINAPI AreAnyAccessesGranted_MWAI(INT_PTR* args){
    return (INT_PTR)AreAnyAccessesGranted((DWORD)*(args + 0), (DWORD)*(args + 1));
}
INT_PTR WINAPI CheckTokenMembership_MWAI(INT_PTR* args){
    return (INT_PTR)CheckTokenMembership((HANDLE)*(args + 0), (PSID)*(args + 1), (PBOOL)*(args + 2));
}
INT_PTR WINAPI CheckTokenCapability_MWAI(INT_PTR* args){
    return (INT_PTR)CheckTokenCapability((HANDLE)*(args + 0), (PSID)*(args + 1), (PBOOL)*(args + 2));
}
INT_PTR WINAPI GetAppContainerAce_MWAI(INT_PTR* args){
    return (INT_PTR)GetAppContainerAce((PACL)*(args + 0), (DWORD)*(args + 1), (PVOID*)*(args + 2), (DWORD*)*(args + 3));
}
INT_PTR WINAPI CheckTokenMembershipEx_MWAI(INT_PTR* args){
    return (INT_PTR)CheckTokenMembershipEx((HANDLE)*(args + 0), (PSID)*(args + 1), (DWORD)*(args + 2), (PBOOL)*(args + 3));
}
INT_PTR WINAPI ConvertToAutoInheritPrivateObjectSecurity_MWAI(INT_PTR* args){
    return (INT_PTR)ConvertToAutoInheritPrivateObjectSecurity((PSECURITY_DESCRIPTOR)*(args + 0), (PSECURITY_DESCRIPTOR)*(args + 1), (PSECURITY_DESCRIPTOR*)*(args + 2), (GUID*)*(args + 3), (BOOLEAN)*(args + 4), (PGENERIC_MAPPING)*(args + 5));
}
INT_PTR WINAPI CopySid_MWAI(INT_PTR* args){
    return (INT_PTR)CopySid((DWORD)*(args + 0), (PSID)*(args + 1), (PSID)*(args + 2));
}
INT_PTR WINAPI CreatePrivateObjectSecurity_MWAI(INT_PTR* args){
    return (INT_PTR)CreatePrivateObjectSecurity((PSECURITY_DESCRIPTOR)*(args + 0), (PSECURITY_DESCRIPTOR)*(args + 1), (PSECURITY_DESCRIPTOR*)*(args + 2), (BOOL)*(args + 3), (HANDLE)*(args + 4), (PGENERIC_MAPPING)*(args + 5));
}
INT_PTR WINAPI CreatePrivateObjectSecurityEx_MWAI(INT_PTR* args){
    return (INT_PTR)CreatePrivateObjectSecurityEx((PSECURITY_DESCRIPTOR)*(args + 0), (PSECURITY_DESCRIPTOR)*(args + 1), (PSECURITY_DESCRIPTOR*)*(args + 2), (GUID*)*(args + 3), (BOOL)*(args + 4), (ULONG)*(args + 5), (HANDLE)*(args + 6), (PGENERIC_MAPPING)*(args + 7));
}
INT_PTR WINAPI CreatePrivateObjectSecurityWithMultipleInheritance_MWAI(INT_PTR* args){
    return (INT_PTR)CreatePrivateObjectSecurityWithMultipleInheritance((PSECURITY_DESCRIPTOR)*(args + 0), (PSECURITY_DESCRIPTOR)*(args + 1), (PSECURITY_DESCRIPTOR*)*(args + 2), (GUID**)*(args + 3), (ULONG)*(args + 4), (BOOL)*(args + 5), (ULONG)*(args + 6), (HANDLE)*(args + 7), (PGENERIC_MAPPING)*(args + 8));
}
INT_PTR WINAPI CreateRestrictedToken_MWAI(INT_PTR* args){
    return (INT_PTR)CreateRestrictedToken((HANDLE)*(args + 0), (DWORD)*(args + 1), (DWORD)*(args + 2), (PSID_AND_ATTRIBUTES)*(args + 3), (DWORD)*(args + 4), (PLUID_AND_ATTRIBUTES)*(args + 5), (DWORD)*(args + 6), (PSID_AND_ATTRIBUTES)*(args + 7), (PHANDLE)*(args + 8));
}
INT_PTR WINAPI CreateWellKnownSid_MWAI(INT_PTR* args){
    return (INT_PTR)CreateWellKnownSid((WELL_KNOWN_SID_TYPE)*(args + 0), (PSID)*(args + 1), (PSID)*(args + 2), (DWORD*)*(args + 3));
}
INT_PTR WINAPI EqualDomainSid_MWAI(INT_PTR* args){
    return (INT_PTR)EqualDomainSid((PSID)*(args + 0), (PSID)*(args + 1), (BOOL*)*(args + 2));
}
INT_PTR WINAPI DeleteAce_MWAI(INT_PTR* args){
    return (INT_PTR)DeleteAce((PACL)*(args + 0), (DWORD)*(args + 1));
}
INT_PTR WINAPI DestroyPrivateObjectSecurity_MWAI(INT_PTR* args){
    return (INT_PTR)DestroyPrivateObjectSecurity((PSECURITY_DESCRIPTOR*)*(args + 0));
}
INT_PTR WINAPI DuplicateToken_MWAI(INT_PTR* args){
    return (INT_PTR)DuplicateToken((HANDLE)*(args + 0), (SECURITY_IMPERSONATION_LEVEL)*(args + 1), (PHANDLE)*(args + 2));
}
INT_PTR WINAPI DuplicateTokenEx_MWAI(INT_PTR* args){
    return (INT_PTR)DuplicateTokenEx((HANDLE)*(args + 0), (DWORD)*(args + 1), (LPSECURITY_ATTRIBUTES)*(args + 2), (SECURITY_IMPERSONATION_LEVEL)*(args + 3), (TOKEN_TYPE)*(args + 4), (PHANDLE)*(args + 5));
}
INT_PTR WINAPI EqualPrefixSid_MWAI(INT_PTR* args){
    return (INT_PTR)EqualPrefixSid((PSID)*(args + 0), (PSID)*(args + 1));
}
INT_PTR WINAPI EqualSid_MWAI(INT_PTR* args){
    return (INT_PTR)EqualSid((PSID)*(args + 0), (PSID)*(args + 1));
}
INT_PTR WINAPI FindFirstFreeAce_MWAI(INT_PTR* args){
    return (INT_PTR)FindFirstFreeAce((PACL)*(args + 0), (LPVOID*)*(args + 1));
}
INT_PTR WINAPI FreeSid_MWAI(INT_PTR* args){
    return (INT_PTR)FreeSid((PSID)*(args + 0));
}
INT_PTR WINAPI GetAce_MWAI(INT_PTR* args){
    return (INT_PTR)GetAce((PACL)*(args + 0), (DWORD)*(args + 1), (LPVOID*)*(args + 2));
}
INT_PTR WINAPI GetAclInformation_MWAI(INT_PTR* args){
    return (INT_PTR)GetAclInformation((PACL)*(args + 0), (LPVOID)*(args + 1), (DWORD)*(args + 2), (ACL_INFORMATION_CLASS)*(args + 3));
}
INT_PTR WINAPI GetFileSecurityW_MWAI(INT_PTR* args){
    return (INT_PTR)GetFileSecurityW((LPCWSTR)*(args + 0), (SECURITY_INFORMATION)*(args + 1), (PSECURITY_DESCRIPTOR)*(args + 2), (DWORD)*(args + 3), (LPDWORD)*(args + 4));
}
INT_PTR WINAPI GetKernelObjectSecurity_MWAI(INT_PTR* args){
    return (INT_PTR)GetKernelObjectSecurity((HANDLE)*(args + 0), (SECURITY_INFORMATION)*(args + 1), (PSECURITY_DESCRIPTOR)*(args + 2), (DWORD)*(args + 3), (LPDWORD)*(args + 4));
}
INT_PTR WINAPI GetLengthSid_MWAI(INT_PTR* args){
    return (INT_PTR)GetLengthSid((PSID)*(args + 0));
}
INT_PTR WINAPI GetPrivateObjectSecurity_MWAI(INT_PTR* args){
    return (INT_PTR)GetPrivateObjectSecurity((PSECURITY_DESCRIPTOR)*(args + 0), (SECURITY_INFORMATION)*(args + 1), (PSECURITY_DESCRIPTOR)*(args + 2), (DWORD)*(args + 3), (PDWORD)*(args + 4));
}
INT_PTR WINAPI GetSecurityDescriptorControl_MWAI(INT_PTR* args){
    return (INT_PTR)GetSecurityDescriptorControl((PSECURITY_DESCRIPTOR)*(args + 0), (PSECURITY_DESCRIPTOR_CONTROL)*(args + 1), (LPDWORD)*(args + 2));
}
INT_PTR WINAPI GetSecurityDescriptorDacl_MWAI(INT_PTR* args){
    return (INT_PTR)GetSecurityDescriptorDacl((PSECURITY_DESCRIPTOR)*(args + 0), (LPBOOL)*(args + 1), (PACL*)*(args + 2), (LPBOOL)*(args + 3));
}
INT_PTR WINAPI GetSecurityDescriptorGroup_MWAI(INT_PTR* args){
    return (INT_PTR)GetSecurityDescriptorGroup((PSECURITY_DESCRIPTOR)*(args + 0), (PSID*)*(args + 1), (LPBOOL)*(args + 2));
}
INT_PTR WINAPI GetSecurityDescriptorLength_MWAI(INT_PTR* args){
    return (INT_PTR)GetSecurityDescriptorLength((PSECURITY_DESCRIPTOR)*(args + 0));
}
INT_PTR WINAPI GetSecurityDescriptorOwner_MWAI(INT_PTR* args){
    return (INT_PTR)GetSecurityDescriptorOwner((PSECURITY_DESCRIPTOR)*(args + 0), (PSID*)*(args + 1), (LPBOOL)*(args + 2));
}
INT_PTR WINAPI GetSecurityDescriptorRMControl_MWAI(INT_PTR* args){
    return (INT_PTR)GetSecurityDescriptorRMControl((PSECURITY_DESCRIPTOR)*(args + 0), (PUCHAR)*(args + 1));
}
INT_PTR WINAPI GetSecurityDescriptorSacl_MWAI(INT_PTR* args){
    return (INT_PTR)GetSecurityDescriptorSacl((PSECURITY_DESCRIPTOR)*(args + 0), (LPBOOL)*(args + 1), (PACL*)*(args + 2), (LPBOOL)*(args + 3));
}
INT_PTR WINAPI GetSidIdentifierAuthority_MWAI(INT_PTR* args){
    return (INT_PTR)GetSidIdentifierAuthority((PSID)*(args + 0));
}
INT_PTR WINAPI GetSidLengthRequired_MWAI(INT_PTR* args){
    return (INT_PTR)GetSidLengthRequired((UCHAR)*(args + 0));
}
INT_PTR WINAPI GetSidSubAuthority_MWAI(INT_PTR* args){
    return (INT_PTR)GetSidSubAuthority((PSID)*(args + 0), (DWORD)*(args + 1));
}
INT_PTR WINAPI GetSidSubAuthorityCount_MWAI(INT_PTR* args){
    return (INT_PTR)GetSidSubAuthorityCount((PSID)*(args + 0));
}
INT_PTR WINAPI GetTokenInformation_MWAI(INT_PTR* args){
    return (INT_PTR)GetTokenInformation((HANDLE)*(args + 0), (TOKEN_INFORMATION_CLASS)*(args + 1), (LPVOID)*(args + 2), (DWORD)*(args + 3), (PDWORD)*(args + 4));
}
INT_PTR WINAPI GetWindowsAccountDomainSid_MWAI(INT_PTR* args){
    return (INT_PTR)GetWindowsAccountDomainSid((PSID)*(args + 0), (PSID)*(args + 1), (DWORD*)*(args + 2));
}
INT_PTR WINAPI ImpersonateAnonymousToken_MWAI(INT_PTR* args){
    return (INT_PTR)ImpersonateAnonymousToken((HANDLE)*(args + 0));
}
INT_PTR WINAPI ImpersonateLoggedOnUser_MWAI(INT_PTR* args){
    return (INT_PTR)ImpersonateLoggedOnUser((HANDLE)*(args + 0));
}
INT_PTR WINAPI ImpersonateSelf_MWAI(INT_PTR* args){
    return (INT_PTR)ImpersonateSelf((SECURITY_IMPERSONATION_LEVEL)*(args + 0));
}
INT_PTR WINAPI InitializeAcl_MWAI(INT_PTR* args){
    return (INT_PTR)InitializeAcl((PACL)*(args + 0), (DWORD)*(args + 1), (DWORD)*(args + 2));
}
INT_PTR WINAPI InitializeSecurityDescriptor_MWAI(INT_PTR* args){
    return (INT_PTR)InitializeSecurityDescriptor((PSECURITY_DESCRIPTOR)*(args + 0), (DWORD)*(args + 1));
}
INT_PTR WINAPI InitializeSid_MWAI(INT_PTR* args){
    return (INT_PTR)InitializeSid((PSID)*(args + 0), (PSID_IDENTIFIER_AUTHORITY)*(args + 1), (BYTE)*(args + 2));
}
INT_PTR WINAPI IsTokenRestricted_MWAI(INT_PTR* args){
    return (INT_PTR)IsTokenRestricted((HANDLE)*(args + 0));
}
INT_PTR WINAPI IsValidAcl_MWAI(INT_PTR* args){
    return (INT_PTR)IsValidAcl((PACL)*(args + 0));
}
INT_PTR WINAPI IsValidSecurityDescriptor_MWAI(INT_PTR* args){
    return (INT_PTR)IsValidSecurityDescriptor((PSECURITY_DESCRIPTOR)*(args + 0));
}
INT_PTR WINAPI IsValidSid_MWAI(INT_PTR* args){
    return (INT_PTR)IsValidSid((PSID)*(args + 0));
}
INT_PTR WINAPI IsWellKnownSid_MWAI(INT_PTR* args){
    return (INT_PTR)IsWellKnownSid((PSID)*(args + 0), (WELL_KNOWN_SID_TYPE)*(args + 1));
}
INT_PTR WINAPI MakeAbsoluteSD_MWAI(INT_PTR* args){
    return (INT_PTR)MakeAbsoluteSD((PSECURITY_DESCRIPTOR)*(args + 0), (PSECURITY_DESCRIPTOR)*(args + 1), (LPDWORD)*(args + 2), (PACL)*(args + 3), (LPDWORD)*(args + 4), (PACL)*(args + 5), (LPDWORD)*(args + 6), (PSID)*(args + 7), (LPDWORD)*(args + 8), (PSID)*(args + 9), (LPDWORD)*(args + 10));
}
INT_PTR WINAPI MakeSelfRelativeSD_MWAI(INT_PTR* args){
    return (INT_PTR)MakeSelfRelativeSD((PSECURITY_DESCRIPTOR)*(args + 0), (PSECURITY_DESCRIPTOR)*(args + 1), (LPDWORD)*(args + 2));
}
INT_PTR WINAPI MapGenericMask_MWAI(INT_PTR* args){
    MapGenericMask((PDWORD)*(args + 0), (PGENERIC_MAPPING)*(args + 1));
    return 0;
}
INT_PTR WINAPI ObjectCloseAuditAlarmW_MWAI(INT_PTR* args){
    return (INT_PTR)ObjectCloseAuditAlarmW((LPCWSTR)*(args + 0), (LPVOID)*(args + 1), (BOOL)*(args + 2));
}
INT_PTR WINAPI ObjectDeleteAuditAlarmW_MWAI(INT_PTR* args){
    return (INT_PTR)ObjectDeleteAuditAlarmW((LPCWSTR)*(args + 0), (LPVOID)*(args + 1), (BOOL)*(args + 2));
}
INT_PTR WINAPI ObjectOpenAuditAlarmW_MWAI(INT_PTR* args){
    return (INT_PTR)ObjectOpenAuditAlarmW((LPCWSTR)*(args + 0), (LPVOID)*(args + 1), (LPWSTR)*(args + 2), (LPWSTR)*(args + 3), (PSECURITY_DESCRIPTOR)*(args + 4), (HANDLE)*(args + 5), (DWORD)*(args + 6), (DWORD)*(args + 7), (PPRIVILEGE_SET)*(args + 8), (BOOL)*(args + 9), (BOOL)*(args + 10), (LPBOOL)*(args + 11));
}
INT_PTR WINAPI ObjectPrivilegeAuditAlarmW_MWAI(INT_PTR* args){
    return (INT_PTR)ObjectPrivilegeAuditAlarmW((LPCWSTR)*(args + 0), (LPVOID)*(args + 1), (HANDLE)*(args + 2), (DWORD)*(args + 3), (PPRIVILEGE_SET)*(args + 4), (BOOL)*(args + 5));
}
INT_PTR WINAPI PrivilegeCheck_MWAI(INT_PTR* args){
    return (INT_PTR)PrivilegeCheck((HANDLE)*(args + 0), (PPRIVILEGE_SET)*(args + 1), (LPBOOL)*(args + 2));
}
INT_PTR WINAPI PrivilegedServiceAuditAlarmW_MWAI(INT_PTR* args){
    return (INT_PTR)PrivilegedServiceAuditAlarmW((LPCWSTR)*(args + 0), (LPCWSTR)*(args + 1), (HANDLE)*(args + 2), (PPRIVILEGE_SET)*(args + 3), (BOOL)*(args + 4));
}
INT_PTR WINAPI QuerySecurityAccessMask_MWAI(INT_PTR* args){
    QuerySecurityAccessMask((SECURITY_INFORMATION)*(args + 0), (LPDWORD)*(args + 1));
    return 0;
}
INT_PTR WINAPI RevertToSelf_MWAI(INT_PTR* args){
    return (INT_PTR)RevertToSelf();
}
INT_PTR WINAPI SetAclInformation_MWAI(INT_PTR* args){
    return (INT_PTR)SetAclInformation((PACL)*(args + 0), (LPVOID)*(args + 1), (DWORD)*(args + 2), (ACL_INFORMATION_CLASS)*(args + 3));
}
INT_PTR WINAPI SetFileSecurityW_MWAI(INT_PTR* args){
    return (INT_PTR)SetFileSecurityW((LPCWSTR)*(args + 0), (SECURITY_INFORMATION)*(args + 1), (PSECURITY_DESCRIPTOR)*(args + 2));
}
INT_PTR WINAPI SetKernelObjectSecurity_MWAI(INT_PTR* args){
    return (INT_PTR)SetKernelObjectSecurity((HANDLE)*(args + 0), (SECURITY_INFORMATION)*(args + 1), (PSECURITY_DESCRIPTOR)*(args + 2));
}
INT_PTR WINAPI SetPrivateObjectSecurity_MWAI(INT_PTR* args){
    return (INT_PTR)SetPrivateObjectSecurity((SECURITY_INFORMATION)*(args + 0), (PSECURITY_DESCRIPTOR)*(args + 1), (PSECURITY_DESCRIPTOR*)*(args + 2), (PGENERIC_MAPPING)*(args + 3), (HANDLE)*(args + 4));
}
INT_PTR WINAPI SetPrivateObjectSecurityEx_MWAI(INT_PTR* args){
    return (INT_PTR)SetPrivateObjectSecurityEx((SECURITY_INFORMATION)*(args + 0), (PSECURITY_DESCRIPTOR)*(args + 1), (PSECURITY_DESCRIPTOR*)*(args + 2), (ULONG)*(args + 3), (PGENERIC_MAPPING)*(args + 4), (HANDLE)*(args + 5));
}
INT_PTR WINAPI SetSecurityAccessMask_MWAI(INT_PTR* args){
    SetSecurityAccessMask((SECURITY_INFORMATION)*(args + 0), (LPDWORD)*(args + 1));
    return 0;
}
INT_PTR WINAPI SetSecurityDescriptorControl_MWAI(INT_PTR* args){
    return (INT_PTR)SetSecurityDescriptorControl((PSECURITY_DESCRIPTOR)*(args + 0), (SECURITY_DESCRIPTOR_CONTROL)*(args + 1), (SECURITY_DESCRIPTOR_CONTROL)*(args + 2));
}
INT_PTR WINAPI SetSecurityDescriptorDacl_MWAI(INT_PTR* args){
    return (INT_PTR)SetSecurityDescriptorDacl((PSECURITY_DESCRIPTOR)*(args + 0), (BOOL)*(args + 1), (PACL)*(args + 2), (BOOL)*(args + 3));
}
INT_PTR WINAPI SetSecurityDescriptorGroup_MWAI(INT_PTR* args){
    return (INT_PTR)SetSecurityDescriptorGroup((PSECURITY_DESCRIPTOR)*(args + 0), (PSID)*(args + 1), (BOOL)*(args + 2));
}
INT_PTR WINAPI SetSecurityDescriptorOwner_MWAI(INT_PTR* args){
    return (INT_PTR)SetSecurityDescriptorOwner((PSECURITY_DESCRIPTOR)*(args + 0), (PSID)*(args + 1), (BOOL)*(args + 2));
}
INT_PTR WINAPI SetSecurityDescriptorRMControl_MWAI(INT_PTR* args){
    return (INT_PTR)SetSecurityDescriptorRMControl((PSECURITY_DESCRIPTOR)*(args + 0), (PUCHAR)*(args + 1));
}
INT_PTR WINAPI SetSecurityDescriptorSacl_MWAI(INT_PTR* args){
    return (INT_PTR)SetSecurityDescriptorSacl((PSECURITY_DESCRIPTOR)*(args + 0), (BOOL)*(args + 1), (PACL)*(args + 2), (BOOL)*(args + 3));
}
INT_PTR WINAPI SetTokenInformation_MWAI(INT_PTR* args){
    return (INT_PTR)SetTokenInformation((HANDLE)*(args + 0), (TOKEN_INFORMATION_CLASS)*(args + 1), (LPVOID)*(args + 2), (DWORD)*(args + 3));
}
INT_PTR WINAPI SetCachedSigningLevel_MWAI(INT_PTR* args){
    return (INT_PTR)SetCachedSigningLevel((PHANDLE)*(args + 0), (ULONG)*(args + 1), (ULONG)*(args + 2), (HANDLE)*(args + 3));
}
INT_PTR WINAPI GetCachedSigningLevel_MWAI(INT_PTR* args){
    return (INT_PTR)GetCachedSigningLevel((HANDLE)*(args + 0), (PULONG)*(args + 1), (PULONG)*(args + 2), (PUCHAR)*(args + 3), (PULONG)*(args + 4), (PULONG)*(args + 5));
}
INT_PTR WINAPI CveEventWrite_MWAI(INT_PTR* args){
    return (INT_PTR)CveEventWrite((PCWSTR)*(args + 0), (PCWSTR)*(args + 1));
}
INT_PTR WINAPI CreatePrivateNamespaceW_MWAI(INT_PTR* args){
    return (INT_PTR)CreatePrivateNamespaceW((LPSECURITY_ATTRIBUTES)*(args + 0), (LPVOID)*(args + 1), (LPCWSTR)*(args + 2));
}
INT_PTR WINAPI OpenPrivateNamespaceW_MWAI(INT_PTR* args){
    return (INT_PTR)OpenPrivateNamespaceW((LPVOID)*(args + 0), (LPCWSTR)*(args + 1));
}
INT_PTR WINAPI ClosePrivateNamespace_MWAI(INT_PTR* args){
    return (INT_PTR)ClosePrivateNamespace((HANDLE)*(args + 0), (ULONG)*(args + 1));
}
INT_PTR WINAPI CreateBoundaryDescriptorW_MWAI(INT_PTR* args){
    return (INT_PTR)CreateBoundaryDescriptorW((LPCWSTR)*(args + 0), (ULONG)*(args + 1));
}
INT_PTR WINAPI AddSIDToBoundaryDescriptor_MWAI(INT_PTR* args){
    return (INT_PTR)AddSIDToBoundaryDescriptor((HANDLE*)*(args + 0), (PSID)*(args + 1));
}
INT_PTR WINAPI DeleteBoundaryDescriptor_MWAI(INT_PTR* args){
    DeleteBoundaryDescriptor((HANDLE)*(args + 0));
    return 0;
}
INT_PTR WINAPI GetNumaHighestNodeNumber_MWAI(INT_PTR* args){
    return (INT_PTR)GetNumaHighestNodeNumber((PULONG)*(args + 0));
}
INT_PTR WINAPI GetNumaNodeProcessorMaskEx_MWAI(INT_PTR* args){
    return (INT_PTR)GetNumaNodeProcessorMaskEx((USHORT)*(args + 0), (PGROUP_AFFINITY)*(args + 1));
}
INT_PTR WINAPI GetNumaNodeProcessorMask2_MWAI(INT_PTR* args){
    return (INT_PTR)GetNumaNodeProcessorMask2((USHORT)*(args + 0), (PGROUP_AFFINITY)*(args + 1), (USHORT)*(args + 2), (PUSHORT)*(args + 3));
}
INT_PTR WINAPI GetNumaProximityNodeEx_MWAI(INT_PTR* args){
    return (INT_PTR)GetNumaProximityNodeEx((ULONG)*(args + 0), (PUSHORT)*(args + 1));
}
INT_PTR WINAPI GetProcessGroupAffinity_MWAI(INT_PTR* args){
    return (INT_PTR)GetProcessGroupAffinity((HANDLE)*(args + 0), (PUSHORT)*(args + 1), (PUSHORT)*(args + 2));
}
INT_PTR WINAPI GetThreadGroupAffinity_MWAI(INT_PTR* args){
    return (INT_PTR)GetThreadGroupAffinity((HANDLE)*(args + 0), (PGROUP_AFFINITY)*(args + 1));
}
INT_PTR WINAPI SetThreadGroupAffinity_MWAI(INT_PTR* args){
    return (INT_PTR)SetThreadGroupAffinity((HANDLE)*(args + 0), (const GROUP_AFFINITY*)*(args + 1), (PGROUP_AFFINITY)*(args + 2));
}
INT_PTR WINAPI GetAppContainerNamedObjectPath_MWAI(INT_PTR* args){
    return (INT_PTR)GetAppContainerNamedObjectPath((HANDLE)*(args + 0), (PSID)*(args + 1), (ULONG)*(args + 2), (LPWSTR)*(args + 3), (PULONG)*(args + 4));
}
INT_PTR WINAPI QueryThreadCycleTime_MWAI(INT_PTR* args){
    return (INT_PTR)QueryThreadCycleTime((HANDLE)*(args + 0), (PULONG64)*(args + 1));
}
INT_PTR WINAPI QueryProcessCycleTime_MWAI(INT_PTR* args){
    return (INT_PTR)QueryProcessCycleTime((HANDLE)*(args + 0), (PULONG64)*(args + 1));
}
INT_PTR WINAPI QueryIdleProcessorCycleTime_MWAI(INT_PTR* args){
    return (INT_PTR)QueryIdleProcessorCycleTime((PULONG)*(args + 0), (PULONG64)*(args + 1));
}
INT_PTR WINAPI QueryIdleProcessorCycleTimeEx_MWAI(INT_PTR* args){
    return (INT_PTR)QueryIdleProcessorCycleTimeEx((USHORT)*(args + 0), (PULONG)*(args + 1), (PULONG64)*(args + 2));
}
INT_PTR WINAPI QueryUnbiasedInterruptTime_MWAI(INT_PTR* args){
    return (INT_PTR)QueryUnbiasedInterruptTime((PULONGLONG)*(args + 0));
}
INT_PTR WINAPI GlobalUnlock_MWAI(INT_PTR* args){
    return (INT_PTR)GlobalUnlock((HGLOBAL)*(args + 0));
}
INT_PTR WINAPI GlobalLock_MWAI(INT_PTR* args){
    return (INT_PTR)GlobalLock((HGLOBAL)*(args + 0));
}
INT_PTR WINAPI GlobalFlags_MWAI(INT_PTR* args){
    return (INT_PTR)GlobalFlags((HGLOBAL)*(args + 0));
}
INT_PTR WINAPI GlobalHandle_MWAI(INT_PTR* args){
    return (INT_PTR)GlobalHandle((LPCVOID)*(args + 0));
}
INT_PTR WINAPI GlobalFree_MWAI(INT_PTR* args){
    return (INT_PTR)GlobalFree((HGLOBAL)*(args + 0));
}
INT_PTR WINAPI GlobalFix_MWAI(INT_PTR* args){
    GlobalFix((HGLOBAL)*(args + 0));
    return 0;
}
INT_PTR WINAPI GlobalUnfix_MWAI(INT_PTR* args){
    GlobalUnfix((HGLOBAL)*(args + 0));
    return 0;
}
INT_PTR WINAPI GlobalWire_MWAI(INT_PTR* args){
    return (INT_PTR)GlobalWire((HGLOBAL)*(args + 0));
}
INT_PTR WINAPI GlobalUnWire_MWAI(INT_PTR* args){
    return (INT_PTR)GlobalUnWire((HGLOBAL)*(args + 0));
}
INT_PTR WINAPI GlobalMemoryStatus_MWAI(INT_PTR* args){
    GlobalMemoryStatus((LPMEMORYSTATUS)*(args + 0));
    return 0;
}
INT_PTR WINAPI LocalLock_MWAI(INT_PTR* args){
    return (INT_PTR)LocalLock((HLOCAL)*(args + 0));
}
INT_PTR WINAPI LocalHandle_MWAI(INT_PTR* args){
    return (INT_PTR)LocalHandle((LPCVOID)*(args + 0));
}
INT_PTR WINAPI LocalUnlock_MWAI(INT_PTR* args){
    return (INT_PTR)LocalUnlock((HLOCAL)*(args + 0));
}
INT_PTR WINAPI LocalFlags_MWAI(INT_PTR* args){
    return (INT_PTR)LocalFlags((HLOCAL)*(args + 0));
}
INT_PTR WINAPI LocalFree_MWAI(INT_PTR* args){
    return (INT_PTR)LocalFree((HLOCAL)*(args + 0));
}
INT_PTR WINAPI GetBinaryTypeA_MWAI(INT_PTR* args){
    return (INT_PTR)GetBinaryTypeA((LPCSTR)*(args + 0), (LPDWORD)*(args + 1));
}
INT_PTR WINAPI GetBinaryTypeW_MWAI(INT_PTR* args){
    return (INT_PTR)GetBinaryTypeW((LPCWSTR)*(args + 0), (LPDWORD)*(args + 1));
}
INT_PTR WINAPI GetShortPathNameA_MWAI(INT_PTR* args){
    return (INT_PTR)GetShortPathNameA((LPCSTR)*(args + 0), (LPSTR)*(args + 1), (DWORD)*(args + 2));
}
INT_PTR WINAPI GetLongPathNameTransactedA_MWAI(INT_PTR* args){
    return (INT_PTR)GetLongPathNameTransactedA((LPCSTR)*(args + 0), (LPSTR)*(args + 1), (DWORD)*(args + 2), (HANDLE)*(args + 3));
}
INT_PTR WINAPI GetLongPathNameTransactedW_MWAI(INT_PTR* args){
    return (INT_PTR)GetLongPathNameTransactedW((LPCWSTR)*(args + 0), (LPWSTR)*(args + 1), (DWORD)*(args + 2), (HANDLE)*(args + 3));
}
INT_PTR WINAPI GetProcessAffinityMask_MWAI(INT_PTR* args){
    return (INT_PTR)GetProcessAffinityMask((HANDLE)*(args + 0), (PDWORD_PTR)*(args + 1), (PDWORD_PTR)*(args + 2));
}
INT_PTR WINAPI SetProcessAffinityMask_MWAI(INT_PTR* args){
    return (INT_PTR)SetProcessAffinityMask((HANDLE)*(args + 0), (DWORD_PTR)*(args + 1));
}
INT_PTR WINAPI GetProcessIoCounters_MWAI(INT_PTR* args){
    return (INT_PTR)GetProcessIoCounters((HANDLE)*(args + 0), (PIO_COUNTERS)*(args + 1));
}
INT_PTR WINAPI FatalExit_MWAI(INT_PTR* args){
    FatalExit((int)*(args + 0));
    return 0;
}
INT_PTR WINAPI SetEnvironmentStringsA_MWAI(INT_PTR* args){
    return (INT_PTR)SetEnvironmentStringsA((LPCH)*(args + 0));
}
INT_PTR WINAPI SwitchToFiber_MWAI(INT_PTR* args){
    SwitchToFiber((LPVOID)*(args + 0));
    return 0;
}
INT_PTR WINAPI DeleteFiber_MWAI(INT_PTR* args){
    DeleteFiber((LPVOID)*(args + 0));
    return 0;
}
INT_PTR WINAPI ConvertFiberToThread_MWAI(INT_PTR* args){
    return (INT_PTR)ConvertFiberToThread();
}
INT_PTR WINAPI ConvertThreadToFiberEx_MWAI(INT_PTR* args){
    return (INT_PTR)ConvertThreadToFiberEx((LPVOID)*(args + 0), (DWORD)*(args + 1));
}
INT_PTR WINAPI ConvertThreadToFiber_MWAI(INT_PTR* args){
    return (INT_PTR)ConvertThreadToFiber((LPVOID)*(args + 0));
}
INT_PTR WINAPI CreateUmsCompletionList_MWAI(INT_PTR* args){
    return (INT_PTR)CreateUmsCompletionList((PUMS_COMPLETION_LIST*)*(args + 0));
}
INT_PTR WINAPI DequeueUmsCompletionListItems_MWAI(INT_PTR* args){
    return (INT_PTR)DequeueUmsCompletionListItems((PUMS_COMPLETION_LIST)*(args + 0), (DWORD)*(args + 1), (PUMS_CONTEXT*)*(args + 2));
}
INT_PTR WINAPI GetUmsCompletionListEvent_MWAI(INT_PTR* args){
    return (INT_PTR)GetUmsCompletionListEvent((PUMS_COMPLETION_LIST)*(args + 0), (PHANDLE)*(args + 1));
}
INT_PTR WINAPI UmsThreadYield_MWAI(INT_PTR* args){
    return (INT_PTR)UmsThreadYield((PVOID)*(args + 0));
}
INT_PTR WINAPI DeleteUmsCompletionList_MWAI(INT_PTR* args){
    return (INT_PTR)DeleteUmsCompletionList((PUMS_COMPLETION_LIST)*(args + 0));
}
INT_PTR WINAPI CreateUmsThreadContext_MWAI(INT_PTR* args){
    return (INT_PTR)CreateUmsThreadContext((PUMS_CONTEXT *)*(args + 0));
}
INT_PTR WINAPI EnterUmsSchedulingMode_MWAI(INT_PTR* args){
    return (INT_PTR)EnterUmsSchedulingMode((PUMS_SCHEDULER_STARTUP_INFO)*(args + 0));
}
INT_PTR WINAPI GetUmsSystemThreadInformation_MWAI(INT_PTR* args){
    return (INT_PTR)GetUmsSystemThreadInformation((HANDLE)*(args + 0), (PUMS_SYSTEM_THREAD_INFORMATION)*(args + 1));
}
INT_PTR WINAPI SetThreadAffinityMask_MWAI(INT_PTR* args){
    return (INT_PTR)SetThreadAffinityMask((HANDLE)*(args + 0), (DWORD_PTR)*(args + 1));
}
INT_PTR WINAPI SetProcessDEPPolicy_MWAI(INT_PTR* args){
    return (INT_PTR)SetProcessDEPPolicy((DWORD)*(args + 0));
}
INT_PTR WINAPI GetProcessDEPPolicy_MWAI(INT_PTR* args){
    return (INT_PTR)GetProcessDEPPolicy((HANDLE)*(args + 0), (LPDWORD)*(args + 1), (PBOOL)*(args + 2));
}
INT_PTR WINAPI IsSystemResumeAutomatic_MWAI(INT_PTR* args){
    return (INT_PTR)IsSystemResumeAutomatic();
}
INT_PTR WINAPI GetThreadSelectorEntry_MWAI(INT_PTR* args){
    return (INT_PTR)GetThreadSelectorEntry((HANDLE)*(args + 0), (DWORD)*(args + 1), (LPLDT_ENTRY)*(args + 2));
}
INT_PTR WINAPI SetThreadExecutionState_MWAI(INT_PTR* args){
    return (INT_PTR)SetThreadExecutionState((EXECUTION_STATE)*(args + 0));
}
INT_PTR WINAPI PowerSetRequest_MWAI(INT_PTR* args){
    return (INT_PTR)PowerSetRequest((HANDLE)*(args + 0), (POWER_REQUEST_TYPE)*(args + 1));
}
INT_PTR WINAPI PowerClearRequest_MWAI(INT_PTR* args){
    return (INT_PTR)PowerClearRequest((HANDLE)*(args + 0), (POWER_REQUEST_TYPE)*(args + 1));
}
INT_PTR WINAPI SetFileCompletionNotificationModes_MWAI(INT_PTR* args){
    return (INT_PTR)SetFileCompletionNotificationModes((HANDLE)*(args + 0), (UCHAR)*(args + 1));
}
INT_PTR WINAPI Wow64GetThreadSelectorEntry_MWAI(INT_PTR* args){
    return (INT_PTR)Wow64GetThreadSelectorEntry((HANDLE)*(args + 0), (DWORD)*(args + 1), (PWOW64_LDT_ENTRY)*(args + 2));
}
INT_PTR WINAPI DebugSetProcessKillOnExit_MWAI(INT_PTR* args){
    return (INT_PTR)DebugSetProcessKillOnExit((BOOL)*(args + 0));
}
INT_PTR WINAPI DebugBreakProcess_MWAI(INT_PTR* args){
    return (INT_PTR)DebugBreakProcess((HANDLE)*(args + 0));
}
INT_PTR WINAPI PulseEvent_MWAI(INT_PTR* args){
    return (INT_PTR)PulseEvent((HANDLE)*(args + 0));
}
INT_PTR WINAPI GlobalDeleteAtom_MWAI(INT_PTR* args){
    return (INT_PTR)GlobalDeleteAtom((ATOM)*(args + 0));
}
INT_PTR WINAPI InitAtomTable_MWAI(INT_PTR* args){
    return (INT_PTR)InitAtomTable((DWORD)*(args + 0));
}
INT_PTR WINAPI DeleteAtom_MWAI(INT_PTR* args){
    return (INT_PTR)DeleteAtom((ATOM)*(args + 0));
}
INT_PTR WINAPI SetHandleCount_MWAI(INT_PTR* args){
    return (INT_PTR)SetHandleCount((UINT)*(args + 0));
}
INT_PTR WINAPI RequestDeviceWakeup_MWAI(INT_PTR* args){
    return (INT_PTR)RequestDeviceWakeup((HANDLE)*(args + 0));
}
INT_PTR WINAPI CancelDeviceWakeupRequest_MWAI(INT_PTR* args){
    return (INT_PTR)CancelDeviceWakeupRequest((HANDLE)*(args + 0));
}
INT_PTR WINAPI GetDevicePowerState_MWAI(INT_PTR* args){
    return (INT_PTR)GetDevicePowerState((HANDLE)*(args + 0), (BOOL *)*(args + 1));
}
INT_PTR WINAPI SetMessageWaitingIndicator_MWAI(INT_PTR* args){
    return (INT_PTR)SetMessageWaitingIndicator((HANDLE)*(args + 0), (ULONG)*(args + 1));
}
INT_PTR WINAPI SetFileShortNameA_MWAI(INT_PTR* args){
    return (INT_PTR)SetFileShortNameA((HANDLE)*(args + 0), (LPCSTR)*(args + 1));
}
INT_PTR WINAPI SetFileShortNameW_MWAI(INT_PTR* args){
    return (INT_PTR)SetFileShortNameW((HANDLE)*(args + 0), (LPCWSTR)*(args + 1));
}
INT_PTR WINAPI LoadModule_MWAI(INT_PTR* args){
    return (INT_PTR)LoadModule((LPCSTR)*(args + 0), (LPVOID)*(args + 1));
}
INT_PTR WINAPI WinExec_MWAI(INT_PTR* args){
    return (INT_PTR)WinExec((LPCSTR)*(args + 0), (UINT)*(args + 1));
}
INT_PTR WINAPI ClearCommBreak_MWAI(INT_PTR* args){
    return (INT_PTR)ClearCommBreak((HANDLE)*(args + 0));
}
INT_PTR WINAPI ClearCommError_MWAI(INT_PTR* args){
    return (INT_PTR)ClearCommError((HANDLE)*(args + 0), (LPDWORD)*(args + 1), (LPCOMSTAT)*(args + 2));
}
INT_PTR WINAPI SetupComm_MWAI(INT_PTR* args){
    return (INT_PTR)SetupComm((HANDLE)*(args + 0), (DWORD)*(args + 1), (DWORD)*(args + 2));
}
INT_PTR WINAPI EscapeCommFunction_MWAI(INT_PTR* args){
    return (INT_PTR)EscapeCommFunction((HANDLE)*(args + 0), (DWORD)*(args + 1));
}
INT_PTR WINAPI GetCommConfig_MWAI(INT_PTR* args){
    return (INT_PTR)GetCommConfig((HANDLE)*(args + 0), (LPCOMMCONFIG)*(args + 1), (LPDWORD)*(args + 2));
}
INT_PTR WINAPI GetCommMask_MWAI(INT_PTR* args){
    return (INT_PTR)GetCommMask((HANDLE)*(args + 0), (LPDWORD)*(args + 1));
}
INT_PTR WINAPI GetCommProperties_MWAI(INT_PTR* args){
    return (INT_PTR)GetCommProperties((HANDLE)*(args + 0), (LPCOMMPROP)*(args + 1));
}
INT_PTR WINAPI GetCommModemStatus_MWAI(INT_PTR* args){
    return (INT_PTR)GetCommModemStatus((HANDLE)*(args + 0), (LPDWORD)*(args + 1));
}
INT_PTR WINAPI GetCommState_MWAI(INT_PTR* args){
    return (INT_PTR)GetCommState((HANDLE)*(args + 0), (LPDCB)*(args + 1));
}
INT_PTR WINAPI GetCommTimeouts_MWAI(INT_PTR* args){
    return (INT_PTR)GetCommTimeouts((HANDLE)*(args + 0), (LPCOMMTIMEOUTS)*(args + 1));
}
INT_PTR WINAPI PurgeComm_MWAI(INT_PTR* args){
    return (INT_PTR)PurgeComm((HANDLE)*(args + 0), (DWORD)*(args + 1));
}
INT_PTR WINAPI SetCommBreak_MWAI(INT_PTR* args){
    return (INT_PTR)SetCommBreak((HANDLE)*(args + 0));
}
INT_PTR WINAPI SetCommConfig_MWAI(INT_PTR* args){
    return (INT_PTR)SetCommConfig((HANDLE)*(args + 0), (LPCOMMCONFIG)*(args + 1), (DWORD)*(args + 2));
}
INT_PTR WINAPI SetCommMask_MWAI(INT_PTR* args){
    return (INT_PTR)SetCommMask((HANDLE)*(args + 0), (DWORD)*(args + 1));
}
INT_PTR WINAPI SetCommState_MWAI(INT_PTR* args){
    return (INT_PTR)SetCommState((HANDLE)*(args + 0), (LPDCB)*(args + 1));
}
INT_PTR WINAPI SetCommTimeouts_MWAI(INT_PTR* args){
    return (INT_PTR)SetCommTimeouts((HANDLE)*(args + 0), (LPCOMMTIMEOUTS)*(args + 1));
}
INT_PTR WINAPI TransmitCommChar_MWAI(INT_PTR* args){
    return (INT_PTR)TransmitCommChar((HANDLE)*(args + 0), (char)*(args + 1));
}
INT_PTR WINAPI WaitCommEvent_MWAI(INT_PTR* args){
    return (INT_PTR)WaitCommEvent((HANDLE)*(args + 0), (LPDWORD)*(args + 1), (LPOVERLAPPED)*(args + 2));
}
INT_PTR WINAPI SetTapePosition_MWAI(INT_PTR* args){
    return (INT_PTR)SetTapePosition((HANDLE)*(args + 0), (DWORD)*(args + 1), (DWORD)*(args + 2), (DWORD)*(args + 3), (DWORD)*(args + 4), (BOOL)*(args + 5));
}
INT_PTR WINAPI GetTapePosition_MWAI(INT_PTR* args){
    return (INT_PTR)GetTapePosition((HANDLE)*(args + 0), (DWORD)*(args + 1), (LPDWORD)*(args + 2), (LPDWORD)*(args + 3), (LPDWORD)*(args + 4));
}
INT_PTR WINAPI PrepareTape_MWAI(INT_PTR* args){
    return (INT_PTR)PrepareTape((HANDLE)*(args + 0), (DWORD)*(args + 1), (BOOL)*(args + 2));
}
INT_PTR WINAPI EraseTape_MWAI(INT_PTR* args){
    return (INT_PTR)EraseTape((HANDLE)*(args + 0), (DWORD)*(args + 1), (BOOL)*(args + 2));
}
INT_PTR WINAPI CreateTapePartition_MWAI(INT_PTR* args){
    return (INT_PTR)CreateTapePartition((HANDLE)*(args + 0), (DWORD)*(args + 1), (DWORD)*(args + 2), (DWORD)*(args + 3));
}
INT_PTR WINAPI WriteTapemark_MWAI(INT_PTR* args){
    return (INT_PTR)WriteTapemark((HANDLE)*(args + 0), (DWORD)*(args + 1), (DWORD)*(args + 2), (BOOL)*(args + 3));
}
INT_PTR WINAPI GetTapeStatus_MWAI(INT_PTR* args){
    return (INT_PTR)GetTapeStatus((HANDLE)*(args + 0));
}
INT_PTR WINAPI GetTapeParameters_MWAI(INT_PTR* args){
    return (INT_PTR)GetTapeParameters((HANDLE)*(args + 0), (DWORD)*(args + 1), (LPDWORD)*(args + 2), (LPVOID)*(args + 3));
}
INT_PTR WINAPI SetTapeParameters_MWAI(INT_PTR* args){
    return (INT_PTR)SetTapeParameters((HANDLE)*(args + 0), (DWORD)*(args + 1), (LPVOID)*(args + 2));
}
INT_PTR WINAPI MulDiv_MWAI(INT_PTR* args){
    return (INT_PTR)MulDiv((int)*(args + 0), (int)*(args + 1), (int)*(args + 2));
}
INT_PTR WINAPI GetSystemRegistryQuota_MWAI(INT_PTR* args){
    return (INT_PTR)GetSystemRegistryQuota((PDWORD)*(args + 0), (PDWORD)*(args + 1));
}
INT_PTR WINAPI FileTimeToDosDateTime_MWAI(INT_PTR* args){
    return (INT_PTR)FileTimeToDosDateTime((const FILETIME *)*(args + 0), (LPWORD)*(args + 1), (LPWORD)*(args + 2));
}
INT_PTR WINAPI FormatMessageA_MWAI(INT_PTR* args){
    return (INT_PTR)FormatMessageA((DWORD)*(args + 0), (LPCVOID)*(args + 1), (DWORD)*(args + 2), (DWORD)*(args + 3), (LPSTR)*(args + 4), (DWORD)*(args + 5), (va_list *)*(args + 6));
}
INT_PTR WINAPI FormatMessageW_MWAI(INT_PTR* args){
    return (INT_PTR)FormatMessageW((DWORD)*(args + 0), (LPCVOID)*(args + 1), (DWORD)*(args + 2), (DWORD)*(args + 3), (LPWSTR)*(args + 4), (DWORD)*(args + 5), (va_list *)*(args + 6));
}
INT_PTR WINAPI CreateMailslotA_MWAI(INT_PTR* args){
    return (INT_PTR)CreateMailslotA((LPCSTR)*(args + 0), (DWORD)*(args + 1), (DWORD)*(args + 2), (LPSECURITY_ATTRIBUTES)*(args + 3));
}
INT_PTR WINAPI CreateMailslotW_MWAI(INT_PTR* args){
    return (INT_PTR)CreateMailslotW((LPCWSTR)*(args + 0), (DWORD)*(args + 1), (DWORD)*(args + 2), (LPSECURITY_ATTRIBUTES)*(args + 3));
}
INT_PTR WINAPI GetMailslotInfo_MWAI(INT_PTR* args){
    return (INT_PTR)GetMailslotInfo((HANDLE)*(args + 0), (LPDWORD)*(args + 1), (LPDWORD)*(args + 2), (LPDWORD)*(args + 3), (LPDWORD)*(args + 4));
}
INT_PTR WINAPI SetMailslotInfo_MWAI(INT_PTR* args){
    return (INT_PTR)SetMailslotInfo((HANDLE)*(args + 0), (DWORD)*(args + 1));
}
INT_PTR WINAPI EncryptFileA_MWAI(INT_PTR* args){
    return (INT_PTR)EncryptFileA((LPCSTR)*(args + 0));
}
INT_PTR WINAPI EncryptFileW_MWAI(INT_PTR* args){
    return (INT_PTR)EncryptFileW((LPCWSTR)*(args + 0));
}
INT_PTR WINAPI DecryptFileA_MWAI(INT_PTR* args){
    return (INT_PTR)DecryptFileA((LPCSTR)*(args + 0), (DWORD)*(args + 1));
}
INT_PTR WINAPI DecryptFileW_MWAI(INT_PTR* args){
    return (INT_PTR)DecryptFileW((LPCWSTR)*(args + 0), (DWORD)*(args + 1));
}
INT_PTR WINAPI FileEncryptionStatusA_MWAI(INT_PTR* args){
    return (INT_PTR)FileEncryptionStatusA((LPCSTR)*(args + 0), (LPDWORD)*(args + 1));
}
INT_PTR WINAPI FileEncryptionStatusW_MWAI(INT_PTR* args){
    return (INT_PTR)FileEncryptionStatusW((LPCWSTR)*(args + 0), (LPDWORD)*(args + 1));
}
INT_PTR WINAPI OpenEncryptedFileRawA_MWAI(INT_PTR* args){
    return (INT_PTR)OpenEncryptedFileRawA((LPCSTR)*(args + 0), (ULONG)*(args + 1), (PVOID   *)*(args + 2));
}
INT_PTR WINAPI OpenEncryptedFileRawW_MWAI(INT_PTR* args){
    return (INT_PTR)OpenEncryptedFileRawW((LPCWSTR)*(args + 0), (ULONG)*(args + 1), (PVOID   *)*(args + 2));
}
INT_PTR WINAPI ReadEncryptedFileRaw_MWAI(INT_PTR* args){
    return (INT_PTR)ReadEncryptedFileRaw((PFE_EXPORT_FUNC)*(args + 0), (PVOID)*(args + 1), (PVOID)*(args + 2));
}
INT_PTR WINAPI WriteEncryptedFileRaw_MWAI(INT_PTR* args){
    return (INT_PTR)WriteEncryptedFileRaw((PFE_IMPORT_FUNC)*(args + 0), (PVOID)*(args + 1), (PVOID)*(args + 2));
}
INT_PTR WINAPI CloseEncryptedFileRaw_MWAI(INT_PTR* args){
    CloseEncryptedFileRaw((PVOID)*(args + 0));
    return 0;
}
INT_PTR WINAPI lstrcmpA_MWAI(INT_PTR* args){
    return (INT_PTR)lstrcmpA((LPCSTR)*(args + 0), (LPCSTR)*(args + 1));
}
INT_PTR WINAPI lstrcmpW_MWAI(INT_PTR* args){
    return (INT_PTR)lstrcmpW((LPCWSTR)*(args + 0), (LPCWSTR)*(args + 1));
}
INT_PTR WINAPI lstrcmpiA_MWAI(INT_PTR* args){
    return (INT_PTR)lstrcmpiA((LPCSTR)*(args + 0), (LPCSTR)*(args + 1));
}
INT_PTR WINAPI lstrcmpiW_MWAI(INT_PTR* args){
    return (INT_PTR)lstrcmpiW((LPCWSTR)*(args + 0), (LPCWSTR)*(args + 1));
}
INT_PTR WINAPI lstrcpynA_MWAI(INT_PTR* args){
    return (INT_PTR)lstrcpynA((LPSTR)*(args + 0), (LPCSTR)*(args + 1), (int)*(args + 2));
}
INT_PTR WINAPI lstrcpynW_MWAI(INT_PTR* args){
    return (INT_PTR)lstrcpynW((LPWSTR)*(args + 0), (LPCWSTR)*(args + 1), (int)*(args + 2));
}
INT_PTR WINAPI lstrcpyA_MWAI(INT_PTR* args){
    return (INT_PTR)lstrcpyA((LPSTR)*(args + 0), (LPCSTR)*(args + 1));
}
INT_PTR WINAPI lstrcpyW_MWAI(INT_PTR* args){
    return (INT_PTR)lstrcpyW((LPWSTR)*(args + 0), (LPCWSTR)*(args + 1));
}
INT_PTR WINAPI lstrcatA_MWAI(INT_PTR* args){
    return (INT_PTR)lstrcatA((LPSTR)*(args + 0), (LPCSTR)*(args + 1));
}
INT_PTR WINAPI lstrcatW_MWAI(INT_PTR* args){
    return (INT_PTR)lstrcatW((LPWSTR)*(args + 0), (LPCWSTR)*(args + 1));
}
INT_PTR WINAPI lstrlenA_MWAI(INT_PTR* args){
    return (INT_PTR)lstrlenA((LPCSTR)*(args + 0));
}
INT_PTR WINAPI lstrlenW_MWAI(INT_PTR* args){
    return (INT_PTR)lstrlenW((LPCWSTR)*(args + 0));
}
INT_PTR WINAPI OpenFile_MWAI(INT_PTR* args){
    return (INT_PTR)OpenFile((LPCSTR)*(args + 0), (LPOFSTRUCT)*(args + 1), (UINT)*(args + 2));
}
INT_PTR WINAPI IsTextUnicode_MWAI(INT_PTR* args){
    return (INT_PTR)IsTextUnicode((const void*)*(args + 0), (int)*(args + 1), (LPINT)*(args + 2));
}
INT_PTR WINAPI BackupRead_MWAI(INT_PTR* args){
    return (INT_PTR)BackupRead((HANDLE)*(args + 0), (LPBYTE)*(args + 1), (DWORD)*(args + 2), (LPDWORD)*(args + 3), (BOOL)*(args + 4), (BOOL)*(args + 5), (LPVOID *)*(args + 6));
}
INT_PTR WINAPI BackupSeek_MWAI(INT_PTR* args){
    return (INT_PTR)BackupSeek((HANDLE)*(args + 0), (DWORD)*(args + 1), (DWORD)*(args + 2), (LPDWORD)*(args + 3), (LPDWORD)*(args + 4), (LPVOID *)*(args + 5));
}
INT_PTR WINAPI BackupWrite_MWAI(INT_PTR* args){
    return (INT_PTR)BackupWrite((HANDLE)*(args + 0), (LPBYTE)*(args + 1), (DWORD)*(args + 2), (LPDWORD)*(args + 3), (BOOL)*(args + 4), (BOOL)*(args + 5), (LPVOID *)*(args + 6));
}
INT_PTR WINAPI OpenMutexA_MWAI(INT_PTR* args){
    return (INT_PTR)OpenMutexA((DWORD)*(args + 0), (BOOL)*(args + 1), (LPCSTR)*(args + 2));
}
INT_PTR WINAPI CreateSemaphoreA_MWAI(INT_PTR* args){
    return (INT_PTR)CreateSemaphoreA((LPSECURITY_ATTRIBUTES)*(args + 0), (LONG)*(args + 1), (LONG)*(args + 2), (LPCSTR)*(args + 3));
}
INT_PTR WINAPI OpenSemaphoreA_MWAI(INT_PTR* args){
    return (INT_PTR)OpenSemaphoreA((DWORD)*(args + 0), (BOOL)*(args + 1), (LPCSTR)*(args + 2));
}
INT_PTR WINAPI CreateWaitableTimerA_MWAI(INT_PTR* args){
    return (INT_PTR)CreateWaitableTimerA((LPSECURITY_ATTRIBUTES)*(args + 0), (BOOL)*(args + 1), (LPCSTR)*(args + 2));
}
INT_PTR WINAPI OpenWaitableTimerA_MWAI(INT_PTR* args){
    return (INT_PTR)OpenWaitableTimerA((DWORD)*(args + 0), (BOOL)*(args + 1), (LPCSTR)*(args + 2));
}
INT_PTR WINAPI CreateSemaphoreExA_MWAI(INT_PTR* args){
    return (INT_PTR)CreateSemaphoreExA((LPSECURITY_ATTRIBUTES)*(args + 0), (LONG)*(args + 1), (LONG)*(args + 2), (LPCSTR)*(args + 3), (DWORD)*(args + 4), (DWORD)*(args + 5));
}
INT_PTR WINAPI CreateWaitableTimerExA_MWAI(INT_PTR* args){
    return (INT_PTR)CreateWaitableTimerExA((LPSECURITY_ATTRIBUTES)*(args + 0), (LPCSTR)*(args + 1), (DWORD)*(args + 2), (DWORD)*(args + 3));
}
INT_PTR WINAPI CreateFileMappingA_MWAI(INT_PTR* args){
    return (INT_PTR)CreateFileMappingA((HANDLE)*(args + 0), (LPSECURITY_ATTRIBUTES)*(args + 1), (DWORD)*(args + 2), (DWORD)*(args + 3), (DWORD)*(args + 4), (LPCSTR)*(args + 5));
}
INT_PTR WINAPI CreateFileMappingNumaA_MWAI(INT_PTR* args){
    return (INT_PTR)CreateFileMappingNumaA((HANDLE)*(args + 0), (LPSECURITY_ATTRIBUTES)*(args + 1), (DWORD)*(args + 2), (DWORD)*(args + 3), (DWORD)*(args + 4), (LPCSTR)*(args + 5), (DWORD)*(args + 6));
}
INT_PTR WINAPI OpenFileMappingA_MWAI(INT_PTR* args){
    return (INT_PTR)OpenFileMappingA((DWORD)*(args + 0), (BOOL)*(args + 1), (LPCSTR)*(args + 2));
}
INT_PTR WINAPI GetLogicalDriveStringsA_MWAI(INT_PTR* args){
    return (INT_PTR)GetLogicalDriveStringsA((DWORD)*(args + 0), (LPSTR)*(args + 1));
}
INT_PTR WINAPI LoadPackagedLibrary_MWAI(INT_PTR* args){
    return (INT_PTR)LoadPackagedLibrary((LPCWSTR)*(args + 0), (DWORD)*(args + 1));
}
INT_PTR WINAPI QueryFullProcessImageNameA_MWAI(INT_PTR* args){
    return (INT_PTR)QueryFullProcessImageNameA((HANDLE)*(args + 0), (DWORD)*(args + 1), (LPSTR)*(args + 2), (PDWORD)*(args + 3));
}
INT_PTR WINAPI QueryFullProcessImageNameW_MWAI(INT_PTR* args){
    return (INT_PTR)QueryFullProcessImageNameW((HANDLE)*(args + 0), (DWORD)*(args + 1), (LPWSTR)*(args + 2), (PDWORD)*(args + 3));
}
INT_PTR WINAPI GetStartupInfoA_MWAI(INT_PTR* args){
    GetStartupInfoA((LPSTARTUPINFOA)*(args + 0));
    return 0;
}
INT_PTR WINAPI GetFirmwareEnvironmentVariableA_MWAI(INT_PTR* args){
    return (INT_PTR)GetFirmwareEnvironmentVariableA((LPCSTR)*(args + 0), (LPCSTR)*(args + 1), (PVOID)*(args + 2), (DWORD)*(args + 3));
}
INT_PTR WINAPI GetFirmwareEnvironmentVariableW_MWAI(INT_PTR* args){
    return (INT_PTR)GetFirmwareEnvironmentVariableW((LPCWSTR)*(args + 0), (LPCWSTR)*(args + 1), (PVOID)*(args + 2), (DWORD)*(args + 3));
}
INT_PTR WINAPI GetFirmwareEnvironmentVariableExA_MWAI(INT_PTR* args){
    return (INT_PTR)GetFirmwareEnvironmentVariableExA((LPCSTR)*(args + 0), (LPCSTR)*(args + 1), (PVOID)*(args + 2), (DWORD)*(args + 3), (PDWORD)*(args + 4));
}
INT_PTR WINAPI GetFirmwareEnvironmentVariableExW_MWAI(INT_PTR* args){
    return (INT_PTR)GetFirmwareEnvironmentVariableExW((LPCWSTR)*(args + 0), (LPCWSTR)*(args + 1), (PVOID)*(args + 2), (DWORD)*(args + 3), (PDWORD)*(args + 4));
}
INT_PTR WINAPI SetFirmwareEnvironmentVariableA_MWAI(INT_PTR* args){
    return (INT_PTR)SetFirmwareEnvironmentVariableA((LPCSTR)*(args + 0), (LPCSTR)*(args + 1), (PVOID)*(args + 2), (DWORD)*(args + 3));
}
INT_PTR WINAPI SetFirmwareEnvironmentVariableW_MWAI(INT_PTR* args){
    return (INT_PTR)SetFirmwareEnvironmentVariableW((LPCWSTR)*(args + 0), (LPCWSTR)*(args + 1), (PVOID)*(args + 2), (DWORD)*(args + 3));
}
INT_PTR WINAPI SetFirmwareEnvironmentVariableExA_MWAI(INT_PTR* args){
    return (INT_PTR)SetFirmwareEnvironmentVariableExA((LPCSTR)*(args + 0), (LPCSTR)*(args + 1), (PVOID)*(args + 2), (DWORD)*(args + 3), (DWORD)*(args + 4));
}
INT_PTR WINAPI SetFirmwareEnvironmentVariableExW_MWAI(INT_PTR* args){
    return (INT_PTR)SetFirmwareEnvironmentVariableExW((LPCWSTR)*(args + 0), (LPCWSTR)*(args + 1), (PVOID)*(args + 2), (DWORD)*(args + 3), (DWORD)*(args + 4));
}
INT_PTR WINAPI GetFirmwareType_MWAI(INT_PTR* args){
    return (INT_PTR)GetFirmwareType((PFIRMWARE_TYPE)*(args + 0));
}
INT_PTR WINAPI IsNativeVhdBoot_MWAI(INT_PTR* args){
    return (INT_PTR)IsNativeVhdBoot((PBOOL)*(args + 0));
}
INT_PTR WINAPI FindResourceA_MWAI(INT_PTR* args){
    return (INT_PTR)FindResourceA((HMODULE)*(args + 0), (LPCSTR)*(args + 1), (LPCSTR)*(args + 2));
}
INT_PTR WINAPI FindResourceExA_MWAI(INT_PTR* args){
    return (INT_PTR)FindResourceExA((HMODULE)*(args + 0), (LPCSTR)*(args + 1), (LPCSTR)*(args + 2), (WORD)*(args + 3));
}
INT_PTR WINAPI EnumResourceTypesA_MWAI(INT_PTR* args){
    return (INT_PTR)EnumResourceTypesA((HMODULE)*(args + 0), (ENUMRESTYPEPROCA)*(args + 1), (LONG_PTR)*(args + 2));
}
INT_PTR WINAPI EnumResourceTypesW_MWAI(INT_PTR* args){
    return (INT_PTR)EnumResourceTypesW((HMODULE)*(args + 0), (ENUMRESTYPEPROCW)*(args + 1), (LONG_PTR)*(args + 2));
}
INT_PTR WINAPI EnumResourceLanguagesA_MWAI(INT_PTR* args){
    return (INT_PTR)EnumResourceLanguagesA((HMODULE)*(args + 0), (LPCSTR)*(args + 1), (LPCSTR)*(args + 2), (ENUMRESLANGPROCA)*(args + 3), (LONG_PTR)*(args + 4));
}
INT_PTR WINAPI EnumResourceLanguagesW_MWAI(INT_PTR* args){
    return (INT_PTR)EnumResourceLanguagesW((HMODULE)*(args + 0), (LPCWSTR)*(args + 1), (LPCWSTR)*(args + 2), (ENUMRESLANGPROCW)*(args + 3), (LONG_PTR)*(args + 4));
}
INT_PTR WINAPI BeginUpdateResourceA_MWAI(INT_PTR* args){
    return (INT_PTR)BeginUpdateResourceA((LPCSTR)*(args + 0), (BOOL)*(args + 1));
}
INT_PTR WINAPI BeginUpdateResourceW_MWAI(INT_PTR* args){
    return (INT_PTR)BeginUpdateResourceW((LPCWSTR)*(args + 0), (BOOL)*(args + 1));
}
INT_PTR WINAPI UpdateResourceA_MWAI(INT_PTR* args){
    return (INT_PTR)UpdateResourceA((HANDLE)*(args + 0), (LPCSTR)*(args + 1), (LPCSTR)*(args + 2), (WORD)*(args + 3), (LPVOID)*(args + 4), (DWORD)*(args + 5));
}
INT_PTR WINAPI UpdateResourceW_MWAI(INT_PTR* args){
    return (INT_PTR)UpdateResourceW((HANDLE)*(args + 0), (LPCWSTR)*(args + 1), (LPCWSTR)*(args + 2), (WORD)*(args + 3), (LPVOID)*(args + 4), (DWORD)*(args + 5));
}
INT_PTR WINAPI EndUpdateResourceA_MWAI(INT_PTR* args){
    return (INT_PTR)EndUpdateResourceA((HANDLE)*(args + 0), (BOOL)*(args + 1));
}
INT_PTR WINAPI EndUpdateResourceW_MWAI(INT_PTR* args){
    return (INT_PTR)EndUpdateResourceW((HANDLE)*(args + 0), (BOOL)*(args + 1));
}
INT_PTR WINAPI GlobalAddAtomA_MWAI(INT_PTR* args){
    return (INT_PTR)GlobalAddAtomA((LPCSTR)*(args + 0));
}
INT_PTR WINAPI GlobalAddAtomW_MWAI(INT_PTR* args){
    return (INT_PTR)GlobalAddAtomW((LPCWSTR)*(args + 0));
}
INT_PTR WINAPI GlobalAddAtomExA_MWAI(INT_PTR* args){
    return (INT_PTR)GlobalAddAtomExA((LPCSTR)*(args + 0), (DWORD)*(args + 1));
}
INT_PTR WINAPI GlobalAddAtomExW_MWAI(INT_PTR* args){
    return (INT_PTR)GlobalAddAtomExW((LPCWSTR)*(args + 0), (DWORD)*(args + 1));
}
INT_PTR WINAPI GlobalFindAtomA_MWAI(INT_PTR* args){
    return (INT_PTR)GlobalFindAtomA((LPCSTR)*(args + 0));
}
INT_PTR WINAPI GlobalFindAtomW_MWAI(INT_PTR* args){
    return (INT_PTR)GlobalFindAtomW((LPCWSTR)*(args + 0));
}
INT_PTR WINAPI GlobalGetAtomNameA_MWAI(INT_PTR* args){
    return (INT_PTR)GlobalGetAtomNameA((ATOM)*(args + 0), (LPSTR)*(args + 1), (int)*(args + 2));
}
INT_PTR WINAPI GlobalGetAtomNameW_MWAI(INT_PTR* args){
    return (INT_PTR)GlobalGetAtomNameW((ATOM)*(args + 0), (LPWSTR)*(args + 1), (int)*(args + 2));
}
INT_PTR WINAPI AddAtomA_MWAI(INT_PTR* args){
    return (INT_PTR)AddAtomA((LPCSTR)*(args + 0));
}
INT_PTR WINAPI AddAtomW_MWAI(INT_PTR* args){
    return (INT_PTR)AddAtomW((LPCWSTR)*(args + 0));
}
INT_PTR WINAPI FindAtomA_MWAI(INT_PTR* args){
    return (INT_PTR)FindAtomA((LPCSTR)*(args + 0));
}
INT_PTR WINAPI FindAtomW_MWAI(INT_PTR* args){
    return (INT_PTR)FindAtomW((LPCWSTR)*(args + 0));
}
INT_PTR WINAPI GetAtomNameA_MWAI(INT_PTR* args){
    return (INT_PTR)GetAtomNameA((ATOM)*(args + 0), (LPSTR)*(args + 1), (int)*(args + 2));
}
INT_PTR WINAPI GetAtomNameW_MWAI(INT_PTR* args){
    return (INT_PTR)GetAtomNameW((ATOM)*(args + 0), (LPWSTR)*(args + 1), (int)*(args + 2));
}
INT_PTR WINAPI GetProfileIntA_MWAI(INT_PTR* args){
    return (INT_PTR)GetProfileIntA((LPCSTR)*(args + 0), (LPCSTR)*(args + 1), (INT)*(args + 2));
}
INT_PTR WINAPI GetProfileIntW_MWAI(INT_PTR* args){
    return (INT_PTR)GetProfileIntW((LPCWSTR)*(args + 0), (LPCWSTR)*(args + 1), (INT)*(args + 2));
}
INT_PTR WINAPI GetProfileStringA_MWAI(INT_PTR* args){
    return (INT_PTR)GetProfileStringA((LPCSTR)*(args + 0), (LPCSTR)*(args + 1), (LPCSTR)*(args + 2), (LPSTR)*(args + 3), (DWORD)*(args + 4));
}
INT_PTR WINAPI GetProfileStringW_MWAI(INT_PTR* args){
    return (INT_PTR)GetProfileStringW((LPCWSTR)*(args + 0), (LPCWSTR)*(args + 1), (LPCWSTR)*(args + 2), (LPWSTR)*(args + 3), (DWORD)*(args + 4));
}
INT_PTR WINAPI WriteProfileStringA_MWAI(INT_PTR* args){
    return (INT_PTR)WriteProfileStringA((LPCSTR)*(args + 0), (LPCSTR)*(args + 1), (LPCSTR)*(args + 2));
}
INT_PTR WINAPI WriteProfileStringW_MWAI(INT_PTR* args){
    return (INT_PTR)WriteProfileStringW((LPCWSTR)*(args + 0), (LPCWSTR)*(args + 1), (LPCWSTR)*(args + 2));
}
INT_PTR WINAPI GetProfileSectionA_MWAI(INT_PTR* args){
    return (INT_PTR)GetProfileSectionA((LPCSTR)*(args + 0), (LPSTR)*(args + 1), (DWORD)*(args + 2));
}
INT_PTR WINAPI GetProfileSectionW_MWAI(INT_PTR* args){
    return (INT_PTR)GetProfileSectionW((LPCWSTR)*(args + 0), (LPWSTR)*(args + 1), (DWORD)*(args + 2));
}
INT_PTR WINAPI WriteProfileSectionA_MWAI(INT_PTR* args){
    return (INT_PTR)WriteProfileSectionA((LPCSTR)*(args + 0), (LPCSTR)*(args + 1));
}
INT_PTR WINAPI WriteProfileSectionW_MWAI(INT_PTR* args){
    return (INT_PTR)WriteProfileSectionW((LPCWSTR)*(args + 0), (LPCWSTR)*(args + 1));
}
INT_PTR WINAPI GetPrivateProfileIntA_MWAI(INT_PTR* args){
    return (INT_PTR)GetPrivateProfileIntA((LPCSTR)*(args + 0), (LPCSTR)*(args + 1), (INT)*(args + 2), (LPCSTR)*(args + 3));
}
INT_PTR WINAPI GetPrivateProfileIntW_MWAI(INT_PTR* args){
    return (INT_PTR)GetPrivateProfileIntW((LPCWSTR)*(args + 0), (LPCWSTR)*(args + 1), (INT)*(args + 2), (LPCWSTR)*(args + 3));
}
INT_PTR WINAPI GetPrivateProfileStringA_MWAI(INT_PTR* args){
    return (INT_PTR)GetPrivateProfileStringA((LPCSTR)*(args + 0), (LPCSTR)*(args + 1), (LPCSTR)*(args + 2), (LPSTR)*(args + 3), (DWORD)*(args + 4), (LPCSTR)*(args + 5));
}
INT_PTR WINAPI GetPrivateProfileStringW_MWAI(INT_PTR* args){
    return (INT_PTR)GetPrivateProfileStringW((LPCWSTR)*(args + 0), (LPCWSTR)*(args + 1), (LPCWSTR)*(args + 2), (LPWSTR)*(args + 3), (DWORD)*(args + 4), (LPCWSTR)*(args + 5));
}
INT_PTR WINAPI WritePrivateProfileStringA_MWAI(INT_PTR* args){
    return (INT_PTR)WritePrivateProfileStringA((LPCSTR)*(args + 0), (LPCSTR)*(args + 1), (LPCSTR)*(args + 2), (LPCSTR)*(args + 3));
}
INT_PTR WINAPI WritePrivateProfileStringW_MWAI(INT_PTR* args){
    return (INT_PTR)WritePrivateProfileStringW((LPCWSTR)*(args + 0), (LPCWSTR)*(args + 1), (LPCWSTR)*(args + 2), (LPCWSTR)*(args + 3));
}
INT_PTR WINAPI GetPrivateProfileSectionA_MWAI(INT_PTR* args){
    return (INT_PTR)GetPrivateProfileSectionA((LPCSTR)*(args + 0), (LPSTR)*(args + 1), (DWORD)*(args + 2), (LPCSTR)*(args + 3));
}
INT_PTR WINAPI GetPrivateProfileSectionW_MWAI(INT_PTR* args){
    return (INT_PTR)GetPrivateProfileSectionW((LPCWSTR)*(args + 0), (LPWSTR)*(args + 1), (DWORD)*(args + 2), (LPCWSTR)*(args + 3));
}
INT_PTR WINAPI WritePrivateProfileSectionA_MWAI(INT_PTR* args){
    return (INT_PTR)WritePrivateProfileSectionA((LPCSTR)*(args + 0), (LPCSTR)*(args + 1), (LPCSTR)*(args + 2));
}
INT_PTR WINAPI WritePrivateProfileSectionW_MWAI(INT_PTR* args){
    return (INT_PTR)WritePrivateProfileSectionW((LPCWSTR)*(args + 0), (LPCWSTR)*(args + 1), (LPCWSTR)*(args + 2));
}
INT_PTR WINAPI GetPrivateProfileSectionNamesA_MWAI(INT_PTR* args){
    return (INT_PTR)GetPrivateProfileSectionNamesA((LPSTR)*(args + 0), (DWORD)*(args + 1), (LPCSTR)*(args + 2));
}
INT_PTR WINAPI GetPrivateProfileSectionNamesW_MWAI(INT_PTR* args){
    return (INT_PTR)GetPrivateProfileSectionNamesW((LPWSTR)*(args + 0), (DWORD)*(args + 1), (LPCWSTR)*(args + 2));
}
INT_PTR WINAPI GetPrivateProfileStructA_MWAI(INT_PTR* args){
    return (INT_PTR)GetPrivateProfileStructA((LPCSTR)*(args + 0), (LPCSTR)*(args + 1), (LPVOID)*(args + 2), (UINT)*(args + 3), (LPCSTR)*(args + 4));
}
INT_PTR WINAPI GetPrivateProfileStructW_MWAI(INT_PTR* args){
    return (INT_PTR)GetPrivateProfileStructW((LPCWSTR)*(args + 0), (LPCWSTR)*(args + 1), (LPVOID)*(args + 2), (UINT)*(args + 3), (LPCWSTR)*(args + 4));
}
INT_PTR WINAPI WritePrivateProfileStructA_MWAI(INT_PTR* args){
    return (INT_PTR)WritePrivateProfileStructA((LPCSTR)*(args + 0), (LPCSTR)*(args + 1), (LPVOID)*(args + 2), (UINT)*(args + 3), (LPCSTR)*(args + 4));
}
INT_PTR WINAPI WritePrivateProfileStructW_MWAI(INT_PTR* args){
    return (INT_PTR)WritePrivateProfileStructW((LPCWSTR)*(args + 0), (LPCWSTR)*(args + 1), (LPVOID)*(args + 2), (UINT)*(args + 3), (LPCWSTR)*(args + 4));
}
INT_PTR WINAPI SetDllDirectoryA_MWAI(INT_PTR* args){
    return (INT_PTR)SetDllDirectoryA((LPCSTR)*(args + 0));
}
INT_PTR WINAPI SetDllDirectoryW_MWAI(INT_PTR* args){
    return (INT_PTR)SetDllDirectoryW((LPCWSTR)*(args + 0));
}
INT_PTR WINAPI GetDllDirectoryA_MWAI(INT_PTR* args){
    return (INT_PTR)GetDllDirectoryA((DWORD)*(args + 0), (LPSTR)*(args + 1));
}
INT_PTR WINAPI GetDllDirectoryW_MWAI(INT_PTR* args){
    return (INT_PTR)GetDllDirectoryW((DWORD)*(args + 0), (LPWSTR)*(args + 1));
}
INT_PTR WINAPI SetSearchPathMode_MWAI(INT_PTR* args){
    return (INT_PTR)SetSearchPathMode((DWORD)*(args + 0));
}
INT_PTR WINAPI CreateDirectoryExA_MWAI(INT_PTR* args){
    return (INT_PTR)CreateDirectoryExA((LPCSTR)*(args + 0), (LPCSTR)*(args + 1), (LPSECURITY_ATTRIBUTES)*(args + 2));
}
INT_PTR WINAPI CreateDirectoryExW_MWAI(INT_PTR* args){
    return (INT_PTR)CreateDirectoryExW((LPCWSTR)*(args + 0), (LPCWSTR)*(args + 1), (LPSECURITY_ATTRIBUTES)*(args + 2));
}
INT_PTR WINAPI CreateDirectoryTransactedA_MWAI(INT_PTR* args){
    return (INT_PTR)CreateDirectoryTransactedA((LPCSTR)*(args + 0), (LPCSTR)*(args + 1), (LPSECURITY_ATTRIBUTES)*(args + 2), (HANDLE)*(args + 3));
}
INT_PTR WINAPI CreateDirectoryTransactedW_MWAI(INT_PTR* args){
    return (INT_PTR)CreateDirectoryTransactedW((LPCWSTR)*(args + 0), (LPCWSTR)*(args + 1), (LPSECURITY_ATTRIBUTES)*(args + 2), (HANDLE)*(args + 3));
}
INT_PTR WINAPI RemoveDirectoryTransactedA_MWAI(INT_PTR* args){
    return (INT_PTR)RemoveDirectoryTransactedA((LPCSTR)*(args + 0), (HANDLE)*(args + 1));
}
INT_PTR WINAPI RemoveDirectoryTransactedW_MWAI(INT_PTR* args){
    return (INT_PTR)RemoveDirectoryTransactedW((LPCWSTR)*(args + 0), (HANDLE)*(args + 1));
}
INT_PTR WINAPI GetFullPathNameTransactedA_MWAI(INT_PTR* args){
    return (INT_PTR)GetFullPathNameTransactedA((LPCSTR)*(args + 0), (DWORD)*(args + 1), (LPSTR)*(args + 2), (LPSTR *)*(args + 3), (HANDLE)*(args + 4));
}
INT_PTR WINAPI GetFullPathNameTransactedW_MWAI(INT_PTR* args){
    return (INT_PTR)GetFullPathNameTransactedW((LPCWSTR)*(args + 0), (DWORD)*(args + 1), (LPWSTR)*(args + 2), (LPWSTR *)*(args + 3), (HANDLE)*(args + 4));
}
INT_PTR WINAPI DefineDosDeviceA_MWAI(INT_PTR* args){
    return (INT_PTR)DefineDosDeviceA((DWORD)*(args + 0), (LPCSTR)*(args + 1), (LPCSTR)*(args + 2));
}
INT_PTR WINAPI QueryDosDeviceA_MWAI(INT_PTR* args){
    return (INT_PTR)QueryDosDeviceA((LPCSTR)*(args + 0), (LPSTR)*(args + 1), (DWORD)*(args + 2));
}
INT_PTR WINAPI CreateFileTransactedA_MWAI(INT_PTR* args){
    return (INT_PTR)CreateFileTransactedA((LPCSTR)*(args + 0), (DWORD)*(args + 1), (DWORD)*(args + 2), (LPSECURITY_ATTRIBUTES)*(args + 3), (DWORD)*(args + 4), (DWORD)*(args + 5), (HANDLE)*(args + 6), (HANDLE)*(args + 7), (PUSHORT)*(args + 8), (PVOID)*(args + 9));
}
INT_PTR WINAPI CreateFileTransactedW_MWAI(INT_PTR* args){
    return (INT_PTR)CreateFileTransactedW((LPCWSTR)*(args + 0), (DWORD)*(args + 1), (DWORD)*(args + 2), (LPSECURITY_ATTRIBUTES)*(args + 3), (DWORD)*(args + 4), (DWORD)*(args + 5), (HANDLE)*(args + 6), (HANDLE)*(args + 7), (PUSHORT)*(args + 8), (PVOID)*(args + 9));
}
INT_PTR WINAPI ReOpenFile_MWAI(INT_PTR* args){
    return (INT_PTR)ReOpenFile((HANDLE)*(args + 0), (DWORD)*(args + 1), (DWORD)*(args + 2), (DWORD)*(args + 3));
}
INT_PTR WINAPI SetFileAttributesTransactedA_MWAI(INT_PTR* args){
    return (INT_PTR)SetFileAttributesTransactedA((LPCSTR)*(args + 0), (DWORD)*(args + 1), (HANDLE)*(args + 2));
}
INT_PTR WINAPI SetFileAttributesTransactedW_MWAI(INT_PTR* args){
    return (INT_PTR)SetFileAttributesTransactedW((LPCWSTR)*(args + 0), (DWORD)*(args + 1), (HANDLE)*(args + 2));
}
INT_PTR WINAPI GetFileAttributesTransactedA_MWAI(INT_PTR* args){
    return (INT_PTR)GetFileAttributesTransactedA((LPCSTR)*(args + 0), (GET_FILEEX_INFO_LEVELS)*(args + 1), (LPVOID)*(args + 2), (HANDLE)*(args + 3));
}
INT_PTR WINAPI GetFileAttributesTransactedW_MWAI(INT_PTR* args){
    return (INT_PTR)GetFileAttributesTransactedW((LPCWSTR)*(args + 0), (GET_FILEEX_INFO_LEVELS)*(args + 1), (LPVOID)*(args + 2), (HANDLE)*(args + 3));
}
INT_PTR WINAPI GetCompressedFileSizeTransactedA_MWAI(INT_PTR* args){
    return (INT_PTR)GetCompressedFileSizeTransactedA((LPCSTR)*(args + 0), (LPDWORD)*(args + 1), (HANDLE)*(args + 2));
}
INT_PTR WINAPI GetCompressedFileSizeTransactedW_MWAI(INT_PTR* args){
    return (INT_PTR)GetCompressedFileSizeTransactedW((LPCWSTR)*(args + 0), (LPDWORD)*(args + 1), (HANDLE)*(args + 2));
}
INT_PTR WINAPI DeleteFileTransactedA_MWAI(INT_PTR* args){
    return (INT_PTR)DeleteFileTransactedA((LPCSTR)*(args + 0), (HANDLE)*(args + 1));
}
INT_PTR WINAPI DeleteFileTransactedW_MWAI(INT_PTR* args){
    return (INT_PTR)DeleteFileTransactedW((LPCWSTR)*(args + 0), (HANDLE)*(args + 1));
}
INT_PTR WINAPI CheckNameLegalDOS8Dot3A_MWAI(INT_PTR* args){
    return (INT_PTR)CheckNameLegalDOS8Dot3A((LPCSTR)*(args + 0), (LPSTR)*(args + 1), (DWORD)*(args + 2), (PBOOL)*(args + 3), (PBOOL)*(args + 4));
}
INT_PTR WINAPI CheckNameLegalDOS8Dot3W_MWAI(INT_PTR* args){
    return (INT_PTR)CheckNameLegalDOS8Dot3W((LPCWSTR)*(args + 0), (LPSTR)*(args + 1), (DWORD)*(args + 2), (PBOOL)*(args + 3), (PBOOL)*(args + 4));
}
INT_PTR WINAPI FindFirstFileTransactedA_MWAI(INT_PTR* args){
    return (INT_PTR)FindFirstFileTransactedA((LPCSTR)*(args + 0), (FINDEX_INFO_LEVELS)*(args + 1), (LPVOID)*(args + 2), (FINDEX_SEARCH_OPS)*(args + 3), (LPVOID)*(args + 4), (DWORD)*(args + 5), (HANDLE)*(args + 6));
}
INT_PTR WINAPI FindFirstFileTransactedW_MWAI(INT_PTR* args){
    return (INT_PTR)FindFirstFileTransactedW((LPCWSTR)*(args + 0), (FINDEX_INFO_LEVELS)*(args + 1), (LPVOID)*(args + 2), (FINDEX_SEARCH_OPS)*(args + 3), (LPVOID)*(args + 4), (DWORD)*(args + 5), (HANDLE)*(args + 6));
}
INT_PTR WINAPI CopyFileA_MWAI(INT_PTR* args){
    return (INT_PTR)CopyFileA((LPCSTR)*(args + 0), (LPCSTR)*(args + 1), (BOOL)*(args + 2));
}
INT_PTR WINAPI CopyFileW_MWAI(INT_PTR* args){
    return (INT_PTR)CopyFileW((LPCWSTR)*(args + 0), (LPCWSTR)*(args + 1), (BOOL)*(args + 2));
}
INT_PTR WINAPI CopyFileExA_MWAI(INT_PTR* args){
    return (INT_PTR)CopyFileExA((LPCSTR)*(args + 0), (LPCSTR)*(args + 1), (LPPROGRESS_ROUTINE)*(args + 2), (LPVOID)*(args + 3), (LPBOOL)*(args + 4), (DWORD)*(args + 5));
}
INT_PTR WINAPI CopyFileExW_MWAI(INT_PTR* args){
    return (INT_PTR)CopyFileExW((LPCWSTR)*(args + 0), (LPCWSTR)*(args + 1), (LPPROGRESS_ROUTINE)*(args + 2), (LPVOID)*(args + 3), (LPBOOL)*(args + 4), (DWORD)*(args + 5));
}
INT_PTR WINAPI CopyFileTransactedA_MWAI(INT_PTR* args){
    return (INT_PTR)CopyFileTransactedA((LPCSTR)*(args + 0), (LPCSTR)*(args + 1), (LPPROGRESS_ROUTINE)*(args + 2), (LPVOID)*(args + 3), (LPBOOL)*(args + 4), (DWORD)*(args + 5), (HANDLE)*(args + 6));
}
INT_PTR WINAPI CopyFileTransactedW_MWAI(INT_PTR* args){
    return (INT_PTR)CopyFileTransactedW((LPCWSTR)*(args + 0), (LPCWSTR)*(args + 1), (LPPROGRESS_ROUTINE)*(args + 2), (LPVOID)*(args + 3), (LPBOOL)*(args + 4), (DWORD)*(args + 5), (HANDLE)*(args + 6));
}
INT_PTR WINAPI CopyFile2_MWAI(INT_PTR* args){
    return (INT_PTR)CopyFile2((PCWSTR)*(args + 0), (PCWSTR)*(args + 1), (COPYFILE2_EXTENDED_PARAMETERS   *)*(args + 2));
}
INT_PTR WINAPI MoveFileA_MWAI(INT_PTR* args){
    return (INT_PTR)MoveFileA((LPCSTR)*(args + 0), (LPCSTR)*(args + 1));
}
INT_PTR WINAPI MoveFileW_MWAI(INT_PTR* args){
    return (INT_PTR)MoveFileW((LPCWSTR)*(args + 0), (LPCWSTR)*(args + 1));
}
INT_PTR WINAPI MoveFileExA_MWAI(INT_PTR* args){
    return (INT_PTR)MoveFileExA((LPCSTR)*(args + 0), (LPCSTR)*(args + 1), (DWORD)*(args + 2));
}
INT_PTR WINAPI MoveFileExW_MWAI(INT_PTR* args){
    return (INT_PTR)MoveFileExW((LPCWSTR)*(args + 0), (LPCWSTR)*(args + 1), (DWORD)*(args + 2));
}
INT_PTR WINAPI MoveFileWithProgressA_MWAI(INT_PTR* args){
    return (INT_PTR)MoveFileWithProgressA((LPCSTR)*(args + 0), (LPCSTR)*(args + 1), (LPPROGRESS_ROUTINE)*(args + 2), (LPVOID)*(args + 3), (DWORD)*(args + 4));
}
INT_PTR WINAPI MoveFileWithProgressW_MWAI(INT_PTR* args){
    return (INT_PTR)MoveFileWithProgressW((LPCWSTR)*(args + 0), (LPCWSTR)*(args + 1), (LPPROGRESS_ROUTINE)*(args + 2), (LPVOID)*(args + 3), (DWORD)*(args + 4));
}
INT_PTR WINAPI MoveFileTransactedA_MWAI(INT_PTR* args){
    return (INT_PTR)MoveFileTransactedA((LPCSTR)*(args + 0), (LPCSTR)*(args + 1), (LPPROGRESS_ROUTINE)*(args + 2), (LPVOID)*(args + 3), (DWORD)*(args + 4), (HANDLE)*(args + 5));
}
INT_PTR WINAPI MoveFileTransactedW_MWAI(INT_PTR* args){
    return (INT_PTR)MoveFileTransactedW((LPCWSTR)*(args + 0), (LPCWSTR)*(args + 1), (LPPROGRESS_ROUTINE)*(args + 2), (LPVOID)*(args + 3), (DWORD)*(args + 4), (HANDLE)*(args + 5));
}
INT_PTR WINAPI ReplaceFileA_MWAI(INT_PTR* args){
    return (INT_PTR)ReplaceFileA((LPCSTR)*(args + 0), (LPCSTR)*(args + 1), (LPCSTR)*(args + 2), (DWORD)*(args + 3), (LPVOID)*(args + 4), (LPVOID)*(args + 5));
}
INT_PTR WINAPI ReplaceFileW_MWAI(INT_PTR* args){
    return (INT_PTR)ReplaceFileW((LPCWSTR)*(args + 0), (LPCWSTR)*(args + 1), (LPCWSTR)*(args + 2), (DWORD)*(args + 3), (LPVOID)*(args + 4), (LPVOID)*(args + 5));
}
INT_PTR WINAPI CreateHardLinkA_MWAI(INT_PTR* args){
    return (INT_PTR)CreateHardLinkA((LPCSTR)*(args + 0), (LPCSTR)*(args + 1), (LPSECURITY_ATTRIBUTES)*(args + 2));
}
INT_PTR WINAPI CreateHardLinkW_MWAI(INT_PTR* args){
    return (INT_PTR)CreateHardLinkW((LPCWSTR)*(args + 0), (LPCWSTR)*(args + 1), (LPSECURITY_ATTRIBUTES)*(args + 2));
}
INT_PTR WINAPI CreateHardLinkTransactedA_MWAI(INT_PTR* args){
    return (INT_PTR)CreateHardLinkTransactedA((LPCSTR)*(args + 0), (LPCSTR)*(args + 1), (LPSECURITY_ATTRIBUTES)*(args + 2), (HANDLE)*(args + 3));
}
INT_PTR WINAPI CreateHardLinkTransactedW_MWAI(INT_PTR* args){
    return (INT_PTR)CreateHardLinkTransactedW((LPCWSTR)*(args + 0), (LPCWSTR)*(args + 1), (LPSECURITY_ATTRIBUTES)*(args + 2), (HANDLE)*(args + 3));
}
INT_PTR WINAPI FindFirstStreamTransactedW_MWAI(INT_PTR* args){
    return (INT_PTR)FindFirstStreamTransactedW((LPCWSTR)*(args + 0), (STREAM_INFO_LEVELS)*(args + 1), (LPVOID)*(args + 2), (DWORD)*(args + 3), (HANDLE)*(args + 4));
}
INT_PTR WINAPI FindFirstFileNameTransactedW_MWAI(INT_PTR* args){
    return (INT_PTR)FindFirstFileNameTransactedW((LPCWSTR)*(args + 0), (DWORD)*(args + 1), (LPDWORD)*(args + 2), (PWSTR)*(args + 3), (HANDLE)*(args + 4));
}
INT_PTR WINAPI CreateNamedPipeA_MWAI(INT_PTR* args){
    return (INT_PTR)CreateNamedPipeA((LPCSTR)*(args + 0), (DWORD)*(args + 1), (DWORD)*(args + 2), (DWORD)*(args + 3), (DWORD)*(args + 4), (DWORD)*(args + 5), (DWORD)*(args + 6), (LPSECURITY_ATTRIBUTES)*(args + 7));
}
INT_PTR WINAPI GetNamedPipeHandleStateA_MWAI(INT_PTR* args){
    return (INT_PTR)GetNamedPipeHandleStateA((HANDLE)*(args + 0), (LPDWORD)*(args + 1), (LPDWORD)*(args + 2), (LPDWORD)*(args + 3), (LPDWORD)*(args + 4), (LPSTR)*(args + 5), (DWORD)*(args + 6));
}
INT_PTR WINAPI CallNamedPipeA_MWAI(INT_PTR* args){
    return (INT_PTR)CallNamedPipeA((LPCSTR)*(args + 0), (LPVOID)*(args + 1), (DWORD)*(args + 2), (LPVOID)*(args + 3), (DWORD)*(args + 4), (LPDWORD)*(args + 5), (DWORD)*(args + 6));
}
INT_PTR WINAPI WaitNamedPipeA_MWAI(INT_PTR* args){
    return (INT_PTR)WaitNamedPipeA((LPCSTR)*(args + 0), (DWORD)*(args + 1));
}
INT_PTR WINAPI GetNamedPipeClientComputerNameA_MWAI(INT_PTR* args){
    return (INT_PTR)GetNamedPipeClientComputerNameA((HANDLE)*(args + 0), (LPSTR)*(args + 1), (ULONG)*(args + 2));
}
INT_PTR WINAPI GetNamedPipeClientProcessId_MWAI(INT_PTR* args){
    return (INT_PTR)GetNamedPipeClientProcessId((HANDLE)*(args + 0), (PULONG)*(args + 1));
}
INT_PTR WINAPI GetNamedPipeClientSessionId_MWAI(INT_PTR* args){
    return (INT_PTR)GetNamedPipeClientSessionId((HANDLE)*(args + 0), (PULONG)*(args + 1));
}
INT_PTR WINAPI GetNamedPipeServerProcessId_MWAI(INT_PTR* args){
    return (INT_PTR)GetNamedPipeServerProcessId((HANDLE)*(args + 0), (PULONG)*(args + 1));
}
INT_PTR WINAPI GetNamedPipeServerSessionId_MWAI(INT_PTR* args){
    return (INT_PTR)GetNamedPipeServerSessionId((HANDLE)*(args + 0), (PULONG)*(args + 1));
}
INT_PTR WINAPI SetVolumeLabelA_MWAI(INT_PTR* args){
    return (INT_PTR)SetVolumeLabelA((LPCSTR)*(args + 0), (LPCSTR)*(args + 1));
}
INT_PTR WINAPI SetVolumeLabelW_MWAI(INT_PTR* args){
    return (INT_PTR)SetVolumeLabelW((LPCWSTR)*(args + 0), (LPCWSTR)*(args + 1));
}
INT_PTR WINAPI SetFileBandwidthReservation_MWAI(INT_PTR* args){
    return (INT_PTR)SetFileBandwidthReservation((HANDLE)*(args + 0), (DWORD)*(args + 1), (DWORD)*(args + 2), (BOOL)*(args + 3), (LPDWORD)*(args + 4), (LPDWORD)*(args + 5));
}
INT_PTR WINAPI GetFileBandwidthReservation_MWAI(INT_PTR* args){
    return (INT_PTR)GetFileBandwidthReservation((HANDLE)*(args + 0), (LPDWORD)*(args + 1), (LPDWORD)*(args + 2), (LPBOOL)*(args + 3), (LPDWORD)*(args + 4), (LPDWORD)*(args + 5));
}
INT_PTR WINAPI ClearEventLogA_MWAI(INT_PTR* args){
    return (INT_PTR)ClearEventLogA((HANDLE)*(args + 0), (LPCSTR)*(args + 1));
}
INT_PTR WINAPI ClearEventLogW_MWAI(INT_PTR* args){
    return (INT_PTR)ClearEventLogW((HANDLE)*(args + 0), (LPCWSTR)*(args + 1));
}
INT_PTR WINAPI BackupEventLogA_MWAI(INT_PTR* args){
    return (INT_PTR)BackupEventLogA((HANDLE)*(args + 0), (LPCSTR)*(args + 1));
}
INT_PTR WINAPI BackupEventLogW_MWAI(INT_PTR* args){
    return (INT_PTR)BackupEventLogW((HANDLE)*(args + 0), (LPCWSTR)*(args + 1));
}
INT_PTR WINAPI CloseEventLog_MWAI(INT_PTR* args){
    return (INT_PTR)CloseEventLog((HANDLE)*(args + 0));
}
INT_PTR WINAPI DeregisterEventSource_MWAI(INT_PTR* args){
    return (INT_PTR)DeregisterEventSource((HANDLE)*(args + 0));
}
INT_PTR WINAPI NotifyChangeEventLog_MWAI(INT_PTR* args){
    return (INT_PTR)NotifyChangeEventLog((HANDLE)*(args + 0), (HANDLE)*(args + 1));
}
INT_PTR WINAPI GetNumberOfEventLogRecords_MWAI(INT_PTR* args){
    return (INT_PTR)GetNumberOfEventLogRecords((HANDLE)*(args + 0), (PDWORD)*(args + 1));
}
INT_PTR WINAPI GetOldestEventLogRecord_MWAI(INT_PTR* args){
    return (INT_PTR)GetOldestEventLogRecord((HANDLE)*(args + 0), (PDWORD)*(args + 1));
}
INT_PTR WINAPI OpenEventLogA_MWAI(INT_PTR* args){
    return (INT_PTR)OpenEventLogA((LPCSTR)*(args + 0), (LPCSTR)*(args + 1));
}
INT_PTR WINAPI OpenEventLogW_MWAI(INT_PTR* args){
    return (INT_PTR)OpenEventLogW((LPCWSTR)*(args + 0), (LPCWSTR)*(args + 1));
}
INT_PTR WINAPI RegisterEventSourceA_MWAI(INT_PTR* args){
    return (INT_PTR)RegisterEventSourceA((LPCSTR)*(args + 0), (LPCSTR)*(args + 1));
}
INT_PTR WINAPI RegisterEventSourceW_MWAI(INT_PTR* args){
    return (INT_PTR)RegisterEventSourceW((LPCWSTR)*(args + 0), (LPCWSTR)*(args + 1));
}
INT_PTR WINAPI OpenBackupEventLogA_MWAI(INT_PTR* args){
    return (INT_PTR)OpenBackupEventLogA((LPCSTR)*(args + 0), (LPCSTR)*(args + 1));
}
INT_PTR WINAPI OpenBackupEventLogW_MWAI(INT_PTR* args){
    return (INT_PTR)OpenBackupEventLogW((LPCWSTR)*(args + 0), (LPCWSTR)*(args + 1));
}
INT_PTR WINAPI ReadEventLogA_MWAI(INT_PTR* args){
    return (INT_PTR)ReadEventLogA((HANDLE)*(args + 0), (DWORD)*(args + 1), (DWORD)*(args + 2), (LPVOID)*(args + 3), (DWORD)*(args + 4), (DWORD      *)*(args + 5), (DWORD      *)*(args + 6));
}
INT_PTR WINAPI ReadEventLogW_MWAI(INT_PTR* args){
    return (INT_PTR)ReadEventLogW((HANDLE)*(args + 0), (DWORD)*(args + 1), (DWORD)*(args + 2), (LPVOID)*(args + 3), (DWORD)*(args + 4), (DWORD      *)*(args + 5), (DWORD      *)*(args + 6));
}
INT_PTR WINAPI ReportEventA_MWAI(INT_PTR* args){
    return (INT_PTR)ReportEventA((HANDLE)*(args + 0), (WORD)*(args + 1), (WORD)*(args + 2), (DWORD)*(args + 3), (PSID)*(args + 4), (WORD)*(args + 5), (DWORD)*(args + 6), (LPCSTR *)*(args + 7), (LPVOID)*(args + 8));
}
INT_PTR WINAPI ReportEventW_MWAI(INT_PTR* args){
    return (INT_PTR)ReportEventW((HANDLE)*(args + 0), (WORD)*(args + 1), (WORD)*(args + 2), (DWORD)*(args + 3), (PSID)*(args + 4), (WORD)*(args + 5), (DWORD)*(args + 6), (LPCWSTR *)*(args + 7), (LPVOID)*(args + 8));
}
INT_PTR WINAPI GetEventLogInformation_MWAI(INT_PTR* args){
    return (INT_PTR)GetEventLogInformation((HANDLE)*(args + 0), (DWORD)*(args + 1), (LPVOID)*(args + 2), (DWORD)*(args + 3), (LPDWORD)*(args + 4));
}
INT_PTR WINAPI OperationStart_MWAI(INT_PTR* args){
    return (INT_PTR)OperationStart((OPERATION_START_PARAMETERS*)*(args + 0));
}
INT_PTR WINAPI OperationEnd_MWAI(INT_PTR* args){
    return (INT_PTR)OperationEnd((OPERATION_END_PARAMETERS*)*(args + 0));
}
INT_PTR WINAPI AccessCheckAndAuditAlarmA_MWAI(INT_PTR* args){
    return (INT_PTR)AccessCheckAndAuditAlarmA((LPCSTR)*(args + 0), (LPVOID)*(args + 1), (LPSTR)*(args + 2), (LPSTR)*(args + 3), (PSECURITY_DESCRIPTOR)*(args + 4), (DWORD)*(args + 5), (PGENERIC_MAPPING)*(args + 6), (BOOL)*(args + 7), (LPDWORD)*(args + 8), (LPBOOL)*(args + 9), (LPBOOL)*(args + 10));
}
INT_PTR WINAPI AccessCheckByTypeAndAuditAlarmA_MWAI(INT_PTR* args){
    return (INT_PTR)AccessCheckByTypeAndAuditAlarmA((LPCSTR)*(args + 0), (LPVOID)*(args + 1), (LPCSTR)*(args + 2), (LPCSTR)*(args + 3), (PSECURITY_DESCRIPTOR)*(args + 4), (PSID)*(args + 5), (DWORD)*(args + 6), (AUDIT_EVENT_TYPE)*(args + 7), (DWORD)*(args + 8), (POBJECT_TYPE_LIST)*(args + 9), (DWORD)*(args + 10), (PGENERIC_MAPPING)*(args + 11), (BOOL)*(args + 12), (LPDWORD)*(args + 13), (LPBOOL)*(args + 14), (LPBOOL)*(args + 15));
}
INT_PTR WINAPI AccessCheckByTypeResultListAndAuditAlarmA_MWAI(INT_PTR* args){
    return (INT_PTR)AccessCheckByTypeResultListAndAuditAlarmA((LPCSTR)*(args + 0), (LPVOID)*(args + 1), (LPCSTR)*(args + 2), (LPCSTR)*(args + 3), (PSECURITY_DESCRIPTOR)*(args + 4), (PSID)*(args + 5), (DWORD)*(args + 6), (AUDIT_EVENT_TYPE)*(args + 7), (DWORD)*(args + 8), (POBJECT_TYPE_LIST)*(args + 9), (DWORD)*(args + 10), (PGENERIC_MAPPING)*(args + 11), (BOOL)*(args + 12), (LPDWORD)*(args + 13), (LPDWORD)*(args + 14), (LPBOOL)*(args + 15));
}
INT_PTR WINAPI AccessCheckByTypeResultListAndAuditAlarmByHandleA_MWAI(INT_PTR* args){
    return (INT_PTR)AccessCheckByTypeResultListAndAuditAlarmByHandleA((LPCSTR)*(args + 0), (LPVOID)*(args + 1), (HANDLE)*(args + 2), (LPCSTR)*(args + 3), (LPCSTR)*(args + 4), (PSECURITY_DESCRIPTOR)*(args + 5), (PSID)*(args + 6), (DWORD)*(args + 7), (AUDIT_EVENT_TYPE)*(args + 8), (DWORD)*(args + 9), (POBJECT_TYPE_LIST)*(args + 10), (DWORD)*(args + 11), (PGENERIC_MAPPING)*(args + 12), (BOOL)*(args + 13), (LPDWORD)*(args + 14), (LPDWORD)*(args + 15), (LPBOOL)*(args + 16));
}
INT_PTR WINAPI ObjectOpenAuditAlarmA_MWAI(INT_PTR* args){
    return (INT_PTR)ObjectOpenAuditAlarmA((LPCSTR)*(args + 0), (LPVOID)*(args + 1), (LPSTR)*(args + 2), (LPSTR)*(args + 3), (PSECURITY_DESCRIPTOR)*(args + 4), (HANDLE)*(args + 5), (DWORD)*(args + 6), (DWORD)*(args + 7), (PPRIVILEGE_SET)*(args + 8), (BOOL)*(args + 9), (BOOL)*(args + 10), (LPBOOL)*(args + 11));
}
INT_PTR WINAPI ObjectPrivilegeAuditAlarmA_MWAI(INT_PTR* args){
    return (INT_PTR)ObjectPrivilegeAuditAlarmA((LPCSTR)*(args + 0), (LPVOID)*(args + 1), (HANDLE)*(args + 2), (DWORD)*(args + 3), (PPRIVILEGE_SET)*(args + 4), (BOOL)*(args + 5));
}
INT_PTR WINAPI ObjectCloseAuditAlarmA_MWAI(INT_PTR* args){
    return (INT_PTR)ObjectCloseAuditAlarmA((LPCSTR)*(args + 0), (LPVOID)*(args + 1), (BOOL)*(args + 2));
}
INT_PTR WINAPI ObjectDeleteAuditAlarmA_MWAI(INT_PTR* args){
    return (INT_PTR)ObjectDeleteAuditAlarmA((LPCSTR)*(args + 0), (LPVOID)*(args + 1), (BOOL)*(args + 2));
}
INT_PTR WINAPI PrivilegedServiceAuditAlarmA_MWAI(INT_PTR* args){
    return (INT_PTR)PrivilegedServiceAuditAlarmA((LPCSTR)*(args + 0), (LPCSTR)*(args + 1), (HANDLE)*(args + 2), (PPRIVILEGE_SET)*(args + 3), (BOOL)*(args + 4));
}
INT_PTR WINAPI AddConditionalAce_MWAI(INT_PTR* args){
    return (INT_PTR)AddConditionalAce((PACL)*(args + 0), (DWORD)*(args + 1), (DWORD)*(args + 2), (UCHAR)*(args + 3), (DWORD)*(args + 4), (PSID)*(args + 5), (PWCHAR)*(args + 6), (DWORD *)*(args + 7));
}
INT_PTR WINAPI SetFileSecurityA_MWAI(INT_PTR* args){
    return (INT_PTR)SetFileSecurityA((LPCSTR)*(args + 0), (SECURITY_INFORMATION)*(args + 1), (PSECURITY_DESCRIPTOR)*(args + 2));
}
INT_PTR WINAPI GetFileSecurityA_MWAI(INT_PTR* args){
    return (INT_PTR)GetFileSecurityA((LPCSTR)*(args + 0), (SECURITY_INFORMATION)*(args + 1), (PSECURITY_DESCRIPTOR)*(args + 2), (DWORD)*(args + 3), (LPDWORD)*(args + 4));
}
INT_PTR WINAPI ReadDirectoryChangesW_MWAI(INT_PTR* args){
    return (INT_PTR)ReadDirectoryChangesW((HANDLE)*(args + 0), (LPVOID)*(args + 1), (DWORD)*(args + 2), (BOOL)*(args + 3), (DWORD)*(args + 4), (LPDWORD)*(args + 5), (LPOVERLAPPED)*(args + 6), (LPOVERLAPPED_COMPLETION_ROUTINE)*(args + 7));
}
INT_PTR WINAPI IsBadReadPtr_MWAI(INT_PTR* args){
    return (INT_PTR)IsBadReadPtr((const void *)*(args + 0), (UINT_PTR)*(args + 1));
}
INT_PTR WINAPI IsBadWritePtr_MWAI(INT_PTR* args){
    return (INT_PTR)IsBadWritePtr((LPVOID)*(args + 0), (UINT_PTR)*(args + 1));
}
INT_PTR WINAPI IsBadHugeReadPtr_MWAI(INT_PTR* args){
    return (INT_PTR)IsBadHugeReadPtr((const void *)*(args + 0), (UINT_PTR)*(args + 1));
}
INT_PTR WINAPI IsBadHugeWritePtr_MWAI(INT_PTR* args){
    return (INT_PTR)IsBadHugeWritePtr((LPVOID)*(args + 0), (UINT_PTR)*(args + 1));
}
INT_PTR WINAPI IsBadCodePtr_MWAI(INT_PTR* args){
    return (INT_PTR)IsBadCodePtr((FARPROC)*(args + 0));
}
INT_PTR WINAPI IsBadStringPtrA_MWAI(INT_PTR* args){
    return (INT_PTR)IsBadStringPtrA((LPCSTR)*(args + 0), (UINT_PTR)*(args + 1));
}
INT_PTR WINAPI IsBadStringPtrW_MWAI(INT_PTR* args){
    return (INT_PTR)IsBadStringPtrW((LPCWSTR)*(args + 0), (UINT_PTR)*(args + 1));
}
INT_PTR WINAPI LookupAccountSidA_MWAI(INT_PTR* args){
    return (INT_PTR)LookupAccountSidA((LPCSTR)*(args + 0), (PSID)*(args + 1), (LPSTR)*(args + 2), (LPDWORD)*(args + 3), (LPSTR)*(args + 4), (LPDWORD)*(args + 5), (PSID_NAME_USE)*(args + 6));
}
INT_PTR WINAPI LookupAccountSidW_MWAI(INT_PTR* args){
    return (INT_PTR)LookupAccountSidW((LPCWSTR)*(args + 0), (PSID)*(args + 1), (LPWSTR)*(args + 2), (LPDWORD)*(args + 3), (LPWSTR)*(args + 4), (LPDWORD)*(args + 5), (PSID_NAME_USE)*(args + 6));
}
INT_PTR WINAPI LookupAccountNameA_MWAI(INT_PTR* args){
    return (INT_PTR)LookupAccountNameA((LPCSTR)*(args + 0), (LPCSTR)*(args + 1), (PSID)*(args + 2), (LPDWORD)*(args + 3), (LPSTR)*(args + 4), (LPDWORD)*(args + 5), (PSID_NAME_USE)*(args + 6));
}
INT_PTR WINAPI LookupAccountNameW_MWAI(INT_PTR* args){
    return (INT_PTR)LookupAccountNameW((LPCWSTR)*(args + 0), (LPCWSTR)*(args + 1), (PSID)*(args + 2), (LPDWORD)*(args + 3), (LPWSTR)*(args + 4), (LPDWORD)*(args + 5), (PSID_NAME_USE)*(args + 6));
}
INT_PTR WINAPI LookupPrivilegeValueA_MWAI(INT_PTR* args){
    return (INT_PTR)LookupPrivilegeValueA((LPCSTR)*(args + 0), (LPCSTR)*(args + 1), (PLUID)*(args + 2));
}
INT_PTR WINAPI LookupPrivilegeValueW_MWAI(INT_PTR* args){
    return (INT_PTR)LookupPrivilegeValueW((LPCWSTR)*(args + 0), (LPCWSTR)*(args + 1), (PLUID)*(args + 2));
}
INT_PTR WINAPI LookupPrivilegeNameA_MWAI(INT_PTR* args){
    return (INT_PTR)LookupPrivilegeNameA((LPCSTR)*(args + 0), (PLUID)*(args + 1), (LPSTR)*(args + 2), (LPDWORD)*(args + 3));
}
INT_PTR WINAPI LookupPrivilegeNameW_MWAI(INT_PTR* args){
    return (INT_PTR)LookupPrivilegeNameW((LPCWSTR)*(args + 0), (PLUID)*(args + 1), (LPWSTR)*(args + 2), (LPDWORD)*(args + 3));
}
INT_PTR WINAPI LookupPrivilegeDisplayNameA_MWAI(INT_PTR* args){
    return (INT_PTR)LookupPrivilegeDisplayNameA((LPCSTR)*(args + 0), (LPCSTR)*(args + 1), (LPSTR)*(args + 2), (LPDWORD)*(args + 3), (LPDWORD)*(args + 4));
}
INT_PTR WINAPI LookupPrivilegeDisplayNameW_MWAI(INT_PTR* args){
    return (INT_PTR)LookupPrivilegeDisplayNameW((LPCWSTR)*(args + 0), (LPCWSTR)*(args + 1), (LPWSTR)*(args + 2), (LPDWORD)*(args + 3), (LPDWORD)*(args + 4));
}
INT_PTR WINAPI BuildCommDCBA_MWAI(INT_PTR* args){
    return (INT_PTR)BuildCommDCBA((LPCSTR)*(args + 0), (LPDCB)*(args + 1));
}
INT_PTR WINAPI BuildCommDCBW_MWAI(INT_PTR* args){
    return (INT_PTR)BuildCommDCBW((LPCWSTR)*(args + 0), (LPDCB)*(args + 1));
}
INT_PTR WINAPI BuildCommDCBAndTimeoutsA_MWAI(INT_PTR* args){
    return (INT_PTR)BuildCommDCBAndTimeoutsA((LPCSTR)*(args + 0), (LPDCB)*(args + 1), (LPCOMMTIMEOUTS)*(args + 2));
}
INT_PTR WINAPI BuildCommDCBAndTimeoutsW_MWAI(INT_PTR* args){
    return (INT_PTR)BuildCommDCBAndTimeoutsW((LPCWSTR)*(args + 0), (LPDCB)*(args + 1), (LPCOMMTIMEOUTS)*(args + 2));
}
INT_PTR WINAPI CommConfigDialogA_MWAI(INT_PTR* args){
    return (INT_PTR)CommConfigDialogA((LPCSTR)*(args + 0), (HWND)*(args + 1), (LPCOMMCONFIG)*(args + 2));
}
INT_PTR WINAPI CommConfigDialogW_MWAI(INT_PTR* args){
    return (INT_PTR)CommConfigDialogW((LPCWSTR)*(args + 0), (HWND)*(args + 1), (LPCOMMCONFIG)*(args + 2));
}
INT_PTR WINAPI GetDefaultCommConfigA_MWAI(INT_PTR* args){
    return (INT_PTR)GetDefaultCommConfigA((LPCSTR)*(args + 0), (LPCOMMCONFIG)*(args + 1), (LPDWORD)*(args + 2));
}
INT_PTR WINAPI GetDefaultCommConfigW_MWAI(INT_PTR* args){
    return (INT_PTR)GetDefaultCommConfigW((LPCWSTR)*(args + 0), (LPCOMMCONFIG)*(args + 1), (LPDWORD)*(args + 2));
}
INT_PTR WINAPI SetDefaultCommConfigA_MWAI(INT_PTR* args){
    return (INT_PTR)SetDefaultCommConfigA((LPCSTR)*(args + 0), (LPCOMMCONFIG)*(args + 1), (DWORD)*(args + 2));
}
INT_PTR WINAPI SetDefaultCommConfigW_MWAI(INT_PTR* args){
    return (INT_PTR)SetDefaultCommConfigW((LPCWSTR)*(args + 0), (LPCOMMCONFIG)*(args + 1), (DWORD)*(args + 2));
}
INT_PTR WINAPI GetComputerNameA_MWAI(INT_PTR* args){
    return (INT_PTR)GetComputerNameA((LPSTR)*(args + 0), (LPDWORD)*(args + 1));
}
INT_PTR WINAPI GetComputerNameW_MWAI(INT_PTR* args){
    return (INT_PTR)GetComputerNameW((LPWSTR)*(args + 0), (LPDWORD)*(args + 1));
}
INT_PTR WINAPI DnsHostnameToComputerNameA_MWAI(INT_PTR* args){
    return (INT_PTR)DnsHostnameToComputerNameA((LPCSTR)*(args + 0), (LPSTR)*(args + 1), (LPDWORD)*(args + 2));
}
INT_PTR WINAPI DnsHostnameToComputerNameW_MWAI(INT_PTR* args){
    return (INT_PTR)DnsHostnameToComputerNameW((LPCWSTR)*(args + 0), (LPWSTR)*(args + 1), (LPDWORD)*(args + 2));
}
INT_PTR WINAPI GetUserNameA_MWAI(INT_PTR* args){
    return (INT_PTR)GetUserNameA((LPSTR)*(args + 0), (LPDWORD)*(args + 1));
}
INT_PTR WINAPI GetUserNameW_MWAI(INT_PTR* args){
    return (INT_PTR)GetUserNameW((LPWSTR)*(args + 0), (LPDWORD)*(args + 1));
}
INT_PTR WINAPI LogonUserA_MWAI(INT_PTR* args){
    return (INT_PTR)LogonUserA((LPCSTR)*(args + 0), (LPCSTR)*(args + 1), (LPCSTR)*(args + 2), (DWORD)*(args + 3), (DWORD)*(args + 4), (PHANDLE)*(args + 5));
}
INT_PTR WINAPI LogonUserW_MWAI(INT_PTR* args){
    return (INT_PTR)LogonUserW((LPCWSTR)*(args + 0), (LPCWSTR)*(args + 1), (LPCWSTR)*(args + 2), (DWORD)*(args + 3), (DWORD)*(args + 4), (PHANDLE)*(args + 5));
}
INT_PTR WINAPI LogonUserExA_MWAI(INT_PTR* args){
    return (INT_PTR)LogonUserExA((LPCSTR)*(args + 0), (LPCSTR)*(args + 1), (LPCSTR)*(args + 2), (DWORD)*(args + 3), (DWORD)*(args + 4), (PHANDLE)*(args + 5), (PSID  *)*(args + 6), (PVOID *)*(args + 7), (LPDWORD)*(args + 8), (PQUOTA_LIMITS)*(args + 9));
}
INT_PTR WINAPI LogonUserExW_MWAI(INT_PTR* args){
    return (INT_PTR)LogonUserExW((LPCWSTR)*(args + 0), (LPCWSTR)*(args + 1), (LPCWSTR)*(args + 2), (DWORD)*(args + 3), (DWORD)*(args + 4), (PHANDLE)*(args + 5), (PSID  *)*(args + 6), (PVOID *)*(args + 7), (LPDWORD)*(args + 8), (PQUOTA_LIMITS)*(args + 9));
}
INT_PTR WINAPI CreateProcessWithLogonW_MWAI(INT_PTR* args){
    return (INT_PTR)CreateProcessWithLogonW((LPCWSTR)*(args + 0), (LPCWSTR)*(args + 1), (LPCWSTR)*(args + 2), (DWORD)*(args + 3), (LPCWSTR)*(args + 4), (LPWSTR)*(args + 5), (DWORD)*(args + 6), (LPVOID)*(args + 7), (LPCWSTR)*(args + 8), (LPSTARTUPINFOW)*(args + 9), (LPPROCESS_INFORMATION)*(args + 10));
}
INT_PTR WINAPI CreateProcessWithTokenW_MWAI(INT_PTR* args){
    return (INT_PTR)CreateProcessWithTokenW((HANDLE)*(args + 0), (DWORD)*(args + 1), (LPCWSTR)*(args + 2), (LPWSTR)*(args + 3), (DWORD)*(args + 4), (LPVOID)*(args + 5), (LPCWSTR)*(args + 6), (LPSTARTUPINFOW)*(args + 7), (LPPROCESS_INFORMATION)*(args + 8));
}
INT_PTR WINAPI IsTokenUntrusted_MWAI(INT_PTR* args){
    return (INT_PTR)IsTokenUntrusted((HANDLE)*(args + 0));
}
INT_PTR WINAPI RegisterWaitForSingleObject_MWAI(INT_PTR* args){
    return (INT_PTR)RegisterWaitForSingleObject((PHANDLE)*(args + 0), (HANDLE)*(args + 1), (WAITORTIMERCALLBACK)*(args + 2), (PVOID)*(args + 3), (ULONG)*(args + 4), (ULONG)*(args + 5));
}
INT_PTR WINAPI UnregisterWait_MWAI(INT_PTR* args){
    return (INT_PTR)UnregisterWait((HANDLE)*(args + 0));
}
INT_PTR WINAPI BindIoCompletionCallback_MWAI(INT_PTR* args){
    return (INT_PTR)BindIoCompletionCallback((HANDLE)*(args + 0), (LPOVERLAPPED_COMPLETION_ROUTINE)*(args + 1), (ULONG)*(args + 2));
}
INT_PTR WINAPI SetTimerQueueTimer_MWAI(INT_PTR* args){
    return (INT_PTR)SetTimerQueueTimer((HANDLE)*(args + 0), (WAITORTIMERCALLBACK)*(args + 1), (PVOID)*(args + 2), (DWORD)*(args + 3), (DWORD)*(args + 4), (BOOL)*(args + 5));
}
INT_PTR WINAPI CancelTimerQueueTimer_MWAI(INT_PTR* args){
    return (INT_PTR)CancelTimerQueueTimer((HANDLE)*(args + 0), (HANDLE)*(args + 1));
}
INT_PTR WINAPI CreatePrivateNamespaceA_MWAI(INT_PTR* args){
    return (INT_PTR)CreatePrivateNamespaceA((LPSECURITY_ATTRIBUTES)*(args + 0), (LPVOID)*(args + 1), (LPCSTR)*(args + 2));
}
INT_PTR WINAPI OpenPrivateNamespaceA_MWAI(INT_PTR* args){
    return (INT_PTR)OpenPrivateNamespaceA((LPVOID)*(args + 0), (LPCSTR)*(args + 1));
}
INT_PTR WINAPI CreateBoundaryDescriptorA_MWAI(INT_PTR* args){
    return (INT_PTR)CreateBoundaryDescriptorA((LPCSTR)*(args + 0), (ULONG)*(args + 1));
}
INT_PTR WINAPI AddIntegrityLabelToBoundaryDescriptor_MWAI(INT_PTR* args){
    return (INT_PTR)AddIntegrityLabelToBoundaryDescriptor((HANDLE *)*(args + 0), (PSID)*(args + 1));
}
INT_PTR WINAPI GetCurrentHwProfileA_MWAI(INT_PTR* args){
    return (INT_PTR)GetCurrentHwProfileA((LPHW_PROFILE_INFOA)*(args + 0));
}
INT_PTR WINAPI GetCurrentHwProfileW_MWAI(INT_PTR* args){
    return (INT_PTR)GetCurrentHwProfileW((LPHW_PROFILE_INFOW)*(args + 0));
}
INT_PTR WINAPI VerifyVersionInfoA_MWAI(INT_PTR* args){
    return (INT_PTR)VerifyVersionInfoA((LPOSVERSIONINFOEXA)*(args + 0), (DWORD)*(args + 1), (DWORDLONG)*(args + 2));
}
INT_PTR WINAPI VerifyVersionInfoW_MWAI(INT_PTR* args){
    return (INT_PTR)VerifyVersionInfoW((LPOSVERSIONINFOEXW)*(args + 0), (DWORD)*(args + 1), (DWORDLONG)*(args + 2));
}
INT_PTR WINAPI GetTimeZoneInformation_MWAI(INT_PTR* args){
    return (INT_PTR)GetTimeZoneInformation((LPTIME_ZONE_INFORMATION)*(args + 0));
}
INT_PTR WINAPI SetTimeZoneInformation_MWAI(INT_PTR* args){
    return (INT_PTR)SetTimeZoneInformation((const TIME_ZONE_INFORMATION*)*(args + 0));
}
INT_PTR WINAPI SetDynamicTimeZoneInformation_MWAI(INT_PTR* args){
    return (INT_PTR)SetDynamicTimeZoneInformation((const DYNAMIC_TIME_ZONE_INFORMATION*)*(args + 0));
}
INT_PTR WINAPI GetDynamicTimeZoneInformation_MWAI(INT_PTR* args){
    return (INT_PTR)GetDynamicTimeZoneInformation((PDYNAMIC_TIME_ZONE_INFORMATION)*(args + 0));
}
INT_PTR WINAPI GetTimeZoneInformationForYear_MWAI(INT_PTR* args){
    return (INT_PTR)GetTimeZoneInformationForYear((USHORT)*(args + 0), (PDYNAMIC_TIME_ZONE_INFORMATION)*(args + 1), (LPTIME_ZONE_INFORMATION)*(args + 2));
}
INT_PTR WINAPI EnumDynamicTimeZoneInformation_MWAI(INT_PTR* args){
    return (INT_PTR)EnumDynamicTimeZoneInformation((const DWORD)*(args + 0), (PDYNAMIC_TIME_ZONE_INFORMATION)*(args + 1));
}
INT_PTR WINAPI GetDynamicTimeZoneInformationEffectiveYears_MWAI(INT_PTR* args){
    return (INT_PTR)GetDynamicTimeZoneInformationEffectiveYears((const PDYNAMIC_TIME_ZONE_INFORMATION)*(args + 0), (LPDWORD)*(args + 1), (LPDWORD)*(args + 2));
}
INT_PTR WINAPI LocalFileTimeToLocalSystemTime_MWAI(INT_PTR* args){
    return (INT_PTR)LocalFileTimeToLocalSystemTime((const TIME_ZONE_INFORMATION*)*(args + 0), (const FILETIME*)*(args + 1), (SYSTEMTIME*)*(args + 2));
}
INT_PTR WINAPI LocalSystemTimeToLocalFileTime_MWAI(INT_PTR* args){
    return (INT_PTR)LocalSystemTimeToLocalFileTime((const TIME_ZONE_INFORMATION*)*(args + 0), (const SYSTEMTIME*)*(args + 1), (FILETIME*)*(args + 2));
}
INT_PTR WINAPI SetSystemPowerState_MWAI(INT_PTR* args){
    return (INT_PTR)SetSystemPowerState((BOOL)*(args + 0), (BOOL)*(args + 1));
}
INT_PTR WINAPI GetSystemPowerStatus_MWAI(INT_PTR* args){
    return (INT_PTR)GetSystemPowerStatus((LPSYSTEM_POWER_STATUS)*(args + 0));
}
INT_PTR WINAPI MapUserPhysicalPagesScatter_MWAI(INT_PTR* args){
    return (INT_PTR)MapUserPhysicalPagesScatter((PVOID *)*(args + 0), (ULONG_PTR)*(args + 1), (PULONG_PTR)*(args + 2));
}
INT_PTR WINAPI CreateJobObjectA_MWAI(INT_PTR* args){
    return (INT_PTR)CreateJobObjectA((LPSECURITY_ATTRIBUTES)*(args + 0), (LPCSTR)*(args + 1));
}
INT_PTR WINAPI OpenJobObjectA_MWAI(INT_PTR* args){
    return (INT_PTR)OpenJobObjectA((DWORD)*(args + 0), (BOOL)*(args + 1), (LPCSTR)*(args + 2));
}
INT_PTR WINAPI CreateJobSet_MWAI(INT_PTR* args){
    return (INT_PTR)CreateJobSet((ULONG)*(args + 0), (PJOB_SET_ARRAY)*(args + 1), (ULONG)*(args + 2));
}
INT_PTR WINAPI FindFirstVolumeA_MWAI(INT_PTR* args){
    return (INT_PTR)FindFirstVolumeA((LPSTR)*(args + 0), (DWORD)*(args + 1));
}
INT_PTR WINAPI FindNextVolumeA_MWAI(INT_PTR* args){
    return (INT_PTR)FindNextVolumeA((HANDLE)*(args + 0), (LPSTR)*(args + 1), (DWORD)*(args + 2));
}
INT_PTR WINAPI FindFirstVolumeMountPointA_MWAI(INT_PTR* args){
    return (INT_PTR)FindFirstVolumeMountPointA((LPCSTR)*(args + 0), (LPSTR)*(args + 1), (DWORD)*(args + 2));
}
INT_PTR WINAPI FindFirstVolumeMountPointW_MWAI(INT_PTR* args){
    return (INT_PTR)FindFirstVolumeMountPointW((LPCWSTR)*(args + 0), (LPWSTR)*(args + 1), (DWORD)*(args + 2));
}
INT_PTR WINAPI FindNextVolumeMountPointA_MWAI(INT_PTR* args){
    return (INT_PTR)FindNextVolumeMountPointA((HANDLE)*(args + 0), (LPSTR)*(args + 1), (DWORD)*(args + 2));
}
INT_PTR WINAPI FindNextVolumeMountPointW_MWAI(INT_PTR* args){
    return (INT_PTR)FindNextVolumeMountPointW((HANDLE)*(args + 0), (LPWSTR)*(args + 1), (DWORD)*(args + 2));
}
INT_PTR WINAPI FindVolumeMountPointClose_MWAI(INT_PTR* args){
    return (INT_PTR)FindVolumeMountPointClose((HANDLE)*(args + 0));
}
INT_PTR WINAPI SetVolumeMountPointA_MWAI(INT_PTR* args){
    return (INT_PTR)SetVolumeMountPointA((LPCSTR)*(args + 0), (LPCSTR)*(args + 1));
}
INT_PTR WINAPI SetVolumeMountPointW_MWAI(INT_PTR* args){
    return (INT_PTR)SetVolumeMountPointW((LPCWSTR)*(args + 0), (LPCWSTR)*(args + 1));
}
INT_PTR WINAPI DeleteVolumeMountPointA_MWAI(INT_PTR* args){
    return (INT_PTR)DeleteVolumeMountPointA((LPCSTR)*(args + 0));
}
INT_PTR WINAPI GetVolumeNameForVolumeMountPointA_MWAI(INT_PTR* args){
    return (INT_PTR)GetVolumeNameForVolumeMountPointA((LPCSTR)*(args + 0), (LPSTR)*(args + 1), (DWORD)*(args + 2));
}
INT_PTR WINAPI GetVolumePathNameA_MWAI(INT_PTR* args){
    return (INT_PTR)GetVolumePathNameA((LPCSTR)*(args + 0), (LPSTR)*(args + 1), (DWORD)*(args + 2));
}
INT_PTR WINAPI GetVolumePathNamesForVolumeNameA_MWAI(INT_PTR* args){
    return (INT_PTR)GetVolumePathNamesForVolumeNameA((LPCSTR)*(args + 0), (LPCH)*(args + 1), (DWORD)*(args + 2), (PDWORD)*(args + 3));
}
INT_PTR WINAPI CreateActCtxA_MWAI(INT_PTR* args){
    return (INT_PTR)CreateActCtxA((PCACTCTXA)*(args + 0));
}
INT_PTR WINAPI CreateActCtxW_MWAI(INT_PTR* args){
    return (INT_PTR)CreateActCtxW((PCACTCTXW)*(args + 0));
}
INT_PTR WINAPI AddRefActCtx_MWAI(INT_PTR* args){
    AddRefActCtx((HANDLE)*(args + 0));
    return 0;
}
INT_PTR WINAPI ReleaseActCtx_MWAI(INT_PTR* args){
    ReleaseActCtx((HANDLE)*(args + 0));
    return 0;
}
INT_PTR WINAPI ZombifyActCtx_MWAI(INT_PTR* args){
    return (INT_PTR)ZombifyActCtx((HANDLE)*(args + 0));
}
INT_PTR WINAPI ActivateActCtx_MWAI(INT_PTR* args){
    return (INT_PTR)ActivateActCtx((HANDLE)*(args + 0), (ULONG_PTR *)*(args + 1));
}
INT_PTR WINAPI DeactivateActCtx_MWAI(INT_PTR* args){
    return (INT_PTR)DeactivateActCtx((DWORD)*(args + 0), (ULONG_PTR)*(args + 1));
}
INT_PTR WINAPI GetCurrentActCtx_MWAI(INT_PTR* args){
    return (INT_PTR)GetCurrentActCtx((HANDLE *)*(args + 0));
}
INT_PTR WINAPI FindActCtxSectionStringA_MWAI(INT_PTR* args){
    return (INT_PTR)FindActCtxSectionStringA((DWORD)*(args + 0), (const GUID *)*(args + 1), (ULONG)*(args + 2), (LPCSTR)*(args + 3), (PACTCTX_SECTION_KEYED_DATA)*(args + 4));
}
INT_PTR WINAPI FindActCtxSectionStringW_MWAI(INT_PTR* args){
    return (INT_PTR)FindActCtxSectionStringW((DWORD)*(args + 0), (const GUID *)*(args + 1), (ULONG)*(args + 2), (LPCWSTR)*(args + 3), (PACTCTX_SECTION_KEYED_DATA)*(args + 4));
}
INT_PTR WINAPI FindActCtxSectionGuid_MWAI(INT_PTR* args){
    return (INT_PTR)FindActCtxSectionGuid((DWORD)*(args + 0), (const GUID *)*(args + 1), (ULONG)*(args + 2), (const GUID *)*(args + 3), (PACTCTX_SECTION_KEYED_DATA)*(args + 4));
}
INT_PTR WINAPI WTSGetActiveConsoleSessionId_MWAI(INT_PTR* args){
    return (INT_PTR)WTSGetActiveConsoleSessionId();
}
INT_PTR WINAPI GetActiveProcessorGroupCount_MWAI(INT_PTR* args){
    return (INT_PTR)GetActiveProcessorGroupCount();
}
INT_PTR WINAPI GetMaximumProcessorGroupCount_MWAI(INT_PTR* args){
    return (INT_PTR)GetMaximumProcessorGroupCount();
}
INT_PTR WINAPI GetActiveProcessorCount_MWAI(INT_PTR* args){
    return (INT_PTR)GetActiveProcessorCount((WORD)*(args + 0));
}
INT_PTR WINAPI GetMaximumProcessorCount_MWAI(INT_PTR* args){
    return (INT_PTR)GetMaximumProcessorCount((WORD)*(args + 0));
}
INT_PTR WINAPI GetNumaProcessorNode_MWAI(INT_PTR* args){
    return (INT_PTR)GetNumaProcessorNode((UCHAR)*(args + 0), (PUCHAR)*(args + 1));
}
INT_PTR WINAPI GetNumaNodeNumberFromHandle_MWAI(INT_PTR* args){
    return (INT_PTR)GetNumaNodeNumberFromHandle((HANDLE)*(args + 0), (PUSHORT)*(args + 1));
}
INT_PTR WINAPI GetNumaProcessorNodeEx_MWAI(INT_PTR* args){
    return (INT_PTR)GetNumaProcessorNodeEx((PPROCESSOR_NUMBER)*(args + 0), (PUSHORT)*(args + 1));
}
INT_PTR WINAPI GetNumaNodeProcessorMask_MWAI(INT_PTR* args){
    return (INT_PTR)GetNumaNodeProcessorMask((UCHAR)*(args + 0), (PULONGLONG)*(args + 1));
}
INT_PTR WINAPI GetNumaAvailableMemoryNode_MWAI(INT_PTR* args){
    return (INT_PTR)GetNumaAvailableMemoryNode((UCHAR)*(args + 0), (PULONGLONG)*(args + 1));
}
INT_PTR WINAPI GetNumaAvailableMemoryNodeEx_MWAI(INT_PTR* args){
    return (INT_PTR)GetNumaAvailableMemoryNodeEx((USHORT)*(args + 0), (PULONGLONG)*(args + 1));
}
INT_PTR WINAPI GetNumaProximityNode_MWAI(INT_PTR* args){
    return (INT_PTR)GetNumaProximityNode((ULONG)*(args + 0), (PUCHAR)*(args + 1));
}
INT_PTR WINAPI RegisterApplicationRecoveryCallback_MWAI(INT_PTR* args){
    return (INT_PTR)RegisterApplicationRecoveryCallback((APPLICATION_RECOVERY_CALLBACK)*(args + 0), (PVOID)*(args + 1), (DWORD)*(args + 2), (DWORD)*(args + 3));
}
INT_PTR WINAPI UnregisterApplicationRecoveryCallback_MWAI(INT_PTR* args){
    return (INT_PTR)UnregisterApplicationRecoveryCallback();
}
INT_PTR WINAPI RegisterApplicationRestart_MWAI(INT_PTR* args){
    return (INT_PTR)RegisterApplicationRestart((PCWSTR)*(args + 0), (DWORD)*(args + 1));
}
INT_PTR WINAPI UnregisterApplicationRestart_MWAI(INT_PTR* args){
    return (INT_PTR)UnregisterApplicationRestart();
}
INT_PTR WINAPI GetApplicationRecoveryCallback_MWAI(INT_PTR* args){
    return (INT_PTR)GetApplicationRecoveryCallback((HANDLE)*(args + 0), (APPLICATION_RECOVERY_CALLBACK*)*(args + 1), (PVOID*)*(args + 2), (PDWORD)*(args + 3), (PDWORD)*(args + 4));
}
INT_PTR WINAPI GetApplicationRestartSettings_MWAI(INT_PTR* args){
    return (INT_PTR)GetApplicationRestartSettings((HANDLE)*(args + 0), (PWSTR)*(args + 1), (PDWORD)*(args + 2), (PDWORD)*(args + 3));
}
INT_PTR WINAPI ApplicationRecoveryInProgress_MWAI(INT_PTR* args){
    return (INT_PTR)ApplicationRecoveryInProgress((PBOOL)*(args + 0));
}
INT_PTR WINAPI ApplicationRecoveryFinished_MWAI(INT_PTR* args){
    ApplicationRecoveryFinished((BOOL)*(args + 0));
    return 0;
}
INT_PTR WINAPI GetFileInformationByHandleEx_MWAI(INT_PTR* args){
    return (INT_PTR)GetFileInformationByHandleEx((HANDLE)*(args + 0), (FILE_INFO_BY_HANDLE_CLASS)*(args + 1), (LPVOID)*(args + 2), (DWORD)*(args + 3));
}
INT_PTR WINAPI GetFileInformationByName_MWAI(INT_PTR* args){
    return (INT_PTR)GetFileInformationByName((PCWSTR)*(args + 0), (FILE_INFO_BY_NAME_CLASS)*(args + 1), (PVOID)*(args + 2), (ULONG)*(args + 3));
}
INT_PTR WINAPI OpenFileById_MWAI(INT_PTR* args){
    return (INT_PTR)OpenFileById((HANDLE)*(args + 0), (LPFILE_ID_DESCRIPTOR)*(args + 1), (DWORD)*(args + 2), (DWORD)*(args + 3), (LPSECURITY_ATTRIBUTES)*(args + 4), (DWORD)*(args + 5));
}
INT_PTR WINAPI CreateSymbolicLinkA_MWAI(INT_PTR* args){
    return (INT_PTR)CreateSymbolicLinkA((LPCSTR)*(args + 0), (LPCSTR)*(args + 1), (DWORD)*(args + 2));
}
INT_PTR WINAPI CreateSymbolicLinkW_MWAI(INT_PTR* args){
    return (INT_PTR)CreateSymbolicLinkW((LPCWSTR)*(args + 0), (LPCWSTR)*(args + 1), (DWORD)*(args + 2));
}
INT_PTR WINAPI CreateSymbolicLinkTransactedA_MWAI(INT_PTR* args){
    return (INT_PTR)CreateSymbolicLinkTransactedA((LPCSTR)*(args + 0), (LPCSTR)*(args + 1), (DWORD)*(args + 2), (HANDLE)*(args + 3));
}
INT_PTR WINAPI CreateSymbolicLinkTransactedW_MWAI(INT_PTR* args){
    return (INT_PTR)CreateSymbolicLinkTransactedW((LPCWSTR)*(args + 0), (LPCWSTR)*(args + 1), (DWORD)*(args + 2), (HANDLE)*(args + 3));
}
INT_PTR WINAPI ReplacePartitionUnit_MWAI(INT_PTR* args){
    return (INT_PTR)ReplacePartitionUnit((PWSTR)*(args + 0), (PWSTR)*(args + 1), (ULONG)*(args + 2));
}
INT_PTR WINAPI AddSecureMemoryCacheCallback_MWAI(INT_PTR* args){
    return (INT_PTR)AddSecureMemoryCacheCallback((PSECURE_MEMORY_CACHE_CALLBACK)*(args + 0));
}
INT_PTR WINAPI RemoveSecureMemoryCacheCallback_MWAI(INT_PTR* args){
    return (INT_PTR)RemoveSecureMemoryCacheCallback((PSECURE_MEMORY_CACHE_CALLBACK)*(args + 0));
}
INT_PTR WINAPI InitializeContext_MWAI(INT_PTR* args){
    return (INT_PTR)InitializeContext((PVOID)*(args + 0), (DWORD)*(args + 1), (PCONTEXT*)*(args + 2), (PDWORD)*(args + 3));
}
INT_PTR WINAPI InitializeContext2_MWAI(INT_PTR* args){
    return (INT_PTR)InitializeContext2((PVOID)*(args + 0), (DWORD)*(args + 1), (PCONTEXT*)*(args + 2), (PDWORD)*(args + 3), (ULONG64)*(args + 4));
}
INT_PTR WINAPI GetEnabledXStateFeatures_MWAI(INT_PTR* args){
    return (INT_PTR)GetEnabledXStateFeatures();
}
INT_PTR WINAPI GetThreadEnabledXStateFeatures_MWAI(INT_PTR* args){
    return (INT_PTR)GetThreadEnabledXStateFeatures();
}
INT_PTR WINAPI EnableProcessOptionalXStateFeatures_MWAI(INT_PTR* args){
    return (INT_PTR)EnableProcessOptionalXStateFeatures((DWORD64)*(args + 0));
}
INT_PTR WINAPI EnableThreadProfiling_MWAI(INT_PTR* args){
    return (INT_PTR)EnableThreadProfiling((HANDLE)*(args + 0), (DWORD)*(args + 1), (DWORD64)*(args + 2), (HANDLE *)*(args + 3));
}
INT_PTR WINAPI DisableThreadProfiling_MWAI(INT_PTR* args){
    return (INT_PTR)DisableThreadProfiling((HANDLE)*(args + 0));
}
INT_PTR WINAPI QueryThreadProfiling_MWAI(INT_PTR* args){
    return (INT_PTR)QueryThreadProfiling((HANDLE)*(args + 0), (PBOOLEAN)*(args + 1));
}
INT_PTR WINAPI ReadThreadProfilingData_MWAI(INT_PTR* args){
    return (INT_PTR)ReadThreadProfilingData((HANDLE)*(args + 0), (DWORD)*(args + 1), (PPERFORMANCE_DATA)*(args + 2));
}
INT_PTR WINAPI AddFontResourceA_MWAI(INT_PTR* args){
    return (INT_PTR)AddFontResourceA((LPCSTR)*(args + 0));
}
INT_PTR WINAPI AddFontResourceW_MWAI(INT_PTR* args){
    return (INT_PTR)AddFontResourceW((LPCWSTR)*(args + 0));
}
INT_PTR WINAPI AnimatePalette_MWAI(INT_PTR* args){
    return (INT_PTR)AnimatePalette((HPALETTE)*(args + 0), (UINT)*(args + 1), (UINT)*(args + 2), (const PALETTEENTRY *)*(args + 3));
}
INT_PTR WINAPI Arc_MWAI(INT_PTR* args){
    return (INT_PTR)Arc((HDC)*(args + 0), (int)*(args + 1), (int)*(args + 2), (int)*(args + 3), (int)*(args + 4), (int)*(args + 5), (int)*(args + 6), (int)*(args + 7), (int)*(args + 8));
}
INT_PTR WINAPI BitBlt_MWAI(INT_PTR* args){
    return (INT_PTR)BitBlt((HDC)*(args + 0), (int)*(args + 1), (int)*(args + 2), (int)*(args + 3), (int)*(args + 4), (HDC)*(args + 5), (int)*(args + 6), (int)*(args + 7), (DWORD)*(args + 8));
}
INT_PTR WINAPI CancelDC_MWAI(INT_PTR* args){
    return (INT_PTR)CancelDC((HDC)*(args + 0));
}
INT_PTR WINAPI Chord_MWAI(INT_PTR* args){
    return (INT_PTR)Chord((HDC)*(args + 0), (int)*(args + 1), (int)*(args + 2), (int)*(args + 3), (int)*(args + 4), (int)*(args + 5), (int)*(args + 6), (int)*(args + 7), (int)*(args + 8));
}
INT_PTR WINAPI ChoosePixelFormat_MWAI(INT_PTR* args){
    return (INT_PTR)ChoosePixelFormat((HDC)*(args + 0), (const PIXELFORMATDESCRIPTOR *)*(args + 1));
}
INT_PTR WINAPI CloseMetaFile_MWAI(INT_PTR* args){
    return (INT_PTR)CloseMetaFile((HDC)*(args + 0));
}
INT_PTR WINAPI CombineRgn_MWAI(INT_PTR* args){
    return (INT_PTR)CombineRgn((HRGN)*(args + 0), (HRGN)*(args + 1), (HRGN)*(args + 2), (int)*(args + 3));
}
INT_PTR WINAPI CopyMetaFileA_MWAI(INT_PTR* args){
    return (INT_PTR)CopyMetaFileA((HMETAFILE)*(args + 0), (LPCSTR)*(args + 1));
}
INT_PTR WINAPI CopyMetaFileW_MWAI(INT_PTR* args){
    return (INT_PTR)CopyMetaFileW((HMETAFILE)*(args + 0), (LPCWSTR)*(args + 1));
}
INT_PTR WINAPI CreateBitmap_MWAI(INT_PTR* args){
    return (INT_PTR)CreateBitmap((int)*(args + 0), (int)*(args + 1), (UINT)*(args + 2), (UINT)*(args + 3), (const void *)*(args + 4));
}
INT_PTR WINAPI CreateBitmapIndirect_MWAI(INT_PTR* args){
    return (INT_PTR)CreateBitmapIndirect((const BITMAP *)*(args + 0));
}
INT_PTR WINAPI CreateBrushIndirect_MWAI(INT_PTR* args){
    return (INT_PTR)CreateBrushIndirect((const LOGBRUSH *)*(args + 0));
}
INT_PTR WINAPI CreateCompatibleBitmap_MWAI(INT_PTR* args){
    return (INT_PTR)CreateCompatibleBitmap((HDC)*(args + 0), (int)*(args + 1), (int)*(args + 2));
}
INT_PTR WINAPI CreateDiscardableBitmap_MWAI(INT_PTR* args){
    return (INT_PTR)CreateDiscardableBitmap((HDC)*(args + 0), (int)*(args + 1), (int)*(args + 2));
}
INT_PTR WINAPI CreateCompatibleDC_MWAI(INT_PTR* args){
    return (INT_PTR)CreateCompatibleDC((HDC)*(args + 0));
}
INT_PTR WINAPI CreateDCA_MWAI(INT_PTR* args){
    return (INT_PTR)CreateDCA((LPCSTR)*(args + 0), (LPCSTR)*(args + 1), (LPCSTR)*(args + 2), (const DEVMODEA *)*(args + 3));
}
INT_PTR WINAPI CreateDCW_MWAI(INT_PTR* args){
    return (INT_PTR)CreateDCW((LPCWSTR)*(args + 0), (LPCWSTR)*(args + 1), (LPCWSTR)*(args + 2), (const DEVMODEW *)*(args + 3));
}
INT_PTR WINAPI CreateDIBitmap_MWAI(INT_PTR* args){
    return (INT_PTR)CreateDIBitmap((HDC)*(args + 0), (const BITMAPINFOHEADER *)*(args + 1), (DWORD)*(args + 2), (const void *)*(args + 3), (const BITMAPINFO *)*(args + 4), (UINT)*(args + 5));
}
INT_PTR WINAPI CreateDIBPatternBrush_MWAI(INT_PTR* args){
    return (INT_PTR)CreateDIBPatternBrush((HGLOBAL)*(args + 0), (UINT)*(args + 1));
}
INT_PTR WINAPI CreateDIBPatternBrushPt_MWAI(INT_PTR* args){
    return (INT_PTR)CreateDIBPatternBrushPt((const void *)*(args + 0), (UINT)*(args + 1));
}
INT_PTR WINAPI CreateEllipticRgn_MWAI(INT_PTR* args){
    return (INT_PTR)CreateEllipticRgn((int)*(args + 0), (int)*(args + 1), (int)*(args + 2), (int)*(args + 3));
}
INT_PTR WINAPI CreateEllipticRgnIndirect_MWAI(INT_PTR* args){
    return (INT_PTR)CreateEllipticRgnIndirect((const RECT *)*(args + 0));
}
INT_PTR WINAPI CreateFontIndirectA_MWAI(INT_PTR* args){
    return (INT_PTR)CreateFontIndirectA((const LOGFONTA *)*(args + 0));
}
INT_PTR WINAPI CreateFontIndirectW_MWAI(INT_PTR* args){
    return (INT_PTR)CreateFontIndirectW((const LOGFONTW *)*(args + 0));
}
INT_PTR WINAPI CreateFontA_MWAI(INT_PTR* args){
    return (INT_PTR)CreateFontA((int)*(args + 0), (int)*(args + 1), (int)*(args + 2), (int)*(args + 3), (int)*(args + 4), (DWORD)*(args + 5), (DWORD)*(args + 6), (DWORD)*(args + 7), (DWORD)*(args + 8), (DWORD)*(args + 9), (DWORD)*(args + 10), (DWORD)*(args + 11), (DWORD)*(args + 12), (LPCSTR)*(args + 13));
}
INT_PTR WINAPI CreateFontW_MWAI(INT_PTR* args){
    return (INT_PTR)CreateFontW((int)*(args + 0), (int)*(args + 1), (int)*(args + 2), (int)*(args + 3), (int)*(args + 4), (DWORD)*(args + 5), (DWORD)*(args + 6), (DWORD)*(args + 7), (DWORD)*(args + 8), (DWORD)*(args + 9), (DWORD)*(args + 10), (DWORD)*(args + 11), (DWORD)*(args + 12), (LPCWSTR)*(args + 13));
}
INT_PTR WINAPI CreateHatchBrush_MWAI(INT_PTR* args){
    return (INT_PTR)CreateHatchBrush((int)*(args + 0), (COLORREF)*(args + 1));
}
INT_PTR WINAPI CreateICA_MWAI(INT_PTR* args){
    return (INT_PTR)CreateICA((LPCSTR)*(args + 0), (LPCSTR)*(args + 1), (LPCSTR)*(args + 2), (const DEVMODEA *)*(args + 3));
}
INT_PTR WINAPI CreateICW_MWAI(INT_PTR* args){
    return (INT_PTR)CreateICW((LPCWSTR)*(args + 0), (LPCWSTR)*(args + 1), (LPCWSTR)*(args + 2), (const DEVMODEW *)*(args + 3));
}
INT_PTR WINAPI CreateMetaFileA_MWAI(INT_PTR* args){
    return (INT_PTR)CreateMetaFileA((LPCSTR)*(args + 0));
}
INT_PTR WINAPI CreateMetaFileW_MWAI(INT_PTR* args){
    return (INT_PTR)CreateMetaFileW((LPCWSTR)*(args + 0));
}
INT_PTR WINAPI CreatePalette_MWAI(INT_PTR* args){
    return (INT_PTR)CreatePalette((const LOGPALETTE *)*(args + 0));
}
INT_PTR WINAPI CreatePen_MWAI(INT_PTR* args){
    return (INT_PTR)CreatePen((int)*(args + 0), (int)*(args + 1), (COLORREF)*(args + 2));
}
INT_PTR WINAPI CreatePenIndirect_MWAI(INT_PTR* args){
    return (INT_PTR)CreatePenIndirect((const LOGPEN *)*(args + 0));
}
INT_PTR WINAPI CreatePolyPolygonRgn_MWAI(INT_PTR* args){
    return (INT_PTR)CreatePolyPolygonRgn((const POINT *)*(args + 0), (const INT  *)*(args + 1), (int)*(args + 2), (int)*(args + 3));
}
INT_PTR WINAPI CreatePatternBrush_MWAI(INT_PTR* args){
    return (INT_PTR)CreatePatternBrush((HBITMAP)*(args + 0));
}
INT_PTR WINAPI CreateRectRgn_MWAI(INT_PTR* args){
    return (INT_PTR)CreateRectRgn((int)*(args + 0), (int)*(args + 1), (int)*(args + 2), (int)*(args + 3));
}
INT_PTR WINAPI CreateRectRgnIndirect_MWAI(INT_PTR* args){
    return (INT_PTR)CreateRectRgnIndirect((const RECT *)*(args + 0));
}
INT_PTR WINAPI CreateRoundRectRgn_MWAI(INT_PTR* args){
    return (INT_PTR)CreateRoundRectRgn((int)*(args + 0), (int)*(args + 1), (int)*(args + 2), (int)*(args + 3), (int)*(args + 4), (int)*(args + 5));
}
INT_PTR WINAPI CreateScalableFontResourceA_MWAI(INT_PTR* args){
    return (INT_PTR)CreateScalableFontResourceA((DWORD)*(args + 0), (LPCSTR)*(args + 1), (LPCSTR)*(args + 2), (LPCSTR)*(args + 3));
}
INT_PTR WINAPI CreateScalableFontResourceW_MWAI(INT_PTR* args){
    return (INT_PTR)CreateScalableFontResourceW((DWORD)*(args + 0), (LPCWSTR)*(args + 1), (LPCWSTR)*(args + 2), (LPCWSTR)*(args + 3));
}
INT_PTR WINAPI CreateSolidBrush_MWAI(INT_PTR* args){
    return (INT_PTR)CreateSolidBrush((COLORREF)*(args + 0));
}
INT_PTR WINAPI DeleteDC_MWAI(INT_PTR* args){
    return (INT_PTR)DeleteDC((HDC)*(args + 0));
}
INT_PTR WINAPI DeleteMetaFile_MWAI(INT_PTR* args){
    return (INT_PTR)DeleteMetaFile((HMETAFILE)*(args + 0));
}
INT_PTR WINAPI DeleteObject_MWAI(INT_PTR* args){
    return (INT_PTR)DeleteObject((HGDIOBJ)*(args + 0));
}
INT_PTR WINAPI DescribePixelFormat_MWAI(INT_PTR* args){
    return (INT_PTR)DescribePixelFormat((HDC)*(args + 0), (int)*(args + 1), (UINT)*(args + 2), (LPPIXELFORMATDESCRIPTOR)*(args + 3));
}
INT_PTR WINAPI DrawEscape_MWAI(INT_PTR* args){
    return (INT_PTR)DrawEscape((HDC)*(args + 0), (int)*(args + 1), (int)*(args + 2), (LPCSTR)*(args + 3));
}
INT_PTR WINAPI Ellipse_MWAI(INT_PTR* args){
    return (INT_PTR)Ellipse((HDC)*(args + 0), (int)*(args + 1), (int)*(args + 2), (int)*(args + 3), (int)*(args + 4));
}
INT_PTR WINAPI EnumFontFamiliesExA_MWAI(INT_PTR* args){
    return (INT_PTR)EnumFontFamiliesExA((HDC)*(args + 0), (LPLOGFONTA)*(args + 1), (FONTENUMPROCA)*(args + 2), (LPARAM)*(args + 3), (DWORD)*(args + 4));
}
INT_PTR WINAPI EnumFontFamiliesExW_MWAI(INT_PTR* args){
    return (INT_PTR)EnumFontFamiliesExW((HDC)*(args + 0), (LPLOGFONTW)*(args + 1), (FONTENUMPROCW)*(args + 2), (LPARAM)*(args + 3), (DWORD)*(args + 4));
}
INT_PTR WINAPI EnumFontFamiliesA_MWAI(INT_PTR* args){
    return (INT_PTR)EnumFontFamiliesA((HDC)*(args + 0), (LPCSTR)*(args + 1), (FONTENUMPROCA)*(args + 2), (LPARAM)*(args + 3));
}
INT_PTR WINAPI EnumFontFamiliesW_MWAI(INT_PTR* args){
    return (INT_PTR)EnumFontFamiliesW((HDC)*(args + 0), (LPCWSTR)*(args + 1), (FONTENUMPROCW)*(args + 2), (LPARAM)*(args + 3));
}
INT_PTR WINAPI EnumFontsA_MWAI(INT_PTR* args){
    return (INT_PTR)EnumFontsA((HDC)*(args + 0), (LPCSTR)*(args + 1), (FONTENUMPROCA)*(args + 2), (LPARAM)*(args + 3));
}
INT_PTR WINAPI EnumFontsW_MWAI(INT_PTR* args){
    return (INT_PTR)EnumFontsW((HDC)*(args + 0), (LPCWSTR)*(args + 1), (FONTENUMPROCW)*(args + 2), (LPARAM)*(args + 3));
}
INT_PTR WINAPI EnumObjects_MWAI(INT_PTR* args){
    return (INT_PTR)EnumObjects((HDC)*(args + 0), (int)*(args + 1), (GOBJENUMPROC)*(args + 2), (LPARAM)*(args + 3));
}
INT_PTR WINAPI EqualRgn_MWAI(INT_PTR* args){
    return (INT_PTR)EqualRgn((HRGN)*(args + 0), (HRGN)*(args + 1));
}
INT_PTR WINAPI Escape_MWAI(INT_PTR* args){
    return (INT_PTR)Escape((HDC)*(args + 0), (int)*(args + 1), (int)*(args + 2), (LPCSTR)*(args + 3), (LPVOID)*(args + 4));
}
INT_PTR WINAPI ExtEscape_MWAI(INT_PTR* args){
    return (INT_PTR)ExtEscape((HDC)*(args + 0), (int)*(args + 1), (int)*(args + 2), (LPCSTR)*(args + 3), (int)*(args + 4), (LPSTR)*(args + 5));
}
INT_PTR WINAPI ExcludeClipRect_MWAI(INT_PTR* args){
    return (INT_PTR)ExcludeClipRect((HDC)*(args + 0), (int)*(args + 1), (int)*(args + 2), (int)*(args + 3), (int)*(args + 4));
}
INT_PTR WINAPI ExtCreateRegion_MWAI(INT_PTR* args){
    return (INT_PTR)ExtCreateRegion((const XFORM *)*(args + 0), (DWORD)*(args + 1), (const RGNDATA *)*(args + 2));
}
INT_PTR WINAPI ExtFloodFill_MWAI(INT_PTR* args){
    return (INT_PTR)ExtFloodFill((HDC)*(args + 0), (int)*(args + 1), (int)*(args + 2), (COLORREF)*(args + 3), (UINT)*(args + 4));
}
INT_PTR WINAPI FillRgn_MWAI(INT_PTR* args){
    return (INT_PTR)FillRgn((HDC)*(args + 0), (HRGN)*(args + 1), (HBRUSH)*(args + 2));
}
INT_PTR WINAPI FloodFill_MWAI(INT_PTR* args){
    return (INT_PTR)FloodFill((HDC)*(args + 0), (int)*(args + 1), (int)*(args + 2), (COLORREF)*(args + 3));
}
INT_PTR WINAPI FrameRgn_MWAI(INT_PTR* args){
    return (INT_PTR)FrameRgn((HDC)*(args + 0), (HRGN)*(args + 1), (HBRUSH)*(args + 2), (int)*(args + 3), (int)*(args + 4));
}
INT_PTR WINAPI GetROP2_MWAI(INT_PTR* args){
    return (INT_PTR)GetROP2((HDC)*(args + 0));
}
INT_PTR WINAPI GetBkColor_MWAI(INT_PTR* args){
    return (INT_PTR)GetBkColor((HDC)*(args + 0));
}
INT_PTR WINAPI GetDCBrushColor_MWAI(INT_PTR* args){
    return (INT_PTR)GetDCBrushColor((HDC)*(args + 0));
}
INT_PTR WINAPI GetDCPenColor_MWAI(INT_PTR* args){
    return (INT_PTR)GetDCPenColor((HDC)*(args + 0));
}
INT_PTR WINAPI GetBkMode_MWAI(INT_PTR* args){
    return (INT_PTR)GetBkMode((HDC)*(args + 0));
}
INT_PTR WINAPI GetBitmapBits_MWAI(INT_PTR* args){
    return (INT_PTR)GetBitmapBits((HBITMAP)*(args + 0), (LONG)*(args + 1), (LPVOID)*(args + 2));
}
INT_PTR WINAPI GetCharWidthA_MWAI(INT_PTR* args){
    return (INT_PTR)GetCharWidthA((HDC)*(args + 0), (UINT)*(args + 1), (UINT)*(args + 2), (LPINT)*(args + 3));
}
INT_PTR WINAPI GetCharWidthW_MWAI(INT_PTR* args){
    return (INT_PTR)GetCharWidthW((HDC)*(args + 0), (UINT)*(args + 1), (UINT)*(args + 2), (LPINT)*(args + 3));
}
INT_PTR WINAPI GetCharWidth32A_MWAI(INT_PTR* args){
    return (INT_PTR)GetCharWidth32A((HDC)*(args + 0), (UINT)*(args + 1), (UINT)*(args + 2), (LPINT)*(args + 3));
}
INT_PTR WINAPI GetCharWidth32W_MWAI(INT_PTR* args){
    return (INT_PTR)GetCharWidth32W((HDC)*(args + 0), (UINT)*(args + 1), (UINT)*(args + 2), (LPINT)*(args + 3));
}
INT_PTR WINAPI GetCharWidthFloatA_MWAI(INT_PTR* args){
    return (INT_PTR)GetCharWidthFloatA((HDC)*(args + 0), (UINT)*(args + 1), (UINT)*(args + 2), (PFLOAT)*(args + 3));
}
INT_PTR WINAPI GetCharWidthFloatW_MWAI(INT_PTR* args){
    return (INT_PTR)GetCharWidthFloatW((HDC)*(args + 0), (UINT)*(args + 1), (UINT)*(args + 2), (PFLOAT)*(args + 3));
}
INT_PTR WINAPI GetCharABCWidthsA_MWAI(INT_PTR* args){
    return (INT_PTR)GetCharABCWidthsA((HDC)*(args + 0), (UINT)*(args + 1), (UINT)*(args + 2), (LPABC)*(args + 3));
}
INT_PTR WINAPI GetCharABCWidthsW_MWAI(INT_PTR* args){
    return (INT_PTR)GetCharABCWidthsW((HDC)*(args + 0), (UINT)*(args + 1), (UINT)*(args + 2), (LPABC)*(args + 3));
}
INT_PTR WINAPI GetCharABCWidthsFloatA_MWAI(INT_PTR* args){
    return (INT_PTR)GetCharABCWidthsFloatA((HDC)*(args + 0), (UINT)*(args + 1), (UINT)*(args + 2), (LPABCFLOAT)*(args + 3));
}
INT_PTR WINAPI GetCharABCWidthsFloatW_MWAI(INT_PTR* args){
    return (INT_PTR)GetCharABCWidthsFloatW((HDC)*(args + 0), (UINT)*(args + 1), (UINT)*(args + 2), (LPABCFLOAT)*(args + 3));
}
INT_PTR WINAPI GetClipRgn_MWAI(INT_PTR* args){
    return (INT_PTR)GetClipRgn((HDC)*(args + 0), (HRGN)*(args + 1));
}
INT_PTR WINAPI GetMetaRgn_MWAI(INT_PTR* args){
    return (INT_PTR)GetMetaRgn((HDC)*(args + 0), (HRGN)*(args + 1));
}
INT_PTR WINAPI GetCurrentObject_MWAI(INT_PTR* args){
    return (INT_PTR)GetCurrentObject((HDC)*(args + 0), (UINT)*(args + 1));
}
INT_PTR WINAPI GetDeviceCaps_MWAI(INT_PTR* args){
    return (INT_PTR)GetDeviceCaps((HDC)*(args + 0), (int)*(args + 1));
}
INT_PTR WINAPI GetDIBits_MWAI(INT_PTR* args){
    return (INT_PTR)GetDIBits((HDC)*(args + 0), (HBITMAP)*(args + 1), (UINT)*(args + 2), (UINT)*(args + 3), (LPVOID)*(args + 4), (LPBITMAPINFO)*(args + 5), (UINT)*(args + 6));
}
INT_PTR WINAPI GetFontData_MWAI(INT_PTR* args){
    return (INT_PTR)GetFontData((HDC)*(args + 0), (DWORD)*(args + 1), (DWORD)*(args + 2), (PVOID)*(args + 3), (DWORD)*(args + 4));
}
INT_PTR WINAPI GetGlyphOutlineA_MWAI(INT_PTR* args){
    return (INT_PTR)GetGlyphOutlineA((HDC)*(args + 0), (UINT)*(args + 1), (UINT)*(args + 2), (LPGLYPHMETRICS)*(args + 3), (DWORD)*(args + 4), (LPVOID)*(args + 5), (const MAT2 *)*(args + 6));
}
INT_PTR WINAPI GetGlyphOutlineW_MWAI(INT_PTR* args){
    return (INT_PTR)GetGlyphOutlineW((HDC)*(args + 0), (UINT)*(args + 1), (UINT)*(args + 2), (LPGLYPHMETRICS)*(args + 3), (DWORD)*(args + 4), (LPVOID)*(args + 5), (const MAT2 *)*(args + 6));
}
INT_PTR WINAPI GetGraphicsMode_MWAI(INT_PTR* args){
    return (INT_PTR)GetGraphicsMode((HDC)*(args + 0));
}
INT_PTR WINAPI GetMapMode_MWAI(INT_PTR* args){
    return (INT_PTR)GetMapMode((HDC)*(args + 0));
}
INT_PTR WINAPI GetMetaFileBitsEx_MWAI(INT_PTR* args){
    return (INT_PTR)GetMetaFileBitsEx((HMETAFILE)*(args + 0), (UINT)*(args + 1), (LPVOID)*(args + 2));
}
INT_PTR WINAPI GetMetaFileA_MWAI(INT_PTR* args){
    return (INT_PTR)GetMetaFileA((LPCSTR)*(args + 0));
}
INT_PTR WINAPI GetMetaFileW_MWAI(INT_PTR* args){
    return (INT_PTR)GetMetaFileW((LPCWSTR)*(args + 0));
}
INT_PTR WINAPI GetNearestColor_MWAI(INT_PTR* args){
    return (INT_PTR)GetNearestColor((HDC)*(args + 0), (COLORREF)*(args + 1));
}
INT_PTR WINAPI GetNearestPaletteIndex_MWAI(INT_PTR* args){
    return (INT_PTR)GetNearestPaletteIndex((HPALETTE)*(args + 0), (COLORREF)*(args + 1));
}
INT_PTR WINAPI GetObjectType_MWAI(INT_PTR* args){
    return (INT_PTR)GetObjectType((HGDIOBJ)*(args + 0));
}
INT_PTR WINAPI GetOutlineTextMetricsA_MWAI(INT_PTR* args){
    return (INT_PTR)GetOutlineTextMetricsA((HDC)*(args + 0), (UINT)*(args + 1), (LPOUTLINETEXTMETRICA)*(args + 2));
}
INT_PTR WINAPI GetOutlineTextMetricsW_MWAI(INT_PTR* args){
    return (INT_PTR)GetOutlineTextMetricsW((HDC)*(args + 0), (UINT)*(args + 1), (LPOUTLINETEXTMETRICW)*(args + 2));
}
INT_PTR WINAPI GetPaletteEntries_MWAI(INT_PTR* args){
    return (INT_PTR)GetPaletteEntries((HPALETTE)*(args + 0), (UINT)*(args + 1), (UINT)*(args + 2), (LPPALETTEENTRY)*(args + 3));
}
INT_PTR WINAPI GetPixel_MWAI(INT_PTR* args){
    return (INT_PTR)GetPixel((HDC)*(args + 0), (int)*(args + 1), (int)*(args + 2));
}
INT_PTR WINAPI GetPixelFormat_MWAI(INT_PTR* args){
    return (INT_PTR)GetPixelFormat((HDC)*(args + 0));
}
INT_PTR WINAPI GetPolyFillMode_MWAI(INT_PTR* args){
    return (INT_PTR)GetPolyFillMode((HDC)*(args + 0));
}
INT_PTR WINAPI GetRasterizerCaps_MWAI(INT_PTR* args){
    return (INT_PTR)GetRasterizerCaps((LPRASTERIZER_STATUS)*(args + 0), (UINT)*(args + 1));
}
INT_PTR WINAPI GetRandomRgn_MWAI(INT_PTR* args){
    return (INT_PTR)GetRandomRgn((HDC)*(args + 0), (HRGN)*(args + 1), (INT)*(args + 2));
}
INT_PTR WINAPI GetRegionData_MWAI(INT_PTR* args){
    return (INT_PTR)GetRegionData((HRGN)*(args + 0), (DWORD)*(args + 1), (LPRGNDATA)*(args + 2));
}
INT_PTR WINAPI GetStockObject_MWAI(INT_PTR* args){
    return (INT_PTR)GetStockObject((int)*(args + 0));
}
INT_PTR WINAPI GetStretchBltMode_MWAI(INT_PTR* args){
    return (INT_PTR)GetStretchBltMode((HDC)*(args + 0));
}
INT_PTR WINAPI GetSystemPaletteEntries_MWAI(INT_PTR* args){
    return (INT_PTR)GetSystemPaletteEntries((HDC)*(args + 0), (UINT)*(args + 1), (UINT)*(args + 2), (LPPALETTEENTRY)*(args + 3));
}
INT_PTR WINAPI GetSystemPaletteUse_MWAI(INT_PTR* args){
    return (INT_PTR)GetSystemPaletteUse((HDC)*(args + 0));
}
INT_PTR WINAPI GetTextCharacterExtra_MWAI(INT_PTR* args){
    return (INT_PTR)GetTextCharacterExtra((HDC)*(args + 0));
}
INT_PTR WINAPI GetTextAlign_MWAI(INT_PTR* args){
    return (INT_PTR)GetTextAlign((HDC)*(args + 0));
}
INT_PTR WINAPI GetTextColor_MWAI(INT_PTR* args){
    return (INT_PTR)GetTextColor((HDC)*(args + 0));
}
INT_PTR WINAPI GetTextCharset_MWAI(INT_PTR* args){
    return (INT_PTR)GetTextCharset((HDC)*(args + 0));
}
INT_PTR WINAPI GetTextCharsetInfo_MWAI(INT_PTR* args){
    return (INT_PTR)GetTextCharsetInfo((HDC)*(args + 0), (LPFONTSIGNATURE)*(args + 1), (DWORD)*(args + 2));
}
INT_PTR WINAPI TranslateCharsetInfo_MWAI(INT_PTR* args){
    return (INT_PTR)TranslateCharsetInfo((DWORD  *)*(args + 0), (LPCHARSETINFO)*(args + 1), (DWORD)*(args + 2));
}
INT_PTR WINAPI GetFontLanguageInfo_MWAI(INT_PTR* args){
    return (INT_PTR)GetFontLanguageInfo((HDC)*(args + 0));
}
INT_PTR WINAPI GetCharacterPlacementA_MWAI(INT_PTR* args){
    return (INT_PTR)GetCharacterPlacementA((HDC)*(args + 0), (LPCSTR)*(args + 1), (int)*(args + 2), (int)*(args + 3), (LPGCP_RESULTSA)*(args + 4), (DWORD)*(args + 5));
}
INT_PTR WINAPI GetCharacterPlacementW_MWAI(INT_PTR* args){
    return (INT_PTR)GetCharacterPlacementW((HDC)*(args + 0), (LPCWSTR)*(args + 1), (int)*(args + 2), (int)*(args + 3), (LPGCP_RESULTSW)*(args + 4), (DWORD)*(args + 5));
}
INT_PTR WINAPI GetFontUnicodeRanges_MWAI(INT_PTR* args){
    return (INT_PTR)GetFontUnicodeRanges((HDC)*(args + 0), (LPGLYPHSET)*(args + 1));
}
INT_PTR WINAPI GetGlyphIndicesA_MWAI(INT_PTR* args){
    return (INT_PTR)GetGlyphIndicesA((HDC)*(args + 0), (LPCSTR)*(args + 1), (int)*(args + 2), (LPWORD)*(args + 3), (DWORD)*(args + 4));
}
INT_PTR WINAPI GetGlyphIndicesW_MWAI(INT_PTR* args){
    return (INT_PTR)GetGlyphIndicesW((HDC)*(args + 0), (LPCWSTR)*(args + 1), (int)*(args + 2), (LPWORD)*(args + 3), (DWORD)*(args + 4));
}
INT_PTR WINAPI GetCharWidthI_MWAI(INT_PTR* args){
    return (INT_PTR)GetCharWidthI((HDC)*(args + 0), (UINT)*(args + 1), (UINT)*(args + 2), (LPWORD)*(args + 3), (LPINT)*(args + 4));
}
INT_PTR WINAPI GetCharABCWidthsI_MWAI(INT_PTR* args){
    return (INT_PTR)GetCharABCWidthsI((HDC)*(args + 0), (UINT)*(args + 1), (UINT)*(args + 2), (LPWORD)*(args + 3), (LPABC)*(args + 4));
}
INT_PTR WINAPI AddFontResourceExA_MWAI(INT_PTR* args){
    return (INT_PTR)AddFontResourceExA((LPCSTR)*(args + 0), (DWORD)*(args + 1), (PVOID)*(args + 2));
}
INT_PTR WINAPI AddFontResourceExW_MWAI(INT_PTR* args){
    return (INT_PTR)AddFontResourceExW((LPCWSTR)*(args + 0), (DWORD)*(args + 1), (PVOID)*(args + 2));
}
INT_PTR WINAPI RemoveFontResourceExA_MWAI(INT_PTR* args){
    return (INT_PTR)RemoveFontResourceExA((LPCSTR)*(args + 0), (DWORD)*(args + 1), (PVOID)*(args + 2));
}
INT_PTR WINAPI RemoveFontResourceExW_MWAI(INT_PTR* args){
    return (INT_PTR)RemoveFontResourceExW((LPCWSTR)*(args + 0), (DWORD)*(args + 1), (PVOID)*(args + 2));
}
INT_PTR WINAPI AddFontMemResourceEx_MWAI(INT_PTR* args){
    return (INT_PTR)AddFontMemResourceEx((PVOID)*(args + 0), (DWORD)*(args + 1), (PVOID)*(args + 2), (DWORD*)*(args + 3));
}
INT_PTR WINAPI RemoveFontMemResourceEx_MWAI(INT_PTR* args){
    return (INT_PTR)RemoveFontMemResourceEx((HANDLE)*(args + 0));
}
INT_PTR WINAPI CreateFontIndirectExA_MWAI(INT_PTR* args){
    return (INT_PTR)CreateFontIndirectExA((const ENUMLOGFONTEXDVA *)*(args + 0));
}
INT_PTR WINAPI CreateFontIndirectExW_MWAI(INT_PTR* args){
    return (INT_PTR)CreateFontIndirectExW((const ENUMLOGFONTEXDVW *)*(args + 0));
}
INT_PTR WINAPI IntersectClipRect_MWAI(INT_PTR* args){
    return (INT_PTR)IntersectClipRect((HDC)*(args + 0), (int)*(args + 1), (int)*(args + 2), (int)*(args + 3), (int)*(args + 4));
}
INT_PTR WINAPI InvertRgn_MWAI(INT_PTR* args){
    return (INT_PTR)InvertRgn((HDC)*(args + 0), (HRGN)*(args + 1));
}
INT_PTR WINAPI LineDDA_MWAI(INT_PTR* args){
    return (INT_PTR)LineDDA((int)*(args + 0), (int)*(args + 1), (int)*(args + 2), (int)*(args + 3), (LINEDDAPROC)*(args + 4), (LPARAM)*(args + 5));
}
INT_PTR WINAPI LineTo_MWAI(INT_PTR* args){
    return (INT_PTR)LineTo((HDC)*(args + 0), (int)*(args + 1), (int)*(args + 2));
}
INT_PTR WINAPI MaskBlt_MWAI(INT_PTR* args){
    return (INT_PTR)MaskBlt((HDC)*(args + 0), (int)*(args + 1), (int)*(args + 2), (int)*(args + 3), (int)*(args + 4), (HDC)*(args + 5), (int)*(args + 6), (int)*(args + 7), (HBITMAP)*(args + 8), (int)*(args + 9), (int)*(args + 10), (DWORD)*(args + 11));
}
INT_PTR WINAPI PlgBlt_MWAI(INT_PTR* args){
    return (INT_PTR)PlgBlt((HDC)*(args + 0), (const POINT *)*(args + 1), (HDC)*(args + 2), (int)*(args + 3), (int)*(args + 4), (int)*(args + 5), (int)*(args + 6), (HBITMAP)*(args + 7), (int)*(args + 8), (int)*(args + 9));
}
INT_PTR WINAPI OffsetClipRgn_MWAI(INT_PTR* args){
    return (INT_PTR)OffsetClipRgn((HDC)*(args + 0), (int)*(args + 1), (int)*(args + 2));
}
INT_PTR WINAPI OffsetRgn_MWAI(INT_PTR* args){
    return (INT_PTR)OffsetRgn((HRGN)*(args + 0), (int)*(args + 1), (int)*(args + 2));
}
INT_PTR WINAPI PatBlt_MWAI(INT_PTR* args){
    return (INT_PTR)PatBlt((HDC)*(args + 0), (int)*(args + 1), (int)*(args + 2), (int)*(args + 3), (int)*(args + 4), (DWORD)*(args + 5));
}
INT_PTR WINAPI Pie_MWAI(INT_PTR* args){
    return (INT_PTR)Pie((HDC)*(args + 0), (int)*(args + 1), (int)*(args + 2), (int)*(args + 3), (int)*(args + 4), (int)*(args + 5), (int)*(args + 6), (int)*(args + 7), (int)*(args + 8));
}
INT_PTR WINAPI PlayMetaFile_MWAI(INT_PTR* args){
    return (INT_PTR)PlayMetaFile((HDC)*(args + 0), (HMETAFILE)*(args + 1));
}
INT_PTR WINAPI PaintRgn_MWAI(INT_PTR* args){
    return (INT_PTR)PaintRgn((HDC)*(args + 0), (HRGN)*(args + 1));
}
INT_PTR WINAPI PolyPolygon_MWAI(INT_PTR* args){
    return (INT_PTR)PolyPolygon((HDC)*(args + 0), (const POINT *)*(args + 1), (const INT *)*(args + 2), (int)*(args + 3));
}
INT_PTR WINAPI PtInRegion_MWAI(INT_PTR* args){
    return (INT_PTR)PtInRegion((HRGN)*(args + 0), (int)*(args + 1), (int)*(args + 2));
}
INT_PTR WINAPI PtVisible_MWAI(INT_PTR* args){
    return (INT_PTR)PtVisible((HDC)*(args + 0), (int)*(args + 1), (int)*(args + 2));
}
INT_PTR WINAPI RectInRegion_MWAI(INT_PTR* args){
    return (INT_PTR)RectInRegion((HRGN)*(args + 0), (const RECT *)*(args + 1));
}
INT_PTR WINAPI RectVisible_MWAI(INT_PTR* args){
    return (INT_PTR)RectVisible((HDC)*(args + 0), (const RECT *)*(args + 1));
}
INT_PTR WINAPI Rectangle_MWAI(INT_PTR* args){
    return (INT_PTR)Rectangle((HDC)*(args + 0), (int)*(args + 1), (int)*(args + 2), (int)*(args + 3), (int)*(args + 4));
}
INT_PTR WINAPI RestoreDC_MWAI(INT_PTR* args){
    return (INT_PTR)RestoreDC((HDC)*(args + 0), (int)*(args + 1));
}
INT_PTR WINAPI ResetDCA_MWAI(INT_PTR* args){
    return (INT_PTR)ResetDCA((HDC)*(args + 0), (const DEVMODEA *)*(args + 1));
}
INT_PTR WINAPI ResetDCW_MWAI(INT_PTR* args){
    return (INT_PTR)ResetDCW((HDC)*(args + 0), (const DEVMODEW *)*(args + 1));
}
INT_PTR WINAPI RealizePalette_MWAI(INT_PTR* args){
    return (INT_PTR)RealizePalette((HDC)*(args + 0));
}
INT_PTR WINAPI RemoveFontResourceA_MWAI(INT_PTR* args){
    return (INT_PTR)RemoveFontResourceA((LPCSTR)*(args + 0));
}
INT_PTR WINAPI RemoveFontResourceW_MWAI(INT_PTR* args){
    return (INT_PTR)RemoveFontResourceW((LPCWSTR)*(args + 0));
}
INT_PTR WINAPI RoundRect_MWAI(INT_PTR* args){
    return (INT_PTR)RoundRect((HDC)*(args + 0), (int)*(args + 1), (int)*(args + 2), (int)*(args + 3), (int)*(args + 4), (int)*(args + 5), (int)*(args + 6));
}
INT_PTR WINAPI ResizePalette_MWAI(INT_PTR* args){
    return (INT_PTR)ResizePalette((HPALETTE)*(args + 0), (UINT)*(args + 1));
}
INT_PTR WINAPI SaveDC_MWAI(INT_PTR* args){
    return (INT_PTR)SaveDC((HDC)*(args + 0));
}
INT_PTR WINAPI SelectClipRgn_MWAI(INT_PTR* args){
    return (INT_PTR)SelectClipRgn((HDC)*(args + 0), (HRGN)*(args + 1));
}
INT_PTR WINAPI ExtSelectClipRgn_MWAI(INT_PTR* args){
    return (INT_PTR)ExtSelectClipRgn((HDC)*(args + 0), (HRGN)*(args + 1), (int)*(args + 2));
}
INT_PTR WINAPI SetMetaRgn_MWAI(INT_PTR* args){
    return (INT_PTR)SetMetaRgn((HDC)*(args + 0));
}
INT_PTR WINAPI SelectObject_MWAI(INT_PTR* args){
    return (INT_PTR)SelectObject((HDC)*(args + 0), (HGDIOBJ)*(args + 1));
}
INT_PTR WINAPI SelectPalette_MWAI(INT_PTR* args){
    return (INT_PTR)SelectPalette((HDC)*(args + 0), (HPALETTE)*(args + 1), (BOOL)*(args + 2));
}
INT_PTR WINAPI SetBkColor_MWAI(INT_PTR* args){
    return (INT_PTR)SetBkColor((HDC)*(args + 0), (COLORREF)*(args + 1));
}
INT_PTR WINAPI SetDCBrushColor_MWAI(INT_PTR* args){
    return (INT_PTR)SetDCBrushColor((HDC)*(args + 0), (COLORREF)*(args + 1));
}
INT_PTR WINAPI SetDCPenColor_MWAI(INT_PTR* args){
    return (INT_PTR)SetDCPenColor((HDC)*(args + 0), (COLORREF)*(args + 1));
}
INT_PTR WINAPI SetBkMode_MWAI(INT_PTR* args){
    return (INT_PTR)SetBkMode((HDC)*(args + 0), (int)*(args + 1));
}
INT_PTR WINAPI SetBitmapBits_MWAI(INT_PTR* args){
    return (INT_PTR)SetBitmapBits((HBITMAP)*(args + 0), (DWORD)*(args + 1), (const void *)*(args + 2));
}
INT_PTR WINAPI SetBoundsRect_MWAI(INT_PTR* args){
    return (INT_PTR)SetBoundsRect((HDC)*(args + 0), (const RECT *)*(args + 1), (UINT)*(args + 2));
}
INT_PTR WINAPI SetDIBits_MWAI(INT_PTR* args){
    return (INT_PTR)SetDIBits((HDC)*(args + 0), (HBITMAP)*(args + 1), (UINT)*(args + 2), (UINT)*(args + 3), (const void *)*(args + 4), (const BITMAPINFO *)*(args + 5), (UINT)*(args + 6));
}
INT_PTR WINAPI SetDIBitsToDevice_MWAI(INT_PTR* args){
    return (INT_PTR)SetDIBitsToDevice((HDC)*(args + 0), (int)*(args + 1), (int)*(args + 2), (DWORD)*(args + 3), (DWORD)*(args + 4), (int)*(args + 5), (int)*(args + 6), (UINT)*(args + 7), (UINT)*(args + 8), (const void *)*(args + 9), (const BITMAPINFO *)*(args + 10), (UINT)*(args + 11));
}
INT_PTR WINAPI SetMapperFlags_MWAI(INT_PTR* args){
    return (INT_PTR)SetMapperFlags((HDC)*(args + 0), (DWORD)*(args + 1));
}
INT_PTR WINAPI SetGraphicsMode_MWAI(INT_PTR* args){
    return (INT_PTR)SetGraphicsMode((HDC)*(args + 0), (int)*(args + 1));
}
INT_PTR WINAPI SetMapMode_MWAI(INT_PTR* args){
    return (INT_PTR)SetMapMode((HDC)*(args + 0), (int)*(args + 1));
}
INT_PTR WINAPI SetLayout_MWAI(INT_PTR* args){
    return (INT_PTR)SetLayout((HDC)*(args + 0), (DWORD)*(args + 1));
}
INT_PTR WINAPI GetLayout_MWAI(INT_PTR* args){
    return (INT_PTR)GetLayout((HDC)*(args + 0));
}
INT_PTR WINAPI SetMetaFileBitsEx_MWAI(INT_PTR* args){
    return (INT_PTR)SetMetaFileBitsEx((UINT)*(args + 0), (const BYTE *)*(args + 1));
}
INT_PTR WINAPI SetPaletteEntries_MWAI(INT_PTR* args){
    return (INT_PTR)SetPaletteEntries((HPALETTE)*(args + 0), (UINT)*(args + 1), (UINT)*(args + 2), (const PALETTEENTRY *)*(args + 3));
}
INT_PTR WINAPI SetPixel_MWAI(INT_PTR* args){
    return (INT_PTR)SetPixel((HDC)*(args + 0), (int)*(args + 1), (int)*(args + 2), (COLORREF)*(args + 3));
}
INT_PTR WINAPI SetPixelV_MWAI(INT_PTR* args){
    return (INT_PTR)SetPixelV((HDC)*(args + 0), (int)*(args + 1), (int)*(args + 2), (COLORREF)*(args + 3));
}
INT_PTR WINAPI SetPixelFormat_MWAI(INT_PTR* args){
    return (INT_PTR)SetPixelFormat((HDC)*(args + 0), (int)*(args + 1), (const PIXELFORMATDESCRIPTOR *)*(args + 2));
}
INT_PTR WINAPI SetPolyFillMode_MWAI(INT_PTR* args){
    return (INT_PTR)SetPolyFillMode((HDC)*(args + 0), (int)*(args + 1));
}
INT_PTR WINAPI StretchBlt_MWAI(INT_PTR* args){
    return (INT_PTR)StretchBlt((HDC)*(args + 0), (int)*(args + 1), (int)*(args + 2), (int)*(args + 3), (int)*(args + 4), (HDC)*(args + 5), (int)*(args + 6), (int)*(args + 7), (int)*(args + 8), (int)*(args + 9), (DWORD)*(args + 10));
}
INT_PTR WINAPI SetRectRgn_MWAI(INT_PTR* args){
    return (INT_PTR)SetRectRgn((HRGN)*(args + 0), (int)*(args + 1), (int)*(args + 2), (int)*(args + 3), (int)*(args + 4));
}
INT_PTR WINAPI StretchDIBits_MWAI(INT_PTR* args){
    return (INT_PTR)StretchDIBits((HDC)*(args + 0), (int)*(args + 1), (int)*(args + 2), (int)*(args + 3), (int)*(args + 4), (int)*(args + 5), (int)*(args + 6), (int)*(args + 7), (int)*(args + 8), (const void *)*(args + 9), (const BITMAPINFO *)*(args + 10), (UINT)*(args + 11), (DWORD)*(args + 12));
}
INT_PTR WINAPI SetROP2_MWAI(INT_PTR* args){
    return (INT_PTR)SetROP2((HDC)*(args + 0), (int)*(args + 1));
}
INT_PTR WINAPI SetStretchBltMode_MWAI(INT_PTR* args){
    return (INT_PTR)SetStretchBltMode((HDC)*(args + 0), (int)*(args + 1));
}
INT_PTR WINAPI SetSystemPaletteUse_MWAI(INT_PTR* args){
    return (INT_PTR)SetSystemPaletteUse((HDC)*(args + 0), (UINT)*(args + 1));
}
INT_PTR WINAPI SetTextCharacterExtra_MWAI(INT_PTR* args){
    return (INT_PTR)SetTextCharacterExtra((HDC)*(args + 0), (int)*(args + 1));
}
INT_PTR WINAPI SetTextColor_MWAI(INT_PTR* args){
    return (INT_PTR)SetTextColor((HDC)*(args + 0), (COLORREF)*(args + 1));
}
INT_PTR WINAPI SetTextAlign_MWAI(INT_PTR* args){
    return (INT_PTR)SetTextAlign((HDC)*(args + 0), (UINT)*(args + 1));
}
INT_PTR WINAPI SetTextJustification_MWAI(INT_PTR* args){
    return (INT_PTR)SetTextJustification((HDC)*(args + 0), (int)*(args + 1), (int)*(args + 2));
}
INT_PTR WINAPI UpdateColors_MWAI(INT_PTR* args){
    return (INT_PTR)UpdateColors((HDC)*(args + 0));
}
INT_PTR WINAPI GdiTransparentBlt_MWAI(INT_PTR* args){
    return (INT_PTR)GdiTransparentBlt((HDC)*(args + 0), (int)*(args + 1), (int)*(args + 2), (int)*(args + 3), (int)*(args + 4), (HDC)*(args + 5), (int)*(args + 6), (int)*(args + 7), (int)*(args + 8), (int)*(args + 9), (UINT)*(args + 10));
}
INT_PTR WINAPI PlayMetaFileRecord_MWAI(INT_PTR* args){
    return (INT_PTR)PlayMetaFileRecord((HDC)*(args + 0), (LPHANDLETABLE)*(args + 1), (LPMETARECORD)*(args + 2), (UINT)*(args + 3));
}
INT_PTR WINAPI EnumMetaFile_MWAI(INT_PTR* args){
    return (INT_PTR)EnumMetaFile((HDC)*(args + 0), (HMETAFILE)*(args + 1), (MFENUMPROC)*(args + 2), (LPARAM)*(args + 3));
}
INT_PTR WINAPI CloseEnhMetaFile_MWAI(INT_PTR* args){
    return (INT_PTR)CloseEnhMetaFile((HDC)*(args + 0));
}
INT_PTR WINAPI CopyEnhMetaFileA_MWAI(INT_PTR* args){
    return (INT_PTR)CopyEnhMetaFileA((HENHMETAFILE)*(args + 0), (LPCSTR)*(args + 1));
}
INT_PTR WINAPI CopyEnhMetaFileW_MWAI(INT_PTR* args){
    return (INT_PTR)CopyEnhMetaFileW((HENHMETAFILE)*(args + 0), (LPCWSTR)*(args + 1));
}
INT_PTR WINAPI CreateEnhMetaFileA_MWAI(INT_PTR* args){
    return (INT_PTR)CreateEnhMetaFileA((HDC)*(args + 0), (LPCSTR)*(args + 1), (const RECT *)*(args + 2), (LPCSTR)*(args + 3));
}
INT_PTR WINAPI CreateEnhMetaFileW_MWAI(INT_PTR* args){
    return (INT_PTR)CreateEnhMetaFileW((HDC)*(args + 0), (LPCWSTR)*(args + 1), (const RECT *)*(args + 2), (LPCWSTR)*(args + 3));
}
INT_PTR WINAPI DeleteEnhMetaFile_MWAI(INT_PTR* args){
    return (INT_PTR)DeleteEnhMetaFile((HENHMETAFILE)*(args + 0));
}
INT_PTR WINAPI EnumEnhMetaFile_MWAI(INT_PTR* args){
    return (INT_PTR)EnumEnhMetaFile((HDC)*(args + 0), (HENHMETAFILE)*(args + 1), (ENHMFENUMPROC)*(args + 2), (LPVOID)*(args + 3), (const RECT *)*(args + 4));
}
INT_PTR WINAPI GetEnhMetaFileA_MWAI(INT_PTR* args){
    return (INT_PTR)GetEnhMetaFileA((LPCSTR)*(args + 0));
}
INT_PTR WINAPI GetEnhMetaFileW_MWAI(INT_PTR* args){
    return (INT_PTR)GetEnhMetaFileW((LPCWSTR)*(args + 0));
}
INT_PTR WINAPI GetEnhMetaFileBits_MWAI(INT_PTR* args){
    return (INT_PTR)GetEnhMetaFileBits((HENHMETAFILE)*(args + 0), (UINT)*(args + 1), (LPBYTE)*(args + 2));
}
INT_PTR WINAPI GetEnhMetaFileDescriptionA_MWAI(INT_PTR* args){
    return (INT_PTR)GetEnhMetaFileDescriptionA((HENHMETAFILE)*(args + 0), (UINT)*(args + 1), (LPSTR)*(args + 2));
}
INT_PTR WINAPI GetEnhMetaFileDescriptionW_MWAI(INT_PTR* args){
    return (INT_PTR)GetEnhMetaFileDescriptionW((HENHMETAFILE)*(args + 0), (UINT)*(args + 1), (LPWSTR)*(args + 2));
}
INT_PTR WINAPI GetEnhMetaFileHeader_MWAI(INT_PTR* args){
    return (INT_PTR)GetEnhMetaFileHeader((HENHMETAFILE)*(args + 0), (UINT)*(args + 1), (LPENHMETAHEADER)*(args + 2));
}
INT_PTR WINAPI GetEnhMetaFilePaletteEntries_MWAI(INT_PTR* args){
    return (INT_PTR)GetEnhMetaFilePaletteEntries((HENHMETAFILE)*(args + 0), (UINT)*(args + 1), (LPPALETTEENTRY)*(args + 2));
}
INT_PTR WINAPI GetEnhMetaFilePixelFormat_MWAI(INT_PTR* args){
    return (INT_PTR)GetEnhMetaFilePixelFormat((HENHMETAFILE)*(args + 0), (UINT)*(args + 1), (PIXELFORMATDESCRIPTOR *)*(args + 2));
}
INT_PTR WINAPI GetWinMetaFileBits_MWAI(INT_PTR* args){
    return (INT_PTR)GetWinMetaFileBits((HENHMETAFILE)*(args + 0), (UINT)*(args + 1), (LPBYTE)*(args + 2), (INT)*(args + 3), (HDC)*(args + 4));
}
INT_PTR WINAPI PlayEnhMetaFile_MWAI(INT_PTR* args){
    return (INT_PTR)PlayEnhMetaFile((HDC)*(args + 0), (HENHMETAFILE)*(args + 1), (const RECT *)*(args + 2));
}
INT_PTR WINAPI PlayEnhMetaFileRecord_MWAI(INT_PTR* args){
    return (INT_PTR)PlayEnhMetaFileRecord((HDC)*(args + 0), (LPHANDLETABLE)*(args + 1), (const ENHMETARECORD *)*(args + 2), (UINT)*(args + 3));
}
INT_PTR WINAPI SetEnhMetaFileBits_MWAI(INT_PTR* args){
    return (INT_PTR)SetEnhMetaFileBits((UINT)*(args + 0), (const BYTE *)*(args + 1));
}
INT_PTR WINAPI SetWinMetaFileBits_MWAI(INT_PTR* args){
    return (INT_PTR)SetWinMetaFileBits((UINT)*(args + 0), (const BYTE *)*(args + 1), (HDC)*(args + 2), (const METAFILEPICT *)*(args + 3));
}
INT_PTR WINAPI GdiComment_MWAI(INT_PTR* args){
    return (INT_PTR)GdiComment((HDC)*(args + 0), (UINT)*(args + 1), (const BYTE *)*(args + 2));
}
INT_PTR WINAPI GetTextMetricsA_MWAI(INT_PTR* args){
    return (INT_PTR)GetTextMetricsA((HDC)*(args + 0), (LPTEXTMETRICA)*(args + 1));
}
INT_PTR WINAPI GetTextMetricsW_MWAI(INT_PTR* args){
    return (INT_PTR)GetTextMetricsW((HDC)*(args + 0), (LPTEXTMETRICW)*(args + 1));
}
INT_PTR WINAPI AngleArc_MWAI(INT_PTR* args){
    return (INT_PTR)AngleArc((HDC)*(args + 0), (int)*(args + 1), (int)*(args + 2), (DWORD)*(args + 3), (FLOAT)*(args + 4), (FLOAT)*(args + 5));
}
INT_PTR WINAPI PolyPolyline_MWAI(INT_PTR* args){
    return (INT_PTR)PolyPolyline((HDC)*(args + 0), (const POINT *)*(args + 1), (const DWORD *)*(args + 2), (DWORD)*(args + 3));
}
INT_PTR WINAPI SetWorldTransform_MWAI(INT_PTR* args){
    return (INT_PTR)SetWorldTransform((HDC)*(args + 0), (const XFORM *)*(args + 1));
}
INT_PTR WINAPI ModifyWorldTransform_MWAI(INT_PTR* args){
    return (INT_PTR)ModifyWorldTransform((HDC)*(args + 0), (const XFORM *)*(args + 1), (DWORD)*(args + 2));
}
INT_PTR WINAPI CreateDIBSection_MWAI(INT_PTR* args){
    return (INT_PTR)CreateDIBSection((HDC)*(args + 0), (const BITMAPINFO *)*(args + 1), (UINT)*(args + 2), (void            **)*(args + 3), (HANDLE)*(args + 4), (DWORD)*(args + 5));
}
INT_PTR WINAPI GetDIBColorTable_MWAI(INT_PTR* args){
    return (INT_PTR)GetDIBColorTable((HDC)*(args + 0), (UINT)*(args + 1), (UINT)*(args + 2), (RGBQUAD *)*(args + 3));
}
INT_PTR WINAPI SetDIBColorTable_MWAI(INT_PTR* args){
    return (INT_PTR)SetDIBColorTable((HDC)*(args + 0), (UINT)*(args + 1), (UINT)*(args + 2), (const RGBQUAD *)*(args + 3));
}
INT_PTR WINAPI SetColorAdjustment_MWAI(INT_PTR* args){
    return (INT_PTR)SetColorAdjustment((HDC)*(args + 0), (const COLORADJUSTMENT *)*(args + 1));
}
INT_PTR WINAPI CreateHalftonePalette_MWAI(INT_PTR* args){
    return (INT_PTR)CreateHalftonePalette((HDC)*(args + 0));
}
INT_PTR WINAPI StartDocA_MWAI(INT_PTR* args){
    return (INT_PTR)StartDocA((HDC)*(args + 0), (const DOCINFOA *)*(args + 1));
}
INT_PTR WINAPI StartDocW_MWAI(INT_PTR* args){
    return (INT_PTR)StartDocW((HDC)*(args + 0), (const DOCINFOW *)*(args + 1));
}
INT_PTR WINAPI EndDoc_MWAI(INT_PTR* args){
    return (INT_PTR)EndDoc((HDC)*(args + 0));
}
INT_PTR WINAPI StartPage_MWAI(INT_PTR* args){
    return (INT_PTR)StartPage((HDC)*(args + 0));
}
INT_PTR WINAPI EndPage_MWAI(INT_PTR* args){
    return (INT_PTR)EndPage((HDC)*(args + 0));
}
INT_PTR WINAPI AbortDoc_MWAI(INT_PTR* args){
    return (INT_PTR)AbortDoc((HDC)*(args + 0));
}
INT_PTR WINAPI SetAbortProc_MWAI(INT_PTR* args){
    return (INT_PTR)SetAbortProc((HDC)*(args + 0), (ABORTPROC)*(args + 1));
}
INT_PTR WINAPI AbortPath_MWAI(INT_PTR* args){
    return (INT_PTR)AbortPath((HDC)*(args + 0));
}
INT_PTR WINAPI ArcTo_MWAI(INT_PTR* args){
    return (INT_PTR)ArcTo((HDC)*(args + 0), (int)*(args + 1), (int)*(args + 2), (int)*(args + 3), (int)*(args + 4), (int)*(args + 5), (int)*(args + 6), (int)*(args + 7), (int)*(args + 8));
}
INT_PTR WINAPI BeginPath_MWAI(INT_PTR* args){
    return (INT_PTR)BeginPath((HDC)*(args + 0));
}
INT_PTR WINAPI CloseFigure_MWAI(INT_PTR* args){
    return (INT_PTR)CloseFigure((HDC)*(args + 0));
}
INT_PTR WINAPI EndPath_MWAI(INT_PTR* args){
    return (INT_PTR)EndPath((HDC)*(args + 0));
}
INT_PTR WINAPI FillPath_MWAI(INT_PTR* args){
    return (INT_PTR)FillPath((HDC)*(args + 0));
}
INT_PTR WINAPI FlattenPath_MWAI(INT_PTR* args){
    return (INT_PTR)FlattenPath((HDC)*(args + 0));
}
INT_PTR WINAPI PathToRegion_MWAI(INT_PTR* args){
    return (INT_PTR)PathToRegion((HDC)*(args + 0));
}
INT_PTR WINAPI PolyDraw_MWAI(INT_PTR* args){
    return (INT_PTR)PolyDraw((HDC)*(args + 0), (const POINT *)*(args + 1), (const BYTE *)*(args + 2), (int)*(args + 3));
}
INT_PTR WINAPI SelectClipPath_MWAI(INT_PTR* args){
    return (INT_PTR)SelectClipPath((HDC)*(args + 0), (int)*(args + 1));
}
INT_PTR WINAPI SetArcDirection_MWAI(INT_PTR* args){
    return (INT_PTR)SetArcDirection((HDC)*(args + 0), (int)*(args + 1));
}
INT_PTR WINAPI SetMiterLimit_MWAI(INT_PTR* args){
    return (INT_PTR)SetMiterLimit((HDC)*(args + 0), (FLOAT)*(args + 1), (PFLOAT)*(args + 2));
}
INT_PTR WINAPI StrokeAndFillPath_MWAI(INT_PTR* args){
    return (INT_PTR)StrokeAndFillPath((HDC)*(args + 0));
}
INT_PTR WINAPI StrokePath_MWAI(INT_PTR* args){
    return (INT_PTR)StrokePath((HDC)*(args + 0));
}
INT_PTR WINAPI WidenPath_MWAI(INT_PTR* args){
    return (INT_PTR)WidenPath((HDC)*(args + 0));
}
INT_PTR WINAPI ExtCreatePen_MWAI(INT_PTR* args){
    return (INT_PTR)ExtCreatePen((DWORD)*(args + 0), (DWORD)*(args + 1), (const LOGBRUSH *)*(args + 2), (DWORD)*(args + 3), (const DWORD *)*(args + 4));
}
INT_PTR WINAPI GetMiterLimit_MWAI(INT_PTR* args){
    return (INT_PTR)GetMiterLimit((HDC)*(args + 0), (PFLOAT)*(args + 1));
}
INT_PTR WINAPI GetArcDirection_MWAI(INT_PTR* args){
    return (INT_PTR)GetArcDirection((HDC)*(args + 0));
}
INT_PTR WINAPI GetObjectA_MWAI(INT_PTR* args){
    return (INT_PTR)GetObjectA((HANDLE)*(args + 0), (int)*(args + 1), (LPVOID)*(args + 2));
}
INT_PTR WINAPI GetObjectW_MWAI(INT_PTR* args){
    return (INT_PTR)GetObjectW((HANDLE)*(args + 0), (int)*(args + 1), (LPVOID)*(args + 2));
}
INT_PTR WINAPI TextOutA_MWAI(INT_PTR* args){
    return (INT_PTR)TextOutA((HDC)*(args + 0), (int)*(args + 1), (int)*(args + 2), (LPCSTR)*(args + 3), (int)*(args + 4));
}
INT_PTR WINAPI TextOutW_MWAI(INT_PTR* args){
    return (INT_PTR)TextOutW((HDC)*(args + 0), (int)*(args + 1), (int)*(args + 2), (LPCWSTR)*(args + 3), (int)*(args + 4));
}
INT_PTR WINAPI ExtTextOutA_MWAI(INT_PTR* args){
    return (INT_PTR)ExtTextOutA((HDC)*(args + 0), (int)*(args + 1), (int)*(args + 2), (UINT)*(args + 3), (const RECT *)*(args + 4), (LPCSTR)*(args + 5), (UINT)*(args + 6), (const INT *)*(args + 7));
}
INT_PTR WINAPI ExtTextOutW_MWAI(INT_PTR* args){
    return (INT_PTR)ExtTextOutW((HDC)*(args + 0), (int)*(args + 1), (int)*(args + 2), (UINT)*(args + 3), (const RECT *)*(args + 4), (LPCWSTR)*(args + 5), (UINT)*(args + 6), (const INT *)*(args + 7));
}
INT_PTR WINAPI PolyTextOutA_MWAI(INT_PTR* args){
    return (INT_PTR)PolyTextOutA((HDC)*(args + 0), (const POLYTEXTA *)*(args + 1), (int)*(args + 2));
}
INT_PTR WINAPI PolyTextOutW_MWAI(INT_PTR* args){
    return (INT_PTR)PolyTextOutW((HDC)*(args + 0), (const POLYTEXTW *)*(args + 1), (int)*(args + 2));
}
INT_PTR WINAPI CreatePolygonRgn_MWAI(INT_PTR* args){
    return (INT_PTR)CreatePolygonRgn((const POINT *)*(args + 0), (int)*(args + 1), (int)*(args + 2));
}
INT_PTR WINAPI Polygon_MWAI(INT_PTR* args){
    return (INT_PTR)Polygon((HDC)*(args + 0), (const POINT *)*(args + 1), (int)*(args + 2));
}
INT_PTR WINAPI Polyline_MWAI(INT_PTR* args){
    return (INT_PTR)Polyline((HDC)*(args + 0), (const POINT *)*(args + 1), (int)*(args + 2));
}
INT_PTR WINAPI PolyBezier_MWAI(INT_PTR* args){
    return (INT_PTR)PolyBezier((HDC)*(args + 0), (const POINT *)*(args + 1), (DWORD)*(args + 2));
}
INT_PTR WINAPI PolyBezierTo_MWAI(INT_PTR* args){
    return (INT_PTR)PolyBezierTo((HDC)*(args + 0), (const POINT *)*(args + 1), (DWORD)*(args + 2));
}
INT_PTR WINAPI PolylineTo_MWAI(INT_PTR* args){
    return (INT_PTR)PolylineTo((HDC)*(args + 0), (const POINT *)*(args + 1), (DWORD)*(args + 2));
}
INT_PTR WINAPI GetTextFaceA_MWAI(INT_PTR* args){
    return (INT_PTR)GetTextFaceA((HDC)*(args + 0), (int)*(args + 1), (LPSTR)*(args + 2));
}
INT_PTR WINAPI GetTextFaceW_MWAI(INT_PTR* args){
    return (INT_PTR)GetTextFaceW((HDC)*(args + 0), (int)*(args + 1), (LPWSTR)*(args + 2));
}
INT_PTR WINAPI GetKerningPairsA_MWAI(INT_PTR* args){
    return (INT_PTR)GetKerningPairsA((HDC)*(args + 0), (DWORD)*(args + 1), (LPKERNINGPAIR)*(args + 2));
}
INT_PTR WINAPI GetKerningPairsW_MWAI(INT_PTR* args){
    return (INT_PTR)GetKerningPairsW((HDC)*(args + 0), (DWORD)*(args + 1), (LPKERNINGPAIR)*(args + 2));
}
INT_PTR WINAPI UnrealizeObject_MWAI(INT_PTR* args){
    return (INT_PTR)UnrealizeObject((HGDIOBJ)*(args + 0));
}
INT_PTR WINAPI GdiFlush_MWAI(INT_PTR* args){
    return (INT_PTR)GdiFlush();
}
INT_PTR WINAPI GdiSetBatchLimit_MWAI(INT_PTR* args){
    return (INT_PTR)GdiSetBatchLimit((DWORD)*(args + 0));
}
INT_PTR WINAPI GdiGetBatchLimit_MWAI(INT_PTR* args){
    return (INT_PTR)GdiGetBatchLimit();
}
INT_PTR WINAPI SetICMMode_MWAI(INT_PTR* args){
    return (INT_PTR)SetICMMode((HDC)*(args + 0), (int)*(args + 1));
}
INT_PTR WINAPI CheckColorsInGamut_MWAI(INT_PTR* args){
    return (INT_PTR)CheckColorsInGamut((HDC)*(args + 0), (LPRGBTRIPLE)*(args + 1), (LPVOID)*(args + 2), (DWORD)*(args + 3));
}
INT_PTR WINAPI GetColorSpace_MWAI(INT_PTR* args){
    return (INT_PTR)GetColorSpace((HDC)*(args + 0));
}
INT_PTR WINAPI GetLogColorSpaceA_MWAI(INT_PTR* args){
    return (INT_PTR)GetLogColorSpaceA((HCOLORSPACE)*(args + 0), (LPLOGCOLORSPACEA)*(args + 1), (DWORD)*(args + 2));
}
INT_PTR WINAPI GetLogColorSpaceW_MWAI(INT_PTR* args){
    return (INT_PTR)GetLogColorSpaceW((HCOLORSPACE)*(args + 0), (LPLOGCOLORSPACEW)*(args + 1), (DWORD)*(args + 2));
}
INT_PTR WINAPI CreateColorSpaceA_MWAI(INT_PTR* args){
    return (INT_PTR)CreateColorSpaceA((LPLOGCOLORSPACEA)*(args + 0));
}
INT_PTR WINAPI CreateColorSpaceW_MWAI(INT_PTR* args){
    return (INT_PTR)CreateColorSpaceW((LPLOGCOLORSPACEW)*(args + 0));
}
INT_PTR WINAPI SetColorSpace_MWAI(INT_PTR* args){
    return (INT_PTR)SetColorSpace((HDC)*(args + 0), (HCOLORSPACE)*(args + 1));
}
INT_PTR WINAPI DeleteColorSpace_MWAI(INT_PTR* args){
    return (INT_PTR)DeleteColorSpace((HCOLORSPACE)*(args + 0));
}
INT_PTR WINAPI GetICMProfileA_MWAI(INT_PTR* args){
    return (INT_PTR)GetICMProfileA((HDC)*(args + 0), (LPDWORD)*(args + 1), (LPSTR)*(args + 2));
}
INT_PTR WINAPI GetICMProfileW_MWAI(INT_PTR* args){
    return (INT_PTR)GetICMProfileW((HDC)*(args + 0), (LPDWORD)*(args + 1), (LPWSTR)*(args + 2));
}
INT_PTR WINAPI SetICMProfileA_MWAI(INT_PTR* args){
    return (INT_PTR)SetICMProfileA((HDC)*(args + 0), (LPSTR)*(args + 1));
}
INT_PTR WINAPI SetICMProfileW_MWAI(INT_PTR* args){
    return (INT_PTR)SetICMProfileW((HDC)*(args + 0), (LPWSTR)*(args + 1));
}
INT_PTR WINAPI GetDeviceGammaRamp_MWAI(INT_PTR* args){
    return (INT_PTR)GetDeviceGammaRamp((HDC)*(args + 0), (LPVOID)*(args + 1));
}
INT_PTR WINAPI SetDeviceGammaRamp_MWAI(INT_PTR* args){
    return (INT_PTR)SetDeviceGammaRamp((HDC)*(args + 0), (LPVOID)*(args + 1));
}
INT_PTR WINAPI ColorMatchToTarget_MWAI(INT_PTR* args){
    return (INT_PTR)ColorMatchToTarget((HDC)*(args + 0), (HDC)*(args + 1), (DWORD)*(args + 2));
}
INT_PTR WINAPI EnumICMProfilesA_MWAI(INT_PTR* args){
    return (INT_PTR)EnumICMProfilesA((HDC)*(args + 0), (ICMENUMPROCA)*(args + 1), (LPARAM)*(args + 2));
}
INT_PTR WINAPI EnumICMProfilesW_MWAI(INT_PTR* args){
    return (INT_PTR)EnumICMProfilesW((HDC)*(args + 0), (ICMENUMPROCW)*(args + 1), (LPARAM)*(args + 2));
}
INT_PTR WINAPI UpdateICMRegKeyA_MWAI(INT_PTR* args){
    return (INT_PTR)UpdateICMRegKeyA((DWORD)*(args + 0), (LPSTR)*(args + 1), (LPSTR)*(args + 2), (UINT)*(args + 3));
}
INT_PTR WINAPI UpdateICMRegKeyW_MWAI(INT_PTR* args){
    return (INT_PTR)UpdateICMRegKeyW((DWORD)*(args + 0), (LPWSTR)*(args + 1), (LPWSTR)*(args + 2), (UINT)*(args + 3));
}
INT_PTR WINAPI ColorCorrectPalette_MWAI(INT_PTR* args){
    return (INT_PTR)ColorCorrectPalette((HDC)*(args + 0), (HPALETTE)*(args + 1), (DWORD)*(args + 2), (DWORD)*(args + 3));
}
INT_PTR WINAPI SwapBuffers_MWAI(INT_PTR* args){
    return (INT_PTR)SwapBuffers((HDC)*(args + 0));
}
INT_PTR WINAPI wvsprintfA_MWAI(INT_PTR* args){
    return (INT_PTR)wvsprintfA((LPSTR)*(args + 0), (LPCSTR)*(args + 1), (va_list)*(args + 2));
}
INT_PTR WINAPI wvsprintfW_MWAI(INT_PTR* args){
    return (INT_PTR)wvsprintfW((LPWSTR)*(args + 0), (LPCWSTR)*(args + 1), (va_list)*(args + 2));
}
INT_PTR WINAPI LoadKeyboardLayoutA_MWAI(INT_PTR* args){
    return (INT_PTR)LoadKeyboardLayoutA((LPCSTR)*(args + 0), (UINT)*(args + 1));
}
INT_PTR WINAPI LoadKeyboardLayoutW_MWAI(INT_PTR* args){
    return (INT_PTR)LoadKeyboardLayoutW((LPCWSTR)*(args + 0), (UINT)*(args + 1));
}
INT_PTR WINAPI ActivateKeyboardLayout_MWAI(INT_PTR* args){
    return (INT_PTR)ActivateKeyboardLayout((HKL)*(args + 0), (UINT)*(args + 1));
}
INT_PTR WINAPI ToUnicodeEx_MWAI(INT_PTR* args){
    return (INT_PTR)ToUnicodeEx((UINT)*(args + 0), (UINT)*(args + 1), (const BYTE *)*(args + 2), (LPWSTR)*(args + 3), (int)*(args + 4), (UINT)*(args + 5), (HKL)*(args + 6));
}
INT_PTR WINAPI UnloadKeyboardLayout_MWAI(INT_PTR* args){
    return (INT_PTR)UnloadKeyboardLayout((HKL)*(args + 0));
}
INT_PTR WINAPI GetKeyboardLayoutNameA_MWAI(INT_PTR* args){
    return (INT_PTR)GetKeyboardLayoutNameA((LPSTR)*(args + 0));
}
INT_PTR WINAPI GetKeyboardLayoutNameW_MWAI(INT_PTR* args){
    return (INT_PTR)GetKeyboardLayoutNameW((LPWSTR)*(args + 0));
}
INT_PTR WINAPI GetKeyboardLayoutList_MWAI(INT_PTR* args){
    return (INT_PTR)GetKeyboardLayoutList((int)*(args + 0), (HKL  *)*(args + 1));
}
INT_PTR WINAPI GetKeyboardLayout_MWAI(INT_PTR* args){
    return (INT_PTR)GetKeyboardLayout((DWORD)*(args + 0));
}
INT_PTR WINAPI CreateDesktopA_MWAI(INT_PTR* args){
    return (INT_PTR)CreateDesktopA((LPCSTR)*(args + 0), (LPCSTR)*(args + 1), (DEVMODEA*)*(args + 2), (DWORD)*(args + 3), (ACCESS_MASK)*(args + 4), (LPSECURITY_ATTRIBUTES)*(args + 5));
}
INT_PTR WINAPI CreateDesktopW_MWAI(INT_PTR* args){
    return (INT_PTR)CreateDesktopW((LPCWSTR)*(args + 0), (LPCWSTR)*(args + 1), (DEVMODEW*)*(args + 2), (DWORD)*(args + 3), (ACCESS_MASK)*(args + 4), (LPSECURITY_ATTRIBUTES)*(args + 5));
}
INT_PTR WINAPI CreateDesktopExA_MWAI(INT_PTR* args){
    return (INT_PTR)CreateDesktopExA((LPCSTR)*(args + 0), (LPCSTR)*(args + 1), (DEVMODEA*)*(args + 2), (DWORD)*(args + 3), (ACCESS_MASK)*(args + 4), (LPSECURITY_ATTRIBUTES)*(args + 5), (ULONG)*(args + 6), (PVOID)*(args + 7));
}
INT_PTR WINAPI CreateDesktopExW_MWAI(INT_PTR* args){
    return (INT_PTR)CreateDesktopExW((LPCWSTR)*(args + 0), (LPCWSTR)*(args + 1), (DEVMODEW*)*(args + 2), (DWORD)*(args + 3), (ACCESS_MASK)*(args + 4), (LPSECURITY_ATTRIBUTES)*(args + 5), (ULONG)*(args + 6), (PVOID)*(args + 7));
}
INT_PTR WINAPI OpenDesktopA_MWAI(INT_PTR* args){
    return (INT_PTR)OpenDesktopA((LPCSTR)*(args + 0), (DWORD)*(args + 1), (BOOL)*(args + 2), (ACCESS_MASK)*(args + 3));
}
INT_PTR WINAPI OpenDesktopW_MWAI(INT_PTR* args){
    return (INT_PTR)OpenDesktopW((LPCWSTR)*(args + 0), (DWORD)*(args + 1), (BOOL)*(args + 2), (ACCESS_MASK)*(args + 3));
}
INT_PTR WINAPI OpenInputDesktop_MWAI(INT_PTR* args){
    return (INT_PTR)OpenInputDesktop((DWORD)*(args + 0), (BOOL)*(args + 1), (ACCESS_MASK)*(args + 2));
}
INT_PTR WINAPI EnumDesktopsA_MWAI(INT_PTR* args){
    return (INT_PTR)EnumDesktopsA((HWINSTA)*(args + 0), (DESKTOPENUMPROCA)*(args + 1), (LPARAM)*(args + 2));
}
INT_PTR WINAPI EnumDesktopsW_MWAI(INT_PTR* args){
    return (INT_PTR)EnumDesktopsW((HWINSTA)*(args + 0), (DESKTOPENUMPROCW)*(args + 1), (LPARAM)*(args + 2));
}
INT_PTR WINAPI EnumDesktopWindows_MWAI(INT_PTR* args){
    return (INT_PTR)EnumDesktopWindows((HDESK)*(args + 0), (WNDENUMPROC)*(args + 1), (LPARAM)*(args + 2));
}
INT_PTR WINAPI SwitchDesktop_MWAI(INT_PTR* args){
    return (INT_PTR)SwitchDesktop((HDESK)*(args + 0));
}
INT_PTR WINAPI SetThreadDesktop_MWAI(INT_PTR* args){
    return (INT_PTR)SetThreadDesktop((HDESK)*(args + 0));
}
INT_PTR WINAPI CloseDesktop_MWAI(INT_PTR* args){
    return (INT_PTR)CloseDesktop((HDESK)*(args + 0));
}
INT_PTR WINAPI GetThreadDesktop_MWAI(INT_PTR* args){
    return (INT_PTR)GetThreadDesktop((DWORD)*(args + 0));
}
INT_PTR WINAPI CreateWindowStationA_MWAI(INT_PTR* args){
    return (INT_PTR)CreateWindowStationA((LPCSTR)*(args + 0), (DWORD)*(args + 1), (ACCESS_MASK)*(args + 2), (LPSECURITY_ATTRIBUTES)*(args + 3));
}
INT_PTR WINAPI CreateWindowStationW_MWAI(INT_PTR* args){
    return (INT_PTR)CreateWindowStationW((LPCWSTR)*(args + 0), (DWORD)*(args + 1), (ACCESS_MASK)*(args + 2), (LPSECURITY_ATTRIBUTES)*(args + 3));
}
INT_PTR WINAPI OpenWindowStationA_MWAI(INT_PTR* args){
    return (INT_PTR)OpenWindowStationA((LPCSTR)*(args + 0), (BOOL)*(args + 1), (ACCESS_MASK)*(args + 2));
}
INT_PTR WINAPI OpenWindowStationW_MWAI(INT_PTR* args){
    return (INT_PTR)OpenWindowStationW((LPCWSTR)*(args + 0), (BOOL)*(args + 1), (ACCESS_MASK)*(args + 2));
}
INT_PTR WINAPI EnumWindowStationsA_MWAI(INT_PTR* args){
    return (INT_PTR)EnumWindowStationsA((WINSTAENUMPROCA)*(args + 0), (LPARAM)*(args + 1));
}
INT_PTR WINAPI EnumWindowStationsW_MWAI(INT_PTR* args){
    return (INT_PTR)EnumWindowStationsW((WINSTAENUMPROCW)*(args + 0), (LPARAM)*(args + 1));
}
INT_PTR WINAPI CloseWindowStation_MWAI(INT_PTR* args){
    return (INT_PTR)CloseWindowStation((HWINSTA)*(args + 0));
}
INT_PTR WINAPI SetProcessWindowStation_MWAI(INT_PTR* args){
    return (INT_PTR)SetProcessWindowStation((HWINSTA)*(args + 0));
}
INT_PTR WINAPI GetProcessWindowStation_MWAI(INT_PTR* args){
    return (INT_PTR)GetProcessWindowStation();
}
INT_PTR WINAPI SetUserObjectSecurity_MWAI(INT_PTR* args){
    return (INT_PTR)SetUserObjectSecurity((HANDLE)*(args + 0), (PSECURITY_INFORMATION)*(args + 1), (PSECURITY_DESCRIPTOR)*(args + 2));
}
INT_PTR WINAPI GetUserObjectSecurity_MWAI(INT_PTR* args){
    return (INT_PTR)GetUserObjectSecurity((HANDLE)*(args + 0), (PSECURITY_INFORMATION)*(args + 1), (PSECURITY_DESCRIPTOR)*(args + 2), (DWORD)*(args + 3), (LPDWORD)*(args + 4));
}
INT_PTR WINAPI GetUserObjectInformationA_MWAI(INT_PTR* args){
    return (INT_PTR)GetUserObjectInformationA((HANDLE)*(args + 0), (int)*(args + 1), (PVOID)*(args + 2), (DWORD)*(args + 3), (LPDWORD)*(args + 4));
}
INT_PTR WINAPI GetUserObjectInformationW_MWAI(INT_PTR* args){
    return (INT_PTR)GetUserObjectInformationW((HANDLE)*(args + 0), (int)*(args + 1), (PVOID)*(args + 2), (DWORD)*(args + 3), (LPDWORD)*(args + 4));
}
INT_PTR WINAPI SetUserObjectInformationA_MWAI(INT_PTR* args){
    return (INT_PTR)SetUserObjectInformationA((HANDLE)*(args + 0), (int)*(args + 1), (PVOID)*(args + 2), (DWORD)*(args + 3));
}
INT_PTR WINAPI SetUserObjectInformationW_MWAI(INT_PTR* args){
    return (INT_PTR)SetUserObjectInformationW((HANDLE)*(args + 0), (int)*(args + 1), (PVOID)*(args + 2), (DWORD)*(args + 3));
}
INT_PTR WINAPI IsHungAppWindow_MWAI(INT_PTR* args){
    return (INT_PTR)IsHungAppWindow((HWND)*(args + 0));
}
INT_PTR WINAPI DisableProcessWindowsGhosting_MWAI(INT_PTR* args){
    DisableProcessWindowsGhosting();
    return 0;
}
INT_PTR WINAPI RegisterWindowMessageA_MWAI(INT_PTR* args){
    return (INT_PTR)RegisterWindowMessageA((LPCSTR)*(args + 0));
}
INT_PTR WINAPI RegisterWindowMessageW_MWAI(INT_PTR* args){
    return (INT_PTR)RegisterWindowMessageW((LPCWSTR)*(args + 0));
}
INT_PTR WINAPI TrackMouseEvent_MWAI(INT_PTR* args){
    return (INT_PTR)TrackMouseEvent((LPTRACKMOUSEEVENT)*(args + 0));
}
INT_PTR WINAPI DrawCaption_MWAI(INT_PTR* args){
    return (INT_PTR)DrawCaption((HWND)*(args + 0), (HDC)*(args + 1), (const RECT *)*(args + 2), (UINT)*(args + 3));
}
INT_PTR WINAPI DrawAnimatedRects_MWAI(INT_PTR* args){
    return (INT_PTR)DrawAnimatedRects((HWND)*(args + 0), (int)*(args + 1), (const RECT *)*(args + 2), (const RECT *)*(args + 3));
}
INT_PTR WINAPI TranslateMessage_MWAI(INT_PTR* args){
    return (INT_PTR)TranslateMessage((const MSG *)*(args + 0));
}
INT_PTR WINAPI DispatchMessageA_MWAI(INT_PTR* args){
    return (INT_PTR)DispatchMessageA((const MSG *)*(args + 0));
}
INT_PTR WINAPI DispatchMessageW_MWAI(INT_PTR* args){
    return (INT_PTR)DispatchMessageW((const MSG *)*(args + 0));
}
INT_PTR WINAPI SetMessageQueue_MWAI(INT_PTR* args){
    return (INT_PTR)SetMessageQueue((int)*(args + 0));
}
INT_PTR WINAPI RegisterHotKey_MWAI(INT_PTR* args){
    return (INT_PTR)RegisterHotKey((HWND)*(args + 0), (int)*(args + 1), (UINT)*(args + 2), (UINT)*(args + 3));
}
INT_PTR WINAPI UnregisterHotKey_MWAI(INT_PTR* args){
    return (INT_PTR)UnregisterHotKey((HWND)*(args + 0), (int)*(args + 1));
}
INT_PTR WINAPI ExitWindowsEx_MWAI(INT_PTR* args){
    return (INT_PTR)ExitWindowsEx((UINT)*(args + 0), (DWORD)*(args + 1));
}
INT_PTR WINAPI SwapMouseButton_MWAI(INT_PTR* args){
    return (INT_PTR)SwapMouseButton((BOOL)*(args + 0));
}
INT_PTR WINAPI GetMessagePos_MWAI(INT_PTR* args){
    return (INT_PTR)GetMessagePos();
}
INT_PTR WINAPI GetMessageTime_MWAI(INT_PTR* args){
    return (INT_PTR)GetMessageTime();
}
INT_PTR WINAPI GetMessageExtraInfo_MWAI(INT_PTR* args){
    return (INT_PTR)GetMessageExtraInfo();
}
INT_PTR WINAPI GetUnpredictedMessagePos_MWAI(INT_PTR* args){
    return (INT_PTR)GetUnpredictedMessagePos();
}
INT_PTR WINAPI IsWow64Message_MWAI(INT_PTR* args){
    return (INT_PTR)IsWow64Message();
}
INT_PTR WINAPI SetMessageExtraInfo_MWAI(INT_PTR* args){
    return (INT_PTR)SetMessageExtraInfo((LPARAM)*(args + 0));
}
INT_PTR WINAPI SendMessageA_MWAI(INT_PTR* args){
    return (INT_PTR)SendMessageA((HWND)*(args + 0), (UINT)*(args + 1), (WPARAM)*(args + 2), (LPARAM)*(args + 3));
}
INT_PTR WINAPI SendMessageW_MWAI(INT_PTR* args){
    return (INT_PTR)SendMessageW((HWND)*(args + 0), (UINT)*(args + 1), (WPARAM)*(args + 2), (LPARAM)*(args + 3));
}
INT_PTR WINAPI SendMessageTimeoutA_MWAI(INT_PTR* args){
    return (INT_PTR)SendMessageTimeoutA((HWND)*(args + 0), (UINT)*(args + 1), (WPARAM)*(args + 2), (LPARAM)*(args + 3), (UINT)*(args + 4), (UINT)*(args + 5), (PDWORD_PTR)*(args + 6));
}
INT_PTR WINAPI SendMessageTimeoutW_MWAI(INT_PTR* args){
    return (INT_PTR)SendMessageTimeoutW((HWND)*(args + 0), (UINT)*(args + 1), (WPARAM)*(args + 2), (LPARAM)*(args + 3), (UINT)*(args + 4), (UINT)*(args + 5), (PDWORD_PTR)*(args + 6));
}
INT_PTR WINAPI SendNotifyMessageA_MWAI(INT_PTR* args){
    return (INT_PTR)SendNotifyMessageA((HWND)*(args + 0), (UINT)*(args + 1), (WPARAM)*(args + 2), (LPARAM)*(args + 3));
}
INT_PTR WINAPI SendNotifyMessageW_MWAI(INT_PTR* args){
    return (INT_PTR)SendNotifyMessageW((HWND)*(args + 0), (UINT)*(args + 1), (WPARAM)*(args + 2), (LPARAM)*(args + 3));
}
INT_PTR WINAPI SendMessageCallbackA_MWAI(INT_PTR* args){
    return (INT_PTR)SendMessageCallbackA((HWND)*(args + 0), (UINT)*(args + 1), (WPARAM)*(args + 2), (LPARAM)*(args + 3), (SENDASYNCPROC)*(args + 4), (ULONG_PTR)*(args + 5));
}
INT_PTR WINAPI SendMessageCallbackW_MWAI(INT_PTR* args){
    return (INT_PTR)SendMessageCallbackW((HWND)*(args + 0), (UINT)*(args + 1), (WPARAM)*(args + 2), (LPARAM)*(args + 3), (SENDASYNCPROC)*(args + 4), (ULONG_PTR)*(args + 5));
}
INT_PTR WINAPI BroadcastSystemMessageExA_MWAI(INT_PTR* args){
    return (INT_PTR)BroadcastSystemMessageExA((DWORD)*(args + 0), (LPDWORD)*(args + 1), (UINT)*(args + 2), (WPARAM)*(args + 3), (LPARAM)*(args + 4), (PBSMINFO)*(args + 5));
}
INT_PTR WINAPI BroadcastSystemMessageExW_MWAI(INT_PTR* args){
    return (INT_PTR)BroadcastSystemMessageExW((DWORD)*(args + 0), (LPDWORD)*(args + 1), (UINT)*(args + 2), (WPARAM)*(args + 3), (LPARAM)*(args + 4), (PBSMINFO)*(args + 5));
}
INT_PTR WINAPI BroadcastSystemMessageA_MWAI(INT_PTR* args){
    return (INT_PTR)BroadcastSystemMessageA((DWORD)*(args + 0), (LPDWORD)*(args + 1), (UINT)*(args + 2), (WPARAM)*(args + 3), (LPARAM)*(args + 4));
}
INT_PTR WINAPI BroadcastSystemMessageW_MWAI(INT_PTR* args){
    return (INT_PTR)BroadcastSystemMessageW((DWORD)*(args + 0), (LPDWORD)*(args + 1), (UINT)*(args + 2), (WPARAM)*(args + 3), (LPARAM)*(args + 4));
}
INT_PTR WINAPI RegisterDeviceNotificationA_MWAI(INT_PTR* args){
    return (INT_PTR)RegisterDeviceNotificationA((HANDLE)*(args + 0), (LPVOID)*(args + 1), (DWORD)*(args + 2));
}
INT_PTR WINAPI RegisterDeviceNotificationW_MWAI(INT_PTR* args){
    return (INT_PTR)RegisterDeviceNotificationW((HANDLE)*(args + 0), (LPVOID)*(args + 1), (DWORD)*(args + 2));
}
INT_PTR WINAPI UnregisterDeviceNotification_MWAI(INT_PTR* args){
    return (INT_PTR)UnregisterDeviceNotification((HDEVNOTIFY)*(args + 0));
}
INT_PTR WINAPI UnregisterPowerSettingNotification_MWAI(INT_PTR* args){
    return (INT_PTR)UnregisterPowerSettingNotification((HPOWERNOTIFY)*(args + 0));
}
INT_PTR WINAPI RegisterSuspendResumeNotification_MWAI(INT_PTR* args){
    return (INT_PTR)RegisterSuspendResumeNotification((HANDLE)*(args + 0), (DWORD)*(args + 1));
}
INT_PTR WINAPI UnregisterSuspendResumeNotification_MWAI(INT_PTR* args){
    return (INT_PTR)UnregisterSuspendResumeNotification((HPOWERNOTIFY)*(args + 0));
}
INT_PTR WINAPI PostMessageA_MWAI(INT_PTR* args){
    return (INT_PTR)PostMessageA((HWND)*(args + 0), (UINT)*(args + 1), (WPARAM)*(args + 2), (LPARAM)*(args + 3));
}
INT_PTR WINAPI PostMessageW_MWAI(INT_PTR* args){
    return (INT_PTR)PostMessageW((HWND)*(args + 0), (UINT)*(args + 1), (WPARAM)*(args + 2), (LPARAM)*(args + 3));
}
INT_PTR WINAPI PostThreadMessageA_MWAI(INT_PTR* args){
    return (INT_PTR)PostThreadMessageA((DWORD)*(args + 0), (UINT)*(args + 1), (WPARAM)*(args + 2), (LPARAM)*(args + 3));
}
INT_PTR WINAPI PostThreadMessageW_MWAI(INT_PTR* args){
    return (INT_PTR)PostThreadMessageW((DWORD)*(args + 0), (UINT)*(args + 1), (WPARAM)*(args + 2), (LPARAM)*(args + 3));
}
INT_PTR WINAPI AttachThreadInput_MWAI(INT_PTR* args){
    return (INT_PTR)AttachThreadInput((DWORD)*(args + 0), (DWORD)*(args + 1), (BOOL)*(args + 2));
}
INT_PTR WINAPI ReplyMessage_MWAI(INT_PTR* args){
    return (INT_PTR)ReplyMessage((LRESULT)*(args + 0));
}
INT_PTR WINAPI WaitMessage_MWAI(INT_PTR* args){
    return (INT_PTR)WaitMessage();
}
INT_PTR WINAPI WaitForInputIdle_MWAI(INT_PTR* args){
    return (INT_PTR)WaitForInputIdle((HANDLE)*(args + 0), (DWORD)*(args + 1));
}
INT_PTR WINAPI DefWindowProcA_MWAI(INT_PTR* args){
    return (INT_PTR)DefWindowProcA((HWND)*(args + 0), (UINT)*(args + 1), (WPARAM)*(args + 2), (LPARAM)*(args + 3));
}
INT_PTR WINAPI DefWindowProcW_MWAI(INT_PTR* args){
    return (INT_PTR)DefWindowProcW((HWND)*(args + 0), (UINT)*(args + 1), (WPARAM)*(args + 2), (LPARAM)*(args + 3));
}
INT_PTR WINAPI PostQuitMessage_MWAI(INT_PTR* args){
    PostQuitMessage((int)*(args + 0));
    return 0;
}
INT_PTR WINAPI CallWindowProcA_MWAI(INT_PTR* args){
    return (INT_PTR)CallWindowProcA((WNDPROC)*(args + 0), (HWND)*(args + 1), (UINT)*(args + 2), (WPARAM)*(args + 3), (LPARAM)*(args + 4));
}
INT_PTR WINAPI CallWindowProcW_MWAI(INT_PTR* args){
    return (INT_PTR)CallWindowProcW((WNDPROC)*(args + 0), (HWND)*(args + 1), (UINT)*(args + 2), (WPARAM)*(args + 3), (LPARAM)*(args + 4));
}
INT_PTR WINAPI InSendMessage_MWAI(INT_PTR* args){
    return (INT_PTR)InSendMessage();
}
INT_PTR WINAPI InSendMessageEx_MWAI(INT_PTR* args){
    return (INT_PTR)InSendMessageEx((LPVOID)*(args + 0));
}
INT_PTR WINAPI GetDoubleClickTime_MWAI(INT_PTR* args){
    return (INT_PTR)GetDoubleClickTime();
}
INT_PTR WINAPI SetDoubleClickTime_MWAI(INT_PTR* args){
    return (INT_PTR)SetDoubleClickTime((UINT)*(args + 0));
}
INT_PTR WINAPI RegisterClassA_MWAI(INT_PTR* args){
    return (INT_PTR)RegisterClassA((const WNDCLASSA *)*(args + 0));
}
INT_PTR WINAPI RegisterClassW_MWAI(INT_PTR* args){
    return (INT_PTR)RegisterClassW((const WNDCLASSW *)*(args + 0));
}
INT_PTR WINAPI UnregisterClassA_MWAI(INT_PTR* args){
    return (INT_PTR)UnregisterClassA((LPCSTR)*(args + 0), (HINSTANCE)*(args + 1));
}
INT_PTR WINAPI UnregisterClassW_MWAI(INT_PTR* args){
    return (INT_PTR)UnregisterClassW((LPCWSTR)*(args + 0), (HINSTANCE)*(args + 1));
}
INT_PTR WINAPI GetClassInfoA_MWAI(INT_PTR* args){
    return (INT_PTR)GetClassInfoA((HINSTANCE)*(args + 0), (LPCSTR)*(args + 1), (LPWNDCLASSA)*(args + 2));
}
INT_PTR WINAPI GetClassInfoW_MWAI(INT_PTR* args){
    return (INT_PTR)GetClassInfoW((HINSTANCE)*(args + 0), (LPCWSTR)*(args + 1), (LPWNDCLASSW)*(args + 2));
}
INT_PTR WINAPI RegisterClassExA_MWAI(INT_PTR* args){
    return (INT_PTR)RegisterClassExA((const WNDCLASSEXA *)*(args + 0));
}
INT_PTR WINAPI RegisterClassExW_MWAI(INT_PTR* args){
    return (INT_PTR)RegisterClassExW((const WNDCLASSEXW *)*(args + 0));
}
INT_PTR WINAPI GetClassInfoExA_MWAI(INT_PTR* args){
    return (INT_PTR)GetClassInfoExA((HINSTANCE)*(args + 0), (LPCSTR)*(args + 1), (LPWNDCLASSEXA)*(args + 2));
}
INT_PTR WINAPI GetClassInfoExW_MWAI(INT_PTR* args){
    return (INT_PTR)GetClassInfoExW((HINSTANCE)*(args + 0), (LPCWSTR)*(args + 1), (LPWNDCLASSEXW)*(args + 2));
}
INT_PTR WINAPI CreateWindowExA_MWAI(INT_PTR* args){
    return (INT_PTR)CreateWindowExA((DWORD)*(args + 0), (LPCSTR)*(args + 1), (LPCSTR)*(args + 2), (DWORD)*(args + 3), (int)*(args + 4), (int)*(args + 5), (int)*(args + 6), (int)*(args + 7), (HWND)*(args + 8), (HMENU)*(args + 9), (HINSTANCE)*(args + 10), (LPVOID)*(args + 11));
}
INT_PTR WINAPI CreateWindowExW_MWAI(INT_PTR* args){
    return (INT_PTR)CreateWindowExW((DWORD)*(args + 0), (LPCWSTR)*(args + 1), (LPCWSTR)*(args + 2), (DWORD)*(args + 3), (int)*(args + 4), (int)*(args + 5), (int)*(args + 6), (int)*(args + 7), (HWND)*(args + 8), (HMENU)*(args + 9), (HINSTANCE)*(args + 10), (LPVOID)*(args + 11));
}
INT_PTR WINAPI IsWindow_MWAI(INT_PTR* args){
    return (INT_PTR)IsWindow((HWND)*(args + 0));
}
INT_PTR WINAPI IsMenu_MWAI(INT_PTR* args){
    return (INT_PTR)IsMenu((HMENU)*(args + 0));
}
INT_PTR WINAPI IsChild_MWAI(INT_PTR* args){
    return (INT_PTR)IsChild((HWND)*(args + 0), (HWND)*(args + 1));
}
INT_PTR WINAPI DestroyWindow_MWAI(INT_PTR* args){
    return (INT_PTR)DestroyWindow((HWND)*(args + 0));
}
INT_PTR WINAPI ShowWindow_MWAI(INT_PTR* args){
    return (INT_PTR)ShowWindow((HWND)*(args + 0), (int)*(args + 1));
}
INT_PTR WINAPI AnimateWindow_MWAI(INT_PTR* args){
    return (INT_PTR)AnimateWindow((HWND)*(args + 0), (DWORD)*(args + 1), (DWORD)*(args + 2));
}
INT_PTR WINAPI UpdateLayeredWindow_MWAI(INT_PTR* args){
    return (INT_PTR)UpdateLayeredWindow((HWND)*(args + 0), (HDC)*(args + 1), (POINT*)*(args + 2), (SIZE*)*(args + 3), (HDC)*(args + 4), (POINT*)*(args + 5), (COLORREF)*(args + 6), (BLENDFUNCTION*)*(args + 7), (DWORD)*(args + 8));
}
INT_PTR WINAPI UpdateLayeredWindowIndirect_MWAI(INT_PTR* args){
    return (INT_PTR)UpdateLayeredWindowIndirect((HWND)*(args + 0), (const UPDATELAYEREDWINDOWINFO*)*(args + 1));
}
INT_PTR WINAPI GetLayeredWindowAttributes_MWAI(INT_PTR* args){
    return (INT_PTR)GetLayeredWindowAttributes((HWND)*(args + 0), (COLORREF*)*(args + 1), (BYTE*)*(args + 2), (DWORD*)*(args + 3));
}
INT_PTR WINAPI PrintWindow_MWAI(INT_PTR* args){
    return (INT_PTR)PrintWindow((HWND)*(args + 0), (HDC)*(args + 1), (UINT)*(args + 2));
}
INT_PTR WINAPI SetLayeredWindowAttributes_MWAI(INT_PTR* args){
    return (INT_PTR)SetLayeredWindowAttributes((HWND)*(args + 0), (COLORREF)*(args + 1), (BYTE)*(args + 2), (DWORD)*(args + 3));
}
INT_PTR WINAPI ShowWindowAsync_MWAI(INT_PTR* args){
    return (INT_PTR)ShowWindowAsync((HWND)*(args + 0), (int)*(args + 1));
}
INT_PTR WINAPI FlashWindow_MWAI(INT_PTR* args){
    return (INT_PTR)FlashWindow((HWND)*(args + 0), (BOOL)*(args + 1));
}
INT_PTR WINAPI FlashWindowEx_MWAI(INT_PTR* args){
    return (INT_PTR)FlashWindowEx((PFLASHWINFO)*(args + 0));
}
INT_PTR WINAPI ShowOwnedPopups_MWAI(INT_PTR* args){
    return (INT_PTR)ShowOwnedPopups((HWND)*(args + 0), (BOOL)*(args + 1));
}
INT_PTR WINAPI OpenIcon_MWAI(INT_PTR* args){
    return (INT_PTR)OpenIcon((HWND)*(args + 0));
}
INT_PTR WINAPI CloseWindow_MWAI(INT_PTR* args){
    return (INT_PTR)CloseWindow((HWND)*(args + 0));
}
INT_PTR WINAPI MoveWindow_MWAI(INT_PTR* args){
    return (INT_PTR)MoveWindow((HWND)*(args + 0), (int)*(args + 1), (int)*(args + 2), (int)*(args + 3), (int)*(args + 4), (BOOL)*(args + 5));
}
INT_PTR WINAPI SetWindowPos_MWAI(INT_PTR* args){
    return (INT_PTR)SetWindowPos((HWND)*(args + 0), (HWND)*(args + 1), (int)*(args + 2), (int)*(args + 3), (int)*(args + 4), (int)*(args + 5), (UINT)*(args + 6));
}
INT_PTR WINAPI GetWindowPlacement_MWAI(INT_PTR* args){
    return (INT_PTR)GetWindowPlacement((HWND)*(args + 0), (WINDOWPLACEMENT *)*(args + 1));
}
INT_PTR WINAPI SetWindowPlacement_MWAI(INT_PTR* args){
    return (INT_PTR)SetWindowPlacement((HWND)*(args + 0), (const WINDOWPLACEMENT *)*(args + 1));
}
INT_PTR WINAPI GetWindowDisplayAffinity_MWAI(INT_PTR* args){
    return (INT_PTR)GetWindowDisplayAffinity((HWND)*(args + 0), (DWORD*)*(args + 1));
}
INT_PTR WINAPI SetWindowDisplayAffinity_MWAI(INT_PTR* args){
    return (INT_PTR)SetWindowDisplayAffinity((HWND)*(args + 0), (DWORD)*(args + 1));
}
INT_PTR WINAPI BeginDeferWindowPos_MWAI(INT_PTR* args){
    return (INT_PTR)BeginDeferWindowPos((int)*(args + 0));
}
INT_PTR WINAPI DeferWindowPos_MWAI(INT_PTR* args){
    return (INT_PTR)DeferWindowPos((HDWP)*(args + 0), (HWND)*(args + 1), (HWND)*(args + 2), (int)*(args + 3), (int)*(args + 4), (int)*(args + 5), (int)*(args + 6), (UINT)*(args + 7));
}
INT_PTR WINAPI EndDeferWindowPos_MWAI(INT_PTR* args){
    return (INT_PTR)EndDeferWindowPos((HDWP)*(args + 0));
}
INT_PTR WINAPI IsWindowVisible_MWAI(INT_PTR* args){
    return (INT_PTR)IsWindowVisible((HWND)*(args + 0));
}
INT_PTR WINAPI IsIconic_MWAI(INT_PTR* args){
    return (INT_PTR)IsIconic((HWND)*(args + 0));
}
INT_PTR WINAPI AnyPopup_MWAI(INT_PTR* args){
    return (INT_PTR)AnyPopup();
}
INT_PTR WINAPI BringWindowToTop_MWAI(INT_PTR* args){
    return (INT_PTR)BringWindowToTop((HWND)*(args + 0));
}
INT_PTR WINAPI IsZoomed_MWAI(INT_PTR* args){
    return (INT_PTR)IsZoomed((HWND)*(args + 0));
}
INT_PTR WINAPI CreateDialogParamA_MWAI(INT_PTR* args){
    return (INT_PTR)CreateDialogParamA((HINSTANCE)*(args + 0), (LPCSTR)*(args + 1), (HWND)*(args + 2), (DLGPROC)*(args + 3), (LPARAM)*(args + 4));
}
INT_PTR WINAPI CreateDialogParamW_MWAI(INT_PTR* args){
    return (INT_PTR)CreateDialogParamW((HINSTANCE)*(args + 0), (LPCWSTR)*(args + 1), (HWND)*(args + 2), (DLGPROC)*(args + 3), (LPARAM)*(args + 4));
}
INT_PTR WINAPI CreateDialogIndirectParamA_MWAI(INT_PTR* args){
    return (INT_PTR)CreateDialogIndirectParamA((HINSTANCE)*(args + 0), (LPCDLGTEMPLATEA)*(args + 1), (HWND)*(args + 2), (DLGPROC)*(args + 3), (LPARAM)*(args + 4));
}
INT_PTR WINAPI CreateDialogIndirectParamW_MWAI(INT_PTR* args){
    return (INT_PTR)CreateDialogIndirectParamW((HINSTANCE)*(args + 0), (LPCDLGTEMPLATEW)*(args + 1), (HWND)*(args + 2), (DLGPROC)*(args + 3), (LPARAM)*(args + 4));
}
INT_PTR WINAPI DialogBoxParamA_MWAI(INT_PTR* args){
    return (INT_PTR)DialogBoxParamA((HINSTANCE)*(args + 0), (LPCSTR)*(args + 1), (HWND)*(args + 2), (DLGPROC)*(args + 3), (LPARAM)*(args + 4));
}
INT_PTR WINAPI DialogBoxParamW_MWAI(INT_PTR* args){
    return (INT_PTR)DialogBoxParamW((HINSTANCE)*(args + 0), (LPCWSTR)*(args + 1), (HWND)*(args + 2), (DLGPROC)*(args + 3), (LPARAM)*(args + 4));
}
INT_PTR WINAPI DialogBoxIndirectParamA_MWAI(INT_PTR* args){
    return (INT_PTR)DialogBoxIndirectParamA((HINSTANCE)*(args + 0), (LPCDLGTEMPLATEA)*(args + 1), (HWND)*(args + 2), (DLGPROC)*(args + 3), (LPARAM)*(args + 4));
}
INT_PTR WINAPI DialogBoxIndirectParamW_MWAI(INT_PTR* args){
    return (INT_PTR)DialogBoxIndirectParamW((HINSTANCE)*(args + 0), (LPCDLGTEMPLATEW)*(args + 1), (HWND)*(args + 2), (DLGPROC)*(args + 3), (LPARAM)*(args + 4));
}
INT_PTR WINAPI EndDialog_MWAI(INT_PTR* args){
    return (INT_PTR)EndDialog((HWND)*(args + 0), (INT_PTR)*(args + 1));
}
INT_PTR WINAPI GetDlgItem_MWAI(INT_PTR* args){
    return (INT_PTR)GetDlgItem((HWND)*(args + 0), (int)*(args + 1));
}
INT_PTR WINAPI SetDlgItemInt_MWAI(INT_PTR* args){
    return (INT_PTR)SetDlgItemInt((HWND)*(args + 0), (int)*(args + 1), (UINT)*(args + 2), (BOOL)*(args + 3));
}
INT_PTR WINAPI GetDlgItemInt_MWAI(INT_PTR* args){
    return (INT_PTR)GetDlgItemInt((HWND)*(args + 0), (int)*(args + 1), (BOOL *)*(args + 2), (BOOL)*(args + 3));
}
INT_PTR WINAPI SetDlgItemTextA_MWAI(INT_PTR* args){
    return (INT_PTR)SetDlgItemTextA((HWND)*(args + 0), (int)*(args + 1), (LPCSTR)*(args + 2));
}
INT_PTR WINAPI SetDlgItemTextW_MWAI(INT_PTR* args){
    return (INT_PTR)SetDlgItemTextW((HWND)*(args + 0), (int)*(args + 1), (LPCWSTR)*(args + 2));
}
INT_PTR WINAPI GetDlgItemTextA_MWAI(INT_PTR* args){
    return (INT_PTR)GetDlgItemTextA((HWND)*(args + 0), (int)*(args + 1), (LPSTR)*(args + 2), (int)*(args + 3));
}
INT_PTR WINAPI GetDlgItemTextW_MWAI(INT_PTR* args){
    return (INT_PTR)GetDlgItemTextW((HWND)*(args + 0), (int)*(args + 1), (LPWSTR)*(args + 2), (int)*(args + 3));
}
INT_PTR WINAPI CheckDlgButton_MWAI(INT_PTR* args){
    return (INT_PTR)CheckDlgButton((HWND)*(args + 0), (int)*(args + 1), (UINT)*(args + 2));
}
INT_PTR WINAPI CheckRadioButton_MWAI(INT_PTR* args){
    return (INT_PTR)CheckRadioButton((HWND)*(args + 0), (int)*(args + 1), (int)*(args + 2), (int)*(args + 3));
}
INT_PTR WINAPI IsDlgButtonChecked_MWAI(INT_PTR* args){
    return (INT_PTR)IsDlgButtonChecked((HWND)*(args + 0), (int)*(args + 1));
}
INT_PTR WINAPI SendDlgItemMessageA_MWAI(INT_PTR* args){
    return (INT_PTR)SendDlgItemMessageA((HWND)*(args + 0), (int)*(args + 1), (UINT)*(args + 2), (WPARAM)*(args + 3), (LPARAM)*(args + 4));
}
INT_PTR WINAPI SendDlgItemMessageW_MWAI(INT_PTR* args){
    return (INT_PTR)SendDlgItemMessageW((HWND)*(args + 0), (int)*(args + 1), (UINT)*(args + 2), (WPARAM)*(args + 3), (LPARAM)*(args + 4));
}
INT_PTR WINAPI GetNextDlgGroupItem_MWAI(INT_PTR* args){
    return (INT_PTR)GetNextDlgGroupItem((HWND)*(args + 0), (HWND)*(args + 1), (BOOL)*(args + 2));
}
INT_PTR WINAPI GetNextDlgTabItem_MWAI(INT_PTR* args){
    return (INT_PTR)GetNextDlgTabItem((HWND)*(args + 0), (HWND)*(args + 1), (BOOL)*(args + 2));
}
INT_PTR WINAPI GetDlgCtrlID_MWAI(INT_PTR* args){
    return (INT_PTR)GetDlgCtrlID((HWND)*(args + 0));
}
INT_PTR WINAPI GetDialogBaseUnits_MWAI(INT_PTR* args){
    return (INT_PTR)GetDialogBaseUnits();
}
INT_PTR WINAPI DefDlgProcA_MWAI(INT_PTR* args){
    return (INT_PTR)DefDlgProcA((HWND)*(args + 0), (UINT)*(args + 1), (WPARAM)*(args + 2), (LPARAM)*(args + 3));
}
INT_PTR WINAPI DefDlgProcW_MWAI(INT_PTR* args){
    return (INT_PTR)DefDlgProcW((HWND)*(args + 0), (UINT)*(args + 1), (WPARAM)*(args + 2), (LPARAM)*(args + 3));
}
INT_PTR WINAPI SetDialogControlDpiChangeBehavior_MWAI(INT_PTR* args){
    return (INT_PTR)SetDialogControlDpiChangeBehavior((HWND)*(args + 0), (DIALOG_CONTROL_DPI_CHANGE_BEHAVIORS)*(args + 1), (DIALOG_CONTROL_DPI_CHANGE_BEHAVIORS)*(args + 2));
}
INT_PTR WINAPI GetDialogControlDpiChangeBehavior_MWAI(INT_PTR* args){
    return (INT_PTR)GetDialogControlDpiChangeBehavior((HWND)*(args + 0));
}
INT_PTR WINAPI SetDialogDpiChangeBehavior_MWAI(INT_PTR* args){
    return (INT_PTR)SetDialogDpiChangeBehavior((HWND)*(args + 0), (DIALOG_DPI_CHANGE_BEHAVIORS)*(args + 1), (DIALOG_DPI_CHANGE_BEHAVIORS)*(args + 2));
}
INT_PTR WINAPI GetDialogDpiChangeBehavior_MWAI(INT_PTR* args){
    return (INT_PTR)GetDialogDpiChangeBehavior((HWND)*(args + 0));
}
INT_PTR WINAPI OpenClipboard_MWAI(INT_PTR* args){
    return (INT_PTR)OpenClipboard((HWND)*(args + 0));
}
INT_PTR WINAPI CloseClipboard_MWAI(INT_PTR* args){
    return (INT_PTR)CloseClipboard();
}
INT_PTR WINAPI GetClipboardSequenceNumber_MWAI(INT_PTR* args){
    return (INT_PTR)GetClipboardSequenceNumber();
}
INT_PTR WINAPI GetClipboardOwner_MWAI(INT_PTR* args){
    return (INT_PTR)GetClipboardOwner();
}
INT_PTR WINAPI SetClipboardViewer_MWAI(INT_PTR* args){
    return (INT_PTR)SetClipboardViewer((HWND)*(args + 0));
}
INT_PTR WINAPI GetClipboardViewer_MWAI(INT_PTR* args){
    return (INT_PTR)GetClipboardViewer();
}
INT_PTR WINAPI ChangeClipboardChain_MWAI(INT_PTR* args){
    return (INT_PTR)ChangeClipboardChain((HWND)*(args + 0), (HWND)*(args + 1));
}
INT_PTR WINAPI SetClipboardData_MWAI(INT_PTR* args){
    return (INT_PTR)SetClipboardData((UINT)*(args + 0), (HANDLE)*(args + 1));
}
INT_PTR WINAPI GetClipboardData_MWAI(INT_PTR* args){
    return (INT_PTR)GetClipboardData((UINT)*(args + 0));
}
INT_PTR WINAPI RegisterClipboardFormatA_MWAI(INT_PTR* args){
    return (INT_PTR)RegisterClipboardFormatA((LPCSTR)*(args + 0));
}
INT_PTR WINAPI RegisterClipboardFormatW_MWAI(INT_PTR* args){
    return (INT_PTR)RegisterClipboardFormatW((LPCWSTR)*(args + 0));
}
INT_PTR WINAPI CountClipboardFormats_MWAI(INT_PTR* args){
    return (INT_PTR)CountClipboardFormats();
}
INT_PTR WINAPI EnumClipboardFormats_MWAI(INT_PTR* args){
    return (INT_PTR)EnumClipboardFormats((UINT)*(args + 0));
}
INT_PTR WINAPI GetClipboardFormatNameA_MWAI(INT_PTR* args){
    return (INT_PTR)GetClipboardFormatNameA((UINT)*(args + 0), (LPSTR)*(args + 1), (int)*(args + 2));
}
INT_PTR WINAPI GetClipboardFormatNameW_MWAI(INT_PTR* args){
    return (INT_PTR)GetClipboardFormatNameW((UINT)*(args + 0), (LPWSTR)*(args + 1), (int)*(args + 2));
}
INT_PTR WINAPI EmptyClipboard_MWAI(INT_PTR* args){
    return (INT_PTR)EmptyClipboard();
}
INT_PTR WINAPI IsClipboardFormatAvailable_MWAI(INT_PTR* args){
    return (INT_PTR)IsClipboardFormatAvailable((UINT)*(args + 0));
}
INT_PTR WINAPI GetPriorityClipboardFormat_MWAI(INT_PTR* args){
    return (INT_PTR)GetPriorityClipboardFormat((UINT *)*(args + 0), (int)*(args + 1));
}
INT_PTR WINAPI GetOpenClipboardWindow_MWAI(INT_PTR* args){
    return (INT_PTR)GetOpenClipboardWindow();
}
INT_PTR WINAPI AddClipboardFormatListener_MWAI(INT_PTR* args){
    return (INT_PTR)AddClipboardFormatListener((HWND)*(args + 0));
}
INT_PTR WINAPI RemoveClipboardFormatListener_MWAI(INT_PTR* args){
    return (INT_PTR)RemoveClipboardFormatListener((HWND)*(args + 0));
}
INT_PTR WINAPI GetUpdatedClipboardFormats_MWAI(INT_PTR* args){
    return (INT_PTR)GetUpdatedClipboardFormats((PUINT)*(args + 0), (UINT)*(args + 1), (PUINT)*(args + 2));
}
INT_PTR WINAPI CharToOemA_MWAI(INT_PTR* args){
    return (INT_PTR)CharToOemA((LPCSTR)*(args + 0), (LPSTR)*(args + 1));
}
INT_PTR WINAPI CharToOemW_MWAI(INT_PTR* args){
    return (INT_PTR)CharToOemW((LPCWSTR)*(args + 0), (LPSTR)*(args + 1));
}
INT_PTR WINAPI OemToCharA_MWAI(INT_PTR* args){
    return (INT_PTR)OemToCharA((LPCSTR)*(args + 0), (LPSTR)*(args + 1));
}
INT_PTR WINAPI OemToCharW_MWAI(INT_PTR* args){
    return (INT_PTR)OemToCharW((LPCSTR)*(args + 0), (LPWSTR)*(args + 1));
}
INT_PTR WINAPI CharToOemBuffA_MWAI(INT_PTR* args){
    return (INT_PTR)CharToOemBuffA((LPCSTR)*(args + 0), (LPSTR)*(args + 1), (DWORD)*(args + 2));
}
INT_PTR WINAPI CharToOemBuffW_MWAI(INT_PTR* args){
    return (INT_PTR)CharToOemBuffW((LPCWSTR)*(args + 0), (LPSTR)*(args + 1), (DWORD)*(args + 2));
}
INT_PTR WINAPI OemToCharBuffA_MWAI(INT_PTR* args){
    return (INT_PTR)OemToCharBuffA((LPCSTR)*(args + 0), (LPSTR)*(args + 1), (DWORD)*(args + 2));
}
INT_PTR WINAPI OemToCharBuffW_MWAI(INT_PTR* args){
    return (INT_PTR)OemToCharBuffW((LPCSTR)*(args + 0), (LPWSTR)*(args + 1), (DWORD)*(args + 2));
}
INT_PTR WINAPI CharUpperA_MWAI(INT_PTR* args){
    return (INT_PTR)CharUpperA((LPSTR)*(args + 0));
}
INT_PTR WINAPI CharUpperW_MWAI(INT_PTR* args){
    return (INT_PTR)CharUpperW((LPWSTR)*(args + 0));
}
INT_PTR WINAPI CharUpperBuffA_MWAI(INT_PTR* args){
    return (INT_PTR)CharUpperBuffA((LPSTR)*(args + 0), (DWORD)*(args + 1));
}
INT_PTR WINAPI CharUpperBuffW_MWAI(INT_PTR* args){
    return (INT_PTR)CharUpperBuffW((LPWSTR)*(args + 0), (DWORD)*(args + 1));
}
INT_PTR WINAPI CharLowerA_MWAI(INT_PTR* args){
    return (INT_PTR)CharLowerA((LPSTR)*(args + 0));
}
INT_PTR WINAPI CharLowerW_MWAI(INT_PTR* args){
    return (INT_PTR)CharLowerW((LPWSTR)*(args + 0));
}
INT_PTR WINAPI CharLowerBuffA_MWAI(INT_PTR* args){
    return (INT_PTR)CharLowerBuffA((LPSTR)*(args + 0), (DWORD)*(args + 1));
}
INT_PTR WINAPI CharLowerBuffW_MWAI(INT_PTR* args){
    return (INT_PTR)CharLowerBuffW((LPWSTR)*(args + 0), (DWORD)*(args + 1));
}
INT_PTR WINAPI CharNextA_MWAI(INT_PTR* args){
    return (INT_PTR)CharNextA((LPCSTR)*(args + 0));
}
INT_PTR WINAPI CharNextW_MWAI(INT_PTR* args){
    return (INT_PTR)CharNextW((LPCWSTR)*(args + 0));
}
INT_PTR WINAPI CharPrevA_MWAI(INT_PTR* args){
    return (INT_PTR)CharPrevA((LPCSTR)*(args + 0), (LPCSTR)*(args + 1));
}
INT_PTR WINAPI CharPrevW_MWAI(INT_PTR* args){
    return (INT_PTR)CharPrevW((LPCWSTR)*(args + 0), (LPCWSTR)*(args + 1));
}
INT_PTR WINAPI CharNextExA_MWAI(INT_PTR* args){
    return (INT_PTR)CharNextExA((WORD)*(args + 0), (LPCSTR)*(args + 1), (DWORD)*(args + 2));
}
INT_PTR WINAPI CharPrevExA_MWAI(INT_PTR* args){
    return (INT_PTR)CharPrevExA((WORD)*(args + 0), (LPCSTR)*(args + 1), (LPCSTR)*(args + 2), (DWORD)*(args + 3));
}
INT_PTR WINAPI IsCharAlphaA_MWAI(INT_PTR* args){
    return (INT_PTR)IsCharAlphaA((CHAR)*(args + 0));
}
INT_PTR WINAPI IsCharAlphaW_MWAI(INT_PTR* args){
    return (INT_PTR)IsCharAlphaW((WCHAR)*(args + 0));
}
INT_PTR WINAPI IsCharAlphaNumericA_MWAI(INT_PTR* args){
    return (INT_PTR)IsCharAlphaNumericA((CHAR)*(args + 0));
}
INT_PTR WINAPI IsCharAlphaNumericW_MWAI(INT_PTR* args){
    return (INT_PTR)IsCharAlphaNumericW((WCHAR)*(args + 0));
}
INT_PTR WINAPI IsCharUpperA_MWAI(INT_PTR* args){
    return (INT_PTR)IsCharUpperA((CHAR)*(args + 0));
}
INT_PTR WINAPI IsCharUpperW_MWAI(INT_PTR* args){
    return (INT_PTR)IsCharUpperW((WCHAR)*(args + 0));
}
INT_PTR WINAPI IsCharLowerA_MWAI(INT_PTR* args){
    return (INT_PTR)IsCharLowerA((CHAR)*(args + 0));
}
INT_PTR WINAPI IsCharLowerW_MWAI(INT_PTR* args){
    return (INT_PTR)IsCharLowerW((WCHAR)*(args + 0));
}
INT_PTR WINAPI SetFocus_MWAI(INT_PTR* args){
    return (INT_PTR)SetFocus((HWND)*(args + 0));
}
INT_PTR WINAPI GetActiveWindow_MWAI(INT_PTR* args){
    return (INT_PTR)GetActiveWindow();
}
INT_PTR WINAPI GetFocus_MWAI(INT_PTR* args){
    return (INT_PTR)GetFocus();
}
INT_PTR WINAPI GetKBCodePage_MWAI(INT_PTR* args){
    return (INT_PTR)GetKBCodePage();
}
INT_PTR WINAPI GetKeyState_MWAI(INT_PTR* args){
    return (INT_PTR)GetKeyState((int)*(args + 0));
}
INT_PTR WINAPI GetAsyncKeyState_MWAI(INT_PTR* args){
    return (INT_PTR)GetAsyncKeyState((int)*(args + 0));
}
INT_PTR WINAPI GetKeyboardState_MWAI(INT_PTR* args){
    return (INT_PTR)GetKeyboardState((PBYTE)*(args + 0));
}
INT_PTR WINAPI SetKeyboardState_MWAI(INT_PTR* args){
    return (INT_PTR)SetKeyboardState((LPBYTE)*(args + 0));
}
INT_PTR WINAPI GetKeyNameTextA_MWAI(INT_PTR* args){
    return (INT_PTR)GetKeyNameTextA((LONG)*(args + 0), (LPSTR)*(args + 1), (int)*(args + 2));
}
INT_PTR WINAPI GetKeyNameTextW_MWAI(INT_PTR* args){
    return (INT_PTR)GetKeyNameTextW((LONG)*(args + 0), (LPWSTR)*(args + 1), (int)*(args + 2));
}
INT_PTR WINAPI GetKeyboardType_MWAI(INT_PTR* args){
    return (INT_PTR)GetKeyboardType((int)*(args + 0));
}
INT_PTR WINAPI ToAscii_MWAI(INT_PTR* args){
    return (INT_PTR)ToAscii((UINT)*(args + 0), (UINT)*(args + 1), (const BYTE *)*(args + 2), (LPWORD)*(args + 3), (UINT)*(args + 4));
}
INT_PTR WINAPI ToAsciiEx_MWAI(INT_PTR* args){
    return (INT_PTR)ToAsciiEx((UINT)*(args + 0), (UINT)*(args + 1), (const BYTE *)*(args + 2), (LPWORD)*(args + 3), (UINT)*(args + 4), (HKL)*(args + 5));
}
INT_PTR WINAPI ToUnicode_MWAI(INT_PTR* args){
    return (INT_PTR)ToUnicode((UINT)*(args + 0), (UINT)*(args + 1), (const BYTE *)*(args + 2), (LPWSTR)*(args + 3), (int)*(args + 4), (UINT)*(args + 5));
}
INT_PTR WINAPI OemKeyScan_MWAI(INT_PTR* args){
    return (INT_PTR)OemKeyScan((WORD)*(args + 0));
}
INT_PTR WINAPI VkKeyScanA_MWAI(INT_PTR* args){
    return (INT_PTR)VkKeyScanA((CHAR)*(args + 0));
}
INT_PTR WINAPI VkKeyScanW_MWAI(INT_PTR* args){
    return (INT_PTR)VkKeyScanW((WCHAR)*(args + 0));
}
INT_PTR WINAPI VkKeyScanExA_MWAI(INT_PTR* args){
    return (INT_PTR)VkKeyScanExA((CHAR)*(args + 0), (HKL)*(args + 1));
}
INT_PTR WINAPI VkKeyScanExW_MWAI(INT_PTR* args){
    return (INT_PTR)VkKeyScanExW((WCHAR)*(args + 0), (HKL)*(args + 1));
}
INT_PTR WINAPI keybd_event_MWAI(INT_PTR* args){
    keybd_event((BYTE)*(args + 0), (BYTE)*(args + 1), (DWORD)*(args + 2), (ULONG_PTR)*(args + 3));
    return 0;
}
INT_PTR WINAPI mouse_event_MWAI(INT_PTR* args){
    mouse_event((DWORD)*(args + 0), (DWORD)*(args + 1), (DWORD)*(args + 2), (DWORD)*(args + 3), (ULONG_PTR)*(args + 4));
    return 0;
}
INT_PTR WINAPI SendInput_MWAI(INT_PTR* args){
    return (INT_PTR)SendInput((UINT)*(args + 0), (LPINPUT)*(args + 1), (int)*(args + 2));
}
INT_PTR WINAPI GetTouchInputInfo_MWAI(INT_PTR* args){
    return (INT_PTR)GetTouchInputInfo((HTOUCHINPUT)*(args + 0), (UINT)*(args + 1), (PTOUCHINPUT)*(args + 2), (int)*(args + 3));
}
INT_PTR WINAPI CloseTouchInputHandle_MWAI(INT_PTR* args){
    return (INT_PTR)CloseTouchInputHandle((HTOUCHINPUT)*(args + 0));
}
INT_PTR WINAPI RegisterTouchWindow_MWAI(INT_PTR* args){
    return (INT_PTR)RegisterTouchWindow((HWND)*(args + 0), (ULONG)*(args + 1));
}
INT_PTR WINAPI UnregisterTouchWindow_MWAI(INT_PTR* args){
    return (INT_PTR)UnregisterTouchWindow((HWND)*(args + 0));
}
INT_PTR WINAPI IsTouchWindow_MWAI(INT_PTR* args){
    return (INT_PTR)IsTouchWindow((HWND)*(args + 0), (PULONG)*(args + 1));
}
INT_PTR WINAPI InitializeTouchInjection_MWAI(INT_PTR* args){
    return (INT_PTR)InitializeTouchInjection((UINT32)*(args + 0), (DWORD)*(args + 1));
}
INT_PTR WINAPI InjectTouchInput_MWAI(INT_PTR* args){
    return (INT_PTR)InjectTouchInput((UINT32)*(args + 0), (const POINTER_TOUCH_INFO *)*(args + 1));
}
INT_PTR WINAPI GetPointerType_MWAI(INT_PTR* args){
    return (INT_PTR)GetPointerType((UINT32)*(args + 0), (POINTER_INPUT_TYPE *)*(args + 1));
}
INT_PTR WINAPI GetPointerCursorId_MWAI(INT_PTR* args){
    return (INT_PTR)GetPointerCursorId((UINT32)*(args + 0), (UINT32 *)*(args + 1));
}
INT_PTR WINAPI GetPointerInfo_MWAI(INT_PTR* args){
    return (INT_PTR)GetPointerInfo((UINT32)*(args + 0), (POINTER_INFO *)*(args + 1));
}
INT_PTR WINAPI GetPointerInfoHistory_MWAI(INT_PTR* args){
    return (INT_PTR)GetPointerInfoHistory((UINT32)*(args + 0), (UINT32 *)*(args + 1), (POINTER_INFO *)*(args + 2));
}
INT_PTR WINAPI GetPointerFrameInfo_MWAI(INT_PTR* args){
    return (INT_PTR)GetPointerFrameInfo((UINT32)*(args + 0), (UINT32 *)*(args + 1), (POINTER_INFO *)*(args + 2));
}
INT_PTR WINAPI GetPointerFrameInfoHistory_MWAI(INT_PTR* args){
    return (INT_PTR)GetPointerFrameInfoHistory((UINT32)*(args + 0), (UINT32 *)*(args + 1), (UINT32 *)*(args + 2), (POINTER_INFO *)*(args + 3));
}
INT_PTR WINAPI GetPointerTouchInfo_MWAI(INT_PTR* args){
    return (INT_PTR)GetPointerTouchInfo((UINT32)*(args + 0), (POINTER_TOUCH_INFO *)*(args + 1));
}
INT_PTR WINAPI GetPointerTouchInfoHistory_MWAI(INT_PTR* args){
    return (INT_PTR)GetPointerTouchInfoHistory((UINT32)*(args + 0), (UINT32 *)*(args + 1), (POINTER_TOUCH_INFO *)*(args + 2));
}
INT_PTR WINAPI GetPointerFrameTouchInfo_MWAI(INT_PTR* args){
    return (INT_PTR)GetPointerFrameTouchInfo((UINT32)*(args + 0), (UINT32 *)*(args + 1), (POINTER_TOUCH_INFO *)*(args + 2));
}
INT_PTR WINAPI GetPointerFrameTouchInfoHistory_MWAI(INT_PTR* args){
    return (INT_PTR)GetPointerFrameTouchInfoHistory((UINT32)*(args + 0), (UINT32 *)*(args + 1), (UINT32 *)*(args + 2), (POINTER_TOUCH_INFO *)*(args + 3));
}
INT_PTR WINAPI GetPointerPenInfo_MWAI(INT_PTR* args){
    return (INT_PTR)GetPointerPenInfo((UINT32)*(args + 0), (POINTER_PEN_INFO *)*(args + 1));
}
INT_PTR WINAPI GetPointerPenInfoHistory_MWAI(INT_PTR* args){
    return (INT_PTR)GetPointerPenInfoHistory((UINT32)*(args + 0), (UINT32 *)*(args + 1), (POINTER_PEN_INFO *)*(args + 2));
}
INT_PTR WINAPI GetPointerFramePenInfo_MWAI(INT_PTR* args){
    return (INT_PTR)GetPointerFramePenInfo((UINT32)*(args + 0), (UINT32 *)*(args + 1), (POINTER_PEN_INFO *)*(args + 2));
}
INT_PTR WINAPI GetPointerFramePenInfoHistory_MWAI(INT_PTR* args){
    return (INT_PTR)GetPointerFramePenInfoHistory((UINT32)*(args + 0), (UINT32 *)*(args + 1), (UINT32 *)*(args + 2), (POINTER_PEN_INFO *)*(args + 3));
}
INT_PTR WINAPI SkipPointerFrameMessages_MWAI(INT_PTR* args){
    return (INT_PTR)SkipPointerFrameMessages((UINT32)*(args + 0));
}
INT_PTR WINAPI EnableMouseInPointer_MWAI(INT_PTR* args){
    return (INT_PTR)EnableMouseInPointer((BOOL)*(args + 0));
}
INT_PTR WINAPI IsMouseInPointerEnabled_MWAI(INT_PTR* args){
    return (INT_PTR)IsMouseInPointerEnabled();
}
INT_PTR WINAPI RegisterTouchHitTestingWindow_MWAI(INT_PTR* args){
    return (INT_PTR)RegisterTouchHitTestingWindow((HWND)*(args + 0), (ULONG)*(args + 1));
}
INT_PTR WINAPI EvaluateProximityToRect_MWAI(INT_PTR* args){
    return (INT_PTR)EvaluateProximityToRect((const RECT *)*(args + 0), (const TOUCH_HIT_TESTING_INPUT *)*(args + 1), (TOUCH_HIT_TESTING_PROXIMITY_EVALUATION *)*(args + 2));
}
INT_PTR WINAPI EvaluateProximityToPolygon_MWAI(INT_PTR* args){
    return (INT_PTR)EvaluateProximityToPolygon((UINT32)*(args + 0), (const POINT *)*(args + 1), (const TOUCH_HIT_TESTING_INPUT *)*(args + 2), (TOUCH_HIT_TESTING_PROXIMITY_EVALUATION *)*(args + 3));
}
INT_PTR WINAPI PackTouchHitTestingProximityEvaluation_MWAI(INT_PTR* args){
    return (INT_PTR)PackTouchHitTestingProximityEvaluation((const TOUCH_HIT_TESTING_INPUT *)*(args + 0), (const TOUCH_HIT_TESTING_PROXIMITY_EVALUATION *)*(args + 1));
}
INT_PTR WINAPI GetWindowFeedbackSetting_MWAI(INT_PTR* args){
    return (INT_PTR)GetWindowFeedbackSetting((HWND)*(args + 0), (FEEDBACK_TYPE)*(args + 1), (DWORD)*(args + 2), (UINT32*)*(args + 3), (void*)*(args + 4));
}
INT_PTR WINAPI SetWindowFeedbackSetting_MWAI(INT_PTR* args){
    return (INT_PTR)SetWindowFeedbackSetting((HWND)*(args + 0), (FEEDBACK_TYPE)*(args + 1), (DWORD)*(args + 2), (UINT32)*(args + 3), (const void*)*(args + 4));
}
INT_PTR WINAPI GetPointerInputTransform_MWAI(INT_PTR* args){
    return (INT_PTR)GetPointerInputTransform((UINT32)*(args + 0), (UINT32)*(args + 1), (INPUT_TRANSFORM *)*(args + 2));
}
INT_PTR WINAPI GetLastInputInfo_MWAI(INT_PTR* args){
    return (INT_PTR)GetLastInputInfo((PLASTINPUTINFO)*(args + 0));
}
INT_PTR WINAPI MapVirtualKeyA_MWAI(INT_PTR* args){
    return (INT_PTR)MapVirtualKeyA((UINT)*(args + 0), (UINT)*(args + 1));
}
INT_PTR WINAPI MapVirtualKeyW_MWAI(INT_PTR* args){
    return (INT_PTR)MapVirtualKeyW((UINT)*(args + 0), (UINT)*(args + 1));
}
INT_PTR WINAPI MapVirtualKeyExA_MWAI(INT_PTR* args){
    return (INT_PTR)MapVirtualKeyExA((UINT)*(args + 0), (UINT)*(args + 1), (HKL)*(args + 2));
}
INT_PTR WINAPI MapVirtualKeyExW_MWAI(INT_PTR* args){
    return (INT_PTR)MapVirtualKeyExW((UINT)*(args + 0), (UINT)*(args + 1), (HKL)*(args + 2));
}
INT_PTR WINAPI GetInputState_MWAI(INT_PTR* args){
    return (INT_PTR)GetInputState();
}
INT_PTR WINAPI GetQueueStatus_MWAI(INT_PTR* args){
    return (INT_PTR)GetQueueStatus((UINT)*(args + 0));
}
INT_PTR WINAPI GetCapture_MWAI(INT_PTR* args){
    return (INT_PTR)GetCapture();
}
INT_PTR WINAPI SetCapture_MWAI(INT_PTR* args){
    return (INT_PTR)SetCapture((HWND)*(args + 0));
}
INT_PTR WINAPI ReleaseCapture_MWAI(INT_PTR* args){
    return (INT_PTR)ReleaseCapture();
}
INT_PTR WINAPI MsgWaitForMultipleObjects_MWAI(INT_PTR* args){
    return (INT_PTR)MsgWaitForMultipleObjects((DWORD)*(args + 0), (const HANDLE *)*(args + 1), (BOOL)*(args + 2), (DWORD)*(args + 3), (DWORD)*(args + 4));
}
INT_PTR WINAPI MsgWaitForMultipleObjectsEx_MWAI(INT_PTR* args){
    return (INT_PTR)MsgWaitForMultipleObjectsEx((DWORD)*(args + 0), (const HANDLE *)*(args + 1), (DWORD)*(args + 2), (DWORD)*(args + 3), (DWORD)*(args + 4));
}
INT_PTR WINAPI SetTimer_MWAI(INT_PTR* args){
    return (INT_PTR)SetTimer((HWND)*(args + 0), (UINT_PTR)*(args + 1), (UINT)*(args + 2), (TIMERPROC)*(args + 3));
}
INT_PTR WINAPI SetCoalescableTimer_MWAI(INT_PTR* args){
    return (INT_PTR)SetCoalescableTimer((HWND)*(args + 0), (UINT_PTR)*(args + 1), (UINT)*(args + 2), (TIMERPROC)*(args + 3), (ULONG)*(args + 4));
}
INT_PTR WINAPI KillTimer_MWAI(INT_PTR* args){
    return (INT_PTR)KillTimer((HWND)*(args + 0), (UINT_PTR)*(args + 1));
}
INT_PTR WINAPI IsWindowUnicode_MWAI(INT_PTR* args){
    return (INT_PTR)IsWindowUnicode((HWND)*(args + 0));
}
INT_PTR WINAPI EnableWindow_MWAI(INT_PTR* args){
    return (INT_PTR)EnableWindow((HWND)*(args + 0), (BOOL)*(args + 1));
}
INT_PTR WINAPI IsWindowEnabled_MWAI(INT_PTR* args){
    return (INT_PTR)IsWindowEnabled((HWND)*(args + 0));
}
INT_PTR WINAPI LoadAcceleratorsA_MWAI(INT_PTR* args){
    return (INT_PTR)LoadAcceleratorsA((HINSTANCE)*(args + 0), (LPCSTR)*(args + 1));
}
INT_PTR WINAPI LoadAcceleratorsW_MWAI(INT_PTR* args){
    return (INT_PTR)LoadAcceleratorsW((HINSTANCE)*(args + 0), (LPCWSTR)*(args + 1));
}
INT_PTR WINAPI CreateAcceleratorTableA_MWAI(INT_PTR* args){
    return (INT_PTR)CreateAcceleratorTableA((LPACCEL)*(args + 0), (int)*(args + 1));
}
INT_PTR WINAPI CreateAcceleratorTableW_MWAI(INT_PTR* args){
    return (INT_PTR)CreateAcceleratorTableW((LPACCEL)*(args + 0), (int)*(args + 1));
}
INT_PTR WINAPI DestroyAcceleratorTable_MWAI(INT_PTR* args){
    return (INT_PTR)DestroyAcceleratorTable((HACCEL)*(args + 0));
}
INT_PTR WINAPI CopyAcceleratorTableA_MWAI(INT_PTR* args){
    return (INT_PTR)CopyAcceleratorTableA((HACCEL)*(args + 0), (LPACCEL)*(args + 1), (int)*(args + 2));
}
INT_PTR WINAPI CopyAcceleratorTableW_MWAI(INT_PTR* args){
    return (INT_PTR)CopyAcceleratorTableW((HACCEL)*(args + 0), (LPACCEL)*(args + 1), (int)*(args + 2));
}
INT_PTR WINAPI GetSystemMetrics_MWAI(INT_PTR* args){
    return (INT_PTR)GetSystemMetrics((int)*(args + 0));
}
INT_PTR WINAPI GetSystemMetricsForDpi_MWAI(INT_PTR* args){
    return (INT_PTR)GetSystemMetricsForDpi((int)*(args + 0), (UINT)*(args + 1));
}
INT_PTR WINAPI LoadMenuA_MWAI(INT_PTR* args){
    return (INT_PTR)LoadMenuA((HINSTANCE)*(args + 0), (LPCSTR)*(args + 1));
}
INT_PTR WINAPI LoadMenuW_MWAI(INT_PTR* args){
    return (INT_PTR)LoadMenuW((HINSTANCE)*(args + 0), (LPCWSTR)*(args + 1));
}
INT_PTR WINAPI LoadMenuIndirectA_MWAI(INT_PTR* args){
    return (INT_PTR)LoadMenuIndirectA((const MENUTEMPLATEA *)*(args + 0));
}
INT_PTR WINAPI LoadMenuIndirectW_MWAI(INT_PTR* args){
    return (INT_PTR)LoadMenuIndirectW((const MENUTEMPLATEW *)*(args + 0));
}
INT_PTR WINAPI GetMenu_MWAI(INT_PTR* args){
    return (INT_PTR)GetMenu((HWND)*(args + 0));
}
INT_PTR WINAPI SetMenu_MWAI(INT_PTR* args){
    return (INT_PTR)SetMenu((HWND)*(args + 0), (HMENU)*(args + 1));
}
INT_PTR WINAPI ChangeMenuA_MWAI(INT_PTR* args){
    return (INT_PTR)ChangeMenuA((HMENU)*(args + 0), (UINT)*(args + 1), (LPCSTR)*(args + 2), (UINT)*(args + 3), (UINT)*(args + 4));
}
INT_PTR WINAPI ChangeMenuW_MWAI(INT_PTR* args){
    return (INT_PTR)ChangeMenuW((HMENU)*(args + 0), (UINT)*(args + 1), (LPCWSTR)*(args + 2), (UINT)*(args + 3), (UINT)*(args + 4));
}
INT_PTR WINAPI HiliteMenuItem_MWAI(INT_PTR* args){
    return (INT_PTR)HiliteMenuItem((HWND)*(args + 0), (HMENU)*(args + 1), (UINT)*(args + 2), (UINT)*(args + 3));
}
INT_PTR WINAPI GetMenuStringA_MWAI(INT_PTR* args){
    return (INT_PTR)GetMenuStringA((HMENU)*(args + 0), (UINT)*(args + 1), (LPSTR)*(args + 2), (int)*(args + 3), (UINT)*(args + 4));
}
INT_PTR WINAPI GetMenuStringW_MWAI(INT_PTR* args){
    return (INT_PTR)GetMenuStringW((HMENU)*(args + 0), (UINT)*(args + 1), (LPWSTR)*(args + 2), (int)*(args + 3), (UINT)*(args + 4));
}
INT_PTR WINAPI GetMenuState_MWAI(INT_PTR* args){
    return (INT_PTR)GetMenuState((HMENU)*(args + 0), (UINT)*(args + 1), (UINT)*(args + 2));
}
INT_PTR WINAPI DrawMenuBar_MWAI(INT_PTR* args){
    return (INT_PTR)DrawMenuBar((HWND)*(args + 0));
}
INT_PTR WINAPI GetSystemMenu_MWAI(INT_PTR* args){
    return (INT_PTR)GetSystemMenu((HWND)*(args + 0), (BOOL)*(args + 1));
}
INT_PTR WINAPI CreateMenu_MWAI(INT_PTR* args){
    return (INT_PTR)CreateMenu();
}
INT_PTR WINAPI CreatePopupMenu_MWAI(INT_PTR* args){
    return (INT_PTR)CreatePopupMenu();
}
INT_PTR WINAPI DestroyMenu_MWAI(INT_PTR* args){
    return (INT_PTR)DestroyMenu((HMENU)*(args + 0));
}
INT_PTR WINAPI CheckMenuItem_MWAI(INT_PTR* args){
    return (INT_PTR)CheckMenuItem((HMENU)*(args + 0), (UINT)*(args + 1), (UINT)*(args + 2));
}
INT_PTR WINAPI EnableMenuItem_MWAI(INT_PTR* args){
    return (INT_PTR)EnableMenuItem((HMENU)*(args + 0), (UINT)*(args + 1), (UINT)*(args + 2));
}
INT_PTR WINAPI GetSubMenu_MWAI(INT_PTR* args){
    return (INT_PTR)GetSubMenu((HMENU)*(args + 0), (int)*(args + 1));
}
INT_PTR WINAPI GetMenuItemID_MWAI(INT_PTR* args){
    return (INT_PTR)GetMenuItemID((HMENU)*(args + 0), (int)*(args + 1));
}
INT_PTR WINAPI GetMenuItemCount_MWAI(INT_PTR* args){
    return (INT_PTR)GetMenuItemCount((HMENU)*(args + 0));
}
INT_PTR WINAPI InsertMenuA_MWAI(INT_PTR* args){
    return (INT_PTR)InsertMenuA((HMENU)*(args + 0), (UINT)*(args + 1), (UINT)*(args + 2), (UINT_PTR)*(args + 3), (LPCSTR)*(args + 4));
}
INT_PTR WINAPI InsertMenuW_MWAI(INT_PTR* args){
    return (INT_PTR)InsertMenuW((HMENU)*(args + 0), (UINT)*(args + 1), (UINT)*(args + 2), (UINT_PTR)*(args + 3), (LPCWSTR)*(args + 4));
}
INT_PTR WINAPI AppendMenuA_MWAI(INT_PTR* args){
    return (INT_PTR)AppendMenuA((HMENU)*(args + 0), (UINT)*(args + 1), (UINT_PTR)*(args + 2), (LPCSTR)*(args + 3));
}
INT_PTR WINAPI AppendMenuW_MWAI(INT_PTR* args){
    return (INT_PTR)AppendMenuW((HMENU)*(args + 0), (UINT)*(args + 1), (UINT_PTR)*(args + 2), (LPCWSTR)*(args + 3));
}
INT_PTR WINAPI ModifyMenuA_MWAI(INT_PTR* args){
    return (INT_PTR)ModifyMenuA((HMENU)*(args + 0), (UINT)*(args + 1), (UINT)*(args + 2), (UINT_PTR)*(args + 3), (LPCSTR)*(args + 4));
}
INT_PTR WINAPI ModifyMenuW_MWAI(INT_PTR* args){
    return (INT_PTR)ModifyMenuW((HMENU)*(args + 0), (UINT)*(args + 1), (UINT)*(args + 2), (UINT_PTR)*(args + 3), (LPCWSTR)*(args + 4));
}
INT_PTR WINAPI RemoveMenu_MWAI(INT_PTR* args){
    return (INT_PTR)RemoveMenu((HMENU)*(args + 0), (UINT)*(args + 1), (UINT)*(args + 2));
}
INT_PTR WINAPI DeleteMenu_MWAI(INT_PTR* args){
    return (INT_PTR)DeleteMenu((HMENU)*(args + 0), (UINT)*(args + 1), (UINT)*(args + 2));
}
INT_PTR WINAPI SetMenuItemBitmaps_MWAI(INT_PTR* args){
    return (INT_PTR)SetMenuItemBitmaps((HMENU)*(args + 0), (UINT)*(args + 1), (UINT)*(args + 2), (HBITMAP)*(args + 3), (HBITMAP)*(args + 4));
}
INT_PTR WINAPI GetMenuCheckMarkDimensions_MWAI(INT_PTR* args){
    return (INT_PTR)GetMenuCheckMarkDimensions();
}
INT_PTR WINAPI TrackPopupMenu_MWAI(INT_PTR* args){
    return (INT_PTR)TrackPopupMenu((HMENU)*(args + 0), (UINT)*(args + 1), (int)*(args + 2), (int)*(args + 3), (int)*(args + 4), (HWND)*(args + 5), (const RECT *)*(args + 6));
}
INT_PTR WINAPI TrackPopupMenuEx_MWAI(INT_PTR* args){
    return (INT_PTR)TrackPopupMenuEx((HMENU)*(args + 0), (UINT)*(args + 1), (int)*(args + 2), (int)*(args + 3), (HWND)*(args + 4), (LPTPMPARAMS)*(args + 5));
}
INT_PTR WINAPI CalculatePopupWindowPosition_MWAI(INT_PTR* args){
    return (INT_PTR)CalculatePopupWindowPosition((const POINT *)*(args + 0), (const SIZE *)*(args + 1), (UINT)*(args + 2), (RECT *)*(args + 3), (RECT *)*(args + 4));
}
INT_PTR WINAPI GetMenuInfo_MWAI(INT_PTR* args){
    return (INT_PTR)GetMenuInfo((HMENU)*(args + 0), (LPMENUINFO)*(args + 1));
}
INT_PTR WINAPI SetMenuInfo_MWAI(INT_PTR* args){
    return (INT_PTR)SetMenuInfo((HMENU)*(args + 0), (LPCMENUINFO)*(args + 1));
}
INT_PTR WINAPI EndMenu_MWAI(INT_PTR* args){
    return (INT_PTR)EndMenu();
}
INT_PTR WINAPI InsertMenuItemA_MWAI(INT_PTR* args){
    return (INT_PTR)InsertMenuItemA((HMENU)*(args + 0), (UINT)*(args + 1), (BOOL)*(args + 2), (LPCMENUITEMINFOA)*(args + 3));
}
INT_PTR WINAPI InsertMenuItemW_MWAI(INT_PTR* args){
    return (INT_PTR)InsertMenuItemW((HMENU)*(args + 0), (UINT)*(args + 1), (BOOL)*(args + 2), (LPCMENUITEMINFOW)*(args + 3));
}
INT_PTR WINAPI GetMenuItemInfoA_MWAI(INT_PTR* args){
    return (INT_PTR)GetMenuItemInfoA((HMENU)*(args + 0), (UINT)*(args + 1), (BOOL)*(args + 2), (LPMENUITEMINFOA)*(args + 3));
}
INT_PTR WINAPI GetMenuItemInfoW_MWAI(INT_PTR* args){
    return (INT_PTR)GetMenuItemInfoW((HMENU)*(args + 0), (UINT)*(args + 1), (BOOL)*(args + 2), (LPMENUITEMINFOW)*(args + 3));
}
INT_PTR WINAPI SetMenuItemInfoA_MWAI(INT_PTR* args){
    return (INT_PTR)SetMenuItemInfoA((HMENU)*(args + 0), (UINT)*(args + 1), (BOOL)*(args + 2), (LPCMENUITEMINFOA)*(args + 3));
}
INT_PTR WINAPI SetMenuItemInfoW_MWAI(INT_PTR* args){
    return (INT_PTR)SetMenuItemInfoW((HMENU)*(args + 0), (UINT)*(args + 1), (BOOL)*(args + 2), (LPCMENUITEMINFOW)*(args + 3));
}
INT_PTR WINAPI GetMenuDefaultItem_MWAI(INT_PTR* args){
    return (INT_PTR)GetMenuDefaultItem((HMENU)*(args + 0), (UINT)*(args + 1), (UINT)*(args + 2));
}
INT_PTR WINAPI SetMenuDefaultItem_MWAI(INT_PTR* args){
    return (INT_PTR)SetMenuDefaultItem((HMENU)*(args + 0), (UINT)*(args + 1), (UINT)*(args + 2));
}
INT_PTR WINAPI DragObject_MWAI(INT_PTR* args){
    return (INT_PTR)DragObject((HWND)*(args + 0), (HWND)*(args + 1), (UINT)*(args + 2), (ULONG_PTR)*(args + 3), (HCURSOR)*(args + 4));
}
INT_PTR WINAPI DrawIcon_MWAI(INT_PTR* args){
    return (INT_PTR)DrawIcon((HDC)*(args + 0), (int)*(args + 1), (int)*(args + 2), (HICON)*(args + 3));
}
INT_PTR WINAPI GrayStringA_MWAI(INT_PTR* args){
    return (INT_PTR)GrayStringA((HDC)*(args + 0), (HBRUSH)*(args + 1), (GRAYSTRINGPROC)*(args + 2), (LPARAM)*(args + 3), (int)*(args + 4), (int)*(args + 5), (int)*(args + 6), (int)*(args + 7), (int)*(args + 8));
}
INT_PTR WINAPI GrayStringW_MWAI(INT_PTR* args){
    return (INT_PTR)GrayStringW((HDC)*(args + 0), (HBRUSH)*(args + 1), (GRAYSTRINGPROC)*(args + 2), (LPARAM)*(args + 3), (int)*(args + 4), (int)*(args + 5), (int)*(args + 6), (int)*(args + 7), (int)*(args + 8));
}
INT_PTR WINAPI DrawStateA_MWAI(INT_PTR* args){
    return (INT_PTR)DrawStateA((HDC)*(args + 0), (HBRUSH)*(args + 1), (DRAWSTATEPROC)*(args + 2), (LPARAM)*(args + 3), (WPARAM)*(args + 4), (int)*(args + 5), (int)*(args + 6), (int)*(args + 7), (int)*(args + 8), (UINT)*(args + 9));
}
INT_PTR WINAPI DrawStateW_MWAI(INT_PTR* args){
    return (INT_PTR)DrawStateW((HDC)*(args + 0), (HBRUSH)*(args + 1), (DRAWSTATEPROC)*(args + 2), (LPARAM)*(args + 3), (WPARAM)*(args + 4), (int)*(args + 5), (int)*(args + 6), (int)*(args + 7), (int)*(args + 8), (UINT)*(args + 9));
}
INT_PTR WINAPI TabbedTextOutA_MWAI(INT_PTR* args){
    return (INT_PTR)TabbedTextOutA((HDC)*(args + 0), (int)*(args + 1), (int)*(args + 2), (LPCSTR)*(args + 3), (int)*(args + 4), (int)*(args + 5), (const INT *)*(args + 6), (int)*(args + 7));
}
INT_PTR WINAPI TabbedTextOutW_MWAI(INT_PTR* args){
    return (INT_PTR)TabbedTextOutW((HDC)*(args + 0), (int)*(args + 1), (int)*(args + 2), (LPCWSTR)*(args + 3), (int)*(args + 4), (int)*(args + 5), (const INT *)*(args + 6), (int)*(args + 7));
}
INT_PTR WINAPI GetTabbedTextExtentA_MWAI(INT_PTR* args){
    return (INT_PTR)GetTabbedTextExtentA((HDC)*(args + 0), (LPCSTR)*(args + 1), (int)*(args + 2), (int)*(args + 3), (const INT *)*(args + 4));
}
INT_PTR WINAPI GetTabbedTextExtentW_MWAI(INT_PTR* args){
    return (INT_PTR)GetTabbedTextExtentW((HDC)*(args + 0), (LPCWSTR)*(args + 1), (int)*(args + 2), (int)*(args + 3), (const INT *)*(args + 4));
}
INT_PTR WINAPI UpdateWindow_MWAI(INT_PTR* args){
    return (INT_PTR)UpdateWindow((HWND)*(args + 0));
}
INT_PTR WINAPI SetActiveWindow_MWAI(INT_PTR* args){
    return (INT_PTR)SetActiveWindow((HWND)*(args + 0));
}
INT_PTR WINAPI GetForegroundWindow_MWAI(INT_PTR* args){
    return (INT_PTR)GetForegroundWindow();
}
INT_PTR WINAPI PaintDesktop_MWAI(INT_PTR* args){
    return (INT_PTR)PaintDesktop((HDC)*(args + 0));
}
INT_PTR WINAPI SwitchToThisWindow_MWAI(INT_PTR* args){
    SwitchToThisWindow((HWND)*(args + 0), (BOOL)*(args + 1));
    return 0;
}
INT_PTR WINAPI SetForegroundWindow_MWAI(INT_PTR* args){
    return (INT_PTR)SetForegroundWindow((HWND)*(args + 0));
}
INT_PTR WINAPI AllowSetForegroundWindow_MWAI(INT_PTR* args){
    return (INT_PTR)AllowSetForegroundWindow((DWORD)*(args + 0));
}
INT_PTR WINAPI LockSetForegroundWindow_MWAI(INT_PTR* args){
    return (INT_PTR)LockSetForegroundWindow((UINT)*(args + 0));
}
INT_PTR WINAPI WindowFromDC_MWAI(INT_PTR* args){
    return (INT_PTR)WindowFromDC((HDC)*(args + 0));
}
INT_PTR WINAPI GetDC_MWAI(INT_PTR* args){
    return (INT_PTR)GetDC((HWND)*(args + 0));
}
INT_PTR WINAPI GetDCEx_MWAI(INT_PTR* args){
    return (INT_PTR)GetDCEx((HWND)*(args + 0), (HRGN)*(args + 1), (DWORD)*(args + 2));
}
INT_PTR WINAPI GetWindowDC_MWAI(INT_PTR* args){
    return (INT_PTR)GetWindowDC((HWND)*(args + 0));
}
INT_PTR WINAPI ReleaseDC_MWAI(INT_PTR* args){
    return (INT_PTR)ReleaseDC((HWND)*(args + 0), (HDC)*(args + 1));
}
INT_PTR WINAPI BeginPaint_MWAI(INT_PTR* args){
    return (INT_PTR)BeginPaint((HWND)*(args + 0), (LPPAINTSTRUCT)*(args + 1));
}
INT_PTR WINAPI EndPaint_MWAI(INT_PTR* args){
    return (INT_PTR)EndPaint((HWND)*(args + 0), (const PAINTSTRUCT *)*(args + 1));
}
INT_PTR WINAPI GetUpdateRgn_MWAI(INT_PTR* args){
    return (INT_PTR)GetUpdateRgn((HWND)*(args + 0), (HRGN)*(args + 1), (BOOL)*(args + 2));
}
INT_PTR WINAPI SetWindowRgn_MWAI(INT_PTR* args){
    return (INT_PTR)SetWindowRgn((HWND)*(args + 0), (HRGN)*(args + 1), (BOOL)*(args + 2));
}
INT_PTR WINAPI GetWindowRgn_MWAI(INT_PTR* args){
    return (INT_PTR)GetWindowRgn((HWND)*(args + 0), (HRGN)*(args + 1));
}
INT_PTR WINAPI ExcludeUpdateRgn_MWAI(INT_PTR* args){
    return (INT_PTR)ExcludeUpdateRgn((HDC)*(args + 0), (HWND)*(args + 1));
}
INT_PTR WINAPI InvalidateRect_MWAI(INT_PTR* args){
    return (INT_PTR)InvalidateRect((HWND)*(args + 0), (const RECT *)*(args + 1), (BOOL)*(args + 2));
}
INT_PTR WINAPI ValidateRect_MWAI(INT_PTR* args){
    return (INT_PTR)ValidateRect((HWND)*(args + 0), (const RECT *)*(args + 1));
}
INT_PTR WINAPI InvalidateRgn_MWAI(INT_PTR* args){
    return (INT_PTR)InvalidateRgn((HWND)*(args + 0), (HRGN)*(args + 1), (BOOL)*(args + 2));
}
INT_PTR WINAPI ValidateRgn_MWAI(INT_PTR* args){
    return (INT_PTR)ValidateRgn((HWND)*(args + 0), (HRGN)*(args + 1));
}
INT_PTR WINAPI RedrawWindow_MWAI(INT_PTR* args){
    return (INT_PTR)RedrawWindow((HWND)*(args + 0), (const RECT *)*(args + 1), (HRGN)*(args + 2), (UINT)*(args + 3));
}
INT_PTR WINAPI LockWindowUpdate_MWAI(INT_PTR* args){
    return (INT_PTR)LockWindowUpdate((HWND)*(args + 0));
}
INT_PTR WINAPI ScrollWindow_MWAI(INT_PTR* args){
    return (INT_PTR)ScrollWindow((HWND)*(args + 0), (int)*(args + 1), (int)*(args + 2), (const RECT *)*(args + 3), (const RECT *)*(args + 4));
}
INT_PTR WINAPI SetScrollPos_MWAI(INT_PTR* args){
    return (INT_PTR)SetScrollPos((HWND)*(args + 0), (int)*(args + 1), (int)*(args + 2), (BOOL)*(args + 3));
}
INT_PTR WINAPI GetScrollPos_MWAI(INT_PTR* args){
    return (INT_PTR)GetScrollPos((HWND)*(args + 0), (int)*(args + 1));
}
INT_PTR WINAPI SetScrollRange_MWAI(INT_PTR* args){
    return (INT_PTR)SetScrollRange((HWND)*(args + 0), (int)*(args + 1), (int)*(args + 2), (int)*(args + 3), (BOOL)*(args + 4));
}
INT_PTR WINAPI GetScrollRange_MWAI(INT_PTR* args){
    return (INT_PTR)GetScrollRange((HWND)*(args + 0), (int)*(args + 1), (LPINT)*(args + 2), (LPINT)*(args + 3));
}
INT_PTR WINAPI ShowScrollBar_MWAI(INT_PTR* args){
    return (INT_PTR)ShowScrollBar((HWND)*(args + 0), (int)*(args + 1), (BOOL)*(args + 2));
}
INT_PTR WINAPI EnableScrollBar_MWAI(INT_PTR* args){
    return (INT_PTR)EnableScrollBar((HWND)*(args + 0), (UINT)*(args + 1), (UINT)*(args + 2));
}
INT_PTR WINAPI SetPropA_MWAI(INT_PTR* args){
    return (INT_PTR)SetPropA((HWND)*(args + 0), (LPCSTR)*(args + 1), (HANDLE)*(args + 2));
}
INT_PTR WINAPI SetPropW_MWAI(INT_PTR* args){
    return (INT_PTR)SetPropW((HWND)*(args + 0), (LPCWSTR)*(args + 1), (HANDLE)*(args + 2));
}
INT_PTR WINAPI GetPropA_MWAI(INT_PTR* args){
    return (INT_PTR)GetPropA((HWND)*(args + 0), (LPCSTR)*(args + 1));
}
INT_PTR WINAPI GetPropW_MWAI(INT_PTR* args){
    return (INT_PTR)GetPropW((HWND)*(args + 0), (LPCWSTR)*(args + 1));
}
INT_PTR WINAPI RemovePropA_MWAI(INT_PTR* args){
    return (INT_PTR)RemovePropA((HWND)*(args + 0), (LPCSTR)*(args + 1));
}
INT_PTR WINAPI RemovePropW_MWAI(INT_PTR* args){
    return (INT_PTR)RemovePropW((HWND)*(args + 0), (LPCWSTR)*(args + 1));
}
INT_PTR WINAPI EnumPropsExA_MWAI(INT_PTR* args){
    return (INT_PTR)EnumPropsExA((HWND)*(args + 0), (PROPENUMPROCEXA)*(args + 1), (LPARAM)*(args + 2));
}
INT_PTR WINAPI EnumPropsExW_MWAI(INT_PTR* args){
    return (INT_PTR)EnumPropsExW((HWND)*(args + 0), (PROPENUMPROCEXW)*(args + 1), (LPARAM)*(args + 2));
}
INT_PTR WINAPI EnumPropsA_MWAI(INT_PTR* args){
    return (INT_PTR)EnumPropsA((HWND)*(args + 0), (PROPENUMPROCA)*(args + 1));
}
INT_PTR WINAPI EnumPropsW_MWAI(INT_PTR* args){
    return (INT_PTR)EnumPropsW((HWND)*(args + 0), (PROPENUMPROCW)*(args + 1));
}
INT_PTR WINAPI SetWindowTextA_MWAI(INT_PTR* args){
    return (INT_PTR)SetWindowTextA((HWND)*(args + 0), (LPCSTR)*(args + 1));
}
INT_PTR WINAPI SetWindowTextW_MWAI(INT_PTR* args){
    return (INT_PTR)SetWindowTextW((HWND)*(args + 0), (LPCWSTR)*(args + 1));
}
INT_PTR WINAPI GetWindowTextA_MWAI(INT_PTR* args){
    return (INT_PTR)GetWindowTextA((HWND)*(args + 0), (LPSTR)*(args + 1), (int)*(args + 2));
}
INT_PTR WINAPI GetWindowTextW_MWAI(INT_PTR* args){
    return (INT_PTR)GetWindowTextW((HWND)*(args + 0), (LPWSTR)*(args + 1), (int)*(args + 2));
}
INT_PTR WINAPI GetWindowTextLengthA_MWAI(INT_PTR* args){
    return (INT_PTR)GetWindowTextLengthA((HWND)*(args + 0));
}
INT_PTR WINAPI GetWindowTextLengthW_MWAI(INT_PTR* args){
    return (INT_PTR)GetWindowTextLengthW((HWND)*(args + 0));
}
INT_PTR WINAPI SetWindowContextHelpId_MWAI(INT_PTR* args){
    return (INT_PTR)SetWindowContextHelpId((HWND)*(args + 0), (DWORD)*(args + 1));
}
INT_PTR WINAPI GetWindowContextHelpId_MWAI(INT_PTR* args){
    return (INT_PTR)GetWindowContextHelpId((HWND)*(args + 0));
}
INT_PTR WINAPI SetMenuContextHelpId_MWAI(INT_PTR* args){
    return (INT_PTR)SetMenuContextHelpId((HMENU)*(args + 0), (DWORD)*(args + 1));
}
INT_PTR WINAPI GetMenuContextHelpId_MWAI(INT_PTR* args){
    return (INT_PTR)GetMenuContextHelpId((HMENU)*(args + 0));
}
INT_PTR WINAPI MessageBoxA_MWAI(INT_PTR* args){
    return (INT_PTR)MessageBoxA((HWND)*(args + 0), (LPCSTR)*(args + 1), (LPCSTR)*(args + 2), (UINT)*(args + 3));
}
INT_PTR WINAPI MessageBoxW_MWAI(INT_PTR* args){
    return (INT_PTR)MessageBoxW((HWND)*(args + 0), (LPCWSTR)*(args + 1), (LPCWSTR)*(args + 2), (UINT)*(args + 3));
}
INT_PTR WINAPI MessageBoxExA_MWAI(INT_PTR* args){
    return (INT_PTR)MessageBoxExA((HWND)*(args + 0), (LPCSTR)*(args + 1), (LPCSTR)*(args + 2), (UINT)*(args + 3), (WORD)*(args + 4));
}
INT_PTR WINAPI MessageBoxExW_MWAI(INT_PTR* args){
    return (INT_PTR)MessageBoxExW((HWND)*(args + 0), (LPCWSTR)*(args + 1), (LPCWSTR)*(args + 2), (UINT)*(args + 3), (WORD)*(args + 4));
}
INT_PTR WINAPI MessageBoxIndirectA_MWAI(INT_PTR* args){
    return (INT_PTR)MessageBoxIndirectA((const MSGBOXPARAMSA *)*(args + 0));
}
INT_PTR WINAPI MessageBoxIndirectW_MWAI(INT_PTR* args){
    return (INT_PTR)MessageBoxIndirectW((const MSGBOXPARAMSW *)*(args + 0));
}
INT_PTR WINAPI MessageBeep_MWAI(INT_PTR* args){
    return (INT_PTR)MessageBeep((UINT)*(args + 0));
}
INT_PTR WINAPI ShowCursor_MWAI(INT_PTR* args){
    return (INT_PTR)ShowCursor((BOOL)*(args + 0));
}
INT_PTR WINAPI SetCursorPos_MWAI(INT_PTR* args){
    return (INT_PTR)SetCursorPos((int)*(args + 0), (int)*(args + 1));
}
INT_PTR WINAPI SetPhysicalCursorPos_MWAI(INT_PTR* args){
    return (INT_PTR)SetPhysicalCursorPos((int)*(args + 0), (int)*(args + 1));
}
INT_PTR WINAPI SetCursor_MWAI(INT_PTR* args){
    return (INT_PTR)SetCursor((HCURSOR)*(args + 0));
}
INT_PTR WINAPI GetCursor_MWAI(INT_PTR* args){
    return (INT_PTR)GetCursor();
}
INT_PTR WINAPI CreateCaret_MWAI(INT_PTR* args){
    return (INT_PTR)CreateCaret((HWND)*(args + 0), (HBITMAP)*(args + 1), (int)*(args + 2), (int)*(args + 3));
}
INT_PTR WINAPI GetCaretBlinkTime_MWAI(INT_PTR* args){
    return (INT_PTR)GetCaretBlinkTime();
}
INT_PTR WINAPI SetCaretBlinkTime_MWAI(INT_PTR* args){
    return (INT_PTR)SetCaretBlinkTime((UINT)*(args + 0));
}
INT_PTR WINAPI DestroyCaret_MWAI(INT_PTR* args){
    return (INT_PTR)DestroyCaret();
}
INT_PTR WINAPI HideCaret_MWAI(INT_PTR* args){
    return (INT_PTR)HideCaret((HWND)*(args + 0));
}
INT_PTR WINAPI ShowCaret_MWAI(INT_PTR* args){
    return (INT_PTR)ShowCaret((HWND)*(args + 0));
}
INT_PTR WINAPI SetCaretPos_MWAI(INT_PTR* args){
    return (INT_PTR)SetCaretPos((int)*(args + 0), (int)*(args + 1));
}
INT_PTR WINAPI ClipCursor_MWAI(INT_PTR* args){
    return (INT_PTR)ClipCursor((const RECT *)*(args + 0));
}
INT_PTR WINAPI GetSysColor_MWAI(INT_PTR* args){
    return (INT_PTR)GetSysColor((int)*(args + 0));
}
INT_PTR WINAPI GetSysColorBrush_MWAI(INT_PTR* args){
    return (INT_PTR)GetSysColorBrush((int)*(args + 0));
}
INT_PTR WINAPI SetSysColors_MWAI(INT_PTR* args){
    return (INT_PTR)SetSysColors((int)*(args + 0), (const INT *)*(args + 1), (const COLORREF *)*(args + 2));
}
INT_PTR WINAPI DrawFocusRect_MWAI(INT_PTR* args){
    return (INT_PTR)DrawFocusRect((HDC)*(args + 0), (const RECT *)*(args + 1));
}
INT_PTR WINAPI FillRect_MWAI(INT_PTR* args){
    return (INT_PTR)FillRect((HDC)*(args + 0), (const RECT *)*(args + 1), (HBRUSH)*(args + 2));
}
INT_PTR WINAPI FrameRect_MWAI(INT_PTR* args){
    return (INT_PTR)FrameRect((HDC)*(args + 0), (const RECT *)*(args + 1), (HBRUSH)*(args + 2));
}
INT_PTR WINAPI InvertRect_MWAI(INT_PTR* args){
    return (INT_PTR)InvertRect((HDC)*(args + 0), (const RECT *)*(args + 1));
}
INT_PTR WINAPI IsRectEmpty_MWAI(INT_PTR* args){
    return (INT_PTR)IsRectEmpty((const RECT *)*(args + 0));
}
INT_PTR WINAPI EqualRect_MWAI(INT_PTR* args){
    return (INT_PTR)EqualRect((const RECT *)*(args + 0), (const RECT *)*(args + 1));
}
INT_PTR WINAPI GetWindowWord_MWAI(INT_PTR* args){
    return (INT_PTR)GetWindowWord((HWND)*(args + 0), (int)*(args + 1));
}
INT_PTR WINAPI SetWindowWord_MWAI(INT_PTR* args){
    return (INT_PTR)SetWindowWord((HWND)*(args + 0), (int)*(args + 1), (WORD)*(args + 2));
}
INT_PTR WINAPI GetWindowLongA_MWAI(INT_PTR* args){
    return (INT_PTR)GetWindowLongA((HWND)*(args + 0), (int)*(args + 1));
}
INT_PTR WINAPI GetWindowLongW_MWAI(INT_PTR* args){
    return (INT_PTR)GetWindowLongW((HWND)*(args + 0), (int)*(args + 1));
}
INT_PTR WINAPI SetWindowLongA_MWAI(INT_PTR* args){
    return (INT_PTR)SetWindowLongA((HWND)*(args + 0), (int)*(args + 1), (LONG)*(args + 2));
}
INT_PTR WINAPI SetWindowLongW_MWAI(INT_PTR* args){
    return (INT_PTR)SetWindowLongW((HWND)*(args + 0), (int)*(args + 1), (LONG)*(args + 2));
}
INT_PTR WINAPI GetWindowLongPtrA_MWAI(INT_PTR* args){
    return (INT_PTR)GetWindowLongPtrA((HWND)*(args + 0), (int)*(args + 1));
}
INT_PTR WINAPI GetWindowLongPtrW_MWAI(INT_PTR* args){
    return (INT_PTR)GetWindowLongPtrW((HWND)*(args + 0), (int)*(args + 1));
}
INT_PTR WINAPI SetWindowLongPtrA_MWAI(INT_PTR* args){
    return (INT_PTR)SetWindowLongPtrA((HWND)*(args + 0), (int)*(args + 1), (LONG_PTR)*(args + 2));
}
INT_PTR WINAPI SetWindowLongPtrW_MWAI(INT_PTR* args){
    return (INT_PTR)SetWindowLongPtrW((HWND)*(args + 0), (int)*(args + 1), (LONG_PTR)*(args + 2));
}
INT_PTR WINAPI GetClassWord_MWAI(INT_PTR* args){
    return (INT_PTR)GetClassWord((HWND)*(args + 0), (int)*(args + 1));
}
INT_PTR WINAPI SetClassWord_MWAI(INT_PTR* args){
    return (INT_PTR)SetClassWord((HWND)*(args + 0), (int)*(args + 1), (WORD)*(args + 2));
}
INT_PTR WINAPI GetClassLongA_MWAI(INT_PTR* args){
    return (INT_PTR)GetClassLongA((HWND)*(args + 0), (int)*(args + 1));
}
INT_PTR WINAPI GetClassLongW_MWAI(INT_PTR* args){
    return (INT_PTR)GetClassLongW((HWND)*(args + 0), (int)*(args + 1));
}
INT_PTR WINAPI SetClassLongA_MWAI(INT_PTR* args){
    return (INT_PTR)SetClassLongA((HWND)*(args + 0), (int)*(args + 1), (LONG)*(args + 2));
}
INT_PTR WINAPI SetClassLongW_MWAI(INT_PTR* args){
    return (INT_PTR)SetClassLongW((HWND)*(args + 0), (int)*(args + 1), (LONG)*(args + 2));
}
INT_PTR WINAPI GetClassLongPtrA_MWAI(INT_PTR* args){
    return (INT_PTR)GetClassLongPtrA((HWND)*(args + 0), (int)*(args + 1));
}
INT_PTR WINAPI GetClassLongPtrW_MWAI(INT_PTR* args){
    return (INT_PTR)GetClassLongPtrW((HWND)*(args + 0), (int)*(args + 1));
}
INT_PTR WINAPI SetClassLongPtrA_MWAI(INT_PTR* args){
    return (INT_PTR)SetClassLongPtrA((HWND)*(args + 0), (int)*(args + 1), (LONG_PTR)*(args + 2));
}
INT_PTR WINAPI SetClassLongPtrW_MWAI(INT_PTR* args){
    return (INT_PTR)SetClassLongPtrW((HWND)*(args + 0), (int)*(args + 1), (LONG_PTR)*(args + 2));
}
INT_PTR WINAPI GetProcessDefaultLayout_MWAI(INT_PTR* args){
    return (INT_PTR)GetProcessDefaultLayout((DWORD *)*(args + 0));
}
INT_PTR WINAPI SetProcessDefaultLayout_MWAI(INT_PTR* args){
    return (INT_PTR)SetProcessDefaultLayout((DWORD)*(args + 0));
}
INT_PTR WINAPI GetDesktopWindow_MWAI(INT_PTR* args){
    return (INT_PTR)GetDesktopWindow();
}
INT_PTR WINAPI GetParent_MWAI(INT_PTR* args){
    return (INT_PTR)GetParent((HWND)*(args + 0));
}
INT_PTR WINAPI SetParent_MWAI(INT_PTR* args){
    return (INT_PTR)SetParent((HWND)*(args + 0), (HWND)*(args + 1));
}
INT_PTR WINAPI EnumChildWindows_MWAI(INT_PTR* args){
    return (INT_PTR)EnumChildWindows((HWND)*(args + 0), (WNDENUMPROC)*(args + 1), (LPARAM)*(args + 2));
}
INT_PTR WINAPI FindWindowA_MWAI(INT_PTR* args){
    return (INT_PTR)FindWindowA((LPCSTR)*(args + 0), (LPCSTR)*(args + 1));
}
INT_PTR WINAPI FindWindowW_MWAI(INT_PTR* args){
    return (INT_PTR)FindWindowW((LPCWSTR)*(args + 0), (LPCWSTR)*(args + 1));
}
INT_PTR WINAPI FindWindowExA_MWAI(INT_PTR* args){
    return (INT_PTR)FindWindowExA((HWND)*(args + 0), (HWND)*(args + 1), (LPCSTR)*(args + 2), (LPCSTR)*(args + 3));
}
INT_PTR WINAPI FindWindowExW_MWAI(INT_PTR* args){
    return (INT_PTR)FindWindowExW((HWND)*(args + 0), (HWND)*(args + 1), (LPCWSTR)*(args + 2), (LPCWSTR)*(args + 3));
}
INT_PTR WINAPI GetShellWindow_MWAI(INT_PTR* args){
    return (INT_PTR)GetShellWindow();
}
INT_PTR WINAPI RegisterShellHookWindow_MWAI(INT_PTR* args){
    return (INT_PTR)RegisterShellHookWindow((HWND)*(args + 0));
}
INT_PTR WINAPI DeregisterShellHookWindow_MWAI(INT_PTR* args){
    return (INT_PTR)DeregisterShellHookWindow((HWND)*(args + 0));
}
INT_PTR WINAPI EnumWindows_MWAI(INT_PTR* args){
    return (INT_PTR)EnumWindows((WNDENUMPROC)*(args + 0), (LPARAM)*(args + 1));
}
INT_PTR WINAPI EnumThreadWindows_MWAI(INT_PTR* args){
    return (INT_PTR)EnumThreadWindows((DWORD)*(args + 0), (WNDENUMPROC)*(args + 1), (LPARAM)*(args + 2));
}
INT_PTR WINAPI GetClassNameA_MWAI(INT_PTR* args){
    return (INT_PTR)GetClassNameA((HWND)*(args + 0), (LPSTR)*(args + 1), (int)*(args + 2));
}
INT_PTR WINAPI GetClassNameW_MWAI(INT_PTR* args){
    return (INT_PTR)GetClassNameW((HWND)*(args + 0), (LPWSTR)*(args + 1), (int)*(args + 2));
}
INT_PTR WINAPI GetTopWindow_MWAI(INT_PTR* args){
    return (INT_PTR)GetTopWindow((HWND)*(args + 0));
}
INT_PTR WINAPI GetWindowThreadProcessId_MWAI(INT_PTR* args){
    return (INT_PTR)GetWindowThreadProcessId((HWND)*(args + 0), (LPDWORD)*(args + 1));
}
INT_PTR WINAPI IsGUIThread_MWAI(INT_PTR* args){
    return (INT_PTR)IsGUIThread((BOOL)*(args + 0));
}
INT_PTR WINAPI GetLastActivePopup_MWAI(INT_PTR* args){
    return (INT_PTR)GetLastActivePopup((HWND)*(args + 0));
}
INT_PTR WINAPI GetWindow_MWAI(INT_PTR* args){
    return (INT_PTR)GetWindow((HWND)*(args + 0), (UINT)*(args + 1));
}
INT_PTR WINAPI SetWindowsHookA_MWAI(INT_PTR* args){
    return (INT_PTR)SetWindowsHookA((int)*(args + 0), (HOOKPROC)*(args + 1));
}
INT_PTR WINAPI SetWindowsHookW_MWAI(INT_PTR* args){
    return (INT_PTR)SetWindowsHookW((int)*(args + 0), (HOOKPROC)*(args + 1));
}
INT_PTR WINAPI UnhookWindowsHook_MWAI(INT_PTR* args){
    return (INT_PTR)UnhookWindowsHook((int)*(args + 0), (HOOKPROC)*(args + 1));
}
INT_PTR WINAPI SetWindowsHookExA_MWAI(INT_PTR* args){
    return (INT_PTR)SetWindowsHookExA((int)*(args + 0), (HOOKPROC)*(args + 1), (HINSTANCE)*(args + 2), (DWORD)*(args + 3));
}
INT_PTR WINAPI SetWindowsHookExW_MWAI(INT_PTR* args){
    return (INT_PTR)SetWindowsHookExW((int)*(args + 0), (HOOKPROC)*(args + 1), (HINSTANCE)*(args + 2), (DWORD)*(args + 3));
}
INT_PTR WINAPI UnhookWindowsHookEx_MWAI(INT_PTR* args){
    return (INT_PTR)UnhookWindowsHookEx((HHOOK)*(args + 0));
}
INT_PTR WINAPI CallNextHookEx_MWAI(INT_PTR* args){
    return (INT_PTR)CallNextHookEx((HHOOK)*(args + 0), (int)*(args + 1), (WPARAM)*(args + 2), (LPARAM)*(args + 3));
}
INT_PTR WINAPI CheckMenuRadioItem_MWAI(INT_PTR* args){
    return (INT_PTR)CheckMenuRadioItem((HMENU)*(args + 0), (UINT)*(args + 1), (UINT)*(args + 2), (UINT)*(args + 3), (UINT)*(args + 4));
}
INT_PTR WINAPI LoadBitmapA_MWAI(INT_PTR* args){
    return (INT_PTR)LoadBitmapA((HINSTANCE)*(args + 0), (LPCSTR)*(args + 1));
}
INT_PTR WINAPI LoadBitmapW_MWAI(INT_PTR* args){
    return (INT_PTR)LoadBitmapW((HINSTANCE)*(args + 0), (LPCWSTR)*(args + 1));
}
INT_PTR WINAPI LoadCursorA_MWAI(INT_PTR* args){
    return (INT_PTR)LoadCursorA((HINSTANCE)*(args + 0), (LPCSTR)*(args + 1));
}
INT_PTR WINAPI LoadCursorW_MWAI(INT_PTR* args){
    return (INT_PTR)LoadCursorW((HINSTANCE)*(args + 0), (LPCWSTR)*(args + 1));
}
INT_PTR WINAPI LoadCursorFromFileA_MWAI(INT_PTR* args){
    return (INT_PTR)LoadCursorFromFileA((LPCSTR)*(args + 0));
}
INT_PTR WINAPI LoadCursorFromFileW_MWAI(INT_PTR* args){
    return (INT_PTR)LoadCursorFromFileW((LPCWSTR)*(args + 0));
}
INT_PTR WINAPI CreateCursor_MWAI(INT_PTR* args){
    return (INT_PTR)CreateCursor((HINSTANCE)*(args + 0), (int)*(args + 1), (int)*(args + 2), (int)*(args + 3), (int)*(args + 4), (const void *)*(args + 5), (const void *)*(args + 6));
}
INT_PTR WINAPI DestroyCursor_MWAI(INT_PTR* args){
    return (INT_PTR)DestroyCursor((HCURSOR)*(args + 0));
}
INT_PTR WINAPI SetSystemCursor_MWAI(INT_PTR* args){
    return (INT_PTR)SetSystemCursor((HCURSOR)*(args + 0), (DWORD)*(args + 1));
}
INT_PTR WINAPI LoadIconA_MWAI(INT_PTR* args){
    return (INT_PTR)LoadIconA((HINSTANCE)*(args + 0), (LPCSTR)*(args + 1));
}
INT_PTR WINAPI LoadIconW_MWAI(INT_PTR* args){
    return (INT_PTR)LoadIconW((HINSTANCE)*(args + 0), (LPCWSTR)*(args + 1));
}
INT_PTR WINAPI PrivateExtractIconsA_MWAI(INT_PTR* args){
    return (INT_PTR)PrivateExtractIconsA((LPCSTR)*(args + 0), (int)*(args + 1), (int)*(args + 2), (int)*(args + 3), (HICON *)*(args + 4), (UINT *)*(args + 5), (UINT)*(args + 6), (UINT)*(args + 7));
}
INT_PTR WINAPI PrivateExtractIconsW_MWAI(INT_PTR* args){
    return (INT_PTR)PrivateExtractIconsW((LPCWSTR)*(args + 0), (int)*(args + 1), (int)*(args + 2), (int)*(args + 3), (HICON *)*(args + 4), (UINT *)*(args + 5), (UINT)*(args + 6), (UINT)*(args + 7));
}
INT_PTR WINAPI CreateIcon_MWAI(INT_PTR* args){
    return (INT_PTR)CreateIcon((HINSTANCE)*(args + 0), (int)*(args + 1), (int)*(args + 2), (BYTE)*(args + 3), (BYTE)*(args + 4), (const BYTE *)*(args + 5), (const BYTE *)*(args + 6));
}
INT_PTR WINAPI DestroyIcon_MWAI(INT_PTR* args){
    return (INT_PTR)DestroyIcon((HICON)*(args + 0));
}
INT_PTR WINAPI LookupIconIdFromDirectory_MWAI(INT_PTR* args){
    return (INT_PTR)LookupIconIdFromDirectory((PBYTE)*(args + 0), (BOOL)*(args + 1));
}
INT_PTR WINAPI LookupIconIdFromDirectoryEx_MWAI(INT_PTR* args){
    return (INT_PTR)LookupIconIdFromDirectoryEx((PBYTE)*(args + 0), (BOOL)*(args + 1), (int)*(args + 2), (int)*(args + 3), (UINT)*(args + 4));
}
INT_PTR WINAPI CreateIconFromResource_MWAI(INT_PTR* args){
    return (INT_PTR)CreateIconFromResource((PBYTE)*(args + 0), (DWORD)*(args + 1), (BOOL)*(args + 2), (DWORD)*(args + 3));
}
INT_PTR WINAPI CreateIconFromResourceEx_MWAI(INT_PTR* args){
    return (INT_PTR)CreateIconFromResourceEx((PBYTE)*(args + 0), (DWORD)*(args + 1), (BOOL)*(args + 2), (DWORD)*(args + 3), (int)*(args + 4), (int)*(args + 5), (UINT)*(args + 6));
}
INT_PTR WINAPI LoadImageA_MWAI(INT_PTR* args){
    return (INT_PTR)LoadImageA((HINSTANCE)*(args + 0), (LPCSTR)*(args + 1), (UINT)*(args + 2), (int)*(args + 3), (int)*(args + 4), (UINT)*(args + 5));
}
INT_PTR WINAPI LoadImageW_MWAI(INT_PTR* args){
    return (INT_PTR)LoadImageW((HINSTANCE)*(args + 0), (LPCWSTR)*(args + 1), (UINT)*(args + 2), (int)*(args + 3), (int)*(args + 4), (UINT)*(args + 5));
}
INT_PTR WINAPI CopyImage_MWAI(INT_PTR* args){
    return (INT_PTR)CopyImage((HANDLE)*(args + 0), (UINT)*(args + 1), (int)*(args + 2), (int)*(args + 3), (UINT)*(args + 4));
}
INT_PTR WINAPI DrawIconEx_MWAI(INT_PTR* args){
    return (INT_PTR)DrawIconEx((HDC)*(args + 0), (int)*(args + 1), (int)*(args + 2), (HICON)*(args + 3), (int)*(args + 4), (int)*(args + 5), (UINT)*(args + 6), (HBRUSH)*(args + 7), (UINT)*(args + 8));
}
INT_PTR WINAPI CreateIconIndirect_MWAI(INT_PTR* args){
    return (INT_PTR)CreateIconIndirect((PICONINFO)*(args + 0));
}
INT_PTR WINAPI CopyIcon_MWAI(INT_PTR* args){
    return (INT_PTR)CopyIcon((HICON)*(args + 0));
}
INT_PTR WINAPI GetIconInfo_MWAI(INT_PTR* args){
    return (INT_PTR)GetIconInfo((HICON)*(args + 0), (PICONINFO)*(args + 1));
}
INT_PTR WINAPI GetIconInfoExA_MWAI(INT_PTR* args){
    return (INT_PTR)GetIconInfoExA((HICON)*(args + 0), (PICONINFOEXA)*(args + 1));
}
INT_PTR WINAPI GetIconInfoExW_MWAI(INT_PTR* args){
    return (INT_PTR)GetIconInfoExW((HICON)*(args + 0), (PICONINFOEXW)*(args + 1));
}
INT_PTR WINAPI DlgDirListA_MWAI(INT_PTR* args){
    return (INT_PTR)DlgDirListA((HWND)*(args + 0), (LPSTR)*(args + 1), (int)*(args + 2), (int)*(args + 3), (UINT)*(args + 4));
}
INT_PTR WINAPI DlgDirListW_MWAI(INT_PTR* args){
    return (INT_PTR)DlgDirListW((HWND)*(args + 0), (LPWSTR)*(args + 1), (int)*(args + 2), (int)*(args + 3), (UINT)*(args + 4));
}
INT_PTR WINAPI DlgDirSelectExA_MWAI(INT_PTR* args){
    return (INT_PTR)DlgDirSelectExA((HWND)*(args + 0), (LPSTR)*(args + 1), (int)*(args + 2), (int)*(args + 3));
}
INT_PTR WINAPI DlgDirSelectExW_MWAI(INT_PTR* args){
    return (INT_PTR)DlgDirSelectExW((HWND)*(args + 0), (LPWSTR)*(args + 1), (int)*(args + 2), (int)*(args + 3));
}
INT_PTR WINAPI DlgDirListComboBoxA_MWAI(INT_PTR* args){
    return (INT_PTR)DlgDirListComboBoxA((HWND)*(args + 0), (LPSTR)*(args + 1), (int)*(args + 2), (int)*(args + 3), (UINT)*(args + 4));
}
INT_PTR WINAPI DlgDirListComboBoxW_MWAI(INT_PTR* args){
    return (INT_PTR)DlgDirListComboBoxW((HWND)*(args + 0), (LPWSTR)*(args + 1), (int)*(args + 2), (int)*(args + 3), (UINT)*(args + 4));
}
INT_PTR WINAPI DlgDirSelectComboBoxExA_MWAI(INT_PTR* args){
    return (INT_PTR)DlgDirSelectComboBoxExA((HWND)*(args + 0), (LPSTR)*(args + 1), (int)*(args + 2), (int)*(args + 3));
}
INT_PTR WINAPI DlgDirSelectComboBoxExW_MWAI(INT_PTR* args){
    return (INT_PTR)DlgDirSelectComboBoxExW((HWND)*(args + 0), (LPWSTR)*(args + 1), (int)*(args + 2), (int)*(args + 3));
}
INT_PTR WINAPI SetScrollInfo_MWAI(INT_PTR* args){
    return (INT_PTR)SetScrollInfo((HWND)*(args + 0), (int)*(args + 1), (LPCSCROLLINFO)*(args + 2), (BOOL)*(args + 3));
}
INT_PTR WINAPI GetScrollInfo_MWAI(INT_PTR* args){
    return (INT_PTR)GetScrollInfo((HWND)*(args + 0), (int)*(args + 1), (LPSCROLLINFO)*(args + 2));
}
INT_PTR WINAPI DefFrameProcA_MWAI(INT_PTR* args){
    return (INT_PTR)DefFrameProcA((HWND)*(args + 0), (HWND)*(args + 1), (UINT)*(args + 2), (WPARAM)*(args + 3), (LPARAM)*(args + 4));
}
INT_PTR WINAPI DefFrameProcW_MWAI(INT_PTR* args){
    return (INT_PTR)DefFrameProcW((HWND)*(args + 0), (HWND)*(args + 1), (UINT)*(args + 2), (WPARAM)*(args + 3), (LPARAM)*(args + 4));
}
INT_PTR WINAPI DefMDIChildProcA_MWAI(INT_PTR* args){
    return (INT_PTR)DefMDIChildProcA((HWND)*(args + 0), (UINT)*(args + 1), (WPARAM)*(args + 2), (LPARAM)*(args + 3));
}
INT_PTR WINAPI DefMDIChildProcW_MWAI(INT_PTR* args){
    return (INT_PTR)DefMDIChildProcW((HWND)*(args + 0), (UINT)*(args + 1), (WPARAM)*(args + 2), (LPARAM)*(args + 3));
}
INT_PTR WINAPI ArrangeIconicWindows_MWAI(INT_PTR* args){
    return (INT_PTR)ArrangeIconicWindows((HWND)*(args + 0));
}
INT_PTR WINAPI CreateMDIWindowA_MWAI(INT_PTR* args){
    return (INT_PTR)CreateMDIWindowA((LPCSTR)*(args + 0), (LPCSTR)*(args + 1), (DWORD)*(args + 2), (int)*(args + 3), (int)*(args + 4), (int)*(args + 5), (int)*(args + 6), (HWND)*(args + 7), (HINSTANCE)*(args + 8), (LPARAM)*(args + 9));
}
INT_PTR WINAPI CreateMDIWindowW_MWAI(INT_PTR* args){
    return (INT_PTR)CreateMDIWindowW((LPCWSTR)*(args + 0), (LPCWSTR)*(args + 1), (DWORD)*(args + 2), (int)*(args + 3), (int)*(args + 4), (int)*(args + 5), (int)*(args + 6), (HWND)*(args + 7), (HINSTANCE)*(args + 8), (LPARAM)*(args + 9));
}
INT_PTR WINAPI TileWindows_MWAI(INT_PTR* args){
    return (INT_PTR)TileWindows((HWND)*(args + 0), (UINT)*(args + 1), (const RECT *)*(args + 2), (UINT)*(args + 3), (const HWND  *)*(args + 4));
}
INT_PTR WINAPI CascadeWindows_MWAI(INT_PTR* args){
    return (INT_PTR)CascadeWindows((HWND)*(args + 0), (UINT)*(args + 1), (const RECT *)*(args + 2), (UINT)*(args + 3), (const HWND  *)*(args + 4));
}
INT_PTR WINAPI WinHelpA_MWAI(INT_PTR* args){
    return (INT_PTR)WinHelpA((HWND)*(args + 0), (LPCSTR)*(args + 1), (UINT)*(args + 2), (ULONG_PTR)*(args + 3));
}
INT_PTR WINAPI WinHelpW_MWAI(INT_PTR* args){
    return (INT_PTR)WinHelpW((HWND)*(args + 0), (LPCWSTR)*(args + 1), (UINT)*(args + 2), (ULONG_PTR)*(args + 3));
}
INT_PTR WINAPI GetGuiResources_MWAI(INT_PTR* args){
    return (INT_PTR)GetGuiResources((HANDLE)*(args + 0), (DWORD)*(args + 1));
}
INT_PTR WINAPI ChangeDisplaySettingsA_MWAI(INT_PTR* args){
    return (INT_PTR)ChangeDisplaySettingsA((DEVMODEA*)*(args + 0), (DWORD)*(args + 1));
}
INT_PTR WINAPI ChangeDisplaySettingsW_MWAI(INT_PTR* args){
    return (INT_PTR)ChangeDisplaySettingsW((DEVMODEW*)*(args + 0), (DWORD)*(args + 1));
}
INT_PTR WINAPI ChangeDisplaySettingsExA_MWAI(INT_PTR* args){
    return (INT_PTR)ChangeDisplaySettingsExA((LPCSTR)*(args + 0), (DEVMODEA*)*(args + 1), (HWND)*(args + 2), (DWORD)*(args + 3), (LPVOID)*(args + 4));
}
INT_PTR WINAPI ChangeDisplaySettingsExW_MWAI(INT_PTR* args){
    return (INT_PTR)ChangeDisplaySettingsExW((LPCWSTR)*(args + 0), (DEVMODEW*)*(args + 1), (HWND)*(args + 2), (DWORD)*(args + 3), (LPVOID)*(args + 4));
}
INT_PTR WINAPI EnumDisplaySettingsA_MWAI(INT_PTR* args){
    return (INT_PTR)EnumDisplaySettingsA((LPCSTR)*(args + 0), (DWORD)*(args + 1), (DEVMODEA*)*(args + 2));
}
INT_PTR WINAPI EnumDisplaySettingsW_MWAI(INT_PTR* args){
    return (INT_PTR)EnumDisplaySettingsW((LPCWSTR)*(args + 0), (DWORD)*(args + 1), (DEVMODEW*)*(args + 2));
}
INT_PTR WINAPI EnumDisplaySettingsExA_MWAI(INT_PTR* args){
    return (INT_PTR)EnumDisplaySettingsExA((LPCSTR)*(args + 0), (DWORD)*(args + 1), (DEVMODEA*)*(args + 2), (DWORD)*(args + 3));
}
INT_PTR WINAPI EnumDisplaySettingsExW_MWAI(INT_PTR* args){
    return (INT_PTR)EnumDisplaySettingsExW((LPCWSTR)*(args + 0), (DWORD)*(args + 1), (DEVMODEW*)*(args + 2), (DWORD)*(args + 3));
}
INT_PTR WINAPI EnumDisplayDevicesA_MWAI(INT_PTR* args){
    return (INT_PTR)EnumDisplayDevicesA((LPCSTR)*(args + 0), (DWORD)*(args + 1), (PDISPLAY_DEVICEA)*(args + 2), (DWORD)*(args + 3));
}
INT_PTR WINAPI EnumDisplayDevicesW_MWAI(INT_PTR* args){
    return (INT_PTR)EnumDisplayDevicesW((LPCWSTR)*(args + 0), (DWORD)*(args + 1), (PDISPLAY_DEVICEW)*(args + 2), (DWORD)*(args + 3));
}
INT_PTR WINAPI GetDisplayConfigBufferSizes_MWAI(INT_PTR* args){
    return (INT_PTR)GetDisplayConfigBufferSizes((UINT32)*(args + 0), (UINT32*)*(args + 1), (UINT32*)*(args + 2));
}
INT_PTR WINAPI SetDisplayConfig_MWAI(INT_PTR* args){
    return (INT_PTR)SetDisplayConfig((UINT32)*(args + 0), (DISPLAYCONFIG_PATH_INFO*)*(args + 1), (UINT32)*(args + 2), (DISPLAYCONFIG_MODE_INFO*)*(args + 3), (UINT32)*(args + 4));
}
INT_PTR WINAPI QueryDisplayConfig_MWAI(INT_PTR* args){
    return (INT_PTR)QueryDisplayConfig((UINT32)*(args + 0), (UINT32*)*(args + 1), (DISPLAYCONFIG_PATH_INFO*)*(args + 2), (UINT32*)*(args + 3), (DISPLAYCONFIG_MODE_INFO*)*(args + 4), (DISPLAYCONFIG_TOPOLOGY_ID*)*(args + 5));
}
INT_PTR WINAPI DisplayConfigGetDeviceInfo_MWAI(INT_PTR* args){
    return (INT_PTR)DisplayConfigGetDeviceInfo((DISPLAYCONFIG_DEVICE_INFO_HEADER*)*(args + 0));
}
INT_PTR WINAPI DisplayConfigSetDeviceInfo_MWAI(INT_PTR* args){
    return (INT_PTR)DisplayConfigSetDeviceInfo((DISPLAYCONFIG_DEVICE_INFO_HEADER*)*(args + 0));
}
INT_PTR WINAPI SystemParametersInfoA_MWAI(INT_PTR* args){
    return (INT_PTR)SystemParametersInfoA((UINT)*(args + 0), (UINT)*(args + 1), (PVOID)*(args + 2), (UINT)*(args + 3));
}
INT_PTR WINAPI SystemParametersInfoW_MWAI(INT_PTR* args){
    return (INT_PTR)SystemParametersInfoW((UINT)*(args + 0), (UINT)*(args + 1), (PVOID)*(args + 2), (UINT)*(args + 3));
}
INT_PTR WINAPI SystemParametersInfoForDpi_MWAI(INT_PTR* args){
    return (INT_PTR)SystemParametersInfoForDpi((UINT)*(args + 0), (UINT)*(args + 1), (PVOID)*(args + 2), (UINT)*(args + 3), (UINT)*(args + 4));
}
INT_PTR WINAPI SoundSentry_MWAI(INT_PTR* args){
    return (INT_PTR)SoundSentry();
}
INT_PTR WINAPI SetDebugErrorLevel_MWAI(INT_PTR* args){
    SetDebugErrorLevel((DWORD)*(args + 0));
    return 0;
}
INT_PTR WINAPI SetLastErrorEx_MWAI(INT_PTR* args){
    SetLastErrorEx((DWORD)*(args + 0), (DWORD)*(args + 1));
    return 0;
}
INT_PTR WINAPI InternalGetWindowText_MWAI(INT_PTR* args){
    return (INT_PTR)InternalGetWindowText((HWND)*(args + 0), (LPWSTR)*(args + 1), (int)*(args + 2));
}
INT_PTR WINAPI CancelShutdown_MWAI(INT_PTR* args){
    return (INT_PTR)CancelShutdown();
}
INT_PTR WINAPI MonitorFromWindow_MWAI(INT_PTR* args){
    return (INT_PTR)MonitorFromWindow((HWND)*(args + 0), (DWORD)*(args + 1));
}
INT_PTR WINAPI GetMonitorInfoA_MWAI(INT_PTR* args){
    return (INT_PTR)GetMonitorInfoA((HMONITOR)*(args + 0), (LPMONITORINFO)*(args + 1));
}
INT_PTR WINAPI GetMonitorInfoW_MWAI(INT_PTR* args){
    return (INT_PTR)GetMonitorInfoW((HMONITOR)*(args + 0), (LPMONITORINFO)*(args + 1));
}
INT_PTR WINAPI NotifyWinEvent_MWAI(INT_PTR* args){
    NotifyWinEvent((DWORD)*(args + 0), (HWND)*(args + 1), (LONG)*(args + 2), (LONG)*(args + 3));
    return 0;
}
INT_PTR WINAPI SetWinEventHook_MWAI(INT_PTR* args){
    return (INT_PTR)SetWinEventHook((DWORD)*(args + 0), (DWORD)*(args + 1), (HMODULE)*(args + 2), (WINEVENTPROC)*(args + 3), (DWORD)*(args + 4), (DWORD)*(args + 5), (DWORD)*(args + 6));
}
INT_PTR WINAPI IsWinEventHookInstalled_MWAI(INT_PTR* args){
    return (INT_PTR)IsWinEventHookInstalled((DWORD)*(args + 0));
}
INT_PTR WINAPI UnhookWinEvent_MWAI(INT_PTR* args){
    return (INT_PTR)UnhookWinEvent((HWINEVENTHOOK)*(args + 0));
}
INT_PTR WINAPI GetGUIThreadInfo_MWAI(INT_PTR* args){
    return (INT_PTR)GetGUIThreadInfo((DWORD)*(args + 0), (PGUITHREADINFO)*(args + 1));
}
INT_PTR WINAPI BlockInput_MWAI(INT_PTR* args){
    return (INT_PTR)BlockInput((BOOL)*(args + 0));
}
INT_PTR WINAPI SetProcessDPIAware_MWAI(INT_PTR* args){
    return (INT_PTR)SetProcessDPIAware();
}
INT_PTR WINAPI IsProcessDPIAware_MWAI(INT_PTR* args){
    return (INT_PTR)IsProcessDPIAware();
}
INT_PTR WINAPI GetDpiForWindow_MWAI(INT_PTR* args){
    return (INT_PTR)GetDpiForWindow((HWND)*(args + 0));
}
INT_PTR WINAPI GetDpiForSystem_MWAI(INT_PTR* args){
    return (INT_PTR)GetDpiForSystem();
}
INT_PTR WINAPI GetSystemDpiForProcess_MWAI(INT_PTR* args){
    return (INT_PTR)GetSystemDpiForProcess((HANDLE)*(args + 0));
}
INT_PTR WINAPI EnableNonClientDpiScaling_MWAI(INT_PTR* args){
    return (INT_PTR)EnableNonClientDpiScaling((HWND)*(args + 0));
}
INT_PTR WINAPI InheritWindowMonitor_MWAI(INT_PTR* args){
    return (INT_PTR)InheritWindowMonitor((HWND)*(args + 0), (HWND)*(args + 1));
}
INT_PTR WINAPI SetThreadDpiHostingBehavior_MWAI(INT_PTR* args){
    return (INT_PTR)SetThreadDpiHostingBehavior((DPI_HOSTING_BEHAVIOR)*(args + 0));
}
INT_PTR WINAPI GetThreadDpiHostingBehavior_MWAI(INT_PTR* args){
    return (INT_PTR)GetThreadDpiHostingBehavior();
}
INT_PTR WINAPI GetWindowDpiHostingBehavior_MWAI(INT_PTR* args){
    return (INT_PTR)GetWindowDpiHostingBehavior((HWND)*(args + 0));
}
INT_PTR WINAPI GetWindowModuleFileNameA_MWAI(INT_PTR* args){
    return (INT_PTR)GetWindowModuleFileNameA((HWND)*(args + 0), (LPSTR)*(args + 1), (UINT)*(args + 2));
}
INT_PTR WINAPI GetWindowModuleFileNameW_MWAI(INT_PTR* args){
    return (INT_PTR)GetWindowModuleFileNameW((HWND)*(args + 0), (LPWSTR)*(args + 1), (UINT)*(args + 2));
}
INT_PTR WINAPI GetCursorInfo_MWAI(INT_PTR* args){
    return (INT_PTR)GetCursorInfo((PCURSORINFO)*(args + 0));
}
INT_PTR WINAPI GetWindowInfo_MWAI(INT_PTR* args){
    return (INT_PTR)GetWindowInfo((HWND)*(args + 0), (PWINDOWINFO)*(args + 1));
}
INT_PTR WINAPI GetTitleBarInfo_MWAI(INT_PTR* args){
    return (INT_PTR)GetTitleBarInfo((HWND)*(args + 0), (PTITLEBARINFO)*(args + 1));
}
INT_PTR WINAPI GetMenuBarInfo_MWAI(INT_PTR* args){
    return (INT_PTR)GetMenuBarInfo((HWND)*(args + 0), (LONG)*(args + 1), (LONG)*(args + 2), (PMENUBARINFO)*(args + 3));
}
INT_PTR WINAPI GetScrollBarInfo_MWAI(INT_PTR* args){
    return (INT_PTR)GetScrollBarInfo((HWND)*(args + 0), (LONG)*(args + 1), (PSCROLLBARINFO)*(args + 2));
}
INT_PTR WINAPI GetComboBoxInfo_MWAI(INT_PTR* args){
    return (INT_PTR)GetComboBoxInfo((HWND)*(args + 0), (PCOMBOBOXINFO)*(args + 1));
}
INT_PTR WINAPI GetAncestor_MWAI(INT_PTR* args){
    return (INT_PTR)GetAncestor((HWND)*(args + 0), (UINT)*(args + 1));
}
INT_PTR WINAPI RealGetWindowClassA_MWAI(INT_PTR* args){
    return (INT_PTR)RealGetWindowClassA((HWND)*(args + 0), (LPSTR)*(args + 1), (UINT)*(args + 2));
}
INT_PTR WINAPI RealGetWindowClassW_MWAI(INT_PTR* args){
    return (INT_PTR)RealGetWindowClassW((HWND)*(args + 0), (LPWSTR)*(args + 1), (UINT)*(args + 2));
}
INT_PTR WINAPI GetAltTabInfoA_MWAI(INT_PTR* args){
    return (INT_PTR)GetAltTabInfoA((HWND)*(args + 0), (int)*(args + 1), (PALTTABINFO)*(args + 2), (LPSTR)*(args + 3), (UINT)*(args + 4));
}
INT_PTR WINAPI GetAltTabInfoW_MWAI(INT_PTR* args){
    return (INT_PTR)GetAltTabInfoW((HWND)*(args + 0), (int)*(args + 1), (PALTTABINFO)*(args + 2), (LPWSTR)*(args + 3), (UINT)*(args + 4));
}
INT_PTR WINAPI GetListBoxInfo_MWAI(INT_PTR* args){
    return (INT_PTR)GetListBoxInfo((HWND)*(args + 0));
}
INT_PTR WINAPI LockWorkStation_MWAI(INT_PTR* args){
    return (INT_PTR)LockWorkStation();
}
INT_PTR WINAPI UserHandleGrantAccess_MWAI(INT_PTR* args){
    return (INT_PTR)UserHandleGrantAccess((HANDLE)*(args + 0), (HANDLE)*(args + 1), (BOOL)*(args + 2));
}
INT_PTR WINAPI GetRawInputData_MWAI(INT_PTR* args){
    return (INT_PTR)GetRawInputData((HRAWINPUT)*(args + 0), (UINT)*(args + 1), (LPVOID)*(args + 2), (PUINT)*(args + 3), (UINT)*(args + 4));
}
INT_PTR WINAPI GetRawInputDeviceInfoA_MWAI(INT_PTR* args){
    return (INT_PTR)GetRawInputDeviceInfoA((HANDLE)*(args + 0), (UINT)*(args + 1), (LPVOID)*(args + 2), (PUINT)*(args + 3));
}
INT_PTR WINAPI GetRawInputDeviceInfoW_MWAI(INT_PTR* args){
    return (INT_PTR)GetRawInputDeviceInfoW((HANDLE)*(args + 0), (UINT)*(args + 1), (LPVOID)*(args + 2), (PUINT)*(args + 3));
}
INT_PTR WINAPI GetRawInputBuffer_MWAI(INT_PTR* args){
    return (INT_PTR)GetRawInputBuffer((PRAWINPUT)*(args + 0), (PUINT)*(args + 1), (UINT)*(args + 2));
}
INT_PTR WINAPI RegisterRawInputDevices_MWAI(INT_PTR* args){
    return (INT_PTR)RegisterRawInputDevices((PCRAWINPUTDEVICE)*(args + 0), (UINT)*(args + 1), (UINT)*(args + 2));
}
INT_PTR WINAPI GetRegisteredRawInputDevices_MWAI(INT_PTR* args){
    return (INT_PTR)GetRegisteredRawInputDevices((PRAWINPUTDEVICE)*(args + 0), (PUINT)*(args + 1), (UINT)*(args + 2));
}
INT_PTR WINAPI GetRawInputDeviceList_MWAI(INT_PTR* args){
    return (INT_PTR)GetRawInputDeviceList((PRAWINPUTDEVICELIST)*(args + 0), (PUINT)*(args + 1), (UINT)*(args + 2));
}
INT_PTR WINAPI DefRawInputProc_MWAI(INT_PTR* args){
    return (INT_PTR)DefRawInputProc((PRAWINPUT*)*(args + 0), (INT)*(args + 1), (UINT)*(args + 2));
}
INT_PTR WINAPI GetPointerDevices_MWAI(INT_PTR* args){
    return (INT_PTR)GetPointerDevices((UINT32*)*(args + 0), (POINTER_DEVICE_INFO *)*(args + 1));
}
INT_PTR WINAPI GetPointerDevice_MWAI(INT_PTR* args){
    return (INT_PTR)GetPointerDevice((HANDLE)*(args + 0), (POINTER_DEVICE_INFO *)*(args + 1));
}
INT_PTR WINAPI GetPointerDeviceProperties_MWAI(INT_PTR* args){
    return (INT_PTR)GetPointerDeviceProperties((HANDLE)*(args + 0), (UINT32*)*(args + 1), (POINTER_DEVICE_PROPERTY *)*(args + 2));
}
INT_PTR WINAPI RegisterPointerDeviceNotifications_MWAI(INT_PTR* args){
    return (INT_PTR)RegisterPointerDeviceNotifications((HWND)*(args + 0), (BOOL)*(args + 1));
}
INT_PTR WINAPI GetPointerDeviceRects_MWAI(INT_PTR* args){
    return (INT_PTR)GetPointerDeviceRects((HANDLE)*(args + 0), (RECT*)*(args + 1), (RECT*)*(args + 2));
}
INT_PTR WINAPI GetPointerDeviceCursors_MWAI(INT_PTR* args){
    return (INT_PTR)GetPointerDeviceCursors((HANDLE)*(args + 0), (UINT32*)*(args + 1), (POINTER_DEVICE_CURSOR_INFO *)*(args + 2));
}
INT_PTR WINAPI GetRawPointerDeviceData_MWAI(INT_PTR* args){
    return (INT_PTR)GetRawPointerDeviceData((UINT32)*(args + 0), (UINT32)*(args + 1), (UINT32)*(args + 2), (POINTER_DEVICE_PROPERTY*)*(args + 3), (LONG*)*(args + 4));
}
INT_PTR WINAPI ChangeWindowMessageFilter_MWAI(INT_PTR* args){
    return (INT_PTR)ChangeWindowMessageFilter((UINT)*(args + 0), (DWORD)*(args + 1));
}
INT_PTR WINAPI ChangeWindowMessageFilterEx_MWAI(INT_PTR* args){
    return (INT_PTR)ChangeWindowMessageFilterEx((HWND)*(args + 0), (UINT)*(args + 1), (DWORD)*(args + 2), (PCHANGEFILTERSTRUCT)*(args + 3));
}
INT_PTR WINAPI GetGestureInfo_MWAI(INT_PTR* args){
    return (INT_PTR)GetGestureInfo((HGESTUREINFO)*(args + 0), (PGESTUREINFO)*(args + 1));
}
INT_PTR WINAPI GetGestureExtraArgs_MWAI(INT_PTR* args){
    return (INT_PTR)GetGestureExtraArgs((HGESTUREINFO)*(args + 0), (UINT)*(args + 1), (PBYTE)*(args + 2));
}
INT_PTR WINAPI CloseGestureInfoHandle_MWAI(INT_PTR* args){
    return (INT_PTR)CloseGestureInfoHandle((HGESTUREINFO)*(args + 0));
}
INT_PTR WINAPI SetGestureConfig_MWAI(INT_PTR* args){
    return (INT_PTR)SetGestureConfig((HWND)*(args + 0), (DWORD)*(args + 1), (UINT)*(args + 2), (PGESTURECONFIG)*(args + 3), (UINT)*(args + 4));
}
INT_PTR WINAPI GetGestureConfig_MWAI(INT_PTR* args){
    return (INT_PTR)GetGestureConfig((HWND)*(args + 0), (DWORD)*(args + 1), (DWORD)*(args + 2), (PUINT)*(args + 3), (PGESTURECONFIG)*(args + 4), (UINT)*(args + 5));
}
INT_PTR WINAPI ShutdownBlockReasonCreate_MWAI(INT_PTR* args){
    return (INT_PTR)ShutdownBlockReasonCreate((HWND)*(args + 0), (LPCWSTR)*(args + 1));
}
INT_PTR WINAPI ShutdownBlockReasonQuery_MWAI(INT_PTR* args){
    return (INT_PTR)ShutdownBlockReasonQuery((HWND)*(args + 0), (LPWSTR)*(args + 1), (DWORD *)*(args + 2));
}
INT_PTR WINAPI ShutdownBlockReasonDestroy_MWAI(INT_PTR* args){
    return (INT_PTR)ShutdownBlockReasonDestroy((HWND)*(args + 0));
}
INT_PTR WINAPI GetCurrentInputMessageSource_MWAI(INT_PTR* args){
    return (INT_PTR)GetCurrentInputMessageSource((INPUT_MESSAGE_SOURCE *)*(args + 0));
}
INT_PTR WINAPI GetCIMSSM_MWAI(INT_PTR* args){
    return (INT_PTR)GetCIMSSM((INPUT_MESSAGE_SOURCE *)*(args + 0));
}
INT_PTR WINAPI GetAutoRotationState_MWAI(INT_PTR* args){
    return (INT_PTR)GetAutoRotationState((PAR_STATE)*(args + 0));
}
INT_PTR WINAPI GetDisplayAutoRotationPreferences_MWAI(INT_PTR* args){
    return (INT_PTR)GetDisplayAutoRotationPreferences((ORIENTATION_PREFERENCE *)*(args + 0));
}
INT_PTR WINAPI SetDisplayAutoRotationPreferences_MWAI(INT_PTR* args){
    return (INT_PTR)SetDisplayAutoRotationPreferences((ORIENTATION_PREFERENCE)*(args + 0));
}
INT_PTR WINAPI IsImmersiveProcess_MWAI(INT_PTR* args){
    return (INT_PTR)IsImmersiveProcess((HANDLE)*(args + 0));
}
INT_PTR WINAPI SetProcessRestrictionExemption_MWAI(INT_PTR* args){
    return (INT_PTR)SetProcessRestrictionExemption((BOOL)*(args + 0));
}
INT_PTR WINAPI ConvertToInterceptWindow_MWAI(INT_PTR* args){
    return (INT_PTR)ConvertToInterceptWindow((HWND)*(args + 0));
}
INT_PTR WINAPI IsInterceptWindow_MWAI(INT_PTR* args){
    return (INT_PTR)IsInterceptWindow((HWND)*(args + 0), (BOOL*)*(args + 1));
}
INT_PTR WINAPI ApplyWindowAction_MWAI(INT_PTR* args){
    return (INT_PTR)ApplyWindowAction((HWND)*(args + 0), (WINDOW_ACTION *)*(args + 1));
}
INT_PTR WINAPI SetAdditionalForegroundBoostProcesses_MWAI(INT_PTR* args){
    return (INT_PTR)SetAdditionalForegroundBoostProcesses((HWND)*(args + 0), (DWORD)*(args + 1), (HANDLE *)*(args + 2));
}
INT_PTR WINAPI RegisterForTooltipDismissNotification_MWAI(INT_PTR* args){
    return (INT_PTR)RegisterForTooltipDismissNotification((HWND)*(args + 0), (TOOLTIP_DISMISS_FLAGS)*(args + 1));
}
INT_PTR WINAPI ConvertPrimaryPointerToMouseDrag_MWAI(INT_PTR* args){
    return (INT_PTR)ConvertPrimaryPointerToMouseDrag();
}
INT_PTR WINAPI IsWindowArranged_MWAI(INT_PTR* args){
    return (INT_PTR)IsWindowArranged((HWND)*(args + 0));
}
INT_PTR WINAPI GetCurrentMonitorTopologyId_MWAI(INT_PTR* args){
    return (INT_PTR)GetCurrentMonitorTopologyId();
}
INT_PTR WINAPI RegisterCloakedNotification_MWAI(INT_PTR* args){
    return (INT_PTR)RegisterCloakedNotification((HWND)*(args + 0), (BOOL)*(args + 1));
}
INT_PTR WINAPI GetDateFormatA_MWAI(INT_PTR* args){
    return (INT_PTR)GetDateFormatA((LCID)*(args + 0), (DWORD)*(args + 1), (const SYSTEMTIME*)*(args + 2), (LPCSTR)*(args + 3), (LPSTR)*(args + 4), (int)*(args + 5));
}
INT_PTR WINAPI GetDateFormatW_MWAI(INT_PTR* args){
    return (INT_PTR)GetDateFormatW((LCID)*(args + 0), (DWORD)*(args + 1), (const SYSTEMTIME*)*(args + 2), (LPCWSTR)*(args + 3), (LPWSTR)*(args + 4), (int)*(args + 5));
}
INT_PTR WINAPI GetTimeFormatA_MWAI(INT_PTR* args){
    return (INT_PTR)GetTimeFormatA((LCID)*(args + 0), (DWORD)*(args + 1), (const SYSTEMTIME*)*(args + 2), (LPCSTR)*(args + 3), (LPSTR)*(args + 4), (int)*(args + 5));
}
INT_PTR WINAPI GetTimeFormatW_MWAI(INT_PTR* args){
    return (INT_PTR)GetTimeFormatW((LCID)*(args + 0), (DWORD)*(args + 1), (const SYSTEMTIME*)*(args + 2), (LPCWSTR)*(args + 3), (LPWSTR)*(args + 4), (int)*(args + 5));
}
INT_PTR WINAPI GetTimeFormatEx_MWAI(INT_PTR* args){
    return (INT_PTR)GetTimeFormatEx((LPCWSTR)*(args + 0), (DWORD)*(args + 1), (const SYSTEMTIME*)*(args + 2), (LPCWSTR)*(args + 3), (LPWSTR)*(args + 4), (int)*(args + 5));
}
INT_PTR WINAPI GetDateFormatEx_MWAI(INT_PTR* args){
    return (INT_PTR)GetDateFormatEx((LPCWSTR)*(args + 0), (DWORD)*(args + 1), (const SYSTEMTIME*)*(args + 2), (LPCWSTR)*(args + 3), (LPWSTR)*(args + 4), (int)*(args + 5), (LPCWSTR)*(args + 6));
}
INT_PTR WINAPI GetDurationFormatEx_MWAI(INT_PTR* args){
    return (INT_PTR)GetDurationFormatEx((LPCWSTR)*(args + 0), (DWORD)*(args + 1), (const SYSTEMTIME*)*(args + 2), (ULONGLONG)*(args + 3), (LPCWSTR)*(args + 4), (LPWSTR)*(args + 5), (int)*(args + 6));
}
INT_PTR WINAPI CompareStringEx_MWAI(INT_PTR* args){
    return (INT_PTR)CompareStringEx((LPCWSTR)*(args + 0), (DWORD)*(args + 1), (LPCWCH)*(args + 2), (int)*(args + 3), (LPCWCH)*(args + 4), (int)*(args + 5), (LPNLSVERSIONINFO)*(args + 6), (LPVOID)*(args + 7), (LPARAM)*(args + 8));
}
INT_PTR WINAPI CompareStringOrdinal_MWAI(INT_PTR* args){
    return (INT_PTR)CompareStringOrdinal((LPCWCH)*(args + 0), (int)*(args + 1), (LPCWCH)*(args + 2), (int)*(args + 3), (BOOL)*(args + 4));
}
INT_PTR WINAPI CompareStringW_MWAI(INT_PTR* args){
    return (INT_PTR)CompareStringW((LCID)*(args + 0), (DWORD)*(args + 1), (PCNZWCH)*(args + 2), (int)*(args + 3), (PCNZWCH)*(args + 4), (int)*(args + 5));
}
INT_PTR WINAPI FoldStringW_MWAI(INT_PTR* args){
    return (INT_PTR)FoldStringW((DWORD)*(args + 0), (LPCWCH)*(args + 1), (int)*(args + 2), (LPWSTR)*(args + 3), (int)*(args + 4));
}
INT_PTR WINAPI GetStringTypeExW_MWAI(INT_PTR* args){
    return (INT_PTR)GetStringTypeExW((LCID)*(args + 0), (DWORD)*(args + 1), (LPCWCH)*(args + 2), (int)*(args + 3), (LPWORD)*(args + 4));
}
INT_PTR WINAPI GetStringTypeW_MWAI(INT_PTR* args){
    return (INT_PTR)GetStringTypeW((DWORD)*(args + 0), (LPCWCH)*(args + 1), (int)*(args + 2), (LPWORD)*(args + 3));
}
INT_PTR WINAPI MultiByteToWideChar_MWAI(INT_PTR* args){
    return (INT_PTR)MultiByteToWideChar((UINT)*(args + 0), (DWORD)*(args + 1), (LPCCH)*(args + 2), (int)*(args + 3), (LPWSTR)*(args + 4), (int)*(args + 5));
}
INT_PTR WINAPI WideCharToMultiByte_MWAI(INT_PTR* args){
    return (INT_PTR)WideCharToMultiByte((UINT)*(args + 0), (DWORD)*(args + 1), (LPCWCH)*(args + 2), (int)*(args + 3), (LPSTR)*(args + 4), (int)*(args + 5), (LPCCH)*(args + 6), (LPBOOL)*(args + 7));
}
INT_PTR WINAPI IsValidCodePage_MWAI(INT_PTR* args){
    return (INT_PTR)IsValidCodePage((UINT)*(args + 0));
}
INT_PTR WINAPI GetACP_MWAI(INT_PTR* args){
    return (INT_PTR)GetACP();
}
INT_PTR WINAPI GetOEMCP_MWAI(INT_PTR* args){
    return (INT_PTR)GetOEMCP();
}
INT_PTR WINAPI GetCPInfo_MWAI(INT_PTR* args){
    return (INT_PTR)GetCPInfo((UINT)*(args + 0), (LPCPINFO)*(args + 1));
}
INT_PTR WINAPI GetCPInfoExA_MWAI(INT_PTR* args){
    return (INT_PTR)GetCPInfoExA((UINT)*(args + 0), (DWORD)*(args + 1), (LPCPINFOEXA)*(args + 2));
}
INT_PTR WINAPI GetCPInfoExW_MWAI(INT_PTR* args){
    return (INT_PTR)GetCPInfoExW((UINT)*(args + 0), (DWORD)*(args + 1), (LPCPINFOEXW)*(args + 2));
}
INT_PTR WINAPI CompareStringA_MWAI(INT_PTR* args){
    return (INT_PTR)CompareStringA((LCID)*(args + 0), (DWORD)*(args + 1), (PCNZCH)*(args + 2), (int)*(args + 3), (PCNZCH)*(args + 4), (int)*(args + 5));
}
INT_PTR WINAPI FindNLSString_MWAI(INT_PTR* args){
    return (INT_PTR)FindNLSString((LCID)*(args + 0), (DWORD)*(args + 1), (LPCWSTR)*(args + 2), (int)*(args + 3), (LPCWSTR)*(args + 4), (int)*(args + 5), (LPINT)*(args + 6));
}
INT_PTR WINAPI LCMapStringW_MWAI(INT_PTR* args){
    return (INT_PTR)LCMapStringW((LCID)*(args + 0), (DWORD)*(args + 1), (LPCWSTR)*(args + 2), (int)*(args + 3), (LPWSTR)*(args + 4), (int)*(args + 5));
}
INT_PTR WINAPI LCMapStringA_MWAI(INT_PTR* args){
    return (INT_PTR)LCMapStringA((LCID)*(args + 0), (DWORD)*(args + 1), (LPCSTR)*(args + 2), (int)*(args + 3), (LPSTR)*(args + 4), (int)*(args + 5));
}
INT_PTR WINAPI GetLocaleInfoW_MWAI(INT_PTR* args){
    return (INT_PTR)GetLocaleInfoW((LCID)*(args + 0), (LCTYPE)*(args + 1), (LPWSTR)*(args + 2), (int)*(args + 3));
}
INT_PTR WINAPI GetLocaleInfoA_MWAI(INT_PTR* args){
    return (INT_PTR)GetLocaleInfoA((LCID)*(args + 0), (LCTYPE)*(args + 1), (LPSTR)*(args + 2), (int)*(args + 3));
}
INT_PTR WINAPI SetLocaleInfoA_MWAI(INT_PTR* args){
    return (INT_PTR)SetLocaleInfoA((LCID)*(args + 0), (LCTYPE)*(args + 1), (LPCSTR)*(args + 2));
}
INT_PTR WINAPI SetLocaleInfoW_MWAI(INT_PTR* args){
    return (INT_PTR)SetLocaleInfoW((LCID)*(args + 0), (LCTYPE)*(args + 1), (LPCWSTR)*(args + 2));
}
INT_PTR WINAPI GetCalendarInfoA_MWAI(INT_PTR* args){
    return (INT_PTR)GetCalendarInfoA((LCID)*(args + 0), (CALID)*(args + 1), (CALTYPE)*(args + 2), (LPSTR)*(args + 3), (int)*(args + 4), (LPDWORD)*(args + 5));
}
INT_PTR WINAPI GetCalendarInfoW_MWAI(INT_PTR* args){
    return (INT_PTR)GetCalendarInfoW((LCID)*(args + 0), (CALID)*(args + 1), (CALTYPE)*(args + 2), (LPWSTR)*(args + 3), (int)*(args + 4), (LPDWORD)*(args + 5));
}
INT_PTR WINAPI SetCalendarInfoA_MWAI(INT_PTR* args){
    return (INT_PTR)SetCalendarInfoA((LCID)*(args + 0), (CALID)*(args + 1), (CALTYPE)*(args + 2), (LPCSTR)*(args + 3));
}
INT_PTR WINAPI SetCalendarInfoW_MWAI(INT_PTR* args){
    return (INT_PTR)SetCalendarInfoW((LCID)*(args + 0), (CALID)*(args + 1), (CALTYPE)*(args + 2), (LPCWSTR)*(args + 3));
}
INT_PTR WINAPI IsDBCSLeadByte_MWAI(INT_PTR* args){
    return (INT_PTR)IsDBCSLeadByte((BYTE)*(args + 0));
}
INT_PTR WINAPI IsDBCSLeadByteEx_MWAI(INT_PTR* args){
    return (INT_PTR)IsDBCSLeadByteEx((UINT)*(args + 0), (BYTE)*(args + 1));
}
INT_PTR WINAPI LocaleNameToLCID_MWAI(INT_PTR* args){
    return (INT_PTR)LocaleNameToLCID((LPCWSTR)*(args + 0), (DWORD)*(args + 1));
}
INT_PTR WINAPI LCIDToLocaleName_MWAI(INT_PTR* args){
    return (INT_PTR)LCIDToLocaleName((LCID)*(args + 0), (LPWSTR)*(args + 1), (int)*(args + 2), (DWORD)*(args + 3));
}
INT_PTR WINAPI GetDurationFormat_MWAI(INT_PTR* args){
    return (INT_PTR)GetDurationFormat((LCID)*(args + 0), (DWORD)*(args + 1), (const SYSTEMTIME *)*(args + 2), (ULONGLONG)*(args + 3), (LPCWSTR)*(args + 4), (LPWSTR)*(args + 5), (int)*(args + 6));
}
INT_PTR WINAPI GetNumberFormatA_MWAI(INT_PTR* args){
    return (INT_PTR)GetNumberFormatA((LCID)*(args + 0), (DWORD)*(args + 1), (LPCSTR)*(args + 2), (const NUMBERFMTA *)*(args + 3), (LPSTR)*(args + 4), (int)*(args + 5));
}
INT_PTR WINAPI GetNumberFormatW_MWAI(INT_PTR* args){
    return (INT_PTR)GetNumberFormatW((LCID)*(args + 0), (DWORD)*(args + 1), (LPCWSTR)*(args + 2), (const NUMBERFMTW *)*(args + 3), (LPWSTR)*(args + 4), (int)*(args + 5));
}
INT_PTR WINAPI GetCurrencyFormatA_MWAI(INT_PTR* args){
    return (INT_PTR)GetCurrencyFormatA((LCID)*(args + 0), (DWORD)*(args + 1), (LPCSTR)*(args + 2), (const CURRENCYFMTA *)*(args + 3), (LPSTR)*(args + 4), (int)*(args + 5));
}
INT_PTR WINAPI GetCurrencyFormatW_MWAI(INT_PTR* args){
    return (INT_PTR)GetCurrencyFormatW((LCID)*(args + 0), (DWORD)*(args + 1), (LPCWSTR)*(args + 2), (const CURRENCYFMTW *)*(args + 3), (LPWSTR)*(args + 4), (int)*(args + 5));
}
INT_PTR WINAPI EnumCalendarInfoA_MWAI(INT_PTR* args){
    return (INT_PTR)EnumCalendarInfoA((CALINFO_ENUMPROCA)*(args + 0), (LCID)*(args + 1), (CALID)*(args + 2), (CALTYPE)*(args + 3));
}
INT_PTR WINAPI EnumCalendarInfoW_MWAI(INT_PTR* args){
    return (INT_PTR)EnumCalendarInfoW((CALINFO_ENUMPROCW)*(args + 0), (LCID)*(args + 1), (CALID)*(args + 2), (CALTYPE)*(args + 3));
}
INT_PTR WINAPI EnumCalendarInfoExA_MWAI(INT_PTR* args){
    return (INT_PTR)EnumCalendarInfoExA((CALINFO_ENUMPROCEXA)*(args + 0), (LCID)*(args + 1), (CALID)*(args + 2), (CALTYPE)*(args + 3));
}
INT_PTR WINAPI EnumCalendarInfoExW_MWAI(INT_PTR* args){
    return (INT_PTR)EnumCalendarInfoExW((CALINFO_ENUMPROCEXW)*(args + 0), (LCID)*(args + 1), (CALID)*(args + 2), (CALTYPE)*(args + 3));
}
INT_PTR WINAPI EnumTimeFormatsA_MWAI(INT_PTR* args){
    return (INT_PTR)EnumTimeFormatsA((TIMEFMT_ENUMPROCA)*(args + 0), (LCID)*(args + 1), (DWORD)*(args + 2));
}
INT_PTR WINAPI EnumTimeFormatsW_MWAI(INT_PTR* args){
    return (INT_PTR)EnumTimeFormatsW((TIMEFMT_ENUMPROCW)*(args + 0), (LCID)*(args + 1), (DWORD)*(args + 2));
}
INT_PTR WINAPI EnumDateFormatsA_MWAI(INT_PTR* args){
    return (INT_PTR)EnumDateFormatsA((DATEFMT_ENUMPROCA)*(args + 0), (LCID)*(args + 1), (DWORD)*(args + 2));
}
INT_PTR WINAPI EnumDateFormatsW_MWAI(INT_PTR* args){
    return (INT_PTR)EnumDateFormatsW((DATEFMT_ENUMPROCW)*(args + 0), (LCID)*(args + 1), (DWORD)*(args + 2));
}
INT_PTR WINAPI EnumDateFormatsExA_MWAI(INT_PTR* args){
    return (INT_PTR)EnumDateFormatsExA((DATEFMT_ENUMPROCEXA)*(args + 0), (LCID)*(args + 1), (DWORD)*(args + 2));
}
INT_PTR WINAPI EnumDateFormatsExW_MWAI(INT_PTR* args){
    return (INT_PTR)EnumDateFormatsExW((DATEFMT_ENUMPROCEXW)*(args + 0), (LCID)*(args + 1), (DWORD)*(args + 2));
}
INT_PTR WINAPI IsValidLanguageGroup_MWAI(INT_PTR* args){
    return (INT_PTR)IsValidLanguageGroup((LGRPID)*(args + 0), (DWORD)*(args + 1));
}
INT_PTR WINAPI GetNLSVersion_MWAI(INT_PTR* args){
    return (INT_PTR)GetNLSVersion((NLS_FUNCTION)*(args + 0), (LCID)*(args + 1), (LPNLSVERSIONINFO)*(args + 2));
}
INT_PTR WINAPI IsValidLocale_MWAI(INT_PTR* args){
    return (INT_PTR)IsValidLocale((LCID)*(args + 0), (DWORD)*(args + 1));
}
INT_PTR WINAPI GetGeoInfoA_MWAI(INT_PTR* args){
    return (INT_PTR)GetGeoInfoA((GEOID)*(args + 0), (GEOTYPE)*(args + 1), (LPSTR)*(args + 2), (int)*(args + 3), (LANGID)*(args + 4));
}
INT_PTR WINAPI GetGeoInfoW_MWAI(INT_PTR* args){
    return (INT_PTR)GetGeoInfoW((GEOID)*(args + 0), (GEOTYPE)*(args + 1), (LPWSTR)*(args + 2), (int)*(args + 3), (LANGID)*(args + 4));
}
INT_PTR WINAPI GetGeoInfoEx_MWAI(INT_PTR* args){
    return (INT_PTR)GetGeoInfoEx((PWSTR)*(args + 0), (GEOTYPE)*(args + 1), (PWSTR)*(args + 2), (int)*(args + 3));
}
INT_PTR WINAPI EnumSystemGeoID_MWAI(INT_PTR* args){
    return (INT_PTR)EnumSystemGeoID((GEOCLASS)*(args + 0), (GEOID)*(args + 1), (GEO_ENUMPROC)*(args + 2));
}
INT_PTR WINAPI EnumSystemGeoNames_MWAI(INT_PTR* args){
    return (INT_PTR)EnumSystemGeoNames((GEOCLASS)*(args + 0), (GEO_ENUMNAMEPROC)*(args + 1), (LPARAM)*(args + 2));
}
INT_PTR WINAPI GetUserGeoID_MWAI(INT_PTR* args){
    return (INT_PTR)GetUserGeoID((GEOCLASS)*(args + 0));
}
INT_PTR WINAPI GetUserDefaultGeoName_MWAI(INT_PTR* args){
    return (INT_PTR)GetUserDefaultGeoName((LPWSTR)*(args + 0), (int)*(args + 1));
}
INT_PTR WINAPI SetUserGeoID_MWAI(INT_PTR* args){
    return (INT_PTR)SetUserGeoID((GEOID)*(args + 0));
}
INT_PTR WINAPI SetUserGeoName_MWAI(INT_PTR* args){
    return (INT_PTR)SetUserGeoName((PWSTR)*(args + 0));
}
INT_PTR WINAPI ConvertDefaultLocale_MWAI(INT_PTR* args){
    return (INT_PTR)ConvertDefaultLocale((LCID)*(args + 0));
}
INT_PTR WINAPI GetSystemDefaultUILanguage_MWAI(INT_PTR* args){
    return (INT_PTR)GetSystemDefaultUILanguage();
}
INT_PTR WINAPI GetThreadLocale_MWAI(INT_PTR* args){
    return (INT_PTR)GetThreadLocale();
}
INT_PTR WINAPI SetThreadLocale_MWAI(INT_PTR* args){
    return (INT_PTR)SetThreadLocale((LCID)*(args + 0));
}
INT_PTR WINAPI GetUserDefaultUILanguage_MWAI(INT_PTR* args){
    return (INT_PTR)GetUserDefaultUILanguage();
}
INT_PTR WINAPI GetUserDefaultLangID_MWAI(INT_PTR* args){
    return (INT_PTR)GetUserDefaultLangID();
}
INT_PTR WINAPI GetSystemDefaultLangID_MWAI(INT_PTR* args){
    return (INT_PTR)GetSystemDefaultLangID();
}
INT_PTR WINAPI GetSystemDefaultLCID_MWAI(INT_PTR* args){
    return (INT_PTR)GetSystemDefaultLCID();
}
INT_PTR WINAPI GetUserDefaultLCID_MWAI(INT_PTR* args){
    return (INT_PTR)GetUserDefaultLCID();
}
INT_PTR WINAPI SetThreadUILanguage_MWAI(INT_PTR* args){
    return (INT_PTR)SetThreadUILanguage((LANGID)*(args + 0));
}
INT_PTR WINAPI GetThreadUILanguage_MWAI(INT_PTR* args){
    return (INT_PTR)GetThreadUILanguage();
}
INT_PTR WINAPI GetProcessPreferredUILanguages_MWAI(INT_PTR* args){
    return (INT_PTR)GetProcessPreferredUILanguages((DWORD)*(args + 0), (PULONG)*(args + 1), (PZZWSTR)*(args + 2), (PULONG)*(args + 3));
}
INT_PTR WINAPI SetProcessPreferredUILanguages_MWAI(INT_PTR* args){
    return (INT_PTR)SetProcessPreferredUILanguages((DWORD)*(args + 0), (PCZZWSTR)*(args + 1), (PULONG)*(args + 2));
}
INT_PTR WINAPI GetUserPreferredUILanguages_MWAI(INT_PTR* args){
    return (INT_PTR)GetUserPreferredUILanguages((DWORD)*(args + 0), (PULONG)*(args + 1), (PZZWSTR)*(args + 2), (PULONG)*(args + 3));
}
INT_PTR WINAPI GetSystemPreferredUILanguages_MWAI(INT_PTR* args){
    return (INT_PTR)GetSystemPreferredUILanguages((DWORD)*(args + 0), (PULONG)*(args + 1), (PZZWSTR)*(args + 2), (PULONG)*(args + 3));
}
INT_PTR WINAPI GetThreadPreferredUILanguages_MWAI(INT_PTR* args){
    return (INT_PTR)GetThreadPreferredUILanguages((DWORD)*(args + 0), (PULONG)*(args + 1), (PZZWSTR)*(args + 2), (PULONG)*(args + 3));
}
INT_PTR WINAPI SetThreadPreferredUILanguages_MWAI(INT_PTR* args){
    return (INT_PTR)SetThreadPreferredUILanguages((DWORD)*(args + 0), (PCZZWSTR)*(args + 1), (PULONG)*(args + 2));
}
INT_PTR WINAPI GetFileMUIInfo_MWAI(INT_PTR* args){
    return (INT_PTR)GetFileMUIInfo((DWORD)*(args + 0), (PCWSTR)*(args + 1), (PFILEMUIINFO)*(args + 2), (DWORD*)*(args + 3));
}
INT_PTR WINAPI GetFileMUIPath_MWAI(INT_PTR* args){
    return (INT_PTR)GetFileMUIPath((DWORD)*(args + 0), (PCWSTR)*(args + 1), (PWSTR)*(args + 2), (PULONG)*(args + 3), (PWSTR)*(args + 4), (PULONG)*(args + 5), (PULONGLONG)*(args + 6));
}
INT_PTR WINAPI GetUILanguageInfo_MWAI(INT_PTR* args){
    return (INT_PTR)GetUILanguageInfo((DWORD)*(args + 0), (PCZZWSTR)*(args + 1), (PZZWSTR)*(args + 2), (PDWORD)*(args + 3), (PDWORD)*(args + 4));
}
INT_PTR WINAPI NotifyUILanguageChange_MWAI(INT_PTR* args){
    return (INT_PTR)NotifyUILanguageChange((DWORD)*(args + 0), (PCWSTR)*(args + 1), (PCWSTR)*(args + 2), (DWORD)*(args + 3), (PDWORD)*(args + 4));
}
INT_PTR WINAPI GetStringTypeExA_MWAI(INT_PTR* args){
    return (INT_PTR)GetStringTypeExA((LCID)*(args + 0), (DWORD)*(args + 1), (LPCSTR)*(args + 2), (int)*(args + 3), (LPWORD)*(args + 4));
}
INT_PTR WINAPI GetStringTypeA_MWAI(INT_PTR* args){
    return (INT_PTR)GetStringTypeA((LCID)*(args + 0), (DWORD)*(args + 1), (LPCSTR)*(args + 2), (int)*(args + 3), (LPWORD)*(args + 4));
}
INT_PTR WINAPI FoldStringA_MWAI(INT_PTR* args){
    return (INT_PTR)FoldStringA((DWORD)*(args + 0), (LPCSTR)*(args + 1), (int)*(args + 2), (LPSTR)*(args + 3), (int)*(args + 4));
}
INT_PTR WINAPI EnumSystemLocalesA_MWAI(INT_PTR* args){
    return (INT_PTR)EnumSystemLocalesA((LOCALE_ENUMPROCA)*(args + 0), (DWORD)*(args + 1));
}
INT_PTR WINAPI EnumSystemLocalesW_MWAI(INT_PTR* args){
    return (INT_PTR)EnumSystemLocalesW((LOCALE_ENUMPROCW)*(args + 0), (DWORD)*(args + 1));
}
INT_PTR WINAPI EnumSystemLanguageGroupsA_MWAI(INT_PTR* args){
    return (INT_PTR)EnumSystemLanguageGroupsA((LANGUAGEGROUP_ENUMPROCA)*(args + 0), (DWORD)*(args + 1), (LONG_PTR)*(args + 2));
}
INT_PTR WINAPI EnumSystemLanguageGroupsW_MWAI(INT_PTR* args){
    return (INT_PTR)EnumSystemLanguageGroupsW((LANGUAGEGROUP_ENUMPROCW)*(args + 0), (DWORD)*(args + 1), (LONG_PTR)*(args + 2));
}
INT_PTR WINAPI EnumLanguageGroupLocalesA_MWAI(INT_PTR* args){
    return (INT_PTR)EnumLanguageGroupLocalesA((LANGGROUPLOCALE_ENUMPROCA)*(args + 0), (LGRPID)*(args + 1), (DWORD)*(args + 2), (LONG_PTR)*(args + 3));
}
INT_PTR WINAPI EnumLanguageGroupLocalesW_MWAI(INT_PTR* args){
    return (INT_PTR)EnumLanguageGroupLocalesW((LANGGROUPLOCALE_ENUMPROCW)*(args + 0), (LGRPID)*(args + 1), (DWORD)*(args + 2), (LONG_PTR)*(args + 3));
}
INT_PTR WINAPI EnumUILanguagesA_MWAI(INT_PTR* args){
    return (INT_PTR)EnumUILanguagesA((UILANGUAGE_ENUMPROCA)*(args + 0), (DWORD)*(args + 1), (LONG_PTR)*(args + 2));
}
INT_PTR WINAPI EnumUILanguagesW_MWAI(INT_PTR* args){
    return (INT_PTR)EnumUILanguagesW((UILANGUAGE_ENUMPROCW)*(args + 0), (DWORD)*(args + 1), (LONG_PTR)*(args + 2));
}
INT_PTR WINAPI EnumSystemCodePagesA_MWAI(INT_PTR* args){
    return (INT_PTR)EnumSystemCodePagesA((CODEPAGE_ENUMPROCA)*(args + 0), (DWORD)*(args + 1));
}
INT_PTR WINAPI EnumSystemCodePagesW_MWAI(INT_PTR* args){
    return (INT_PTR)EnumSystemCodePagesW((CODEPAGE_ENUMPROCW)*(args + 0), (DWORD)*(args + 1));
}
INT_PTR WINAPI NormalizeString_MWAI(INT_PTR* args){
    return (INT_PTR)NormalizeString((NORM_FORM)*(args + 0), (LPCWSTR)*(args + 1), (int)*(args + 2), (LPWSTR)*(args + 3), (int)*(args + 4));
}
INT_PTR WINAPI IsNormalizedString_MWAI(INT_PTR* args){
    return (INT_PTR)IsNormalizedString((NORM_FORM)*(args + 0), (LPCWSTR)*(args + 1), (int)*(args + 2));
}
INT_PTR WINAPI VerifyScripts_MWAI(INT_PTR* args){
    return (INT_PTR)VerifyScripts((DWORD)*(args + 0), (LPCWSTR)*(args + 1), (int)*(args + 2), (LPCWSTR)*(args + 3), (int)*(args + 4));
}
INT_PTR WINAPI GetStringScripts_MWAI(INT_PTR* args){
    return (INT_PTR)GetStringScripts((DWORD)*(args + 0), (LPCWSTR)*(args + 1), (int)*(args + 2), (LPWSTR)*(args + 3), (int)*(args + 4));
}
INT_PTR WINAPI GetLocaleInfoEx_MWAI(INT_PTR* args){
    return (INT_PTR)GetLocaleInfoEx((LPCWSTR)*(args + 0), (LCTYPE)*(args + 1), (LPWSTR)*(args + 2), (int)*(args + 3));
}
INT_PTR WINAPI GetCalendarInfoEx_MWAI(INT_PTR* args){
    return (INT_PTR)GetCalendarInfoEx((LPCWSTR)*(args + 0), (CALID)*(args + 1), (LPCWSTR)*(args + 2), (CALTYPE)*(args + 3), (LPWSTR)*(args + 4), (int)*(args + 5), (LPDWORD)*(args + 6));
}
INT_PTR WINAPI GetNumberFormatEx_MWAI(INT_PTR* args){
    return (INT_PTR)GetNumberFormatEx((LPCWSTR)*(args + 0), (DWORD)*(args + 1), (LPCWSTR)*(args + 2), (const NUMBERFMTW *)*(args + 3), (LPWSTR)*(args + 4), (int)*(args + 5));
}
INT_PTR WINAPI GetCurrencyFormatEx_MWAI(INT_PTR* args){
    return (INT_PTR)GetCurrencyFormatEx((LPCWSTR)*(args + 0), (DWORD)*(args + 1), (LPCWSTR)*(args + 2), (const CURRENCYFMTW *)*(args + 3), (LPWSTR)*(args + 4), (int)*(args + 5));
}
INT_PTR WINAPI GetUserDefaultLocaleName_MWAI(INT_PTR* args){
    return (INT_PTR)GetUserDefaultLocaleName((LPWSTR)*(args + 0), (int)*(args + 1));
}
INT_PTR WINAPI GetSystemDefaultLocaleName_MWAI(INT_PTR* args){
    return (INT_PTR)GetSystemDefaultLocaleName((LPWSTR)*(args + 0), (int)*(args + 1));
}
INT_PTR WINAPI IsNLSDefinedString_MWAI(INT_PTR* args){
    return (INT_PTR)IsNLSDefinedString((NLS_FUNCTION)*(args + 0), (DWORD)*(args + 1), (LPNLSVERSIONINFO)*(args + 2), (LPCWSTR)*(args + 3), (INT)*(args + 4));
}
INT_PTR WINAPI GetNLSVersionEx_MWAI(INT_PTR* args){
    return (INT_PTR)GetNLSVersionEx((NLS_FUNCTION)*(args + 0), (LPCWSTR)*(args + 1), (LPNLSVERSIONINFOEX)*(args + 2));
}
INT_PTR WINAPI IsValidNLSVersion_MWAI(INT_PTR* args){
    return (INT_PTR)IsValidNLSVersion((NLS_FUNCTION)*(args + 0), (LPCWSTR)*(args + 1), (LPNLSVERSIONINFOEX)*(args + 2));
}
INT_PTR WINAPI FindNLSStringEx_MWAI(INT_PTR* args){
    return (INT_PTR)FindNLSStringEx((LPCWSTR)*(args + 0), (DWORD)*(args + 1), (LPCWSTR)*(args + 2), (int)*(args + 3), (LPCWSTR)*(args + 4), (int)*(args + 5), (LPINT)*(args + 6), (LPNLSVERSIONINFO)*(args + 7), (LPVOID)*(args + 8), (LPARAM)*(args + 9));
}
INT_PTR WINAPI LCMapStringEx_MWAI(INT_PTR* args){
    return (INT_PTR)LCMapStringEx((LPCWSTR)*(args + 0), (DWORD)*(args + 1), (LPCWSTR)*(args + 2), (int)*(args + 3), (LPWSTR)*(args + 4), (int)*(args + 5), (LPNLSVERSIONINFO)*(args + 6), (LPVOID)*(args + 7), (LPARAM)*(args + 8));
}
INT_PTR WINAPI IsValidLocaleName_MWAI(INT_PTR* args){
    return (INT_PTR)IsValidLocaleName((LPCWSTR)*(args + 0));
}
INT_PTR WINAPI EnumCalendarInfoExEx_MWAI(INT_PTR* args){
    return (INT_PTR)EnumCalendarInfoExEx((CALINFO_ENUMPROCEXEX)*(args + 0), (LPCWSTR)*(args + 1), (CALID)*(args + 2), (LPCWSTR)*(args + 3), (CALTYPE)*(args + 4), (LPARAM)*(args + 5));
}
INT_PTR WINAPI EnumDateFormatsExEx_MWAI(INT_PTR* args){
    return (INT_PTR)EnumDateFormatsExEx((DATEFMT_ENUMPROCEXEX)*(args + 0), (LPCWSTR)*(args + 1), (DWORD)*(args + 2), (LPARAM)*(args + 3));
}
INT_PTR WINAPI EnumTimeFormatsEx_MWAI(INT_PTR* args){
    return (INT_PTR)EnumTimeFormatsEx((TIMEFMT_ENUMPROCEX)*(args + 0), (LPCWSTR)*(args + 1), (DWORD)*(args + 2), (LPARAM)*(args + 3));
}
INT_PTR WINAPI EnumSystemLocalesEx_MWAI(INT_PTR* args){
    return (INT_PTR)EnumSystemLocalesEx((LOCALE_ENUMPROCEX)*(args + 0), (DWORD)*(args + 1), (LPARAM)*(args + 2), (LPVOID)*(args + 3));
}
INT_PTR WINAPI ResolveLocaleName_MWAI(INT_PTR* args){
    return (INT_PTR)ResolveLocaleName((LPCWSTR)*(args + 0), (LPWSTR)*(args + 1), (int)*(args + 2));
}
INT_PTR WINAPI AllocConsole_MWAI(INT_PTR* args){
    return (INT_PTR)AllocConsole();
}
INT_PTR WINAPI AllocConsoleWithOptions_MWAI(INT_PTR* args){
    return (INT_PTR)AllocConsoleWithOptions((PALLOC_CONSOLE_OPTIONS)*(args + 0), (PALLOC_CONSOLE_RESULT)*(args + 1));
}
INT_PTR WINAPI FreeConsole_MWAI(INT_PTR* args){
    return (INT_PTR)FreeConsole();
}
INT_PTR WINAPI AttachConsole_MWAI(INT_PTR* args){
    return (INT_PTR)AttachConsole((DWORD)*(args + 0));
}
INT_PTR WINAPI GetConsoleCP_MWAI(INT_PTR* args){
    return (INT_PTR)GetConsoleCP();
}
INT_PTR WINAPI GetConsoleOutputCP_MWAI(INT_PTR* args){
    return (INT_PTR)GetConsoleOutputCP();
}
INT_PTR WINAPI GetConsoleMode_MWAI(INT_PTR* args){
    return (INT_PTR)GetConsoleMode((HANDLE)*(args + 0), (LPDWORD)*(args + 1));
}
INT_PTR WINAPI SetConsoleMode_MWAI(INT_PTR* args){
    return (INT_PTR)SetConsoleMode((HANDLE)*(args + 0), (DWORD)*(args + 1));
}
INT_PTR WINAPI GetNumberOfConsoleInputEvents_MWAI(INT_PTR* args){
    return (INT_PTR)GetNumberOfConsoleInputEvents((HANDLE)*(args + 0), (LPDWORD)*(args + 1));
}
INT_PTR WINAPI ReadConsoleInputA_MWAI(INT_PTR* args){
    return (INT_PTR)ReadConsoleInputA((HANDLE)*(args + 0), (PINPUT_RECORD)*(args + 1), (DWORD)*(args + 2), (LPDWORD)*(args + 3));
}
INT_PTR WINAPI ReadConsoleInputW_MWAI(INT_PTR* args){
    return (INT_PTR)ReadConsoleInputW((HANDLE)*(args + 0), (PINPUT_RECORD)*(args + 1), (DWORD)*(args + 2), (LPDWORD)*(args + 3));
}
INT_PTR WINAPI PeekConsoleInputA_MWAI(INT_PTR* args){
    return (INT_PTR)PeekConsoleInputA((HANDLE)*(args + 0), (PINPUT_RECORD)*(args + 1), (DWORD)*(args + 2), (LPDWORD)*(args + 3));
}
INT_PTR WINAPI PeekConsoleInputW_MWAI(INT_PTR* args){
    return (INT_PTR)PeekConsoleInputW((HANDLE)*(args + 0), (PINPUT_RECORD)*(args + 1), (DWORD)*(args + 2), (LPDWORD)*(args + 3));
}
INT_PTR WINAPI ReadConsoleA_MWAI(INT_PTR* args){
    return (INT_PTR)ReadConsoleA((HANDLE)*(args + 0), (LPVOID)*(args + 1), (DWORD)*(args + 2), (LPDWORD)*(args + 3), (PCONSOLE_READCONSOLE_CONTROL)*(args + 4));
}
INT_PTR WINAPI ReadConsoleW_MWAI(INT_PTR* args){
    return (INT_PTR)ReadConsoleW((HANDLE)*(args + 0), (LPVOID)*(args + 1), (DWORD)*(args + 2), (LPDWORD)*(args + 3), (PCONSOLE_READCONSOLE_CONTROL)*(args + 4));
}
INT_PTR WINAPI WriteConsoleA_MWAI(INT_PTR* args){
    return (INT_PTR)WriteConsoleA((HANDLE)*(args + 0), (const void*)*(args + 1), (DWORD)*(args + 2), (LPDWORD)*(args + 3), (LPVOID)*(args + 4));
}
INT_PTR WINAPI WriteConsoleW_MWAI(INT_PTR* args){
    return (INT_PTR)WriteConsoleW((HANDLE)*(args + 0), (const void*)*(args + 1), (DWORD)*(args + 2), (LPDWORD)*(args + 3), (LPVOID)*(args + 4));
}
INT_PTR WINAPI SetConsoleCtrlHandler_MWAI(INT_PTR* args){
    return (INT_PTR)SetConsoleCtrlHandler((PHANDLER_ROUTINE)*(args + 0), (BOOL)*(args + 1));
}
INT_PTR WINAPI ClosePseudoConsole_MWAI(INT_PTR* args){
    ClosePseudoConsole((HPCON)*(args + 0));
    return 0;
}
INT_PTR WINAPI ReleasePseudoConsole_MWAI(INT_PTR* args){
    return (INT_PTR)ReleasePseudoConsole((HPCON)*(args + 0));
}
INT_PTR WINAPI GenerateConsoleCtrlEvent_MWAI(INT_PTR* args){
    return (INT_PTR)GenerateConsoleCtrlEvent((DWORD)*(args + 0), (DWORD)*(args + 1));
}
INT_PTR WINAPI CreateConsoleScreenBuffer_MWAI(INT_PTR* args){
    return (INT_PTR)CreateConsoleScreenBuffer((DWORD)*(args + 0), (DWORD)*(args + 1), (const SECURITY_ATTRIBUTES*)*(args + 2), (DWORD)*(args + 3), (LPVOID)*(args + 4));
}
INT_PTR WINAPI SetConsoleActiveScreenBuffer_MWAI(INT_PTR* args){
    return (INT_PTR)SetConsoleActiveScreenBuffer((HANDLE)*(args + 0));
}
INT_PTR WINAPI FlushConsoleInputBuffer_MWAI(INT_PTR* args){
    return (INT_PTR)FlushConsoleInputBuffer((HANDLE)*(args + 0));
}
INT_PTR WINAPI SetConsoleCP_MWAI(INT_PTR* args){
    return (INT_PTR)SetConsoleCP((UINT)*(args + 0));
}
INT_PTR WINAPI SetConsoleOutputCP_MWAI(INT_PTR* args){
    return (INT_PTR)SetConsoleOutputCP((UINT)*(args + 0));
}
INT_PTR WINAPI GetConsoleCursorInfo_MWAI(INT_PTR* args){
    return (INT_PTR)GetConsoleCursorInfo((HANDLE)*(args + 0), (PCONSOLE_CURSOR_INFO)*(args + 1));
}
INT_PTR WINAPI SetConsoleCursorInfo_MWAI(INT_PTR* args){
    return (INT_PTR)SetConsoleCursorInfo((HANDLE)*(args + 0), (const CONSOLE_CURSOR_INFO*)*(args + 1));
}
INT_PTR WINAPI GetConsoleScreenBufferInfo_MWAI(INT_PTR* args){
    return (INT_PTR)GetConsoleScreenBufferInfo((HANDLE)*(args + 0), (PCONSOLE_SCREEN_BUFFER_INFO)*(args + 1));
}
INT_PTR WINAPI GetConsoleScreenBufferInfoEx_MWAI(INT_PTR* args){
    return (INT_PTR)GetConsoleScreenBufferInfoEx((HANDLE)*(args + 0), (PCONSOLE_SCREEN_BUFFER_INFOEX)*(args + 1));
}
INT_PTR WINAPI SetConsoleScreenBufferInfoEx_MWAI(INT_PTR* args){
    return (INT_PTR)SetConsoleScreenBufferInfoEx((HANDLE)*(args + 0), (PCONSOLE_SCREEN_BUFFER_INFOEX)*(args + 1));
}
INT_PTR WINAPI SetConsoleTextAttribute_MWAI(INT_PTR* args){
    return (INT_PTR)SetConsoleTextAttribute((HANDLE)*(args + 0), (WORD)*(args + 1));
}
INT_PTR WINAPI SetConsoleWindowInfo_MWAI(INT_PTR* args){
    return (INT_PTR)SetConsoleWindowInfo((HANDLE)*(args + 0), (BOOL)*(args + 1), (const SMALL_RECT*)*(args + 2));
}
INT_PTR WINAPI WriteConsoleInputA_MWAI(INT_PTR* args){
    return (INT_PTR)WriteConsoleInputA((HANDLE)*(args + 0), (const INPUT_RECORD*)*(args + 1), (DWORD)*(args + 2), (LPDWORD)*(args + 3));
}
INT_PTR WINAPI WriteConsoleInputW_MWAI(INT_PTR* args){
    return (INT_PTR)WriteConsoleInputW((HANDLE)*(args + 0), (const INPUT_RECORD*)*(args + 1), (DWORD)*(args + 2), (LPDWORD)*(args + 3));
}
INT_PTR WINAPI GetConsoleTitleA_MWAI(INT_PTR* args){
    return (INT_PTR)GetConsoleTitleA((LPSTR)*(args + 0), (DWORD)*(args + 1));
}
INT_PTR WINAPI GetConsoleTitleW_MWAI(INT_PTR* args){
    return (INT_PTR)GetConsoleTitleW((LPWSTR)*(args + 0), (DWORD)*(args + 1));
}
INT_PTR WINAPI GetConsoleOriginalTitleA_MWAI(INT_PTR* args){
    return (INT_PTR)GetConsoleOriginalTitleA((LPSTR)*(args + 0), (DWORD)*(args + 1));
}
INT_PTR WINAPI GetConsoleOriginalTitleW_MWAI(INT_PTR* args){
    return (INT_PTR)GetConsoleOriginalTitleW((LPWSTR)*(args + 0), (DWORD)*(args + 1));
}
INT_PTR WINAPI SetConsoleTitleA_MWAI(INT_PTR* args){
    return (INT_PTR)SetConsoleTitleA((LPCSTR)*(args + 0));
}
INT_PTR WINAPI SetConsoleTitleW_MWAI(INT_PTR* args){
    return (INT_PTR)SetConsoleTitleW((LPCWSTR)*(args + 0));
}
INT_PTR WINAPI GetNumberOfConsoleMouseButtons_MWAI(INT_PTR* args){
    return (INT_PTR)GetNumberOfConsoleMouseButtons((LPDWORD)*(args + 0));
}
INT_PTR WINAPI GetCurrentConsoleFont_MWAI(INT_PTR* args){
    return (INT_PTR)GetCurrentConsoleFont((HANDLE)*(args + 0), (BOOL)*(args + 1), (PCONSOLE_FONT_INFO)*(args + 2));
}
INT_PTR WINAPI GetCurrentConsoleFontEx_MWAI(INT_PTR* args){
    return (INT_PTR)GetCurrentConsoleFontEx((HANDLE)*(args + 0), (BOOL)*(args + 1), (PCONSOLE_FONT_INFOEX)*(args + 2));
}
INT_PTR WINAPI SetCurrentConsoleFontEx_MWAI(INT_PTR* args){
    return (INT_PTR)SetCurrentConsoleFontEx((HANDLE)*(args + 0), (BOOL)*(args + 1), (PCONSOLE_FONT_INFOEX)*(args + 2));
}
INT_PTR WINAPI GetConsoleSelectionInfo_MWAI(INT_PTR* args){
    return (INT_PTR)GetConsoleSelectionInfo((PCONSOLE_SELECTION_INFO)*(args + 0));
}
INT_PTR WINAPI GetConsoleHistoryInfo_MWAI(INT_PTR* args){
    return (INT_PTR)GetConsoleHistoryInfo((PCONSOLE_HISTORY_INFO)*(args + 0));
}
INT_PTR WINAPI SetConsoleHistoryInfo_MWAI(INT_PTR* args){
    return (INT_PTR)SetConsoleHistoryInfo((PCONSOLE_HISTORY_INFO)*(args + 0));
}
INT_PTR WINAPI GetConsoleDisplayMode_MWAI(INT_PTR* args){
    return (INT_PTR)GetConsoleDisplayMode((LPDWORD)*(args + 0));
}
INT_PTR WINAPI GetConsoleWindow_MWAI(INT_PTR* args){
    return (INT_PTR)GetConsoleWindow();
}
INT_PTR WINAPI AddConsoleAliasA_MWAI(INT_PTR* args){
    return (INT_PTR)AddConsoleAliasA((LPSTR)*(args + 0), (LPSTR)*(args + 1), (LPSTR)*(args + 2));
}
INT_PTR WINAPI AddConsoleAliasW_MWAI(INT_PTR* args){
    return (INT_PTR)AddConsoleAliasW((LPWSTR)*(args + 0), (LPWSTR)*(args + 1), (LPWSTR)*(args + 2));
}
INT_PTR WINAPI GetConsoleAliasA_MWAI(INT_PTR* args){
    return (INT_PTR)GetConsoleAliasA((LPSTR)*(args + 0), (LPSTR)*(args + 1), (DWORD)*(args + 2), (LPSTR)*(args + 3));
}
INT_PTR WINAPI GetConsoleAliasW_MWAI(INT_PTR* args){
    return (INT_PTR)GetConsoleAliasW((LPWSTR)*(args + 0), (LPWSTR)*(args + 1), (DWORD)*(args + 2), (LPWSTR)*(args + 3));
}
INT_PTR WINAPI GetConsoleAliasesLengthA_MWAI(INT_PTR* args){
    return (INT_PTR)GetConsoleAliasesLengthA((LPSTR)*(args + 0));
}
INT_PTR WINAPI GetConsoleAliasesLengthW_MWAI(INT_PTR* args){
    return (INT_PTR)GetConsoleAliasesLengthW((LPWSTR)*(args + 0));
}
INT_PTR WINAPI GetConsoleAliasExesLengthA_MWAI(INT_PTR* args){
    return (INT_PTR)GetConsoleAliasExesLengthA();
}
INT_PTR WINAPI GetConsoleAliasExesLengthW_MWAI(INT_PTR* args){
    return (INT_PTR)GetConsoleAliasExesLengthW();
}
INT_PTR WINAPI GetConsoleAliasesA_MWAI(INT_PTR* args){
    return (INT_PTR)GetConsoleAliasesA((LPSTR)*(args + 0), (DWORD)*(args + 1), (LPSTR)*(args + 2));
}
INT_PTR WINAPI GetConsoleAliasesW_MWAI(INT_PTR* args){
    return (INT_PTR)GetConsoleAliasesW((LPWSTR)*(args + 0), (DWORD)*(args + 1), (LPWSTR)*(args + 2));
}
INT_PTR WINAPI GetConsoleAliasExesA_MWAI(INT_PTR* args){
    return (INT_PTR)GetConsoleAliasExesA((LPSTR)*(args + 0), (DWORD)*(args + 1));
}
INT_PTR WINAPI GetConsoleAliasExesW_MWAI(INT_PTR* args){
    return (INT_PTR)GetConsoleAliasExesW((LPWSTR)*(args + 0), (DWORD)*(args + 1));
}
INT_PTR WINAPI GetConsoleProcessList_MWAI(INT_PTR* args){
    return (INT_PTR)GetConsoleProcessList((LPDWORD)*(args + 0), (DWORD)*(args + 1));
}
INT_PTR WINAPI VerLanguageNameA_MWAI(INT_PTR* args){
    return (INT_PTR)VerLanguageNameA((DWORD)*(args + 0), (LPSTR)*(args + 1), (DWORD)*(args + 2));
}
INT_PTR WINAPI VerLanguageNameW_MWAI(INT_PTR* args){
    return (INT_PTR)VerLanguageNameW((DWORD)*(args + 0), (LPWSTR)*(args + 1), (DWORD)*(args + 2));
}
INT_PTR WINAPI RegCloseKey_MWAI(INT_PTR* args){
    return (INT_PTR)RegCloseKey((HKEY)*(args + 0));
}
INT_PTR WINAPI RegOverridePredefKey_MWAI(INT_PTR* args){
    return (INT_PTR)RegOverridePredefKey((HKEY)*(args + 0), (HKEY)*(args + 1));
}
INT_PTR WINAPI RegOpenUserClassesRoot_MWAI(INT_PTR* args){
    return (INT_PTR)RegOpenUserClassesRoot((HANDLE)*(args + 0), (DWORD)*(args + 1), (REGSAM)*(args + 2), (PHKEY)*(args + 3));
}
INT_PTR WINAPI RegOpenCurrentUser_MWAI(INT_PTR* args){
    return (INT_PTR)RegOpenCurrentUser((REGSAM)*(args + 0), (PHKEY)*(args + 1));
}
INT_PTR WINAPI RegDisablePredefinedCache_MWAI(INT_PTR* args){
    return (INT_PTR)RegDisablePredefinedCache();
}
INT_PTR WINAPI RegDisablePredefinedCacheEx_MWAI(INT_PTR* args){
    return (INT_PTR)RegDisablePredefinedCacheEx();
}
INT_PTR WINAPI RegConnectRegistryA_MWAI(INT_PTR* args){
    return (INT_PTR)RegConnectRegistryA((LPCSTR)*(args + 0), (HKEY)*(args + 1), (PHKEY)*(args + 2));
}
INT_PTR WINAPI RegConnectRegistryW_MWAI(INT_PTR* args){
    return (INT_PTR)RegConnectRegistryW((LPCWSTR)*(args + 0), (HKEY)*(args + 1), (PHKEY)*(args + 2));
}
INT_PTR WINAPI RegConnectRegistryExA_MWAI(INT_PTR* args){
    return (INT_PTR)RegConnectRegistryExA((LPCSTR)*(args + 0), (HKEY)*(args + 1), (ULONG)*(args + 2), (PHKEY)*(args + 3));
}
INT_PTR WINAPI RegConnectRegistryExW_MWAI(INT_PTR* args){
    return (INT_PTR)RegConnectRegistryExW((LPCWSTR)*(args + 0), (HKEY)*(args + 1), (ULONG)*(args + 2), (PHKEY)*(args + 3));
}
INT_PTR WINAPI RegCreateKeyA_MWAI(INT_PTR* args){
    return (INT_PTR)RegCreateKeyA((HKEY)*(args + 0), (LPCSTR)*(args + 1), (PHKEY)*(args + 2));
}
INT_PTR WINAPI RegCreateKeyW_MWAI(INT_PTR* args){
    return (INT_PTR)RegCreateKeyW((HKEY)*(args + 0), (LPCWSTR)*(args + 1), (PHKEY)*(args + 2));
}
INT_PTR WINAPI RegCreateKeyExA_MWAI(INT_PTR* args){
    return (INT_PTR)RegCreateKeyExA((HKEY)*(args + 0), (LPCSTR)*(args + 1), (DWORD)*(args + 2), (LPSTR)*(args + 3), (DWORD)*(args + 4), (REGSAM)*(args + 5), (const LPSECURITY_ATTRIBUTES)*(args + 6), (PHKEY)*(args + 7), (LPDWORD)*(args + 8));
}
INT_PTR WINAPI RegCreateKeyExW_MWAI(INT_PTR* args){
    return (INT_PTR)RegCreateKeyExW((HKEY)*(args + 0), (LPCWSTR)*(args + 1), (DWORD)*(args + 2), (LPWSTR)*(args + 3), (DWORD)*(args + 4), (REGSAM)*(args + 5), (const LPSECURITY_ATTRIBUTES)*(args + 6), (PHKEY)*(args + 7), (LPDWORD)*(args + 8));
}
INT_PTR WINAPI RegCreateKeyTransactedA_MWAI(INT_PTR* args){
    return (INT_PTR)RegCreateKeyTransactedA((HKEY)*(args + 0), (LPCSTR)*(args + 1), (DWORD)*(args + 2), (LPSTR)*(args + 3), (DWORD)*(args + 4), (REGSAM)*(args + 5), (const LPSECURITY_ATTRIBUTES)*(args + 6), (PHKEY)*(args + 7), (LPDWORD)*(args + 8), (HANDLE)*(args + 9), (PVOID)*(args + 10));
}
INT_PTR WINAPI RegCreateKeyTransactedW_MWAI(INT_PTR* args){
    return (INT_PTR)RegCreateKeyTransactedW((HKEY)*(args + 0), (LPCWSTR)*(args + 1), (DWORD)*(args + 2), (LPWSTR)*(args + 3), (DWORD)*(args + 4), (REGSAM)*(args + 5), (const LPSECURITY_ATTRIBUTES)*(args + 6), (PHKEY)*(args + 7), (LPDWORD)*(args + 8), (HANDLE)*(args + 9), (PVOID)*(args + 10));
}
INT_PTR WINAPI RegDeleteKeyA_MWAI(INT_PTR* args){
    return (INT_PTR)RegDeleteKeyA((HKEY)*(args + 0), (LPCSTR)*(args + 1));
}
INT_PTR WINAPI RegDeleteKeyW_MWAI(INT_PTR* args){
    return (INT_PTR)RegDeleteKeyW((HKEY)*(args + 0), (LPCWSTR)*(args + 1));
}
INT_PTR WINAPI RegDeleteKeyExA_MWAI(INT_PTR* args){
    return (INT_PTR)RegDeleteKeyExA((HKEY)*(args + 0), (LPCSTR)*(args + 1), (REGSAM)*(args + 2), (DWORD)*(args + 3));
}
INT_PTR WINAPI RegDeleteKeyExW_MWAI(INT_PTR* args){
    return (INT_PTR)RegDeleteKeyExW((HKEY)*(args + 0), (LPCWSTR)*(args + 1), (REGSAM)*(args + 2), (DWORD)*(args + 3));
}
INT_PTR WINAPI RegDeleteKeyTransactedA_MWAI(INT_PTR* args){
    return (INT_PTR)RegDeleteKeyTransactedA((HKEY)*(args + 0), (LPCSTR)*(args + 1), (REGSAM)*(args + 2), (DWORD)*(args + 3), (HANDLE)*(args + 4), (PVOID)*(args + 5));
}
INT_PTR WINAPI RegDeleteKeyTransactedW_MWAI(INT_PTR* args){
    return (INT_PTR)RegDeleteKeyTransactedW((HKEY)*(args + 0), (LPCWSTR)*(args + 1), (REGSAM)*(args + 2), (DWORD)*(args + 3), (HANDLE)*(args + 4), (PVOID)*(args + 5));
}
INT_PTR WINAPI RegDisableReflectionKey_MWAI(INT_PTR* args){
    return (INT_PTR)RegDisableReflectionKey((HKEY)*(args + 0));
}
INT_PTR WINAPI RegEnableReflectionKey_MWAI(INT_PTR* args){
    return (INT_PTR)RegEnableReflectionKey((HKEY)*(args + 0));
}
INT_PTR WINAPI RegQueryReflectionKey_MWAI(INT_PTR* args){
    return (INT_PTR)RegQueryReflectionKey((HKEY)*(args + 0), (BOOL *)*(args + 1));
}
INT_PTR WINAPI RegDeleteValueA_MWAI(INT_PTR* args){
    return (INT_PTR)RegDeleteValueA((HKEY)*(args + 0), (LPCSTR)*(args + 1));
}
INT_PTR WINAPI RegDeleteValueW_MWAI(INT_PTR* args){
    return (INT_PTR)RegDeleteValueW((HKEY)*(args + 0), (LPCWSTR)*(args + 1));
}
INT_PTR WINAPI RegEnumKeyA_MWAI(INT_PTR* args){
    return (INT_PTR)RegEnumKeyA((HKEY)*(args + 0), (DWORD)*(args + 1), (LPSTR)*(args + 2), (DWORD)*(args + 3));
}
INT_PTR WINAPI RegEnumKeyW_MWAI(INT_PTR* args){
    return (INT_PTR)RegEnumKeyW((HKEY)*(args + 0), (DWORD)*(args + 1), (LPWSTR)*(args + 2), (DWORD)*(args + 3));
}
INT_PTR WINAPI RegEnumValueA_MWAI(INT_PTR* args){
    return (INT_PTR)RegEnumValueA((HKEY)*(args + 0), (DWORD)*(args + 1), (LPSTR)*(args + 2), (LPDWORD)*(args + 3), (LPDWORD)*(args + 4), (LPDWORD)*(args + 5), (LPBYTE)*(args + 6), (LPDWORD)*(args + 7));
}
INT_PTR WINAPI RegEnumValueW_MWAI(INT_PTR* args){
    return (INT_PTR)RegEnumValueW((HKEY)*(args + 0), (DWORD)*(args + 1), (LPWSTR)*(args + 2), (LPDWORD)*(args + 3), (LPDWORD)*(args + 4), (LPDWORD)*(args + 5), (LPBYTE)*(args + 6), (LPDWORD)*(args + 7));
}
INT_PTR WINAPI RegFlushKey_MWAI(INT_PTR* args){
    return (INT_PTR)RegFlushKey((HKEY)*(args + 0));
}
INT_PTR WINAPI RegGetKeySecurity_MWAI(INT_PTR* args){
    return (INT_PTR)RegGetKeySecurity((HKEY)*(args + 0), (SECURITY_INFORMATION)*(args + 1), (PSECURITY_DESCRIPTOR)*(args + 2), (LPDWORD)*(args + 3));
}
INT_PTR WINAPI RegLoadKeyA_MWAI(INT_PTR* args){
    return (INT_PTR)RegLoadKeyA((HKEY)*(args + 0), (LPCSTR)*(args + 1), (LPCSTR)*(args + 2));
}
INT_PTR WINAPI RegLoadKeyW_MWAI(INT_PTR* args){
    return (INT_PTR)RegLoadKeyW((HKEY)*(args + 0), (LPCWSTR)*(args + 1), (LPCWSTR)*(args + 2));
}
INT_PTR WINAPI RegNotifyChangeKeyValue_MWAI(INT_PTR* args){
    return (INT_PTR)RegNotifyChangeKeyValue((HKEY)*(args + 0), (BOOL)*(args + 1), (DWORD)*(args + 2), (HANDLE)*(args + 3), (BOOL)*(args + 4));
}
INT_PTR WINAPI RegOpenKeyA_MWAI(INT_PTR* args){
    return (INT_PTR)RegOpenKeyA((HKEY)*(args + 0), (LPCSTR)*(args + 1), (PHKEY)*(args + 2));
}
INT_PTR WINAPI RegOpenKeyW_MWAI(INT_PTR* args){
    return (INT_PTR)RegOpenKeyW((HKEY)*(args + 0), (LPCWSTR)*(args + 1), (PHKEY)*(args + 2));
}
INT_PTR WINAPI RegOpenKeyExA_MWAI(INT_PTR* args){
    return (INT_PTR)RegOpenKeyExA((HKEY)*(args + 0), (LPCSTR)*(args + 1), (DWORD)*(args + 2), (REGSAM)*(args + 3), (PHKEY)*(args + 4));
}
INT_PTR WINAPI RegOpenKeyExW_MWAI(INT_PTR* args){
    return (INT_PTR)RegOpenKeyExW((HKEY)*(args + 0), (LPCWSTR)*(args + 1), (DWORD)*(args + 2), (REGSAM)*(args + 3), (PHKEY)*(args + 4));
}
INT_PTR WINAPI RegOpenKeyTransactedA_MWAI(INT_PTR* args){
    return (INT_PTR)RegOpenKeyTransactedA((HKEY)*(args + 0), (LPCSTR)*(args + 1), (DWORD)*(args + 2), (REGSAM)*(args + 3), (PHKEY)*(args + 4), (HANDLE)*(args + 5), (PVOID)*(args + 6));
}
INT_PTR WINAPI RegOpenKeyTransactedW_MWAI(INT_PTR* args){
    return (INT_PTR)RegOpenKeyTransactedW((HKEY)*(args + 0), (LPCWSTR)*(args + 1), (DWORD)*(args + 2), (REGSAM)*(args + 3), (PHKEY)*(args + 4), (HANDLE)*(args + 5), (PVOID)*(args + 6));
}
INT_PTR WINAPI RegQueryValueA_MWAI(INT_PTR* args){
    return (INT_PTR)RegQueryValueA((HKEY)*(args + 0), (LPCSTR)*(args + 1), (LPSTR)*(args + 2), (PLONG)*(args + 3));
}
INT_PTR WINAPI RegQueryValueW_MWAI(INT_PTR* args){
    return (INT_PTR)RegQueryValueW((HKEY)*(args + 0), (LPCWSTR)*(args + 1), (LPWSTR)*(args + 2), (PLONG)*(args + 3));
}
INT_PTR WINAPI RegQueryMultipleValuesA_MWAI(INT_PTR* args){
    return (INT_PTR)RegQueryMultipleValuesA((HKEY)*(args + 0), (PVALENTA)*(args + 1), (DWORD)*(args + 2), (LPSTR)*(args + 3), (LPDWORD)*(args + 4));
}
INT_PTR WINAPI RegQueryMultipleValuesW_MWAI(INT_PTR* args){
    return (INT_PTR)RegQueryMultipleValuesW((HKEY)*(args + 0), (PVALENTW)*(args + 1), (DWORD)*(args + 2), (LPWSTR)*(args + 3), (LPDWORD)*(args + 4));
}
INT_PTR WINAPI RegQueryValueExA_MWAI(INT_PTR* args){
    return (INT_PTR)RegQueryValueExA((HKEY)*(args + 0), (LPCSTR)*(args + 1), (LPDWORD)*(args + 2), (LPDWORD)*(args + 3), (LPBYTE)*(args + 4), (LPDWORD)*(args + 5));
}
INT_PTR WINAPI RegQueryValueExW_MWAI(INT_PTR* args){
    return (INT_PTR)RegQueryValueExW((HKEY)*(args + 0), (LPCWSTR)*(args + 1), (LPDWORD)*(args + 2), (LPDWORD)*(args + 3), (LPBYTE)*(args + 4), (LPDWORD)*(args + 5));
}
INT_PTR WINAPI RegReplaceKeyA_MWAI(INT_PTR* args){
    return (INT_PTR)RegReplaceKeyA((HKEY)*(args + 0), (LPCSTR)*(args + 1), (LPCSTR)*(args + 2), (LPCSTR)*(args + 3));
}
INT_PTR WINAPI RegReplaceKeyW_MWAI(INT_PTR* args){
    return (INT_PTR)RegReplaceKeyW((HKEY)*(args + 0), (LPCWSTR)*(args + 1), (LPCWSTR)*(args + 2), (LPCWSTR)*(args + 3));
}
INT_PTR WINAPI RegRestoreKeyA_MWAI(INT_PTR* args){
    return (INT_PTR)RegRestoreKeyA((HKEY)*(args + 0), (LPCSTR)*(args + 1), (DWORD)*(args + 2));
}
INT_PTR WINAPI RegRestoreKeyW_MWAI(INT_PTR* args){
    return (INT_PTR)RegRestoreKeyW((HKEY)*(args + 0), (LPCWSTR)*(args + 1), (DWORD)*(args + 2));
}
INT_PTR WINAPI RegRenameKey_MWAI(INT_PTR* args){
    return (INT_PTR)RegRenameKey((HKEY)*(args + 0), (LPCWSTR)*(args + 1), (LPCWSTR)*(args + 2));
}
INT_PTR WINAPI RegSaveKeyA_MWAI(INT_PTR* args){
    return (INT_PTR)RegSaveKeyA((HKEY)*(args + 0), (LPCSTR)*(args + 1), (const LPSECURITY_ATTRIBUTES)*(args + 2));
}
INT_PTR WINAPI RegSaveKeyW_MWAI(INT_PTR* args){
    return (INT_PTR)RegSaveKeyW((HKEY)*(args + 0), (LPCWSTR)*(args + 1), (const LPSECURITY_ATTRIBUTES)*(args + 2));
}
INT_PTR WINAPI RegSetKeySecurity_MWAI(INT_PTR* args){
    return (INT_PTR)RegSetKeySecurity((HKEY)*(args + 0), (SECURITY_INFORMATION)*(args + 1), (PSECURITY_DESCRIPTOR)*(args + 2));
}
INT_PTR WINAPI RegSetValueA_MWAI(INT_PTR* args){
    return (INT_PTR)RegSetValueA((HKEY)*(args + 0), (LPCSTR)*(args + 1), (DWORD)*(args + 2), (LPCSTR)*(args + 3), (DWORD)*(args + 4));
}
INT_PTR WINAPI RegSetValueW_MWAI(INT_PTR* args){
    return (INT_PTR)RegSetValueW((HKEY)*(args + 0), (LPCWSTR)*(args + 1), (DWORD)*(args + 2), (LPCWSTR)*(args + 3), (DWORD)*(args + 4));
}
INT_PTR WINAPI RegSetValueExA_MWAI(INT_PTR* args){
    return (INT_PTR)RegSetValueExA((HKEY)*(args + 0), (LPCSTR)*(args + 1), (DWORD)*(args + 2), (DWORD)*(args + 3), (const BYTE*)*(args + 4), (DWORD)*(args + 5));
}
INT_PTR WINAPI RegSetValueExW_MWAI(INT_PTR* args){
    return (INT_PTR)RegSetValueExW((HKEY)*(args + 0), (LPCWSTR)*(args + 1), (DWORD)*(args + 2), (DWORD)*(args + 3), (const BYTE*)*(args + 4), (DWORD)*(args + 5));
}
INT_PTR WINAPI RegUnLoadKeyA_MWAI(INT_PTR* args){
    return (INT_PTR)RegUnLoadKeyA((HKEY)*(args + 0), (LPCSTR)*(args + 1));
}
INT_PTR WINAPI RegUnLoadKeyW_MWAI(INT_PTR* args){
    return (INT_PTR)RegUnLoadKeyW((HKEY)*(args + 0), (LPCWSTR)*(args + 1));
}
INT_PTR WINAPI RegDeleteKeyValueA_MWAI(INT_PTR* args){
    return (INT_PTR)RegDeleteKeyValueA((HKEY)*(args + 0), (LPCSTR)*(args + 1), (LPCSTR)*(args + 2));
}
INT_PTR WINAPI RegDeleteKeyValueW_MWAI(INT_PTR* args){
    return (INT_PTR)RegDeleteKeyValueW((HKEY)*(args + 0), (LPCWSTR)*(args + 1), (LPCWSTR)*(args + 2));
}
INT_PTR WINAPI RegSetKeyValueA_MWAI(INT_PTR* args){
    return (INT_PTR)RegSetKeyValueA((HKEY)*(args + 0), (LPCSTR)*(args + 1), (LPCSTR)*(args + 2), (DWORD)*(args + 3), (LPCVOID)*(args + 4), (DWORD)*(args + 5));
}
INT_PTR WINAPI RegSetKeyValueW_MWAI(INT_PTR* args){
    return (INT_PTR)RegSetKeyValueW((HKEY)*(args + 0), (LPCWSTR)*(args + 1), (LPCWSTR)*(args + 2), (DWORD)*(args + 3), (LPCVOID)*(args + 4), (DWORD)*(args + 5));
}
INT_PTR WINAPI RegDeleteTreeA_MWAI(INT_PTR* args){
    return (INT_PTR)RegDeleteTreeA((HKEY)*(args + 0), (LPCSTR)*(args + 1));
}
INT_PTR WINAPI RegDeleteTreeW_MWAI(INT_PTR* args){
    return (INT_PTR)RegDeleteTreeW((HKEY)*(args + 0), (LPCWSTR)*(args + 1));
}
INT_PTR WINAPI RegCopyTreeA_MWAI(INT_PTR* args){
    return (INT_PTR)RegCopyTreeA((HKEY)*(args + 0), (LPCSTR)*(args + 1), (HKEY)*(args + 2));
}
INT_PTR WINAPI RegGetValueA_MWAI(INT_PTR* args){
    return (INT_PTR)RegGetValueA((HKEY)*(args + 0), (LPCSTR)*(args + 1), (LPCSTR)*(args + 2), (DWORD)*(args + 3), (LPDWORD)*(args + 4), (PVOID)*(args + 5), (LPDWORD)*(args + 6));
}
INT_PTR WINAPI RegGetValueW_MWAI(INT_PTR* args){
    return (INT_PTR)RegGetValueW((HKEY)*(args + 0), (LPCWSTR)*(args + 1), (LPCWSTR)*(args + 2), (DWORD)*(args + 3), (LPDWORD)*(args + 4), (PVOID)*(args + 5), (LPDWORD)*(args + 6));
}
INT_PTR WINAPI RegCopyTreeW_MWAI(INT_PTR* args){
    return (INT_PTR)RegCopyTreeW((HKEY)*(args + 0), (LPCWSTR)*(args + 1), (HKEY)*(args + 2));
}
INT_PTR WINAPI RegLoadMUIStringA_MWAI(INT_PTR* args){
    return (INT_PTR)RegLoadMUIStringA((HKEY)*(args + 0), (LPCSTR)*(args + 1), (LPSTR)*(args + 2), (DWORD)*(args + 3), (LPDWORD)*(args + 4), (DWORD)*(args + 5), (LPCSTR)*(args + 6));
}
INT_PTR WINAPI RegLoadMUIStringW_MWAI(INT_PTR* args){
    return (INT_PTR)RegLoadMUIStringW((HKEY)*(args + 0), (LPCWSTR)*(args + 1), (LPWSTR)*(args + 2), (DWORD)*(args + 3), (LPDWORD)*(args + 4), (DWORD)*(args + 5), (LPCWSTR)*(args + 6));
}
INT_PTR WINAPI RegLoadAppKeyA_MWAI(INT_PTR* args){
    return (INT_PTR)RegLoadAppKeyA((LPCSTR)*(args + 0), (PHKEY)*(args + 1), (REGSAM)*(args + 2), (DWORD)*(args + 3), (DWORD)*(args + 4));
}
INT_PTR WINAPI RegLoadAppKeyW_MWAI(INT_PTR* args){
    return (INT_PTR)RegLoadAppKeyW((LPCWSTR)*(args + 0), (PHKEY)*(args + 1), (REGSAM)*(args + 2), (DWORD)*(args + 3), (DWORD)*(args + 4));
}
INT_PTR WINAPI InitiateSystemShutdownA_MWAI(INT_PTR* args){
    return (INT_PTR)InitiateSystemShutdownA((LPSTR)*(args + 0), (LPSTR)*(args + 1), (DWORD)*(args + 2), (BOOL)*(args + 3), (BOOL)*(args + 4));
}
INT_PTR WINAPI InitiateSystemShutdownW_MWAI(INT_PTR* args){
    return (INT_PTR)InitiateSystemShutdownW((LPWSTR)*(args + 0), (LPWSTR)*(args + 1), (DWORD)*(args + 2), (BOOL)*(args + 3), (BOOL)*(args + 4));
}
INT_PTR WINAPI AbortSystemShutdownA_MWAI(INT_PTR* args){
    return (INT_PTR)AbortSystemShutdownA((LPSTR)*(args + 0));
}
INT_PTR WINAPI AbortSystemShutdownW_MWAI(INT_PTR* args){
    return (INT_PTR)AbortSystemShutdownW((LPWSTR)*(args + 0));
}
INT_PTR WINAPI InitiateSystemShutdownExA_MWAI(INT_PTR* args){
    return (INT_PTR)InitiateSystemShutdownExA((LPSTR)*(args + 0), (LPSTR)*(args + 1), (DWORD)*(args + 2), (BOOL)*(args + 3), (BOOL)*(args + 4), (DWORD)*(args + 5));
}
INT_PTR WINAPI InitiateSystemShutdownExW_MWAI(INT_PTR* args){
    return (INT_PTR)InitiateSystemShutdownExW((LPWSTR)*(args + 0), (LPWSTR)*(args + 1), (DWORD)*(args + 2), (BOOL)*(args + 3), (BOOL)*(args + 4), (DWORD)*(args + 5));
}
INT_PTR WINAPI InitiateShutdownA_MWAI(INT_PTR* args){
    return (INT_PTR)InitiateShutdownA((LPSTR)*(args + 0), (LPSTR)*(args + 1), (DWORD)*(args + 2), (DWORD)*(args + 3), (DWORD)*(args + 4));
}
INT_PTR WINAPI InitiateShutdownW_MWAI(INT_PTR* args){
    return (INT_PTR)InitiateShutdownW((LPWSTR)*(args + 0), (LPWSTR)*(args + 1), (DWORD)*(args + 2), (DWORD)*(args + 3), (DWORD)*(args + 4));
}
INT_PTR WINAPI CheckForHiberboot_MWAI(INT_PTR* args){
    return (INT_PTR)CheckForHiberboot((PBOOLEAN)*(args + 0), (BOOLEAN)*(args + 1));
}
INT_PTR WINAPI RegSaveKeyExA_MWAI(INT_PTR* args){
    return (INT_PTR)RegSaveKeyExA((HKEY)*(args + 0), (LPCSTR)*(args + 1), (const LPSECURITY_ATTRIBUTES)*(args + 2), (DWORD)*(args + 3));
}
INT_PTR WINAPI RegSaveKeyExW_MWAI(INT_PTR* args){
    return (INT_PTR)RegSaveKeyExW((HKEY)*(args + 0), (LPCWSTR)*(args + 1), (const LPSECURITY_ATTRIBUTES)*(args + 2), (DWORD)*(args + 3));
}
INT_PTR WINAPI DdeSetQualityOfService_MWAI(INT_PTR* args){
    return (INT_PTR)DdeSetQualityOfService((HWND)*(args + 0), (const SECURITY_QUALITY_OF_SERVICE *)*(args + 1), (PSECURITY_QUALITY_OF_SERVICE)*(args + 2));
}
INT_PTR WINAPI ImpersonateDdeClientWindow_MWAI(INT_PTR* args){
    return (INT_PTR)ImpersonateDdeClientWindow((HWND)*(args + 0), (HWND)*(args + 1));
}
INT_PTR WINAPI PackDDElParam_MWAI(INT_PTR* args){
    return (INT_PTR)PackDDElParam((UINT)*(args + 0), (UINT_PTR)*(args + 1), (UINT_PTR)*(args + 2));
}
INT_PTR WINAPI UnpackDDElParam_MWAI(INT_PTR* args){
    return (INT_PTR)UnpackDDElParam((UINT)*(args + 0), (LPARAM)*(args + 1), (PUINT_PTR)*(args + 2), (PUINT_PTR)*(args + 3));
}
INT_PTR WINAPI FreeDDElParam_MWAI(INT_PTR* args){
    return (INT_PTR)FreeDDElParam((UINT)*(args + 0), (LPARAM)*(args + 1));
}
INT_PTR WINAPI ReuseDDElParam_MWAI(INT_PTR* args){
    return (INT_PTR)ReuseDDElParam((LPARAM)*(args + 0), (UINT)*(args + 1), (UINT)*(args + 2), (UINT_PTR)*(args + 3), (UINT_PTR)*(args + 4));
}
INT_PTR WINAPI DdeInitializeA_MWAI(INT_PTR* args){
    return (INT_PTR)DdeInitializeA((LPDWORD)*(args + 0), (PFNCALLBACK)*(args + 1), (DWORD)*(args + 2), (DWORD)*(args + 3));
}
INT_PTR WINAPI DdeInitializeW_MWAI(INT_PTR* args){
    return (INT_PTR)DdeInitializeW((LPDWORD)*(args + 0), (PFNCALLBACK)*(args + 1), (DWORD)*(args + 2), (DWORD)*(args + 3));
}
INT_PTR WINAPI DdeUninitialize_MWAI(INT_PTR* args){
    return (INT_PTR)DdeUninitialize((DWORD)*(args + 0));
}
INT_PTR WINAPI DdeQueryNextServer_MWAI(INT_PTR* args){
    return (INT_PTR)DdeQueryNextServer((HCONVLIST)*(args + 0), (HCONV)*(args + 1));
}
INT_PTR WINAPI DdeDisconnectList_MWAI(INT_PTR* args){
    return (INT_PTR)DdeDisconnectList((HCONVLIST)*(args + 0));
}
INT_PTR WINAPI DdeDisconnect_MWAI(INT_PTR* args){
    return (INT_PTR)DdeDisconnect((HCONV)*(args + 0));
}
INT_PTR WINAPI DdeReconnect_MWAI(INT_PTR* args){
    return (INT_PTR)DdeReconnect((HCONV)*(args + 0));
}
INT_PTR WINAPI DdeQueryConvInfo_MWAI(INT_PTR* args){
    return (INT_PTR)DdeQueryConvInfo((HCONV)*(args + 0), (DWORD)*(args + 1), (PCONVINFO)*(args + 2));
}
INT_PTR WINAPI DdeSetUserHandle_MWAI(INT_PTR* args){
    return (INT_PTR)DdeSetUserHandle((HCONV)*(args + 0), (DWORD)*(args + 1), (DWORD_PTR)*(args + 2));
}
INT_PTR WINAPI DdeAbandonTransaction_MWAI(INT_PTR* args){
    return (INT_PTR)DdeAbandonTransaction((DWORD)*(args + 0), (HCONV)*(args + 1), (DWORD)*(args + 2));
}
INT_PTR WINAPI DdePostAdvise_MWAI(INT_PTR* args){
    return (INT_PTR)DdePostAdvise((DWORD)*(args + 0), (HSZ)*(args + 1), (HSZ)*(args + 2));
}
INT_PTR WINAPI DdeEnableCallback_MWAI(INT_PTR* args){
    return (INT_PTR)DdeEnableCallback((DWORD)*(args + 0), (HCONV)*(args + 1), (UINT)*(args + 2));
}
INT_PTR WINAPI DdeImpersonateClient_MWAI(INT_PTR* args){
    return (INT_PTR)DdeImpersonateClient((HCONV)*(args + 0));
}
INT_PTR WINAPI DdeNameService_MWAI(INT_PTR* args){
    return (INT_PTR)DdeNameService((DWORD)*(args + 0), (HSZ)*(args + 1), (HSZ)*(args + 2), (UINT)*(args + 3));
}
INT_PTR WINAPI DdeClientTransaction_MWAI(INT_PTR* args){
    return (INT_PTR)DdeClientTransaction((LPBYTE)*(args + 0), (DWORD)*(args + 1), (HCONV)*(args + 2), (HSZ)*(args + 3), (UINT)*(args + 4), (UINT)*(args + 5), (DWORD)*(args + 6), (LPDWORD)*(args + 7));
}
INT_PTR WINAPI DdeCreateDataHandle_MWAI(INT_PTR* args){
    return (INT_PTR)DdeCreateDataHandle((DWORD)*(args + 0), (LPBYTE)*(args + 1), (DWORD)*(args + 2), (DWORD)*(args + 3), (HSZ)*(args + 4), (UINT)*(args + 5), (UINT)*(args + 6));
}
INT_PTR WINAPI DdeAddData_MWAI(INT_PTR* args){
    return (INT_PTR)DdeAddData((HDDEDATA)*(args + 0), (LPBYTE)*(args + 1), (DWORD)*(args + 2), (DWORD)*(args + 3));
}
INT_PTR WINAPI DdeGetData_MWAI(INT_PTR* args){
    return (INT_PTR)DdeGetData((HDDEDATA)*(args + 0), (LPBYTE)*(args + 1), (DWORD)*(args + 2), (DWORD)*(args + 3));
}
INT_PTR WINAPI DdeAccessData_MWAI(INT_PTR* args){
    return (INT_PTR)DdeAccessData((HDDEDATA)*(args + 0), (LPDWORD)*(args + 1));
}
INT_PTR WINAPI DdeUnaccessData_MWAI(INT_PTR* args){
    return (INT_PTR)DdeUnaccessData((HDDEDATA)*(args + 0));
}
INT_PTR WINAPI DdeFreeDataHandle_MWAI(INT_PTR* args){
    return (INT_PTR)DdeFreeDataHandle((HDDEDATA)*(args + 0));
}
INT_PTR WINAPI DdeGetLastError_MWAI(INT_PTR* args){
    return (INT_PTR)DdeGetLastError((DWORD)*(args + 0));
}
INT_PTR WINAPI DdeCreateStringHandleA_MWAI(INT_PTR* args){
    return (INT_PTR)DdeCreateStringHandleA((DWORD)*(args + 0), (LPCSTR)*(args + 1), (int)*(args + 2));
}
INT_PTR WINAPI DdeCreateStringHandleW_MWAI(INT_PTR* args){
    return (INT_PTR)DdeCreateStringHandleW((DWORD)*(args + 0), (LPCWSTR)*(args + 1), (int)*(args + 2));
}
INT_PTR WINAPI DdeQueryStringA_MWAI(INT_PTR* args){
    return (INT_PTR)DdeQueryStringA((DWORD)*(args + 0), (HSZ)*(args + 1), (LPSTR)*(args + 2), (DWORD)*(args + 3), (int)*(args + 4));
}
INT_PTR WINAPI DdeQueryStringW_MWAI(INT_PTR* args){
    return (INT_PTR)DdeQueryStringW((DWORD)*(args + 0), (HSZ)*(args + 1), (LPWSTR)*(args + 2), (DWORD)*(args + 3), (int)*(args + 4));
}
INT_PTR WINAPI DdeFreeStringHandle_MWAI(INT_PTR* args){
    return (INT_PTR)DdeFreeStringHandle((DWORD)*(args + 0), (HSZ)*(args + 1));
}
INT_PTR WINAPI DdeKeepStringHandle_MWAI(INT_PTR* args){
    return (INT_PTR)DdeKeepStringHandle((DWORD)*(args + 0), (HSZ)*(args + 1));
}
INT_PTR WINAPI DdeCmpStringHandles_MWAI(INT_PTR* args){
    return (INT_PTR)DdeCmpStringHandles((HSZ)*(args + 0), (HSZ)*(args + 1));
}
INT_PTR WINAPI mciSendCommandA_MWAI(INT_PTR* args){
    return (INT_PTR)mciSendCommandA((MCIDEVICEID)*(args + 0), (UINT)*(args + 1), (DWORD_PTR)*(args + 2), (DWORD_PTR)*(args + 3));
}
INT_PTR WINAPI mciSendCommandW_MWAI(INT_PTR* args){
    return (INT_PTR)mciSendCommandW((MCIDEVICEID)*(args + 0), (UINT)*(args + 1), (DWORD_PTR)*(args + 2), (DWORD_PTR)*(args + 3));
}
INT_PTR WINAPI mciSendStringA_MWAI(INT_PTR* args){
    return (INT_PTR)mciSendStringA((LPCSTR)*(args + 0), (LPSTR)*(args + 1), (UINT)*(args + 2), (HWND)*(args + 3));
}
INT_PTR WINAPI mciSendStringW_MWAI(INT_PTR* args){
    return (INT_PTR)mciSendStringW((LPCWSTR)*(args + 0), (LPWSTR)*(args + 1), (UINT)*(args + 2), (HWND)*(args + 3));
}
INT_PTR WINAPI mciGetDeviceIDA_MWAI(INT_PTR* args){
    return (INT_PTR)mciGetDeviceIDA((LPCSTR)*(args + 0));
}
INT_PTR WINAPI mciGetDeviceIDW_MWAI(INT_PTR* args){
    return (INT_PTR)mciGetDeviceIDW((LPCWSTR)*(args + 0));
}
INT_PTR WINAPI mciGetDeviceIDFromElementIDA_MWAI(INT_PTR* args){
    return (INT_PTR)mciGetDeviceIDFromElementIDA((DWORD)*(args + 0), (LPCSTR)*(args + 1));
}
INT_PTR WINAPI mciGetDeviceIDFromElementIDW_MWAI(INT_PTR* args){
    return (INT_PTR)mciGetDeviceIDFromElementIDW((DWORD)*(args + 0), (LPCWSTR)*(args + 1));
}
INT_PTR WINAPI mciGetErrorStringA_MWAI(INT_PTR* args){
    return (INT_PTR)mciGetErrorStringA((MCIERROR)*(args + 0), (LPSTR)*(args + 1), (UINT)*(args + 2));
}
INT_PTR WINAPI mciGetErrorStringW_MWAI(INT_PTR* args){
    return (INT_PTR)mciGetErrorStringW((MCIERROR)*(args + 0), (LPWSTR)*(args + 1), (UINT)*(args + 2));
}
INT_PTR WINAPI mciSetYieldProc_MWAI(INT_PTR* args){
    return (INT_PTR)mciSetYieldProc((MCIDEVICEID)*(args + 0), (YIELDPROC)*(args + 1), (DWORD)*(args + 2));
}
INT_PTR WINAPI mciGetCreatorTask_MWAI(INT_PTR* args){
    return (INT_PTR)mciGetCreatorTask((MCIDEVICEID)*(args + 0));
}
INT_PTR WINAPI mciGetYieldProc_MWAI(INT_PTR* args){
    return (INT_PTR)mciGetYieldProc((MCIDEVICEID)*(args + 0), (LPDWORD)*(args + 1));
}
INT_PTR WINAPI mciGetDriverData_MWAI(INT_PTR* args){
    return (INT_PTR)mciGetDriverData((MCIDEVICEID)*(args + 0));
}
INT_PTR WINAPI mciLoadCommandResource_MWAI(INT_PTR* args){
    return (INT_PTR)mciLoadCommandResource((HANDLE)*(args + 0), (LPCWSTR)*(args + 1), (UINT)*(args + 2));
}
INT_PTR WINAPI mciSetDriverData_MWAI(INT_PTR* args){
    return (INT_PTR)mciSetDriverData((MCIDEVICEID)*(args + 0), (DWORD_PTR)*(args + 1));
}
INT_PTR WINAPI mciDriverYield_MWAI(INT_PTR* args){
    return (INT_PTR)mciDriverYield((MCIDEVICEID)*(args + 0));
}
INT_PTR WINAPI mciDriverNotify_MWAI(INT_PTR* args){
    return (INT_PTR)mciDriverNotify((HANDLE)*(args + 0), (MCIDEVICEID)*(args + 1), (UINT)*(args + 2));
}
INT_PTR WINAPI mciFreeCommandResource_MWAI(INT_PTR* args){
    return (INT_PTR)mciFreeCommandResource((UINT)*(args + 0));
}
INT_PTR WINAPI CloseDriver_MWAI(INT_PTR* args){
    return (INT_PTR)CloseDriver((HDRVR)*(args + 0), (LPARAM)*(args + 1), (LPARAM)*(args + 2));
}
INT_PTR WINAPI OpenDriver_MWAI(INT_PTR* args){
    return (INT_PTR)OpenDriver((LPCWSTR)*(args + 0), (LPCWSTR)*(args + 1), (LPARAM)*(args + 2));
}
INT_PTR WINAPI SendDriverMessage_MWAI(INT_PTR* args){
    return (INT_PTR)SendDriverMessage((HDRVR)*(args + 0), (UINT)*(args + 1), (LPARAM)*(args + 2), (LPARAM)*(args + 3));
}
INT_PTR WINAPI DrvGetModuleHandle_MWAI(INT_PTR* args){
    return (INT_PTR)DrvGetModuleHandle((HDRVR)*(args + 0));
}
INT_PTR WINAPI GetDriverModuleHandle_MWAI(INT_PTR* args){
    return (INT_PTR)GetDriverModuleHandle((HDRVR)*(args + 0));
}
INT_PTR WINAPI DefDriverProc_MWAI(INT_PTR* args){
    return (INT_PTR)DefDriverProc((DWORD_PTR)*(args + 0), (HDRVR)*(args + 1), (UINT)*(args + 2), (LPARAM)*(args + 3), (LPARAM)*(args + 4));
}
INT_PTR WINAPI DriverCallback_MWAI(INT_PTR* args){
    return (INT_PTR)DriverCallback((DWORD_PTR)*(args + 0), (DWORD)*(args + 1), (HDRVR)*(args + 2), (DWORD)*(args + 3), (DWORD_PTR)*(args + 4), (DWORD_PTR)*(args + 5), (DWORD_PTR)*(args + 6));
}
INT_PTR WINAPI mmioStringToFOURCCA_MWAI(INT_PTR* args){
    return (INT_PTR)mmioStringToFOURCCA((LPCSTR)*(args + 0), (UINT)*(args + 1));
}
INT_PTR WINAPI mmioStringToFOURCCW_MWAI(INT_PTR* args){
    return (INT_PTR)mmioStringToFOURCCW((LPCWSTR)*(args + 0), (UINT)*(args + 1));
}
INT_PTR WINAPI mmioInstallIOProcA_MWAI(INT_PTR* args){
    return (INT_PTR)mmioInstallIOProcA((FOURCC)*(args + 0), (LPMMIOPROC)*(args + 1), (DWORD)*(args + 2));
}
INT_PTR WINAPI mmioInstallIOProcW_MWAI(INT_PTR* args){
    return (INT_PTR)mmioInstallIOProcW((FOURCC)*(args + 0), (LPMMIOPROC)*(args + 1), (DWORD)*(args + 2));
}
INT_PTR WINAPI mmioOpenA_MWAI(INT_PTR* args){
    return (INT_PTR)mmioOpenA((LPSTR)*(args + 0), (LPMMIOINFO)*(args + 1), (DWORD)*(args + 2));
}
INT_PTR WINAPI mmioOpenW_MWAI(INT_PTR* args){
    return (INT_PTR)mmioOpenW((LPWSTR)*(args + 0), (LPMMIOINFO)*(args + 1), (DWORD)*(args + 2));
}
INT_PTR WINAPI mmioRenameA_MWAI(INT_PTR* args){
    return (INT_PTR)mmioRenameA((LPCSTR)*(args + 0), (LPCSTR)*(args + 1), (LPCMMIOINFO)*(args + 2), (DWORD)*(args + 3));
}
INT_PTR WINAPI mmioRenameW_MWAI(INT_PTR* args){
    return (INT_PTR)mmioRenameW((LPCWSTR)*(args + 0), (LPCWSTR)*(args + 1), (LPCMMIOINFO)*(args + 2), (DWORD)*(args + 3));
}
INT_PTR WINAPI mmioClose_MWAI(INT_PTR* args){
    return (INT_PTR)mmioClose((HMMIO)*(args + 0), (UINT)*(args + 1));
}
INT_PTR WINAPI mmioRead_MWAI(INT_PTR* args){
    return (INT_PTR)mmioRead((HMMIO)*(args + 0), (HPSTR)*(args + 1), (LONG)*(args + 2));
}
INT_PTR WINAPI mmioWrite_MWAI(INT_PTR* args){
    return (INT_PTR)mmioWrite((HMMIO)*(args + 0), (const char   *)*(args + 1), (LONG)*(args + 2));
}
INT_PTR WINAPI mmioSeek_MWAI(INT_PTR* args){
    return (INT_PTR)mmioSeek((HMMIO)*(args + 0), (LONG)*(args + 1), (int)*(args + 2));
}
INT_PTR WINAPI mmioGetInfo_MWAI(INT_PTR* args){
    return (INT_PTR)mmioGetInfo((HMMIO)*(args + 0), (LPMMIOINFO)*(args + 1), (UINT)*(args + 2));
}
INT_PTR WINAPI mmioSetInfo_MWAI(INT_PTR* args){
    return (INT_PTR)mmioSetInfo((HMMIO)*(args + 0), (LPCMMIOINFO)*(args + 1), (UINT)*(args + 2));
}
INT_PTR WINAPI mmioSetBuffer_MWAI(INT_PTR* args){
    return (INT_PTR)mmioSetBuffer((HMMIO)*(args + 0), (LPSTR)*(args + 1), (LONG)*(args + 2), (UINT)*(args + 3));
}
INT_PTR WINAPI mmioFlush_MWAI(INT_PTR* args){
    return (INT_PTR)mmioFlush((HMMIO)*(args + 0), (UINT)*(args + 1));
}
INT_PTR WINAPI mmioAdvance_MWAI(INT_PTR* args){
    return (INT_PTR)mmioAdvance((HMMIO)*(args + 0), (LPMMIOINFO)*(args + 1), (UINT)*(args + 2));
}
INT_PTR WINAPI mmioSendMessage_MWAI(INT_PTR* args){
    return (INT_PTR)mmioSendMessage((HMMIO)*(args + 0), (UINT)*(args + 1), (LPARAM)*(args + 2), (LPARAM)*(args + 3));
}
INT_PTR WINAPI mmioDescend_MWAI(INT_PTR* args){
    return (INT_PTR)mmioDescend((HMMIO)*(args + 0), (LPMMCKINFO)*(args + 1), (const MMCKINFO   *)*(args + 2), (UINT)*(args + 3));
}
INT_PTR WINAPI mmioAscend_MWAI(INT_PTR* args){
    return (INT_PTR)mmioAscend((HMMIO)*(args + 0), (LPMMCKINFO)*(args + 1), (UINT)*(args + 2));
}
INT_PTR WINAPI mmioCreateChunk_MWAI(INT_PTR* args){
    return (INT_PTR)mmioCreateChunk((HMMIO)*(args + 0), (LPMMCKINFO)*(args + 1), (UINT)*(args + 2));
}
INT_PTR WINAPI timeSetEvent_MWAI(INT_PTR* args){
    return (INT_PTR)timeSetEvent((UINT)*(args + 0), (UINT)*(args + 1), (LPTIMECALLBACK)*(args + 2), (DWORD_PTR)*(args + 3), (UINT)*(args + 4));
}
INT_PTR WINAPI timeKillEvent_MWAI(INT_PTR* args){
    return (INT_PTR)timeKillEvent((UINT)*(args + 0));
}
INT_PTR WINAPI sndPlaySoundA_MWAI(INT_PTR* args){
    return (INT_PTR)sndPlaySoundA((LPCSTR)*(args + 0), (UINT)*(args + 1));
}
INT_PTR WINAPI sndPlaySoundW_MWAI(INT_PTR* args){
    return (INT_PTR)sndPlaySoundW((LPCWSTR)*(args + 0), (UINT)*(args + 1));
}
INT_PTR WINAPI PlaySoundA_MWAI(INT_PTR* args){
    return (INT_PTR)PlaySoundA((LPCSTR)*(args + 0), (HMODULE)*(args + 1), (DWORD)*(args + 2));
}
INT_PTR WINAPI PlaySoundW_MWAI(INT_PTR* args){
    return (INT_PTR)PlaySoundW((LPCWSTR)*(args + 0), (HMODULE)*(args + 1), (DWORD)*(args + 2));
}
INT_PTR WINAPI waveOutGetNumDevs_MWAI(INT_PTR* args){
    return (INT_PTR)waveOutGetNumDevs();
}
INT_PTR WINAPI waveOutGetDevCapsA_MWAI(INT_PTR* args){
    return (INT_PTR)waveOutGetDevCapsA((UINT_PTR)*(args + 0), (LPWAVEOUTCAPSA)*(args + 1), (UINT)*(args + 2));
}
INT_PTR WINAPI waveOutGetDevCapsW_MWAI(INT_PTR* args){
    return (INT_PTR)waveOutGetDevCapsW((UINT_PTR)*(args + 0), (LPWAVEOUTCAPSW)*(args + 1), (UINT)*(args + 2));
}
INT_PTR WINAPI waveOutGetVolume_MWAI(INT_PTR* args){
    return (INT_PTR)waveOutGetVolume((HWAVEOUT)*(args + 0), (LPDWORD)*(args + 1));
}
INT_PTR WINAPI waveOutSetVolume_MWAI(INT_PTR* args){
    return (INT_PTR)waveOutSetVolume((HWAVEOUT)*(args + 0), (DWORD)*(args + 1));
}
INT_PTR WINAPI waveOutGetErrorTextA_MWAI(INT_PTR* args){
    return (INT_PTR)waveOutGetErrorTextA((MMRESULT)*(args + 0), (LPSTR)*(args + 1), (UINT)*(args + 2));
}
INT_PTR WINAPI waveOutGetErrorTextW_MWAI(INT_PTR* args){
    return (INT_PTR)waveOutGetErrorTextW((MMRESULT)*(args + 0), (LPWSTR)*(args + 1), (UINT)*(args + 2));
}
INT_PTR WINAPI waveOutOpen_MWAI(INT_PTR* args){
    return (INT_PTR)waveOutOpen((LPHWAVEOUT)*(args + 0), (UINT)*(args + 1), (LPCWAVEFORMATEX)*(args + 2), (DWORD_PTR)*(args + 3), (DWORD_PTR)*(args + 4), (DWORD)*(args + 5));
}
INT_PTR WINAPI waveOutClose_MWAI(INT_PTR* args){
    return (INT_PTR)waveOutClose((HWAVEOUT)*(args + 0));
}
INT_PTR WINAPI waveOutPrepareHeader_MWAI(INT_PTR* args){
    return (INT_PTR)waveOutPrepareHeader((HWAVEOUT)*(args + 0), (LPWAVEHDR)*(args + 1), (UINT)*(args + 2));
}
INT_PTR WINAPI waveOutUnprepareHeader_MWAI(INT_PTR* args){
    return (INT_PTR)waveOutUnprepareHeader((HWAVEOUT)*(args + 0), (LPWAVEHDR)*(args + 1), (UINT)*(args + 2));
}
INT_PTR WINAPI waveOutWrite_MWAI(INT_PTR* args){
    return (INT_PTR)waveOutWrite((HWAVEOUT)*(args + 0), (LPWAVEHDR)*(args + 1), (UINT)*(args + 2));
}
INT_PTR WINAPI waveOutPause_MWAI(INT_PTR* args){
    return (INT_PTR)waveOutPause((HWAVEOUT)*(args + 0));
}
INT_PTR WINAPI waveOutRestart_MWAI(INT_PTR* args){
    return (INT_PTR)waveOutRestart((HWAVEOUT)*(args + 0));
}
INT_PTR WINAPI waveOutReset_MWAI(INT_PTR* args){
    return (INT_PTR)waveOutReset((HWAVEOUT)*(args + 0));
}
INT_PTR WINAPI waveOutBreakLoop_MWAI(INT_PTR* args){
    return (INT_PTR)waveOutBreakLoop((HWAVEOUT)*(args + 0));
}
INT_PTR WINAPI waveOutGetPosition_MWAI(INT_PTR* args){
    return (INT_PTR)waveOutGetPosition((HWAVEOUT)*(args + 0), (LPMMTIME)*(args + 1), (UINT)*(args + 2));
}
INT_PTR WINAPI waveOutGetPitch_MWAI(INT_PTR* args){
    return (INT_PTR)waveOutGetPitch((HWAVEOUT)*(args + 0), (LPDWORD)*(args + 1));
}
INT_PTR WINAPI waveOutSetPitch_MWAI(INT_PTR* args){
    return (INT_PTR)waveOutSetPitch((HWAVEOUT)*(args + 0), (DWORD)*(args + 1));
}
INT_PTR WINAPI waveOutGetPlaybackRate_MWAI(INT_PTR* args){
    return (INT_PTR)waveOutGetPlaybackRate((HWAVEOUT)*(args + 0), (LPDWORD)*(args + 1));
}
INT_PTR WINAPI waveOutSetPlaybackRate_MWAI(INT_PTR* args){
    return (INT_PTR)waveOutSetPlaybackRate((HWAVEOUT)*(args + 0), (DWORD)*(args + 1));
}
INT_PTR WINAPI waveOutGetID_MWAI(INT_PTR* args){
    return (INT_PTR)waveOutGetID((HWAVEOUT)*(args + 0), (LPUINT)*(args + 1));
}
INT_PTR WINAPI waveOutMessage_MWAI(INT_PTR* args){
    return (INT_PTR)waveOutMessage((HWAVEOUT)*(args + 0), (UINT)*(args + 1), (DWORD_PTR)*(args + 2), (DWORD_PTR)*(args + 3));
}
INT_PTR WINAPI waveInGetNumDevs_MWAI(INT_PTR* args){
    return (INT_PTR)waveInGetNumDevs();
}
INT_PTR WINAPI waveInGetDevCapsA_MWAI(INT_PTR* args){
    return (INT_PTR)waveInGetDevCapsA((UINT_PTR)*(args + 0), (LPWAVEINCAPSA)*(args + 1), (UINT)*(args + 2));
}
INT_PTR WINAPI waveInGetDevCapsW_MWAI(INT_PTR* args){
    return (INT_PTR)waveInGetDevCapsW((UINT_PTR)*(args + 0), (LPWAVEINCAPSW)*(args + 1), (UINT)*(args + 2));
}
INT_PTR WINAPI waveInGetErrorTextA_MWAI(INT_PTR* args){
    return (INT_PTR)waveInGetErrorTextA((MMRESULT)*(args + 0), (LPSTR)*(args + 1), (UINT)*(args + 2));
}
INT_PTR WINAPI waveInGetErrorTextW_MWAI(INT_PTR* args){
    return (INT_PTR)waveInGetErrorTextW((MMRESULT)*(args + 0), (LPWSTR)*(args + 1), (UINT)*(args + 2));
}
INT_PTR WINAPI waveInOpen_MWAI(INT_PTR* args){
    return (INT_PTR)waveInOpen((LPHWAVEIN)*(args + 0), (UINT)*(args + 1), (LPCWAVEFORMATEX)*(args + 2), (DWORD_PTR)*(args + 3), (DWORD_PTR)*(args + 4), (DWORD)*(args + 5));
}
INT_PTR WINAPI waveInClose_MWAI(INT_PTR* args){
    return (INT_PTR)waveInClose((HWAVEIN)*(args + 0));
}
INT_PTR WINAPI waveInPrepareHeader_MWAI(INT_PTR* args){
    return (INT_PTR)waveInPrepareHeader((HWAVEIN)*(args + 0), (LPWAVEHDR)*(args + 1), (UINT)*(args + 2));
}
INT_PTR WINAPI waveInUnprepareHeader_MWAI(INT_PTR* args){
    return (INT_PTR)waveInUnprepareHeader((HWAVEIN)*(args + 0), (LPWAVEHDR)*(args + 1), (UINT)*(args + 2));
}
INT_PTR WINAPI waveInAddBuffer_MWAI(INT_PTR* args){
    return (INT_PTR)waveInAddBuffer((HWAVEIN)*(args + 0), (LPWAVEHDR)*(args + 1), (UINT)*(args + 2));
}
INT_PTR WINAPI waveInStart_MWAI(INT_PTR* args){
    return (INT_PTR)waveInStart((HWAVEIN)*(args + 0));
}
INT_PTR WINAPI waveInStop_MWAI(INT_PTR* args){
    return (INT_PTR)waveInStop((HWAVEIN)*(args + 0));
}
INT_PTR WINAPI waveInReset_MWAI(INT_PTR* args){
    return (INT_PTR)waveInReset((HWAVEIN)*(args + 0));
}
INT_PTR WINAPI waveInGetPosition_MWAI(INT_PTR* args){
    return (INT_PTR)waveInGetPosition((HWAVEIN)*(args + 0), (LPMMTIME)*(args + 1), (UINT)*(args + 2));
}
INT_PTR WINAPI waveInGetID_MWAI(INT_PTR* args){
    return (INT_PTR)waveInGetID((HWAVEIN)*(args + 0), (LPUINT)*(args + 1));
}
INT_PTR WINAPI waveInMessage_MWAI(INT_PTR* args){
    return (INT_PTR)waveInMessage((HWAVEIN)*(args + 0), (UINT)*(args + 1), (DWORD_PTR)*(args + 2), (DWORD_PTR)*(args + 3));
}
INT_PTR WINAPI midiOutGetNumDevs_MWAI(INT_PTR* args){
    return (INT_PTR)midiOutGetNumDevs();
}
INT_PTR WINAPI midiStreamOpen_MWAI(INT_PTR* args){
    return (INT_PTR)midiStreamOpen((LPHMIDISTRM)*(args + 0), (LPUINT)*(args + 1), (DWORD)*(args + 2), (DWORD_PTR)*(args + 3), (DWORD_PTR)*(args + 4), (DWORD)*(args + 5));
}
INT_PTR WINAPI midiStreamClose_MWAI(INT_PTR* args){
    return (INT_PTR)midiStreamClose((HMIDISTRM)*(args + 0));
}
INT_PTR WINAPI midiStreamProperty_MWAI(INT_PTR* args){
    return (INT_PTR)midiStreamProperty((HMIDISTRM)*(args + 0), (LPBYTE)*(args + 1), (DWORD)*(args + 2));
}
INT_PTR WINAPI midiStreamPosition_MWAI(INT_PTR* args){
    return (INT_PTR)midiStreamPosition((HMIDISTRM)*(args + 0), (LPMMTIME)*(args + 1), (UINT)*(args + 2));
}
INT_PTR WINAPI midiStreamOut_MWAI(INT_PTR* args){
    return (INT_PTR)midiStreamOut((HMIDISTRM)*(args + 0), (LPMIDIHDR)*(args + 1), (UINT)*(args + 2));
}
INT_PTR WINAPI midiStreamPause_MWAI(INT_PTR* args){
    return (INT_PTR)midiStreamPause((HMIDISTRM)*(args + 0));
}
INT_PTR WINAPI midiStreamRestart_MWAI(INT_PTR* args){
    return (INT_PTR)midiStreamRestart((HMIDISTRM)*(args + 0));
}
INT_PTR WINAPI midiStreamStop_MWAI(INT_PTR* args){
    return (INT_PTR)midiStreamStop((HMIDISTRM)*(args + 0));
}
INT_PTR WINAPI midiConnect_MWAI(INT_PTR* args){
    return (INT_PTR)midiConnect((HMIDI)*(args + 0), (HMIDIOUT)*(args + 1), (LPVOID)*(args + 2));
}
INT_PTR WINAPI midiDisconnect_MWAI(INT_PTR* args){
    return (INT_PTR)midiDisconnect((HMIDI)*(args + 0), (HMIDIOUT)*(args + 1), (LPVOID)*(args + 2));
}
INT_PTR WINAPI midiOutGetDevCapsA_MWAI(INT_PTR* args){
    return (INT_PTR)midiOutGetDevCapsA((UINT_PTR)*(args + 0), (LPMIDIOUTCAPSA)*(args + 1), (UINT)*(args + 2));
}
INT_PTR WINAPI midiOutGetDevCapsW_MWAI(INT_PTR* args){
    return (INT_PTR)midiOutGetDevCapsW((UINT_PTR)*(args + 0), (LPMIDIOUTCAPSW)*(args + 1), (UINT)*(args + 2));
}
INT_PTR WINAPI midiOutGetVolume_MWAI(INT_PTR* args){
    return (INT_PTR)midiOutGetVolume((HMIDIOUT)*(args + 0), (LPDWORD)*(args + 1));
}
INT_PTR WINAPI midiOutSetVolume_MWAI(INT_PTR* args){
    return (INT_PTR)midiOutSetVolume((HMIDIOUT)*(args + 0), (DWORD)*(args + 1));
}
INT_PTR WINAPI midiOutGetErrorTextA_MWAI(INT_PTR* args){
    return (INT_PTR)midiOutGetErrorTextA((MMRESULT)*(args + 0), (LPSTR)*(args + 1), (UINT)*(args + 2));
}
INT_PTR WINAPI midiOutGetErrorTextW_MWAI(INT_PTR* args){
    return (INT_PTR)midiOutGetErrorTextW((MMRESULT)*(args + 0), (LPWSTR)*(args + 1), (UINT)*(args + 2));
}
INT_PTR WINAPI midiOutOpen_MWAI(INT_PTR* args){
    return (INT_PTR)midiOutOpen((LPHMIDIOUT)*(args + 0), (UINT)*(args + 1), (DWORD_PTR)*(args + 2), (DWORD_PTR)*(args + 3), (DWORD)*(args + 4));
}
INT_PTR WINAPI midiOutClose_MWAI(INT_PTR* args){
    return (INT_PTR)midiOutClose((HMIDIOUT)*(args + 0));
}
INT_PTR WINAPI midiOutPrepareHeader_MWAI(INT_PTR* args){
    return (INT_PTR)midiOutPrepareHeader((HMIDIOUT)*(args + 0), (LPMIDIHDR)*(args + 1), (UINT)*(args + 2));
}
INT_PTR WINAPI midiOutUnprepareHeader_MWAI(INT_PTR* args){
    return (INT_PTR)midiOutUnprepareHeader((HMIDIOUT)*(args + 0), (LPMIDIHDR)*(args + 1), (UINT)*(args + 2));
}
INT_PTR WINAPI midiOutShortMsg_MWAI(INT_PTR* args){
    return (INT_PTR)midiOutShortMsg((HMIDIOUT)*(args + 0), (DWORD)*(args + 1));
}
INT_PTR WINAPI midiOutLongMsg_MWAI(INT_PTR* args){
    return (INT_PTR)midiOutLongMsg((HMIDIOUT)*(args + 0), (LPMIDIHDR)*(args + 1), (UINT)*(args + 2));
}
INT_PTR WINAPI midiOutReset_MWAI(INT_PTR* args){
    return (INT_PTR)midiOutReset((HMIDIOUT)*(args + 0));
}
INT_PTR WINAPI midiOutCachePatches_MWAI(INT_PTR* args){
    return (INT_PTR)midiOutCachePatches((HMIDIOUT)*(args + 0), (UINT)*(args + 1), (LPWORD)*(args + 2), (UINT)*(args + 3));
}
INT_PTR WINAPI midiOutCacheDrumPatches_MWAI(INT_PTR* args){
    return (INT_PTR)midiOutCacheDrumPatches((HMIDIOUT)*(args + 0), (UINT)*(args + 1), (LPWORD)*(args + 2), (UINT)*(args + 3));
}
INT_PTR WINAPI midiOutGetID_MWAI(INT_PTR* args){
    return (INT_PTR)midiOutGetID((HMIDIOUT)*(args + 0), (LPUINT)*(args + 1));
}
INT_PTR WINAPI midiOutMessage_MWAI(INT_PTR* args){
    return (INT_PTR)midiOutMessage((HMIDIOUT)*(args + 0), (UINT)*(args + 1), (DWORD_PTR)*(args + 2), (DWORD_PTR)*(args + 3));
}
INT_PTR WINAPI midiInGetNumDevs_MWAI(INT_PTR* args){
    return (INT_PTR)midiInGetNumDevs();
}
INT_PTR WINAPI midiInGetDevCapsA_MWAI(INT_PTR* args){
    return (INT_PTR)midiInGetDevCapsA((UINT_PTR)*(args + 0), (LPMIDIINCAPSA)*(args + 1), (UINT)*(args + 2));
}
INT_PTR WINAPI midiInGetDevCapsW_MWAI(INT_PTR* args){
    return (INT_PTR)midiInGetDevCapsW((UINT_PTR)*(args + 0), (LPMIDIINCAPSW)*(args + 1), (UINT)*(args + 2));
}
INT_PTR WINAPI midiInGetErrorTextA_MWAI(INT_PTR* args){
    return (INT_PTR)midiInGetErrorTextA((MMRESULT)*(args + 0), (LPSTR)*(args + 1), (UINT)*(args + 2));
}
INT_PTR WINAPI midiInGetErrorTextW_MWAI(INT_PTR* args){
    return (INT_PTR)midiInGetErrorTextW((MMRESULT)*(args + 0), (LPWSTR)*(args + 1), (UINT)*(args + 2));
}
INT_PTR WINAPI midiInOpen_MWAI(INT_PTR* args){
    return (INT_PTR)midiInOpen((LPHMIDIIN)*(args + 0), (UINT)*(args + 1), (DWORD_PTR)*(args + 2), (DWORD_PTR)*(args + 3), (DWORD)*(args + 4));
}
INT_PTR WINAPI midiInClose_MWAI(INT_PTR* args){
    return (INT_PTR)midiInClose((HMIDIIN)*(args + 0));
}
INT_PTR WINAPI midiInPrepareHeader_MWAI(INT_PTR* args){
    return (INT_PTR)midiInPrepareHeader((HMIDIIN)*(args + 0), (LPMIDIHDR)*(args + 1), (UINT)*(args + 2));
}
INT_PTR WINAPI midiInUnprepareHeader_MWAI(INT_PTR* args){
    return (INT_PTR)midiInUnprepareHeader((HMIDIIN)*(args + 0), (LPMIDIHDR)*(args + 1), (UINT)*(args + 2));
}
INT_PTR WINAPI midiInAddBuffer_MWAI(INT_PTR* args){
    return (INT_PTR)midiInAddBuffer((HMIDIIN)*(args + 0), (LPMIDIHDR)*(args + 1), (UINT)*(args + 2));
}
INT_PTR WINAPI midiInStart_MWAI(INT_PTR* args){
    return (INT_PTR)midiInStart((HMIDIIN)*(args + 0));
}
INT_PTR WINAPI midiInStop_MWAI(INT_PTR* args){
    return (INT_PTR)midiInStop((HMIDIIN)*(args + 0));
}
INT_PTR WINAPI midiInReset_MWAI(INT_PTR* args){
    return (INT_PTR)midiInReset((HMIDIIN)*(args + 0));
}
INT_PTR WINAPI midiInGetID_MWAI(INT_PTR* args){
    return (INT_PTR)midiInGetID((HMIDIIN)*(args + 0), (LPUINT)*(args + 1));
}
INT_PTR WINAPI midiInMessage_MWAI(INT_PTR* args){
    return (INT_PTR)midiInMessage((HMIDIIN)*(args + 0), (UINT)*(args + 1), (DWORD_PTR)*(args + 2), (DWORD_PTR)*(args + 3));
}
INT_PTR WINAPI auxGetNumDevs_MWAI(INT_PTR* args){
    return (INT_PTR)auxGetNumDevs();
}
INT_PTR WINAPI auxGetDevCapsA_MWAI(INT_PTR* args){
    return (INT_PTR)auxGetDevCapsA((UINT_PTR)*(args + 0), (LPAUXCAPSA)*(args + 1), (UINT)*(args + 2));
}
INT_PTR WINAPI auxGetDevCapsW_MWAI(INT_PTR* args){
    return (INT_PTR)auxGetDevCapsW((UINT_PTR)*(args + 0), (LPAUXCAPSW)*(args + 1), (UINT)*(args + 2));
}
INT_PTR WINAPI auxSetVolume_MWAI(INT_PTR* args){
    return (INT_PTR)auxSetVolume((UINT)*(args + 0), (DWORD)*(args + 1));
}
INT_PTR WINAPI auxGetVolume_MWAI(INT_PTR* args){
    return (INT_PTR)auxGetVolume((UINT)*(args + 0), (LPDWORD)*(args + 1));
}
INT_PTR WINAPI auxOutMessage_MWAI(INT_PTR* args){
    return (INT_PTR)auxOutMessage((UINT)*(args + 0), (UINT)*(args + 1), (DWORD_PTR)*(args + 2), (DWORD_PTR)*(args + 3));
}
INT_PTR WINAPI mixerGetNumDevs_MWAI(INT_PTR* args){
    return (INT_PTR)mixerGetNumDevs();
}
INT_PTR WINAPI mixerGetDevCapsA_MWAI(INT_PTR* args){
    return (INT_PTR)mixerGetDevCapsA((UINT_PTR)*(args + 0), (LPMIXERCAPSA)*(args + 1), (UINT)*(args + 2));
}
INT_PTR WINAPI mixerGetDevCapsW_MWAI(INT_PTR* args){
    return (INT_PTR)mixerGetDevCapsW((UINT_PTR)*(args + 0), (LPMIXERCAPSW)*(args + 1), (UINT)*(args + 2));
}
INT_PTR WINAPI mixerOpen_MWAI(INT_PTR* args){
    return (INT_PTR)mixerOpen((LPHMIXER)*(args + 0), (UINT)*(args + 1), (DWORD_PTR)*(args + 2), (DWORD_PTR)*(args + 3), (DWORD)*(args + 4));
}
INT_PTR WINAPI mixerClose_MWAI(INT_PTR* args){
    return (INT_PTR)mixerClose((HMIXER)*(args + 0));
}
INT_PTR WINAPI mixerMessage_MWAI(INT_PTR* args){
    return (INT_PTR)mixerMessage((HMIXER)*(args + 0), (UINT)*(args + 1), (DWORD_PTR)*(args + 2), (DWORD_PTR)*(args + 3));
}
INT_PTR WINAPI mixerGetLineInfoA_MWAI(INT_PTR* args){
    return (INT_PTR)mixerGetLineInfoA((HMIXEROBJ)*(args + 0), (LPMIXERLINEA)*(args + 1), (DWORD)*(args + 2));
}
INT_PTR WINAPI mixerGetLineInfoW_MWAI(INT_PTR* args){
    return (INT_PTR)mixerGetLineInfoW((HMIXEROBJ)*(args + 0), (LPMIXERLINEW)*(args + 1), (DWORD)*(args + 2));
}
INT_PTR WINAPI mixerGetID_MWAI(INT_PTR* args){
    return (INT_PTR)mixerGetID((HMIXEROBJ)*(args + 0), (UINT   *)*(args + 1), (DWORD)*(args + 2));
}
INT_PTR WINAPI mixerGetLineControlsA_MWAI(INT_PTR* args){
    return (INT_PTR)mixerGetLineControlsA((HMIXEROBJ)*(args + 0), (LPMIXERLINECONTROLSA)*(args + 1), (DWORD)*(args + 2));
}
INT_PTR WINAPI mixerGetLineControlsW_MWAI(INT_PTR* args){
    return (INT_PTR)mixerGetLineControlsW((HMIXEROBJ)*(args + 0), (LPMIXERLINECONTROLSW)*(args + 1), (DWORD)*(args + 2));
}
INT_PTR WINAPI mixerGetControlDetailsA_MWAI(INT_PTR* args){
    return (INT_PTR)mixerGetControlDetailsA((HMIXEROBJ)*(args + 0), (LPMIXERCONTROLDETAILS)*(args + 1), (DWORD)*(args + 2));
}
INT_PTR WINAPI mixerGetControlDetailsW_MWAI(INT_PTR* args){
    return (INT_PTR)mixerGetControlDetailsW((HMIXEROBJ)*(args + 0), (LPMIXERCONTROLDETAILS)*(args + 1), (DWORD)*(args + 2));
}
INT_PTR WINAPI mixerSetControlDetails_MWAI(INT_PTR* args){
    return (INT_PTR)mixerSetControlDetails((HMIXEROBJ)*(args + 0), (LPMIXERCONTROLDETAILS)*(args + 1), (DWORD)*(args + 2));
}
INT_PTR WINAPI timeGetSystemTime_MWAI(INT_PTR* args){
    return (INT_PTR)timeGetSystemTime((LPMMTIME)*(args + 0), (UINT)*(args + 1));
}
INT_PTR WINAPI timeGetTime_MWAI(INT_PTR* args){
    return (INT_PTR)timeGetTime();
}
INT_PTR WINAPI timeGetDevCaps_MWAI(INT_PTR* args){
    return (INT_PTR)timeGetDevCaps((LPTIMECAPS)*(args + 0), (UINT)*(args + 1));
}
INT_PTR WINAPI timeBeginPeriod_MWAI(INT_PTR* args){
    return (INT_PTR)timeBeginPeriod((UINT)*(args + 0));
}
INT_PTR WINAPI timeEndPeriod_MWAI(INT_PTR* args){
    return (INT_PTR)timeEndPeriod((UINT)*(args + 0));
}
INT_PTR WINAPI joyGetPosEx_MWAI(INT_PTR* args){
    return (INT_PTR)joyGetPosEx((UINT)*(args + 0), (LPJOYINFOEX)*(args + 1));
}
INT_PTR WINAPI joyGetNumDevs_MWAI(INT_PTR* args){
    return (INT_PTR)joyGetNumDevs();
}
INT_PTR WINAPI joyGetDevCapsA_MWAI(INT_PTR* args){
    return (INT_PTR)joyGetDevCapsA((UINT_PTR)*(args + 0), (LPJOYCAPSA)*(args + 1), (UINT)*(args + 2));
}
INT_PTR WINAPI joyGetDevCapsW_MWAI(INT_PTR* args){
    return (INT_PTR)joyGetDevCapsW((UINT_PTR)*(args + 0), (LPJOYCAPSW)*(args + 1), (UINT)*(args + 2));
}
INT_PTR WINAPI joyGetPos_MWAI(INT_PTR* args){
    return (INT_PTR)joyGetPos((UINT)*(args + 0), (LPJOYINFO)*(args + 1));
}
INT_PTR WINAPI joyGetThreshold_MWAI(INT_PTR* args){
    return (INT_PTR)joyGetThreshold((UINT)*(args + 0), (LPUINT)*(args + 1));
}
INT_PTR WINAPI joyReleaseCapture_MWAI(INT_PTR* args){
    return (INT_PTR)joyReleaseCapture((UINT)*(args + 0));
}
INT_PTR WINAPI joySetCapture_MWAI(INT_PTR* args){
    return (INT_PTR)joySetCapture((HWND)*(args + 0), (UINT)*(args + 1), (UINT)*(args + 2), (BOOL)*(args + 3));
}
INT_PTR WINAPI joySetThreshold_MWAI(INT_PTR* args){
    return (INT_PTR)joySetThreshold((UINT)*(args + 0), (UINT)*(args + 1));
}
INT_PTR WINAPI joyConfigChanged_MWAI(INT_PTR* args){
    return (INT_PTR)joyConfigChanged((DWORD)*(args + 0));
}
INT_PTR WINAPI CommandLineToArgvW_MWAI(INT_PTR* args){
    return (INT_PTR)CommandLineToArgvW((LPCWSTR)*(args + 0), (int*)*(args + 1));
}
INT_PTR WINAPI DragQueryFileA_MWAI(INT_PTR* args){
    return (INT_PTR)DragQueryFileA((HDROP)*(args + 0), (UINT)*(args + 1), (LPSTR)*(args + 2), (UINT)*(args + 3));
}
INT_PTR WINAPI DragQueryFileW_MWAI(INT_PTR* args){
    return (INT_PTR)DragQueryFileW((HDROP)*(args + 0), (UINT)*(args + 1), (LPWSTR)*(args + 2), (UINT)*(args + 3));
}
INT_PTR WINAPI DragQueryPoint_MWAI(INT_PTR* args){
    return (INT_PTR)DragQueryPoint((HDROP)*(args + 0), (POINT *)*(args + 1));
}
INT_PTR WINAPI DragFinish_MWAI(INT_PTR* args){
    DragFinish((HDROP)*(args + 0));
    return 0;
}
INT_PTR WINAPI DragAcceptFiles_MWAI(INT_PTR* args){
    DragAcceptFiles((HWND)*(args + 0), (BOOL)*(args + 1));
    return 0;
}
INT_PTR WINAPI ShellExecuteA_MWAI(INT_PTR* args){
    return (INT_PTR)ShellExecuteA((HWND)*(args + 0), (LPCSTR)*(args + 1), (LPCSTR)*(args + 2), (LPCSTR)*(args + 3), (LPCSTR)*(args + 4), (INT)*(args + 5));
}
INT_PTR WINAPI ShellExecuteW_MWAI(INT_PTR* args){
    return (INT_PTR)ShellExecuteW((HWND)*(args + 0), (LPCWSTR)*(args + 1), (LPCWSTR)*(args + 2), (LPCWSTR)*(args + 3), (LPCWSTR)*(args + 4), (INT)*(args + 5));
}
INT_PTR WINAPI FindExecutableA_MWAI(INT_PTR* args){
    return (INT_PTR)FindExecutableA((LPCSTR)*(args + 0), (LPCSTR)*(args + 1), (LPSTR)*(args + 2));
}
INT_PTR WINAPI FindExecutableW_MWAI(INT_PTR* args){
    return (INT_PTR)FindExecutableW((LPCWSTR)*(args + 0), (LPCWSTR)*(args + 1), (LPWSTR)*(args + 2));
}
INT_PTR WINAPI ShellAboutA_MWAI(INT_PTR* args){
    return (INT_PTR)ShellAboutA((HWND)*(args + 0), (LPCSTR)*(args + 1), (LPCSTR)*(args + 2), (HICON)*(args + 3));
}
INT_PTR WINAPI ShellAboutW_MWAI(INT_PTR* args){
    return (INT_PTR)ShellAboutW((HWND)*(args + 0), (LPCWSTR)*(args + 1), (LPCWSTR)*(args + 2), (HICON)*(args + 3));
}
INT_PTR WINAPI DuplicateIcon_MWAI(INT_PTR* args){
    return (INT_PTR)DuplicateIcon((HINSTANCE)*(args + 0), (HICON)*(args + 1));
}
INT_PTR WINAPI ExtractAssociatedIconA_MWAI(INT_PTR* args){
    return (INT_PTR)ExtractAssociatedIconA((HINSTANCE)*(args + 0), (LPSTR)*(args + 1), (WORD *)*(args + 2));
}
INT_PTR WINAPI ExtractAssociatedIconW_MWAI(INT_PTR* args){
    return (INT_PTR)ExtractAssociatedIconW((HINSTANCE)*(args + 0), (LPWSTR)*(args + 1), (WORD *)*(args + 2));
}
INT_PTR WINAPI ExtractAssociatedIconExA_MWAI(INT_PTR* args){
    return (INT_PTR)ExtractAssociatedIconExA((HINSTANCE)*(args + 0), (LPSTR)*(args + 1), (WORD *)*(args + 2), (WORD *)*(args + 3));
}
INT_PTR WINAPI ExtractAssociatedIconExW_MWAI(INT_PTR* args){
    return (INT_PTR)ExtractAssociatedIconExW((HINSTANCE)*(args + 0), (LPWSTR)*(args + 1), (WORD *)*(args + 2), (WORD *)*(args + 3));
}
INT_PTR WINAPI ExtractIconA_MWAI(INT_PTR* args){
    return (INT_PTR)ExtractIconA((HINSTANCE)*(args + 0), (LPCSTR)*(args + 1), (UINT)*(args + 2));
}
INT_PTR WINAPI ExtractIconW_MWAI(INT_PTR* args){
    return (INT_PTR)ExtractIconW((HINSTANCE)*(args + 0), (LPCWSTR)*(args + 1), (UINT)*(args + 2));
}
INT_PTR WINAPI SHAppBarMessage_MWAI(INT_PTR* args){
    return (INT_PTR)SHAppBarMessage((DWORD)*(args + 0), (PAPPBARDATA)*(args + 1));
}
INT_PTR WINAPI DoEnvironmentSubstA_MWAI(INT_PTR* args){
    return (INT_PTR)DoEnvironmentSubstA((LPSTR)*(args + 0), (UINT)*(args + 1));
}
INT_PTR WINAPI DoEnvironmentSubstW_MWAI(INT_PTR* args){
    return (INT_PTR)DoEnvironmentSubstW((LPWSTR)*(args + 0), (UINT)*(args + 1));
}
INT_PTR WINAPI ExtractIconExA_MWAI(INT_PTR* args){
    return (INT_PTR)ExtractIconExA((LPCSTR)*(args + 0), (int)*(args + 1), (HICON *)*(args + 2), (HICON *)*(args + 3), (UINT)*(args + 4));
}
INT_PTR WINAPI ExtractIconExW_MWAI(INT_PTR* args){
    return (INT_PTR)ExtractIconExW((LPCWSTR)*(args + 0), (int)*(args + 1), (HICON *)*(args + 2), (HICON *)*(args + 3), (UINT)*(args + 4));
}
INT_PTR WINAPI SHFileOperationA_MWAI(INT_PTR* args){
    return (INT_PTR)SHFileOperationA((LPSHFILEOPSTRUCTA)*(args + 0));
}
INT_PTR WINAPI SHFileOperationW_MWAI(INT_PTR* args){
    return (INT_PTR)SHFileOperationW((LPSHFILEOPSTRUCTW)*(args + 0));
}
INT_PTR WINAPI SHFreeNameMappings_MWAI(INT_PTR* args){
    SHFreeNameMappings((HANDLE)*(args + 0));
    return 0;
}
INT_PTR WINAPI ShellExecuteExA_MWAI(INT_PTR* args){
    return (INT_PTR)ShellExecuteExA((SHELLEXECUTEINFOA *)*(args + 0));
}
INT_PTR WINAPI ShellExecuteExW_MWAI(INT_PTR* args){
    return (INT_PTR)ShellExecuteExW((SHELLEXECUTEINFOW *)*(args + 0));
}
INT_PTR WINAPI SHCreateProcessAsUserW_MWAI(INT_PTR* args){
    return (INT_PTR)SHCreateProcessAsUserW((PSHCREATEPROCESSINFOW)*(args + 0));
}
INT_PTR WINAPI SHEvaluateSystemCommandTemplate_MWAI(INT_PTR* args){
    return (INT_PTR)SHEvaluateSystemCommandTemplate((PCWSTR)*(args + 0), (PWSTR *)*(args + 1), (PWSTR *)*(args + 2), (PWSTR *)*(args + 3));
}
INT_PTR WINAPI AssocCreateForClasses_MWAI(INT_PTR* args){
    return (INT_PTR)AssocCreateForClasses((const ASSOCIATIONELEMENT *)*(args + 0), (ULONG)*(args + 1), (const IID * const)*(args + 2), (void **)*(args + 3));
}
INT_PTR WINAPI SHQueryRecycleBinA_MWAI(INT_PTR* args){
    return (INT_PTR)SHQueryRecycleBinA((LPCSTR)*(args + 0), (LPSHQUERYRBINFO)*(args + 1));
}
INT_PTR WINAPI SHQueryRecycleBinW_MWAI(INT_PTR* args){
    return (INT_PTR)SHQueryRecycleBinW((LPCWSTR)*(args + 0), (LPSHQUERYRBINFO)*(args + 1));
}
INT_PTR WINAPI SHEmptyRecycleBinA_MWAI(INT_PTR* args){
    return (INT_PTR)SHEmptyRecycleBinA((HWND)*(args + 0), (LPCSTR)*(args + 1), (DWORD)*(args + 2));
}
INT_PTR WINAPI SHEmptyRecycleBinW_MWAI(INT_PTR* args){
    return (INT_PTR)SHEmptyRecycleBinW((HWND)*(args + 0), (LPCWSTR)*(args + 1), (DWORD)*(args + 2));
}
INT_PTR WINAPI SHQueryUserNotificationState_MWAI(INT_PTR* args){
    return (INT_PTR)SHQueryUserNotificationState((QUERY_USER_NOTIFICATION_STATE *)*(args + 0));
}
INT_PTR WINAPI SHGetPropertyStoreForWindow_MWAI(INT_PTR* args){
    return (INT_PTR)SHGetPropertyStoreForWindow((HWND)*(args + 0), (const IID * const)*(args + 1), (void**)*(args + 2));
}
INT_PTR WINAPI Shell_NotifyIconA_MWAI(INT_PTR* args){
    return (INT_PTR)Shell_NotifyIconA((DWORD)*(args + 0), (PNOTIFYICONDATAA)*(args + 1));
}
INT_PTR WINAPI Shell_NotifyIconW_MWAI(INT_PTR* args){
    return (INT_PTR)Shell_NotifyIconW((DWORD)*(args + 0), (PNOTIFYICONDATAW)*(args + 1));
}
INT_PTR WINAPI Shell_NotifyIconGetRect_MWAI(INT_PTR* args){
    return (INT_PTR)Shell_NotifyIconGetRect((const NOTIFYICONIDENTIFIER*)*(args + 0), (RECT*)*(args + 1));
}
INT_PTR WINAPI SHGetFileInfoA_MWAI(INT_PTR* args){
    return (INT_PTR)SHGetFileInfoA((LPCSTR)*(args + 0), (DWORD)*(args + 1), (SHFILEINFOA *)*(args + 2), (UINT)*(args + 3), (UINT)*(args + 4));
}
INT_PTR WINAPI SHGetFileInfoW_MWAI(INT_PTR* args){
    return (INT_PTR)SHGetFileInfoW((LPCWSTR)*(args + 0), (DWORD)*(args + 1), (SHFILEINFOW *)*(args + 2), (UINT)*(args + 3), (UINT)*(args + 4));
}
INT_PTR WINAPI SHGetStockIconInfo_MWAI(INT_PTR* args){
    return (INT_PTR)SHGetStockIconInfo((SHSTOCKICONID)*(args + 0), (UINT)*(args + 1), (SHSTOCKICONINFO *)*(args + 2));
}
INT_PTR WINAPI SHGetDiskFreeSpaceExA_MWAI(INT_PTR* args){
    return (INT_PTR)SHGetDiskFreeSpaceExA((LPCSTR)*(args + 0), (ULARGE_INTEGER*)*(args + 1), (ULARGE_INTEGER*)*(args + 2), (ULARGE_INTEGER*)*(args + 3));
}
INT_PTR WINAPI SHGetDiskFreeSpaceExW_MWAI(INT_PTR* args){
    return (INT_PTR)SHGetDiskFreeSpaceExW((LPCWSTR)*(args + 0), (ULARGE_INTEGER*)*(args + 1), (ULARGE_INTEGER*)*(args + 2), (ULARGE_INTEGER*)*(args + 3));
}
INT_PTR WINAPI SHGetNewLinkInfoA_MWAI(INT_PTR* args){
    return (INT_PTR)SHGetNewLinkInfoA((LPCSTR)*(args + 0), (LPCSTR)*(args + 1), (LPSTR)*(args + 2), (BOOL *)*(args + 3), (UINT)*(args + 4));
}
INT_PTR WINAPI SHGetNewLinkInfoW_MWAI(INT_PTR* args){
    return (INT_PTR)SHGetNewLinkInfoW((LPCWSTR)*(args + 0), (LPCWSTR)*(args + 1), (LPWSTR)*(args + 2), (BOOL *)*(args + 3), (UINT)*(args + 4));
}
INT_PTR WINAPI SHInvokePrinterCommandA_MWAI(INT_PTR* args){
    return (INT_PTR)SHInvokePrinterCommandA((HWND)*(args + 0), (UINT)*(args + 1), (LPCSTR)*(args + 2), (LPCSTR)*(args + 3), (BOOL)*(args + 4));
}
INT_PTR WINAPI SHInvokePrinterCommandW_MWAI(INT_PTR* args){
    return (INT_PTR)SHInvokePrinterCommandW((HWND)*(args + 0), (UINT)*(args + 1), (LPCWSTR)*(args + 2), (LPCWSTR)*(args + 3), (BOOL)*(args + 4));
}
INT_PTR WINAPI SHLoadNonloadedIconOverlayIdentifiers_MWAI(INT_PTR* args){
    return (INT_PTR)SHLoadNonloadedIconOverlayIdentifiers();
}
INT_PTR WINAPI SHIsFileAvailableOffline_MWAI(INT_PTR* args){
    return (INT_PTR)SHIsFileAvailableOffline((PCWSTR)*(args + 0), (DWORD *)*(args + 1));
}
INT_PTR WINAPI SHSetLocalizedName_MWAI(INT_PTR* args){
    return (INT_PTR)SHSetLocalizedName((PCWSTR)*(args + 0), (PCWSTR)*(args + 1), (int)*(args + 2));
}
INT_PTR WINAPI SHRemoveLocalizedName_MWAI(INT_PTR* args){
    return (INT_PTR)SHRemoveLocalizedName((PCWSTR)*(args + 0));
}
INT_PTR WINAPI SHGetLocalizedName_MWAI(INT_PTR* args){
    return (INT_PTR)SHGetLocalizedName((PCWSTR)*(args + 0), (PWSTR)*(args + 1), (UINT)*(args + 2), (int *)*(args + 3));
}
INT_PTR WINAPI IsLFNDriveA_MWAI(INT_PTR* args){
    return (INT_PTR)IsLFNDriveA((LPCSTR)*(args + 0));
}
INT_PTR WINAPI IsLFNDriveW_MWAI(INT_PTR* args){
    return (INT_PTR)IsLFNDriveW((LPCWSTR)*(args + 0));
}
INT_PTR WINAPI SHEnumerateUnreadMailAccountsW_MWAI(INT_PTR* args){
    return (INT_PTR)SHEnumerateUnreadMailAccountsW((HKEY)*(args + 0), (DWORD)*(args + 1), (LPWSTR)*(args + 2), (int)*(args + 3));
}
INT_PTR WINAPI SHGetUnreadMailCountW_MWAI(INT_PTR* args){
    return (INT_PTR)SHGetUnreadMailCountW((HKEY)*(args + 0), (LPCWSTR)*(args + 1), (DWORD *)*(args + 2), (FILETIME *)*(args + 3), (LPWSTR)*(args + 4), (int)*(args + 5));
}
INT_PTR WINAPI SHSetUnreadMailCountW_MWAI(INT_PTR* args){
    return (INT_PTR)SHSetUnreadMailCountW((LPCWSTR)*(args + 0), (DWORD)*(args + 1), (LPCWSTR)*(args + 2));
}
INT_PTR WINAPI SHTestTokenMembership_MWAI(INT_PTR* args){
    return (INT_PTR)SHTestTokenMembership((HANDLE)*(args + 0), (ULONG)*(args + 1));
}
INT_PTR WINAPI SHGetImageList_MWAI(INT_PTR* args){
    return (INT_PTR)SHGetImageList((int)*(args + 0), (const IID * const)*(args + 1), (void **)*(args + 2));
}
INT_PTR WINAPI InitNetworkAddressControl_MWAI(INT_PTR* args){
    return (INT_PTR)InitNetworkAddressControl();
}
INT_PTR WINAPI SHGetDriveMedia_MWAI(INT_PTR* args){
    return (INT_PTR)SHGetDriveMedia((PCWSTR)*(args + 0), (DWORD *)*(args + 1));
}
INT_PTR WINAPI accept_MWAI(INT_PTR* args){
    return (INT_PTR)accept((SOCKET)*(args + 0), (struct sockaddr  *)*(args + 1), (int  *)*(args + 2));
}
INT_PTR WINAPI bind_MWAI(INT_PTR* args){
    return (INT_PTR)bind((SOCKET)*(args + 0), (const struct sockaddr  *)*(args + 1), (int)*(args + 2));
}
INT_PTR WINAPI closesocket_MWAI(INT_PTR* args){
    return (INT_PTR)closesocket((SOCKET)*(args + 0));
}
INT_PTR WINAPI connect_MWAI(INT_PTR* args){
    return (INT_PTR)connect((SOCKET)*(args + 0), (const struct sockaddr  *)*(args + 1), (int)*(args + 2));
}
INT_PTR WINAPI ioctlsocket_MWAI(INT_PTR* args){
    return (INT_PTR)ioctlsocket((SOCKET)*(args + 0), (long)*(args + 1), (u_long  *)*(args + 2));
}
INT_PTR WINAPI getpeername_MWAI(INT_PTR* args){
    return (INT_PTR)getpeername((SOCKET)*(args + 0), (struct sockaddr  *)*(args + 1), (int  *)*(args + 2));
}
INT_PTR WINAPI getsockname_MWAI(INT_PTR* args){
    return (INT_PTR)getsockname((SOCKET)*(args + 0), (struct sockaddr  *)*(args + 1), (int  *)*(args + 2));
}
INT_PTR WINAPI getsockopt_MWAI(INT_PTR* args){
    return (INT_PTR)getsockopt((SOCKET)*(args + 0), (int)*(args + 1), (int)*(args + 2), (char  *)*(args + 3), (int  *)*(args + 4));
}
INT_PTR WINAPI htonl_MWAI(INT_PTR* args){
    return (INT_PTR)htonl((u_long)*(args + 0));
}
INT_PTR WINAPI htons_MWAI(INT_PTR* args){
    return (INT_PTR)htons((u_short)*(args + 0));
}
INT_PTR WINAPI inet_addr_MWAI(INT_PTR* args){
    return (INT_PTR)inet_addr((const char  *)*(args + 0));
}
INT_PTR WINAPI listen_MWAI(INT_PTR* args){
    return (INT_PTR)listen((SOCKET)*(args + 0), (int)*(args + 1));
}
INT_PTR WINAPI ntohl_MWAI(INT_PTR* args){
    return (INT_PTR)ntohl((u_long)*(args + 0));
}
INT_PTR WINAPI ntohs_MWAI(INT_PTR* args){
    return (INT_PTR)ntohs((u_short)*(args + 0));
}
INT_PTR WINAPI recv_MWAI(INT_PTR* args){
    return (INT_PTR)recv((SOCKET)*(args + 0), (char  *)*(args + 1), (int)*(args + 2), (int)*(args + 3));
}
INT_PTR WINAPI recvfrom_MWAI(INT_PTR* args){
    return (INT_PTR)recvfrom((SOCKET)*(args + 0), (char  *)*(args + 1), (int)*(args + 2), (int)*(args + 3), (struct sockaddr  *)*(args + 4), (int  *)*(args + 5));
}
INT_PTR WINAPI select_MWAI(INT_PTR* args){
    return (INT_PTR)select((int)*(args + 0), (fd_set  *)*(args + 1), (fd_set  *)*(args + 2), (fd_set  *)*(args + 3), (const struct timeval  *)*(args + 4));
}
INT_PTR WINAPI send_MWAI(INT_PTR* args){
    return (INT_PTR)send((SOCKET)*(args + 0), (const char  *)*(args + 1), (int)*(args + 2), (int)*(args + 3));
}
INT_PTR WINAPI sendto_MWAI(INT_PTR* args){
    return (INT_PTR)sendto((SOCKET)*(args + 0), (const char  *)*(args + 1), (int)*(args + 2), (int)*(args + 3), (const struct sockaddr  *)*(args + 4), (int)*(args + 5));
}
INT_PTR WINAPI setsockopt_MWAI(INT_PTR* args){
    return (INT_PTR)setsockopt((SOCKET)*(args + 0), (int)*(args + 1), (int)*(args + 2), (const char  *)*(args + 3), (int)*(args + 4));
}
INT_PTR WINAPI shutdown_MWAI(INT_PTR* args){
    return (INT_PTR)shutdown((SOCKET)*(args + 0), (int)*(args + 1));
}
INT_PTR WINAPI socket_MWAI(INT_PTR* args){
    return (INT_PTR)socket((int)*(args + 0), (int)*(args + 1), (int)*(args + 2));
}
INT_PTR WINAPI gethostbyaddr_MWAI(INT_PTR* args){
    return (INT_PTR)gethostbyaddr((const char  *)*(args + 0), (int)*(args + 1), (int)*(args + 2));
}
INT_PTR WINAPI gethostbyname_MWAI(INT_PTR* args){
    return (INT_PTR)gethostbyname((const char  *)*(args + 0));
}
INT_PTR WINAPI gethostname_MWAI(INT_PTR* args){
    return (INT_PTR)gethostname((char  *)*(args + 0), (int)*(args + 1));
}
INT_PTR WINAPI getservbyport_MWAI(INT_PTR* args){
    return (INT_PTR)getservbyport((int)*(args + 0), (const char  *)*(args + 1));
}
INT_PTR WINAPI getservbyname_MWAI(INT_PTR* args){
    return (INT_PTR)getservbyname((const char  *)*(args + 0), (const char  *)*(args + 1));
}
INT_PTR WINAPI getprotobynumber_MWAI(INT_PTR* args){
    return (INT_PTR)getprotobynumber((int)*(args + 0));
}
INT_PTR WINAPI getprotobyname_MWAI(INT_PTR* args){
    return (INT_PTR)getprotobyname((const char  *)*(args + 0));
}
INT_PTR WINAPI WSAStartup_MWAI(INT_PTR* args){
    return (INT_PTR)WSAStartup((WORD)*(args + 0), (LPWSADATA)*(args + 1));
}
INT_PTR WINAPI WSACleanup_MWAI(INT_PTR* args){
    return (INT_PTR)WSACleanup();
}
INT_PTR WINAPI WSASetLastError_MWAI(INT_PTR* args){
    WSASetLastError((int)*(args + 0));
    return 0;
}
INT_PTR WINAPI WSAGetLastError_MWAI(INT_PTR* args){
    return (INT_PTR)WSAGetLastError();
}
INT_PTR WINAPI WSAIsBlocking_MWAI(INT_PTR* args){
    return (INT_PTR)WSAIsBlocking();
}
INT_PTR WINAPI WSAUnhookBlockingHook_MWAI(INT_PTR* args){
    return (INT_PTR)WSAUnhookBlockingHook();
}
INT_PTR WINAPI WSASetBlockingHook_MWAI(INT_PTR* args){
    return (INT_PTR)WSASetBlockingHook((FARPROC)*(args + 0));
}
INT_PTR WINAPI WSACancelBlockingCall_MWAI(INT_PTR* args){
    return (INT_PTR)WSACancelBlockingCall();
}
INT_PTR WINAPI WSAAsyncGetServByName_MWAI(INT_PTR* args){
    return (INT_PTR)WSAAsyncGetServByName((HWND)*(args + 0), (u_int)*(args + 1), (const char  *)*(args + 2), (const char  *)*(args + 3), (char  *)*(args + 4), (int)*(args + 5));
}
INT_PTR WINAPI WSAAsyncGetServByPort_MWAI(INT_PTR* args){
    return (INT_PTR)WSAAsyncGetServByPort((HWND)*(args + 0), (u_int)*(args + 1), (int)*(args + 2), (const char  *)*(args + 3), (char  *)*(args + 4), (int)*(args + 5));
}
INT_PTR WINAPI WSAAsyncGetProtoByName_MWAI(INT_PTR* args){
    return (INT_PTR)WSAAsyncGetProtoByName((HWND)*(args + 0), (u_int)*(args + 1), (const char  *)*(args + 2), (char  *)*(args + 3), (int)*(args + 4));
}
INT_PTR WINAPI WSAAsyncGetProtoByNumber_MWAI(INT_PTR* args){
    return (INT_PTR)WSAAsyncGetProtoByNumber((HWND)*(args + 0), (u_int)*(args + 1), (int)*(args + 2), (char  *)*(args + 3), (int)*(args + 4));
}
INT_PTR WINAPI WSAAsyncGetHostByName_MWAI(INT_PTR* args){
    return (INT_PTR)WSAAsyncGetHostByName((HWND)*(args + 0), (u_int)*(args + 1), (const char  *)*(args + 2), (char  *)*(args + 3), (int)*(args + 4));
}
INT_PTR WINAPI WSAAsyncGetHostByAddr_MWAI(INT_PTR* args){
    return (INT_PTR)WSAAsyncGetHostByAddr((HWND)*(args + 0), (u_int)*(args + 1), (const char  *)*(args + 2), (int)*(args + 3), (int)*(args + 4), (char  *)*(args + 5), (int)*(args + 6));
}
INT_PTR WINAPI WSACancelAsyncRequest_MWAI(INT_PTR* args){
    return (INT_PTR)WSACancelAsyncRequest((HANDLE)*(args + 0));
}
INT_PTR WINAPI WSAAsyncSelect_MWAI(INT_PTR* args){
    return (INT_PTR)WSAAsyncSelect((SOCKET)*(args + 0), (HWND)*(args + 1), (u_int)*(args + 2), (long)*(args + 3));
}
INT_PTR WINAPI CryptAcquireContextA_MWAI(INT_PTR* args){
    return (INT_PTR)CryptAcquireContextA((HCRYPTPROV  *)*(args + 0), (LPCSTR)*(args + 1), (LPCSTR)*(args + 2), (DWORD)*(args + 3), (DWORD)*(args + 4));
}
INT_PTR WINAPI CryptAcquireContextW_MWAI(INT_PTR* args){
    return (INT_PTR)CryptAcquireContextW((HCRYPTPROV  *)*(args + 0), (LPCWSTR)*(args + 1), (LPCWSTR)*(args + 2), (DWORD)*(args + 3), (DWORD)*(args + 4));
}
INT_PTR WINAPI CryptReleaseContext_MWAI(INT_PTR* args){
    return (INT_PTR)CryptReleaseContext((HCRYPTPROV)*(args + 0), (DWORD)*(args + 1));
}
INT_PTR WINAPI CryptGenKey_MWAI(INT_PTR* args){
    return (INT_PTR)CryptGenKey((HCRYPTPROV)*(args + 0), (ALG_ID)*(args + 1), (DWORD)*(args + 2), (HCRYPTKEY   *)*(args + 3));
}
INT_PTR WINAPI CryptDeriveKey_MWAI(INT_PTR* args){
    return (INT_PTR)CryptDeriveKey((HCRYPTPROV)*(args + 0), (ALG_ID)*(args + 1), (HCRYPTHASH)*(args + 2), (DWORD)*(args + 3), (HCRYPTKEY   *)*(args + 4));
}
INT_PTR WINAPI CryptDestroyKey_MWAI(INT_PTR* args){
    return (INT_PTR)CryptDestroyKey((HCRYPTKEY)*(args + 0));
}
INT_PTR WINAPI CryptSetKeyParam_MWAI(INT_PTR* args){
    return (INT_PTR)CryptSetKeyParam((HCRYPTKEY)*(args + 0), (DWORD)*(args + 1), (const BYTE  *)*(args + 2), (DWORD)*(args + 3));
}
INT_PTR WINAPI CryptGetKeyParam_MWAI(INT_PTR* args){
    return (INT_PTR)CryptGetKeyParam((HCRYPTKEY)*(args + 0), (DWORD)*(args + 1), (BYTE    *)*(args + 2), (DWORD   *)*(args + 3), (DWORD)*(args + 4));
}
INT_PTR WINAPI CryptSetHashParam_MWAI(INT_PTR* args){
    return (INT_PTR)CryptSetHashParam((HCRYPTHASH)*(args + 0), (DWORD)*(args + 1), (const BYTE  *)*(args + 2), (DWORD)*(args + 3));
}
INT_PTR WINAPI CryptGetHashParam_MWAI(INT_PTR* args){
    return (INT_PTR)CryptGetHashParam((HCRYPTHASH)*(args + 0), (DWORD)*(args + 1), (BYTE    *)*(args + 2), (DWORD   *)*(args + 3), (DWORD)*(args + 4));
}
INT_PTR WINAPI CryptSetProvParam_MWAI(INT_PTR* args){
    return (INT_PTR)CryptSetProvParam((HCRYPTPROV)*(args + 0), (DWORD)*(args + 1), (const BYTE  *)*(args + 2), (DWORD)*(args + 3));
}
INT_PTR WINAPI CryptGetProvParam_MWAI(INT_PTR* args){
    return (INT_PTR)CryptGetProvParam((HCRYPTPROV)*(args + 0), (DWORD)*(args + 1), (BYTE    *)*(args + 2), (DWORD   *)*(args + 3), (DWORD)*(args + 4));
}
INT_PTR WINAPI CryptGenRandom_MWAI(INT_PTR* args){
    return (INT_PTR)CryptGenRandom((HCRYPTPROV)*(args + 0), (DWORD)*(args + 1), (BYTE    *)*(args + 2));
}
INT_PTR WINAPI CryptGetUserKey_MWAI(INT_PTR* args){
    return (INT_PTR)CryptGetUserKey((HCRYPTPROV)*(args + 0), (DWORD)*(args + 1), (HCRYPTKEY   *)*(args + 2));
}
INT_PTR WINAPI CryptExportKey_MWAI(INT_PTR* args){
    return (INT_PTR)CryptExportKey((HCRYPTKEY)*(args + 0), (HCRYPTKEY)*(args + 1), (DWORD)*(args + 2), (DWORD)*(args + 3), (BYTE    *)*(args + 4), (DWORD   *)*(args + 5));
}
INT_PTR WINAPI CryptImportKey_MWAI(INT_PTR* args){
    return (INT_PTR)CryptImportKey((HCRYPTPROV)*(args + 0), (const BYTE  *)*(args + 1), (DWORD)*(args + 2), (HCRYPTKEY)*(args + 3), (DWORD)*(args + 4), (HCRYPTKEY   *)*(args + 5));
}
INT_PTR WINAPI CryptEncrypt_MWAI(INT_PTR* args){
    return (INT_PTR)CryptEncrypt((HCRYPTKEY)*(args + 0), (HCRYPTHASH)*(args + 1), (BOOL)*(args + 2), (DWORD)*(args + 3), (BYTE    *)*(args + 4), (DWORD   *)*(args + 5), (DWORD)*(args + 6));
}
INT_PTR WINAPI CryptDecrypt_MWAI(INT_PTR* args){
    return (INT_PTR)CryptDecrypt((HCRYPTKEY)*(args + 0), (HCRYPTHASH)*(args + 1), (BOOL)*(args + 2), (DWORD)*(args + 3), (BYTE        *)*(args + 4), (DWORD       *)*(args + 5));
}
INT_PTR WINAPI CryptCreateHash_MWAI(INT_PTR* args){
    return (INT_PTR)CryptCreateHash((HCRYPTPROV)*(args + 0), (ALG_ID)*(args + 1), (HCRYPTKEY)*(args + 2), (DWORD)*(args + 3), (HCRYPTHASH  *)*(args + 4));
}
INT_PTR WINAPI CryptHashData_MWAI(INT_PTR* args){
    return (INT_PTR)CryptHashData((HCRYPTHASH)*(args + 0), (const BYTE  *)*(args + 1), (DWORD)*(args + 2), (DWORD)*(args + 3));
}
INT_PTR WINAPI CryptHashSessionKey_MWAI(INT_PTR* args){
    return (INT_PTR)CryptHashSessionKey((HCRYPTHASH)*(args + 0), (HCRYPTKEY)*(args + 1), (DWORD)*(args + 2));
}
INT_PTR WINAPI CryptDestroyHash_MWAI(INT_PTR* args){
    return (INT_PTR)CryptDestroyHash((HCRYPTHASH)*(args + 0));
}
INT_PTR WINAPI CryptSignHashA_MWAI(INT_PTR* args){
    return (INT_PTR)CryptSignHashA((HCRYPTHASH)*(args + 0), (DWORD)*(args + 1), (LPCSTR)*(args + 2), (DWORD)*(args + 3), (BYTE        *)*(args + 4), (DWORD       *)*(args + 5));
}
INT_PTR WINAPI CryptSignHashW_MWAI(INT_PTR* args){
    return (INT_PTR)CryptSignHashW((HCRYPTHASH)*(args + 0), (DWORD)*(args + 1), (LPCWSTR)*(args + 2), (DWORD)*(args + 3), (BYTE        *)*(args + 4), (DWORD       *)*(args + 5));
}
INT_PTR WINAPI CryptVerifySignatureA_MWAI(INT_PTR* args){
    return (INT_PTR)CryptVerifySignatureA((HCRYPTHASH)*(args + 0), (const BYTE  *)*(args + 1), (DWORD)*(args + 2), (HCRYPTKEY)*(args + 3), (LPCSTR)*(args + 4), (DWORD)*(args + 5));
}
INT_PTR WINAPI CryptVerifySignatureW_MWAI(INT_PTR* args){
    return (INT_PTR)CryptVerifySignatureW((HCRYPTHASH)*(args + 0), (const BYTE  *)*(args + 1), (DWORD)*(args + 2), (HCRYPTKEY)*(args + 3), (LPCWSTR)*(args + 4), (DWORD)*(args + 5));
}
INT_PTR WINAPI CryptSetProviderA_MWAI(INT_PTR* args){
    return (INT_PTR)CryptSetProviderA((LPCSTR)*(args + 0), (DWORD)*(args + 1));
}
INT_PTR WINAPI CryptSetProviderW_MWAI(INT_PTR* args){
    return (INT_PTR)CryptSetProviderW((LPCWSTR)*(args + 0), (DWORD)*(args + 1));
}
INT_PTR WINAPI CryptSetProviderExA_MWAI(INT_PTR* args){
    return (INT_PTR)CryptSetProviderExA((LPCSTR)*(args + 0), (DWORD)*(args + 1), (DWORD *)*(args + 2), (DWORD)*(args + 3));
}
INT_PTR WINAPI CryptSetProviderExW_MWAI(INT_PTR* args){
    return (INT_PTR)CryptSetProviderExW((LPCWSTR)*(args + 0), (DWORD)*(args + 1), (DWORD *)*(args + 2), (DWORD)*(args + 3));
}
INT_PTR WINAPI CryptGetDefaultProviderA_MWAI(INT_PTR* args){
    return (INT_PTR)CryptGetDefaultProviderA((DWORD)*(args + 0), (DWORD   *)*(args + 1), (DWORD)*(args + 2), (LPSTR)*(args + 3), (DWORD   *)*(args + 4));
}
INT_PTR WINAPI CryptGetDefaultProviderW_MWAI(INT_PTR* args){
    return (INT_PTR)CryptGetDefaultProviderW((DWORD)*(args + 0), (DWORD   *)*(args + 1), (DWORD)*(args + 2), (LPWSTR)*(args + 3), (DWORD   *)*(args + 4));
}
INT_PTR WINAPI CryptEnumProviderTypesA_MWAI(INT_PTR* args){
    return (INT_PTR)CryptEnumProviderTypesA((DWORD)*(args + 0), (DWORD   *)*(args + 1), (DWORD)*(args + 2), (DWORD   *)*(args + 3), (LPSTR)*(args + 4), (DWORD   *)*(args + 5));
}
INT_PTR WINAPI CryptEnumProviderTypesW_MWAI(INT_PTR* args){
    return (INT_PTR)CryptEnumProviderTypesW((DWORD)*(args + 0), (DWORD   *)*(args + 1), (DWORD)*(args + 2), (DWORD   *)*(args + 3), (LPWSTR)*(args + 4), (DWORD   *)*(args + 5));
}
INT_PTR WINAPI CryptEnumProvidersA_MWAI(INT_PTR* args){
    return (INT_PTR)CryptEnumProvidersA((DWORD)*(args + 0), (DWORD   *)*(args + 1), (DWORD)*(args + 2), (DWORD   *)*(args + 3), (LPSTR)*(args + 4), (DWORD   *)*(args + 5));
}
INT_PTR WINAPI CryptEnumProvidersW_MWAI(INT_PTR* args){
    return (INT_PTR)CryptEnumProvidersW((DWORD)*(args + 0), (DWORD   *)*(args + 1), (DWORD)*(args + 2), (DWORD   *)*(args + 3), (LPWSTR)*(args + 4), (DWORD   *)*(args + 5));
}
INT_PTR WINAPI CryptContextAddRef_MWAI(INT_PTR* args){
    return (INT_PTR)CryptContextAddRef((HCRYPTPROV)*(args + 0), (DWORD       *)*(args + 1), (DWORD)*(args + 2));
}
INT_PTR WINAPI CryptDuplicateKey_MWAI(INT_PTR* args){
    return (INT_PTR)CryptDuplicateKey((HCRYPTKEY)*(args + 0), (DWORD   *)*(args + 1), (DWORD)*(args + 2), (HCRYPTKEY   *)*(args + 3));
}
INT_PTR WINAPI CryptDuplicateHash_MWAI(INT_PTR* args){
    return (INT_PTR)CryptDuplicateHash((HCRYPTHASH)*(args + 0), (DWORD       *)*(args + 1), (DWORD)*(args + 2), (HCRYPTHASH  *)*(args + 3));
}
INT_PTR WINAPI QueryUsersOnEncryptedFile_MWAI(INT_PTR* args){
    return (INT_PTR)QueryUsersOnEncryptedFile((LPCWSTR)*(args + 0), (PENCRYPTION_CERTIFICATE_HASH_LIST      *)*(args + 1));
}
INT_PTR WINAPI QueryRecoveryAgentsOnEncryptedFile_MWAI(INT_PTR* args){
    return (INT_PTR)QueryRecoveryAgentsOnEncryptedFile((LPCWSTR)*(args + 0), (PENCRYPTION_CERTIFICATE_HASH_LIST      *)*(args + 1));
}
INT_PTR WINAPI RemoveUsersFromEncryptedFile_MWAI(INT_PTR* args){
    return (INT_PTR)RemoveUsersFromEncryptedFile((LPCWSTR)*(args + 0), (PENCRYPTION_CERTIFICATE_HASH_LIST)*(args + 1));
}
INT_PTR WINAPI AddUsersToEncryptedFile_MWAI(INT_PTR* args){
    return (INT_PTR)AddUsersToEncryptedFile((LPCWSTR)*(args + 0), (PENCRYPTION_CERTIFICATE_LIST)*(args + 1));
}
INT_PTR WINAPI SetUserFileEncryptionKey_MWAI(INT_PTR* args){
    return (INT_PTR)SetUserFileEncryptionKey((PENCRYPTION_CERTIFICATE)*(args + 0));
}
INT_PTR WINAPI SetUserFileEncryptionKeyEx_MWAI(INT_PTR* args){
    return (INT_PTR)SetUserFileEncryptionKeyEx((PENCRYPTION_CERTIFICATE)*(args + 0), (DWORD)*(args + 1), (DWORD)*(args + 2), (LPVOID)*(args + 3));
}
INT_PTR WINAPI FreeEncryptionCertificateHashList_MWAI(INT_PTR* args){
    FreeEncryptionCertificateHashList((PENCRYPTION_CERTIFICATE_HASH_LIST)*(args + 0));
    return 0;
}
INT_PTR WINAPI EncryptionDisable_MWAI(INT_PTR* args){
    return (INT_PTR)EncryptionDisable((LPCWSTR)*(args + 0), (BOOL)*(args + 1));
}
INT_PTR WINAPI DuplicateEncryptionInfoFile_MWAI(INT_PTR* args){
    return (INT_PTR)DuplicateEncryptionInfoFile((LPCWSTR)*(args + 0), (LPCWSTR)*(args + 1), (DWORD)*(args + 2), (DWORD)*(args + 3), (const LPSECURITY_ATTRIBUTES)*(args + 4));
}
INT_PTR WINAPI GetEncryptedFileMetadata_MWAI(INT_PTR* args){
    return (INT_PTR)GetEncryptedFileMetadata((LPCWSTR)*(args + 0), (PDWORD)*(args + 1), (PBYTE      *)*(args + 2));
}
INT_PTR WINAPI SetEncryptedFileMetadata_MWAI(INT_PTR* args){
    return (INT_PTR)SetEncryptedFileMetadata((LPCWSTR)*(args + 0), (PBYTE)*(args + 1), (PBYTE)*(args + 2), (PENCRYPTION_CERTIFICATE_HASH)*(args + 3), (DWORD)*(args + 4), (PENCRYPTION_CERTIFICATE_HASH_LIST)*(args + 5));
}
INT_PTR WINAPI FreeEncryptedFileMetadata_MWAI(INT_PTR* args){
    FreeEncryptedFileMetadata((PBYTE)*(args + 0));
    return 0;
}
INT_PTR WINAPI CreatePropertySheetPageA_MWAI(INT_PTR* args){
    return (INT_PTR)CreatePropertySheetPageA((LPCPROPSHEETPAGEA)*(args + 0));
}
INT_PTR WINAPI CreatePropertySheetPageW_MWAI(INT_PTR* args){
    return (INT_PTR)CreatePropertySheetPageW((LPCPROPSHEETPAGEW)*(args + 0));
}
INT_PTR WINAPI DestroyPropertySheetPage_MWAI(INT_PTR* args){
    return (INT_PTR)DestroyPropertySheetPage((HPROPSHEETPAGE)*(args + 0));
}
INT_PTR WINAPI PropertySheetA_MWAI(INT_PTR* args){
    return (INT_PTR)PropertySheetA((LPCPROPSHEETHEADERA)*(args + 0));
}
INT_PTR WINAPI PropertySheetW_MWAI(INT_PTR* args){
    return (INT_PTR)PropertySheetW((LPCPROPSHEETHEADERW)*(args + 0));
}
INT_PTR WINAPI CoGetMalloc_MWAI(INT_PTR* args){
    return (INT_PTR)CoGetMalloc((DWORD)*(args + 0), (LPMALLOC   *)*(args + 1));
}
INT_PTR WINAPI CreateStreamOnHGlobal_MWAI(INT_PTR* args){
    return (INT_PTR)CreateStreamOnHGlobal((HGLOBAL)*(args + 0), (BOOL)*(args + 1), (LPSTREAM   *)*(args + 2));
}
INT_PTR WINAPI GetHGlobalFromStream_MWAI(INT_PTR* args){
    return (INT_PTR)GetHGlobalFromStream((LPSTREAM)*(args + 0), (HGLOBAL   *)*(args + 1));
}
INT_PTR WINAPI CoUninitialize_MWAI(INT_PTR* args){
    CoUninitialize();
    return 0;
}
INT_PTR WINAPI CoGetCurrentProcess_MWAI(INT_PTR* args){
    return (INT_PTR)CoGetCurrentProcess();
}
INT_PTR WINAPI CoInitializeEx_MWAI(INT_PTR* args){
    return (INT_PTR)CoInitializeEx((LPVOID)*(args + 0), (DWORD)*(args + 1));
}
INT_PTR WINAPI CoGetCallerTID_MWAI(INT_PTR* args){
    return (INT_PTR)CoGetCallerTID((LPDWORD)*(args + 0));
}
INT_PTR WINAPI CoGetCurrentLogicalThreadId_MWAI(INT_PTR* args){
    return (INT_PTR)CoGetCurrentLogicalThreadId((GUID*)*(args + 0));
}
INT_PTR WINAPI CoGetContextToken_MWAI(INT_PTR* args){
    return (INT_PTR)CoGetContextToken((ULONG_PTR*)*(args + 0));
}
INT_PTR WINAPI CoGetDefaultContext_MWAI(INT_PTR* args){
    return (INT_PTR)CoGetDefaultContext((APTTYPE)*(args + 0), (const IID * const)*(args + 1), (void**)*(args + 2));
}
INT_PTR WINAPI CoGetApartmentType_MWAI(INT_PTR* args){
    return (INT_PTR)CoGetApartmentType((APTTYPE*)*(args + 0), (APTTYPEQUALIFIER*)*(args + 1));
}
INT_PTR WINAPI CoDecodeProxy_MWAI(INT_PTR* args){
    return (INT_PTR)CoDecodeProxy((DWORD)*(args + 0), (UINT64)*(args + 1), (PServerInformation)*(args + 2));
}
INT_PTR WINAPI CoIncrementMTAUsage_MWAI(INT_PTR* args){
    return (INT_PTR)CoIncrementMTAUsage((CO_MTA_USAGE_COOKIE*)*(args + 0));
}
INT_PTR WINAPI CoDecrementMTAUsage_MWAI(INT_PTR* args){
    return (INT_PTR)CoDecrementMTAUsage((CO_MTA_USAGE_COOKIE)*(args + 0));
}
INT_PTR WINAPI CoAllowUnmarshalerCLSID_MWAI(INT_PTR* args){
    return (INT_PTR)CoAllowUnmarshalerCLSID((const IID * const)*(args + 0));
}
INT_PTR WINAPI CoGetObjectContext_MWAI(INT_PTR* args){
    return (INT_PTR)CoGetObjectContext((const IID * const)*(args + 0), (LPVOID   *)*(args + 1));
}
INT_PTR WINAPI CoGetClassObject_MWAI(INT_PTR* args){
    return (INT_PTR)CoGetClassObject((const IID * const)*(args + 0), (DWORD)*(args + 1), (LPVOID)*(args + 2), (const IID * const)*(args + 3), (LPVOID   *)*(args + 4));
}
INT_PTR WINAPI CoRegisterClassObject_MWAI(INT_PTR* args){
    return (INT_PTR)CoRegisterClassObject((const IID * const)*(args + 0), (LPUNKNOWN)*(args + 1), (DWORD)*(args + 2), (DWORD)*(args + 3), (LPDWORD)*(args + 4));
}
INT_PTR WINAPI CoRevokeClassObject_MWAI(INT_PTR* args){
    return (INT_PTR)CoRevokeClassObject((DWORD)*(args + 0));
}
INT_PTR WINAPI CoResumeClassObjects_MWAI(INT_PTR* args){
    return (INT_PTR)CoResumeClassObjects();
}
INT_PTR WINAPI CoSuspendClassObjects_MWAI(INT_PTR* args){
    return (INT_PTR)CoSuspendClassObjects();
}
INT_PTR WINAPI CoAddRefServerProcess_MWAI(INT_PTR* args){
    return (INT_PTR)CoAddRefServerProcess();
}
INT_PTR WINAPI CoReleaseServerProcess_MWAI(INT_PTR* args){
    return (INT_PTR)CoReleaseServerProcess();
}
INT_PTR WINAPI CoGetPSClsid_MWAI(INT_PTR* args){
    return (INT_PTR)CoGetPSClsid((const IID * const)*(args + 0), (CLSID*)*(args + 1));
}
INT_PTR WINAPI CoRegisterPSClsid_MWAI(INT_PTR* args){
    return (INT_PTR)CoRegisterPSClsid((const IID * const)*(args + 0), (const IID * const)*(args + 1));
}
INT_PTR WINAPI CoRegisterSurrogate_MWAI(INT_PTR* args){
    return (INT_PTR)CoRegisterSurrogate((LPSURROGATE)*(args + 0));
}
INT_PTR WINAPI CoGetMarshalSizeMax_MWAI(INT_PTR* args){
    return (INT_PTR)CoGetMarshalSizeMax((ULONG*)*(args + 0), (const IID * const)*(args + 1), (LPUNKNOWN)*(args + 2), (DWORD)*(args + 3), (LPVOID)*(args + 4), (DWORD)*(args + 5));
}
INT_PTR WINAPI CoMarshalInterface_MWAI(INT_PTR* args){
    return (INT_PTR)CoMarshalInterface((LPSTREAM)*(args + 0), (const IID * const)*(args + 1), (LPUNKNOWN)*(args + 2), (DWORD)*(args + 3), (LPVOID)*(args + 4), (DWORD)*(args + 5));
}
INT_PTR WINAPI CoUnmarshalInterface_MWAI(INT_PTR* args){
    return (INT_PTR)CoUnmarshalInterface((LPSTREAM)*(args + 0), (const IID * const)*(args + 1), (LPVOID   *)*(args + 2));
}
INT_PTR WINAPI CoMarshalHresult_MWAI(INT_PTR* args){
    return (INT_PTR)CoMarshalHresult((LPSTREAM)*(args + 0), (HRESULT)*(args + 1));
}
INT_PTR WINAPI CoUnmarshalHresult_MWAI(INT_PTR* args){
    return (INT_PTR)CoUnmarshalHresult((LPSTREAM)*(args + 0), (HRESULT   *)*(args + 1));
}
INT_PTR WINAPI CoReleaseMarshalData_MWAI(INT_PTR* args){
    return (INT_PTR)CoReleaseMarshalData((LPSTREAM)*(args + 0));
}
INT_PTR WINAPI CoDisconnectObject_MWAI(INT_PTR* args){
    return (INT_PTR)CoDisconnectObject((LPUNKNOWN)*(args + 0), (DWORD)*(args + 1));
}
INT_PTR WINAPI CoLockObjectExternal_MWAI(INT_PTR* args){
    return (INT_PTR)CoLockObjectExternal((LPUNKNOWN)*(args + 0), (BOOL)*(args + 1), (BOOL)*(args + 2));
}
INT_PTR WINAPI CoGetStandardMarshal_MWAI(INT_PTR* args){
    return (INT_PTR)CoGetStandardMarshal((const IID * const)*(args + 0), (LPUNKNOWN)*(args + 1), (DWORD)*(args + 2), (LPVOID)*(args + 3), (DWORD)*(args + 4), (LPMARSHAL   *)*(args + 5));
}
INT_PTR WINAPI CoGetStdMarshalEx_MWAI(INT_PTR* args){
    return (INT_PTR)CoGetStdMarshalEx((LPUNKNOWN)*(args + 0), (DWORD)*(args + 1), (LPUNKNOWN   *)*(args + 2));
}
INT_PTR WINAPI CoIsHandlerConnected_MWAI(INT_PTR* args){
    return (INT_PTR)CoIsHandlerConnected((LPUNKNOWN)*(args + 0));
}
INT_PTR WINAPI CoMarshalInterThreadInterfaceInStream_MWAI(INT_PTR* args){
    return (INT_PTR)CoMarshalInterThreadInterfaceInStream((const IID * const)*(args + 0), (LPUNKNOWN)*(args + 1), (LPSTREAM*)*(args + 2));
}
INT_PTR WINAPI CoGetInterfaceAndReleaseStream_MWAI(INT_PTR* args){
    return (INT_PTR)CoGetInterfaceAndReleaseStream((LPSTREAM)*(args + 0), (const IID * const)*(args + 1), (LPVOID   *)*(args + 2));
}
INT_PTR WINAPI CoCreateFreeThreadedMarshaler_MWAI(INT_PTR* args){
    return (INT_PTR)CoCreateFreeThreadedMarshaler((LPUNKNOWN)*(args + 0), (LPUNKNOWN*)*(args + 1));
}
INT_PTR WINAPI CoFreeUnusedLibraries_MWAI(INT_PTR* args){
    CoFreeUnusedLibraries();
    return 0;
}
INT_PTR WINAPI CoFreeUnusedLibrariesEx_MWAI(INT_PTR* args){
    CoFreeUnusedLibrariesEx((DWORD)*(args + 0), (DWORD)*(args + 1));
    return 0;
}
INT_PTR WINAPI CoDisconnectContext_MWAI(INT_PTR* args){
    return (INT_PTR)CoDisconnectContext((DWORD)*(args + 0));
}
INT_PTR WINAPI CoInitializeSecurity_MWAI(INT_PTR* args){
    return (INT_PTR)CoInitializeSecurity((PSECURITY_DESCRIPTOR)*(args + 0), (LONG)*(args + 1), (SOLE_AUTHENTICATION_SERVICE*)*(args + 2), (void*)*(args + 3), (DWORD)*(args + 4), (DWORD)*(args + 5), (void*)*(args + 6), (DWORD)*(args + 7), (void*)*(args + 8));
}
INT_PTR WINAPI CoGetCallContext_MWAI(INT_PTR* args){
    return (INT_PTR)CoGetCallContext((const IID * const)*(args + 0), (void**)*(args + 1));
}
INT_PTR WINAPI CoQueryProxyBlanket_MWAI(INT_PTR* args){
    return (INT_PTR)CoQueryProxyBlanket((IUnknown*)*(args + 0), (DWORD*)*(args + 1), (DWORD*)*(args + 2), (LPOLESTR*)*(args + 3), (DWORD*)*(args + 4), (DWORD*)*(args + 5), (RPC_AUTH_IDENTITY_HANDLE*)*(args + 6), (DWORD*)*(args + 7));
}
INT_PTR WINAPI CoSetProxyBlanket_MWAI(INT_PTR* args){
    return (INT_PTR)CoSetProxyBlanket((IUnknown*)*(args + 0), (DWORD)*(args + 1), (DWORD)*(args + 2), (OLECHAR*)*(args + 3), (DWORD)*(args + 4), (DWORD)*(args + 5), (RPC_AUTH_IDENTITY_HANDLE)*(args + 6), (DWORD)*(args + 7));
}
INT_PTR WINAPI CoCopyProxy_MWAI(INT_PTR* args){
    return (INT_PTR)CoCopyProxy((IUnknown*)*(args + 0), (IUnknown**)*(args + 1));
}
INT_PTR WINAPI CoQueryClientBlanket_MWAI(INT_PTR* args){
    return (INT_PTR)CoQueryClientBlanket((DWORD*)*(args + 0), (DWORD*)*(args + 1), (LPOLESTR*)*(args + 2), (DWORD*)*(args + 3), (DWORD*)*(args + 4), (RPC_AUTHZ_HANDLE*)*(args + 5), (DWORD*)*(args + 6));
}
INT_PTR WINAPI CoImpersonateClient_MWAI(INT_PTR* args){
    return (INT_PTR)CoImpersonateClient();
}
INT_PTR WINAPI CoRevertToSelf_MWAI(INT_PTR* args){
    return (INT_PTR)CoRevertToSelf();
}
INT_PTR WINAPI CoQueryAuthenticationServices_MWAI(INT_PTR* args){
    return (INT_PTR)CoQueryAuthenticationServices((DWORD*)*(args + 0), (SOLE_AUTHENTICATION_SERVICE**)*(args + 1));
}
INT_PTR WINAPI CoSwitchCallContext_MWAI(INT_PTR* args){
    return (INT_PTR)CoSwitchCallContext((IUnknown*)*(args + 0), (IUnknown**)*(args + 1));
}
INT_PTR WINAPI CoCreateInstance_MWAI(INT_PTR* args){
    return (INT_PTR)CoCreateInstance((const IID * const)*(args + 0), (LPUNKNOWN)*(args + 1), (DWORD)*(args + 2), (const IID * const)*(args + 3), (LPVOID   *)*(args + 4));
}
INT_PTR WINAPI CoCreateInstanceEx_MWAI(INT_PTR* args){
    return (INT_PTR)CoCreateInstanceEx((const IID * const)*(args + 0), (IUnknown*)*(args + 1), (DWORD)*(args + 2), (COSERVERINFO*)*(args + 3), (DWORD)*(args + 4), (MULTI_QI*)*(args + 5));
}
INT_PTR WINAPI CoCreateInstanceFromApp_MWAI(INT_PTR* args){
    return (INT_PTR)CoCreateInstanceFromApp((const IID * const)*(args + 0), (IUnknown*)*(args + 1), (DWORD)*(args + 2), (PVOID)*(args + 3), (DWORD)*(args + 4), (MULTI_QI*)*(args + 5));
}
INT_PTR WINAPI CoRegisterActivationFilter_MWAI(INT_PTR* args){
    return (INT_PTR)CoRegisterActivationFilter((IActivationFilter*)*(args + 0));
}
INT_PTR WINAPI CoGetCancelObject_MWAI(INT_PTR* args){
    return (INT_PTR)CoGetCancelObject((DWORD)*(args + 0), (const IID * const)*(args + 1), (void**)*(args + 2));
}
INT_PTR WINAPI CoSetCancelObject_MWAI(INT_PTR* args){
    return (INT_PTR)CoSetCancelObject((IUnknown*)*(args + 0));
}
INT_PTR WINAPI CoCancelCall_MWAI(INT_PTR* args){
    return (INT_PTR)CoCancelCall((DWORD)*(args + 0), (ULONG)*(args + 1));
}
INT_PTR WINAPI CoTestCancel_MWAI(INT_PTR* args){
    return (INT_PTR)CoTestCancel();
}
INT_PTR WINAPI CoEnableCallCancellation_MWAI(INT_PTR* args){
    return (INT_PTR)CoEnableCallCancellation((LPVOID)*(args + 0));
}
INT_PTR WINAPI CoDisableCallCancellation_MWAI(INT_PTR* args){
    return (INT_PTR)CoDisableCallCancellation((LPVOID)*(args + 0));
}
INT_PTR WINAPI StringFromCLSID_MWAI(INT_PTR* args){
    return (INT_PTR)StringFromCLSID((const IID * const)*(args + 0), (LPOLESTR   *)*(args + 1));
}
INT_PTR WINAPI StringFromIID_MWAI(INT_PTR* args){
    return (INT_PTR)StringFromIID((const IID * const)*(args + 0), (LPOLESTR   *)*(args + 1));
}
INT_PTR WINAPI ProgIDFromCLSID_MWAI(INT_PTR* args){
    return (INT_PTR)ProgIDFromCLSID((const IID * const)*(args + 0), (LPOLESTR   *)*(args + 1));
}
INT_PTR WINAPI StringFromGUID2_MWAI(INT_PTR* args){
    return (INT_PTR)StringFromGUID2((const GUID * const)*(args + 0), (LPOLESTR)*(args + 1), (int)*(args + 2));
}
INT_PTR WINAPI CoCreateGuid_MWAI(INT_PTR* args){
    return (INT_PTR)CoCreateGuid((GUID   *)*(args + 0));
}
INT_PTR WINAPI PropVariantCopy_MWAI(INT_PTR* args){
    return (INT_PTR)PropVariantCopy((PROPVARIANT*)*(args + 0), (const PROPVARIANT*)*(args + 1));
}
INT_PTR WINAPI PropVariantClear_MWAI(INT_PTR* args){
    return (INT_PTR)PropVariantClear((PROPVARIANT*)*(args + 0));
}
INT_PTR WINAPI FreePropVariantArray_MWAI(INT_PTR* args){
    return (INT_PTR)FreePropVariantArray((ULONG)*(args + 0), (PROPVARIANT*)*(args + 1));
}
INT_PTR WINAPI CoWaitForMultipleHandles_MWAI(INT_PTR* args){
    return (INT_PTR)CoWaitForMultipleHandles((DWORD)*(args + 0), (DWORD)*(args + 1), (ULONG)*(args + 2), (LPHANDLE)*(args + 3), (LPDWORD)*(args + 4));
}
INT_PTR WINAPI CoWaitForMultipleObjects_MWAI(INT_PTR* args){
    return (INT_PTR)CoWaitForMultipleObjects((DWORD)*(args + 0), (DWORD)*(args + 1), (ULONG)*(args + 2), (const HANDLE*)*(args + 3), (LPDWORD)*(args + 4));
}
INT_PTR WINAPI CoInvalidateRemoteMachineBindings_MWAI(INT_PTR* args){
    return (INT_PTR)CoInvalidateRemoteMachineBindings((LPOLESTR)*(args + 0));
}
INT_PTR WINAPI RoGetAgileReference_MWAI(INT_PTR* args){
    return (INT_PTR)RoGetAgileReference((enum AgileReferenceOptions)*(args + 0), (const IID * const)*(args + 1), (IUnknown*)*(args + 2), (IAgileReference**)*(args + 3));
}
INT_PTR WINAPI CoTaskMemFree_MWAI(INT_PTR* args){
    CoTaskMemFree((LPVOID)*(args + 0));
    return 0;
}
INT_PTR WINAPI CoFileTimeNow_MWAI(INT_PTR* args){
    return (INT_PTR)CoFileTimeNow((FILETIME   *)*(args + 0));
}
INT_PTR WINAPI CLIPFORMAT_UserSize_MWAI(INT_PTR* args){
    return (INT_PTR)CLIPFORMAT_UserSize((unsigned long *)*(args + 0), (unsigned long)*(args + 1), (CLIPFORMAT *)*(args + 2));
}
INT_PTR WINAPI CLIPFORMAT_UserMarshal_MWAI(INT_PTR* args){
    return (INT_PTR)CLIPFORMAT_UserMarshal((unsigned long *)*(args + 0), (unsigned char *)*(args + 1), (CLIPFORMAT *)*(args + 2));
}
INT_PTR WINAPI CLIPFORMAT_UserUnmarshal_MWAI(INT_PTR* args){
    return (INT_PTR)CLIPFORMAT_UserUnmarshal((unsigned long *)*(args + 0), (unsigned char *)*(args + 1), (CLIPFORMAT *)*(args + 2));
}
INT_PTR WINAPI CLIPFORMAT_UserFree_MWAI(INT_PTR* args){
    CLIPFORMAT_UserFree((unsigned long *)*(args + 0), (CLIPFORMAT *)*(args + 1));
    return 0;
}
INT_PTR WINAPI HBITMAP_UserSize_MWAI(INT_PTR* args){
    return (INT_PTR)HBITMAP_UserSize((unsigned long *)*(args + 0), (unsigned long)*(args + 1), (HBITMAP *)*(args + 2));
}
INT_PTR WINAPI HBITMAP_UserMarshal_MWAI(INT_PTR* args){
    return (INT_PTR)HBITMAP_UserMarshal((unsigned long *)*(args + 0), (unsigned char *)*(args + 1), (HBITMAP *)*(args + 2));
}
INT_PTR WINAPI HBITMAP_UserUnmarshal_MWAI(INT_PTR* args){
    return (INT_PTR)HBITMAP_UserUnmarshal((unsigned long *)*(args + 0), (unsigned char *)*(args + 1), (HBITMAP *)*(args + 2));
}
INT_PTR WINAPI HBITMAP_UserFree_MWAI(INT_PTR* args){
    HBITMAP_UserFree((unsigned long *)*(args + 0), (HBITMAP *)*(args + 1));
    return 0;
}
INT_PTR WINAPI HDC_UserSize_MWAI(INT_PTR* args){
    return (INT_PTR)HDC_UserSize((unsigned long *)*(args + 0), (unsigned long)*(args + 1), (HDC *)*(args + 2));
}
INT_PTR WINAPI HDC_UserMarshal_MWAI(INT_PTR* args){
    return (INT_PTR)HDC_UserMarshal((unsigned long *)*(args + 0), (unsigned char *)*(args + 1), (HDC *)*(args + 2));
}
INT_PTR WINAPI HDC_UserUnmarshal_MWAI(INT_PTR* args){
    return (INT_PTR)HDC_UserUnmarshal((unsigned long *)*(args + 0), (unsigned char *)*(args + 1), (HDC *)*(args + 2));
}
INT_PTR WINAPI HDC_UserFree_MWAI(INT_PTR* args){
    HDC_UserFree((unsigned long *)*(args + 0), (HDC *)*(args + 1));
    return 0;
}
INT_PTR WINAPI HICON_UserSize_MWAI(INT_PTR* args){
    return (INT_PTR)HICON_UserSize((unsigned long *)*(args + 0), (unsigned long)*(args + 1), (HICON *)*(args + 2));
}
INT_PTR WINAPI HICON_UserMarshal_MWAI(INT_PTR* args){
    return (INT_PTR)HICON_UserMarshal((unsigned long *)*(args + 0), (unsigned char *)*(args + 1), (HICON *)*(args + 2));
}
INT_PTR WINAPI HICON_UserUnmarshal_MWAI(INT_PTR* args){
    return (INT_PTR)HICON_UserUnmarshal((unsigned long *)*(args + 0), (unsigned char *)*(args + 1), (HICON *)*(args + 2));
}
INT_PTR WINAPI HICON_UserFree_MWAI(INT_PTR* args){
    HICON_UserFree((unsigned long *)*(args + 0), (HICON *)*(args + 1));
    return 0;
}
INT_PTR WINAPI SNB_UserSize_MWAI(INT_PTR* args){
    return (INT_PTR)SNB_UserSize((unsigned long *)*(args + 0), (unsigned long)*(args + 1), (SNB *)*(args + 2));
}
INT_PTR WINAPI SNB_UserMarshal_MWAI(INT_PTR* args){
    return (INT_PTR)SNB_UserMarshal((unsigned long *)*(args + 0), (unsigned char *)*(args + 1), (SNB *)*(args + 2));
}
INT_PTR WINAPI SNB_UserUnmarshal_MWAI(INT_PTR* args){
    return (INT_PTR)SNB_UserUnmarshal((unsigned long *)*(args + 0), (unsigned char *)*(args + 1), (SNB *)*(args + 2));
}
INT_PTR WINAPI SNB_UserFree_MWAI(INT_PTR* args){
    SNB_UserFree((unsigned long *)*(args + 0), (SNB *)*(args + 1));
    return 0;
}
INT_PTR WINAPI STGMEDIUM_UserSize_MWAI(INT_PTR* args){
    return (INT_PTR)STGMEDIUM_UserSize((unsigned long *)*(args + 0), (unsigned long)*(args + 1), (STGMEDIUM *)*(args + 2));
}
INT_PTR WINAPI STGMEDIUM_UserMarshal_MWAI(INT_PTR* args){
    return (INT_PTR)STGMEDIUM_UserMarshal((unsigned long *)*(args + 0), (unsigned char *)*(args + 1), (STGMEDIUM *)*(args + 2));
}
INT_PTR WINAPI STGMEDIUM_UserUnmarshal_MWAI(INT_PTR* args){
    return (INT_PTR)STGMEDIUM_UserUnmarshal((unsigned long *)*(args + 0), (unsigned char *)*(args + 1), (STGMEDIUM *)*(args + 2));
}
INT_PTR WINAPI STGMEDIUM_UserFree_MWAI(INT_PTR* args){
    STGMEDIUM_UserFree((unsigned long *)*(args + 0), (STGMEDIUM *)*(args + 1));
    return 0;
}
INT_PTR WINAPI CLIPFORMAT_UserSize64_MWAI(INT_PTR* args){
    return (INT_PTR)CLIPFORMAT_UserSize64((unsigned long *)*(args + 0), (unsigned long)*(args + 1), (CLIPFORMAT *)*(args + 2));
}
INT_PTR WINAPI CLIPFORMAT_UserMarshal64_MWAI(INT_PTR* args){
    return (INT_PTR)CLIPFORMAT_UserMarshal64((unsigned long *)*(args + 0), (unsigned char *)*(args + 1), (CLIPFORMAT *)*(args + 2));
}
INT_PTR WINAPI CLIPFORMAT_UserUnmarshal64_MWAI(INT_PTR* args){
    return (INT_PTR)CLIPFORMAT_UserUnmarshal64((unsigned long *)*(args + 0), (unsigned char *)*(args + 1), (CLIPFORMAT *)*(args + 2));
}
INT_PTR WINAPI CLIPFORMAT_UserFree64_MWAI(INT_PTR* args){
    CLIPFORMAT_UserFree64((unsigned long *)*(args + 0), (CLIPFORMAT *)*(args + 1));
    return 0;
}
INT_PTR WINAPI HBITMAP_UserSize64_MWAI(INT_PTR* args){
    return (INT_PTR)HBITMAP_UserSize64((unsigned long *)*(args + 0), (unsigned long)*(args + 1), (HBITMAP *)*(args + 2));
}
INT_PTR WINAPI HBITMAP_UserMarshal64_MWAI(INT_PTR* args){
    return (INT_PTR)HBITMAP_UserMarshal64((unsigned long *)*(args + 0), (unsigned char *)*(args + 1), (HBITMAP *)*(args + 2));
}
INT_PTR WINAPI HBITMAP_UserUnmarshal64_MWAI(INT_PTR* args){
    return (INT_PTR)HBITMAP_UserUnmarshal64((unsigned long *)*(args + 0), (unsigned char *)*(args + 1), (HBITMAP *)*(args + 2));
}
INT_PTR WINAPI HBITMAP_UserFree64_MWAI(INT_PTR* args){
    HBITMAP_UserFree64((unsigned long *)*(args + 0), (HBITMAP *)*(args + 1));
    return 0;
}
INT_PTR WINAPI HDC_UserSize64_MWAI(INT_PTR* args){
    return (INT_PTR)HDC_UserSize64((unsigned long *)*(args + 0), (unsigned long)*(args + 1), (HDC *)*(args + 2));
}
INT_PTR WINAPI HDC_UserMarshal64_MWAI(INT_PTR* args){
    return (INT_PTR)HDC_UserMarshal64((unsigned long *)*(args + 0), (unsigned char *)*(args + 1), (HDC *)*(args + 2));
}
INT_PTR WINAPI HDC_UserUnmarshal64_MWAI(INT_PTR* args){
    return (INT_PTR)HDC_UserUnmarshal64((unsigned long *)*(args + 0), (unsigned char *)*(args + 1), (HDC *)*(args + 2));
}
INT_PTR WINAPI HDC_UserFree64_MWAI(INT_PTR* args){
    HDC_UserFree64((unsigned long *)*(args + 0), (HDC *)*(args + 1));
    return 0;
}
INT_PTR WINAPI HICON_UserSize64_MWAI(INT_PTR* args){
    return (INT_PTR)HICON_UserSize64((unsigned long *)*(args + 0), (unsigned long)*(args + 1), (HICON *)*(args + 2));
}
INT_PTR WINAPI HICON_UserMarshal64_MWAI(INT_PTR* args){
    return (INT_PTR)HICON_UserMarshal64((unsigned long *)*(args + 0), (unsigned char *)*(args + 1), (HICON *)*(args + 2));
}
INT_PTR WINAPI HICON_UserUnmarshal64_MWAI(INT_PTR* args){
    return (INT_PTR)HICON_UserUnmarshal64((unsigned long *)*(args + 0), (unsigned char *)*(args + 1), (HICON *)*(args + 2));
}
INT_PTR WINAPI HICON_UserFree64_MWAI(INT_PTR* args){
    HICON_UserFree64((unsigned long *)*(args + 0), (HICON *)*(args + 1));
    return 0;
}
INT_PTR WINAPI SNB_UserSize64_MWAI(INT_PTR* args){
    return (INT_PTR)SNB_UserSize64((unsigned long *)*(args + 0), (unsigned long)*(args + 1), (SNB *)*(args + 2));
}
INT_PTR WINAPI SNB_UserMarshal64_MWAI(INT_PTR* args){
    return (INT_PTR)SNB_UserMarshal64((unsigned long *)*(args + 0), (unsigned char *)*(args + 1), (SNB *)*(args + 2));
}
INT_PTR WINAPI SNB_UserUnmarshal64_MWAI(INT_PTR* args){
    return (INT_PTR)SNB_UserUnmarshal64((unsigned long *)*(args + 0), (unsigned char *)*(args + 1), (SNB *)*(args + 2));
}
INT_PTR WINAPI SNB_UserFree64_MWAI(INT_PTR* args){
    SNB_UserFree64((unsigned long *)*(args + 0), (SNB *)*(args + 1));
    return 0;
}
INT_PTR WINAPI STGMEDIUM_UserSize64_MWAI(INT_PTR* args){
    return (INT_PTR)STGMEDIUM_UserSize64((unsigned long *)*(args + 0), (unsigned long)*(args + 1), (STGMEDIUM *)*(args + 2));
}
INT_PTR WINAPI STGMEDIUM_UserMarshal64_MWAI(INT_PTR* args){
    return (INT_PTR)STGMEDIUM_UserMarshal64((unsigned long *)*(args + 0), (unsigned char *)*(args + 1), (STGMEDIUM *)*(args + 2));
}
INT_PTR WINAPI STGMEDIUM_UserUnmarshal64_MWAI(INT_PTR* args){
    return (INT_PTR)STGMEDIUM_UserUnmarshal64((unsigned long *)*(args + 0), (unsigned char *)*(args + 1), (STGMEDIUM *)*(args + 2));
}
INT_PTR WINAPI STGMEDIUM_UserFree64_MWAI(INT_PTR* args){
    STGMEDIUM_UserFree64((unsigned long *)*(args + 0), (STGMEDIUM *)*(args + 1));
    return 0;
}
INT_PTR WINAPI BSTR_UserSize_MWAI(INT_PTR* args){
    return (INT_PTR)BSTR_UserSize((unsigned long *)*(args + 0), (unsigned long)*(args + 1), (BSTR *)*(args + 2));
}
INT_PTR WINAPI BSTR_UserMarshal_MWAI(INT_PTR* args){
    return (INT_PTR)BSTR_UserMarshal((unsigned long *)*(args + 0), (unsigned char *)*(args + 1), (BSTR *)*(args + 2));
}
INT_PTR WINAPI BSTR_UserUnmarshal_MWAI(INT_PTR* args){
    return (INT_PTR)BSTR_UserUnmarshal((unsigned long *)*(args + 0), (unsigned char *)*(args + 1), (BSTR *)*(args + 2));
}
INT_PTR WINAPI BSTR_UserFree_MWAI(INT_PTR* args){
    BSTR_UserFree((unsigned long *)*(args + 0), (BSTR *)*(args + 1));
    return 0;
}
INT_PTR WINAPI VARIANT_UserSize_MWAI(INT_PTR* args){
    return (INT_PTR)VARIANT_UserSize((unsigned long *)*(args + 0), (unsigned long)*(args + 1), (VARIANT *)*(args + 2));
}
INT_PTR WINAPI VARIANT_UserMarshal_MWAI(INT_PTR* args){
    return (INT_PTR)VARIANT_UserMarshal((unsigned long *)*(args + 0), (unsigned char *)*(args + 1), (VARIANT *)*(args + 2));
}
INT_PTR WINAPI VARIANT_UserUnmarshal_MWAI(INT_PTR* args){
    return (INT_PTR)VARIANT_UserUnmarshal((unsigned long *)*(args + 0), (unsigned char *)*(args + 1), (VARIANT *)*(args + 2));
}
INT_PTR WINAPI VARIANT_UserFree_MWAI(INT_PTR* args){
    VARIANT_UserFree((unsigned long *)*(args + 0), (VARIANT *)*(args + 1));
    return 0;
}
INT_PTR WINAPI BSTR_UserSize64_MWAI(INT_PTR* args){
    return (INT_PTR)BSTR_UserSize64((unsigned long *)*(args + 0), (unsigned long)*(args + 1), (BSTR *)*(args + 2));
}
INT_PTR WINAPI BSTR_UserMarshal64_MWAI(INT_PTR* args){
    return (INT_PTR)BSTR_UserMarshal64((unsigned long *)*(args + 0), (unsigned char *)*(args + 1), (BSTR *)*(args + 2));
}
INT_PTR WINAPI BSTR_UserUnmarshal64_MWAI(INT_PTR* args){
    return (INT_PTR)BSTR_UserUnmarshal64((unsigned long *)*(args + 0), (unsigned char *)*(args + 1), (BSTR *)*(args + 2));
}
INT_PTR WINAPI BSTR_UserFree64_MWAI(INT_PTR* args){
    BSTR_UserFree64((unsigned long *)*(args + 0), (BSTR *)*(args + 1));
    return 0;
}
INT_PTR WINAPI VARIANT_UserSize64_MWAI(INT_PTR* args){
    return (INT_PTR)VARIANT_UserSize64((unsigned long *)*(args + 0), (unsigned long)*(args + 1), (VARIANT *)*(args + 2));
}
INT_PTR WINAPI VARIANT_UserMarshal64_MWAI(INT_PTR* args){
    return (INT_PTR)VARIANT_UserMarshal64((unsigned long *)*(args + 0), (unsigned char *)*(args + 1), (VARIANT *)*(args + 2));
}
INT_PTR WINAPI VARIANT_UserUnmarshal64_MWAI(INT_PTR* args){
    return (INT_PTR)VARIANT_UserUnmarshal64((unsigned long *)*(args + 0), (unsigned char *)*(args + 1), (VARIANT *)*(args + 2));
}
INT_PTR WINAPI VARIANT_UserFree64_MWAI(INT_PTR* args){
    VARIANT_UserFree64((unsigned long *)*(args + 0), (VARIANT *)*(args + 1));
    return 0;
}
INT_PTR WINAPI LPSAFEARRAY_UserSize_MWAI(INT_PTR* args){
    return (INT_PTR)LPSAFEARRAY_UserSize((unsigned long *)*(args + 0), (unsigned long)*(args + 1), (LPSAFEARRAY *)*(args + 2));
}
INT_PTR WINAPI LPSAFEARRAY_UserMarshal_MWAI(INT_PTR* args){
    return (INT_PTR)LPSAFEARRAY_UserMarshal((unsigned long *)*(args + 0), (unsigned char *)*(args + 1), (LPSAFEARRAY *)*(args + 2));
}
INT_PTR WINAPI LPSAFEARRAY_UserUnmarshal_MWAI(INT_PTR* args){
    return (INT_PTR)LPSAFEARRAY_UserUnmarshal((unsigned long *)*(args + 0), (unsigned char *)*(args + 1), (LPSAFEARRAY *)*(args + 2));
}
INT_PTR WINAPI LPSAFEARRAY_UserFree_MWAI(INT_PTR* args){
    LPSAFEARRAY_UserFree((unsigned long *)*(args + 0), (LPSAFEARRAY *)*(args + 1));
    return 0;
}
INT_PTR WINAPI LPSAFEARRAY_UserSize64_MWAI(INT_PTR* args){
    return (INT_PTR)LPSAFEARRAY_UserSize64((unsigned long *)*(args + 0), (unsigned long)*(args + 1), (LPSAFEARRAY *)*(args + 2));
}
INT_PTR WINAPI LPSAFEARRAY_UserMarshal64_MWAI(INT_PTR* args){
    return (INT_PTR)LPSAFEARRAY_UserMarshal64((unsigned long *)*(args + 0), (unsigned char *)*(args + 1), (LPSAFEARRAY *)*(args + 2));
}
INT_PTR WINAPI LPSAFEARRAY_UserUnmarshal64_MWAI(INT_PTR* args){
    return (INT_PTR)LPSAFEARRAY_UserUnmarshal64((unsigned long *)*(args + 0), (unsigned char *)*(args + 1), (LPSAFEARRAY *)*(args + 2));
}
INT_PTR WINAPI LPSAFEARRAY_UserFree64_MWAI(INT_PTR* args){
    LPSAFEARRAY_UserFree64((unsigned long *)*(args + 0), (LPSAFEARRAY *)*(args + 1));
    return 0;
}
INT_PTR WINAPI StgCreateDocfile_MWAI(INT_PTR* args){
    return (INT_PTR)StgCreateDocfile((const WCHAR*)*(args + 0), (DWORD)*(args + 1), (DWORD)*(args + 2), (IStorage**)*(args + 3));
}
INT_PTR WINAPI StgCreateDocfileOnILockBytes_MWAI(INT_PTR* args){
    return (INT_PTR)StgCreateDocfileOnILockBytes((ILockBytes*)*(args + 0), (DWORD)*(args + 1), (DWORD)*(args + 2), (IStorage**)*(args + 3));
}
INT_PTR WINAPI StgOpenStorage_MWAI(INT_PTR* args){
    return (INT_PTR)StgOpenStorage((const WCHAR*)*(args + 0), (IStorage*)*(args + 1), (DWORD)*(args + 2), (SNB)*(args + 3), (DWORD)*(args + 4), (IStorage**)*(args + 5));
}
INT_PTR WINAPI StgOpenStorageOnILockBytes_MWAI(INT_PTR* args){
    return (INT_PTR)StgOpenStorageOnILockBytes((ILockBytes*)*(args + 0), (IStorage*)*(args + 1), (DWORD)*(args + 2), (SNB)*(args + 3), (DWORD)*(args + 4), (IStorage**)*(args + 5));
}
INT_PTR WINAPI StgIsStorageFile_MWAI(INT_PTR* args){
    return (INT_PTR)StgIsStorageFile((const WCHAR*)*(args + 0));
}
INT_PTR WINAPI StgIsStorageILockBytes_MWAI(INT_PTR* args){
    return (INT_PTR)StgIsStorageILockBytes((ILockBytes*)*(args + 0));
}
INT_PTR WINAPI StgSetTimes_MWAI(INT_PTR* args){
    return (INT_PTR)StgSetTimes((const WCHAR*)*(args + 0), (const FILETIME*)*(args + 1), (const FILETIME*)*(args + 2), (const FILETIME*)*(args + 3));
}
INT_PTR WINAPI StgCreateStorageEx_MWAI(INT_PTR* args){
    return (INT_PTR)StgCreateStorageEx((const WCHAR*)*(args + 0), (DWORD)*(args + 1), (DWORD)*(args + 2), (DWORD)*(args + 3), (STGOPTIONS*)*(args + 4), (PSECURITY_DESCRIPTOR)*(args + 5), (const IID * const)*(args + 6), (void**)*(args + 7));
}
INT_PTR WINAPI StgOpenStorageEx_MWAI(INT_PTR* args){
    return (INT_PTR)StgOpenStorageEx((const WCHAR*)*(args + 0), (DWORD)*(args + 1), (DWORD)*(args + 2), (DWORD)*(args + 3), (STGOPTIONS*)*(args + 4), (PSECURITY_DESCRIPTOR)*(args + 5), (const IID * const)*(args + 6), (void**)*(args + 7));
}
INT_PTR WINAPI StgCreatePropStg_MWAI(INT_PTR* args){
    return (INT_PTR)StgCreatePropStg((IUnknown*)*(args + 0), (const IID * const)*(args + 1), (const CLSID*)*(args + 2), (DWORD)*(args + 3), (DWORD)*(args + 4), (IPropertyStorage**)*(args + 5));
}
INT_PTR WINAPI StgOpenPropStg_MWAI(INT_PTR* args){
    return (INT_PTR)StgOpenPropStg((IUnknown*)*(args + 0), (const IID * const)*(args + 1), (DWORD)*(args + 2), (DWORD)*(args + 3), (IPropertyStorage**)*(args + 4));
}
INT_PTR WINAPI StgCreatePropSetStg_MWAI(INT_PTR* args){
    return (INT_PTR)StgCreatePropSetStg((IStorage*)*(args + 0), (DWORD)*(args + 1), (IPropertySetStorage**)*(args + 2));
}
INT_PTR WINAPI FmtIdToPropStgName_MWAI(INT_PTR* args){
    return (INT_PTR)FmtIdToPropStgName((const FMTID*)*(args + 0), (LPOLESTR)*(args + 1));
}
INT_PTR WINAPI PropStgNameToFmtId_MWAI(INT_PTR* args){
    return (INT_PTR)PropStgNameToFmtId((const LPOLESTR)*(args + 0), (FMTID*)*(args + 1));
}
INT_PTR WINAPI ReadClassStg_MWAI(INT_PTR* args){
    return (INT_PTR)ReadClassStg((LPSTORAGE)*(args + 0), (CLSID   *)*(args + 1));
}
INT_PTR WINAPI WriteClassStg_MWAI(INT_PTR* args){
    return (INT_PTR)WriteClassStg((LPSTORAGE)*(args + 0), (const IID * const)*(args + 1));
}
INT_PTR WINAPI ReadClassStm_MWAI(INT_PTR* args){
    return (INT_PTR)ReadClassStm((LPSTREAM)*(args + 0), (CLSID   *)*(args + 1));
}
INT_PTR WINAPI WriteClassStm_MWAI(INT_PTR* args){
    return (INT_PTR)WriteClassStm((LPSTREAM)*(args + 0), (const IID * const)*(args + 1));
}
INT_PTR WINAPI GetHGlobalFromILockBytes_MWAI(INT_PTR* args){
    return (INT_PTR)GetHGlobalFromILockBytes((LPLOCKBYTES)*(args + 0), (HGLOBAL   *)*(args + 1));
}
INT_PTR WINAPI CreateILockBytesOnHGlobal_MWAI(INT_PTR* args){
    return (INT_PTR)CreateILockBytesOnHGlobal((HGLOBAL)*(args + 0), (BOOL)*(args + 1), (LPLOCKBYTES   *)*(args + 2));
}
INT_PTR WINAPI GetConvertStg_MWAI(INT_PTR* args){
    return (INT_PTR)GetConvertStg((LPSTORAGE)*(args + 0));
}
INT_PTR WINAPI CoBuildVersion_MWAI(INT_PTR* args){
    return (INT_PTR)CoBuildVersion();
}
INT_PTR WINAPI CoInitialize_MWAI(INT_PTR* args){
    return (INT_PTR)CoInitialize((LPVOID)*(args + 0));
}
INT_PTR WINAPI CoRegisterMallocSpy_MWAI(INT_PTR* args){
    return (INT_PTR)CoRegisterMallocSpy((LPMALLOCSPY)*(args + 0));
}
INT_PTR WINAPI CoRevokeMallocSpy_MWAI(INT_PTR* args){
    return (INT_PTR)CoRevokeMallocSpy();
}
INT_PTR WINAPI CoRegisterInitializeSpy_MWAI(INT_PTR* args){
    return (INT_PTR)CoRegisterInitializeSpy((IInitializeSpy *)*(args + 0), (ULARGE_INTEGER *)*(args + 1));
}
INT_PTR WINAPI CoGetSystemSecurityPermissions_MWAI(INT_PTR* args){
    return (INT_PTR)CoGetSystemSecurityPermissions((COMSD)*(args + 0), (PSECURITY_DESCRIPTOR *)*(args + 1));
}
INT_PTR WINAPI CoLoadLibrary_MWAI(INT_PTR* args){
    return (INT_PTR)CoLoadLibrary((LPOLESTR)*(args + 0), (BOOL)*(args + 1));
}
INT_PTR WINAPI CoFreeLibrary_MWAI(INT_PTR* args){
    CoFreeLibrary((HINSTANCE)*(args + 0));
    return 0;
}
INT_PTR WINAPI CoFreeAllLibraries_MWAI(INT_PTR* args){
    CoFreeAllLibraries();
    return 0;
}
INT_PTR WINAPI CoGetInstanceFromFile_MWAI(INT_PTR* args){
    return (INT_PTR)CoGetInstanceFromFile((COSERVERINFO *)*(args + 0), (CLSID        *)*(args + 1), (IUnknown     *)*(args + 2), (DWORD)*(args + 3), (DWORD)*(args + 4), (OLECHAR *)*(args + 5), (DWORD)*(args + 6), (MULTI_QI *)*(args + 7));
}
INT_PTR WINAPI CoGetInstanceFromIStorage_MWAI(INT_PTR* args){
    return (INT_PTR)CoGetInstanceFromIStorage((COSERVERINFO *)*(args + 0), (CLSID        *)*(args + 1), (IUnknown     *)*(args + 2), (DWORD)*(args + 3), (struct IStorage  *)*(args + 4), (DWORD)*(args + 5), (MULTI_QI *)*(args + 6));
}
INT_PTR WINAPI CoAllowSetForegroundWindow_MWAI(INT_PTR* args){
    return (INT_PTR)CoAllowSetForegroundWindow((IUnknown *)*(args + 0), (LPVOID)*(args + 1));
}
INT_PTR WINAPI DcomChannelSetHResult_MWAI(INT_PTR* args){
    return (INT_PTR)DcomChannelSetHResult((LPVOID)*(args + 0), (ULONG*)*(args + 1), (HRESULT)*(args + 2));
}
INT_PTR WINAPI CoIsOle1Class_MWAI(INT_PTR* args){
    return (INT_PTR)CoIsOle1Class((const IID * const)*(args + 0));
}
INT_PTR WINAPI CoFileTimeToDosDateTime_MWAI(INT_PTR* args){
    return (INT_PTR)CoFileTimeToDosDateTime((FILETIME *)*(args + 0), (LPWORD)*(args + 1), (LPWORD)*(args + 2));
}
INT_PTR WINAPI CoDosDateTimeToFileTime_MWAI(INT_PTR* args){
    return (INT_PTR)CoDosDateTimeToFileTime((WORD)*(args + 0), (WORD)*(args + 1), (FILETIME *)*(args + 2));
}
INT_PTR WINAPI CoRegisterMessageFilter_MWAI(INT_PTR* args){
    return (INT_PTR)CoRegisterMessageFilter((LPMESSAGEFILTER)*(args + 0), (LPMESSAGEFILTER *)*(args + 1));
}
INT_PTR WINAPI CoRegisterChannelHook_MWAI(INT_PTR* args){
    return (INT_PTR)CoRegisterChannelHook((const GUID * const)*(args + 0), (IChannelHook *)*(args + 1));
}
INT_PTR WINAPI CoTreatAsClass_MWAI(INT_PTR* args){
    return (INT_PTR)CoTreatAsClass((const IID * const)*(args + 0), (const IID * const)*(args + 1));
}
INT_PTR WINAPI CreateDataAdviseHolder_MWAI(INT_PTR* args){
    return (INT_PTR)CreateDataAdviseHolder((LPDATAADVISEHOLDER *)*(args + 0));
}
INT_PTR WINAPI CreateDataCache_MWAI(INT_PTR* args){
    return (INT_PTR)CreateDataCache((LPUNKNOWN)*(args + 0), (const IID * const)*(args + 1), (const IID * const)*(args + 2), (LPVOID *)*(args + 3));
}
INT_PTR WINAPI StgOpenAsyncDocfileOnIFillLockBytes_MWAI(INT_PTR* args){
    return (INT_PTR)StgOpenAsyncDocfileOnIFillLockBytes((IFillLockBytes *)*(args + 0), (DWORD)*(args + 1), (DWORD)*(args + 2), (IStorage**)*(args + 3));
}
INT_PTR WINAPI StgGetIFillLockBytesOnILockBytes_MWAI(INT_PTR* args){
    return (INT_PTR)StgGetIFillLockBytesOnILockBytes((ILockBytes *)*(args + 0), (IFillLockBytes**)*(args + 1));
}
INT_PTR WINAPI StgGetIFillLockBytesOnFile_MWAI(INT_PTR* args){
    return (INT_PTR)StgGetIFillLockBytesOnFile((OLECHAR const *)*(args + 0), (IFillLockBytes**)*(args + 1));
}
INT_PTR WINAPI CoInstall_MWAI(INT_PTR* args){
    return (INT_PTR)CoInstall((IBindCtx     *)*(args + 0), (DWORD)*(args + 1), (uCLSSPEC     *)*(args + 2), (QUERYCONTEXT *)*(args + 3), (LPWSTR)*(args + 4));
}
INT_PTR WINAPI BindMoniker_MWAI(INT_PTR* args){
    return (INT_PTR)BindMoniker((LPMONIKER)*(args + 0), (DWORD)*(args + 1), (const IID * const)*(args + 2), (LPVOID *)*(args + 3));
}
INT_PTR WINAPI CoGetObject_MWAI(INT_PTR* args){
    return (INT_PTR)CoGetObject((LPCWSTR)*(args + 0), (BIND_OPTS *)*(args + 1), (const IID * const)*(args + 2), (void **)*(args + 3));
}
INT_PTR WINAPI MkParseDisplayName_MWAI(INT_PTR* args){
    return (INT_PTR)MkParseDisplayName((LPBC)*(args + 0), (LPCOLESTR)*(args + 1), (ULONG  *)*(args + 2), (LPMONIKER  *)*(args + 3));
}
INT_PTR WINAPI MonikerRelativePathTo_MWAI(INT_PTR* args){
    return (INT_PTR)MonikerRelativePathTo((LPMONIKER)*(args + 0), (LPMONIKER)*(args + 1), (LPMONIKER *)*(args + 2), (BOOL)*(args + 3));
}
INT_PTR WINAPI MonikerCommonPrefixWith_MWAI(INT_PTR* args){
    return (INT_PTR)MonikerCommonPrefixWith((LPMONIKER)*(args + 0), (LPMONIKER)*(args + 1), (LPMONIKER *)*(args + 2));
}
INT_PTR WINAPI CreateBindCtx_MWAI(INT_PTR* args){
    return (INT_PTR)CreateBindCtx((DWORD)*(args + 0), (LPBC *)*(args + 1));
}
INT_PTR WINAPI CreateGenericComposite_MWAI(INT_PTR* args){
    return (INT_PTR)CreateGenericComposite((LPMONIKER)*(args + 0), (LPMONIKER)*(args + 1), (LPMONIKER *)*(args + 2));
}
INT_PTR WINAPI GetClassFile_MWAI(INT_PTR* args){
    return (INT_PTR)GetClassFile((LPCOLESTR)*(args + 0), (CLSID *)*(args + 1));
}
INT_PTR WINAPI CreateClassMoniker_MWAI(INT_PTR* args){
    return (INT_PTR)CreateClassMoniker((const IID * const)*(args + 0), (LPMONIKER *)*(args + 1));
}
INT_PTR WINAPI CreateFileMoniker_MWAI(INT_PTR* args){
    return (INT_PTR)CreateFileMoniker((LPCOLESTR)*(args + 0), (LPMONIKER *)*(args + 1));
}
INT_PTR WINAPI CreateItemMoniker_MWAI(INT_PTR* args){
    return (INT_PTR)CreateItemMoniker((LPCOLESTR)*(args + 0), (LPCOLESTR)*(args + 1), (LPMONIKER *)*(args + 2));
}
INT_PTR WINAPI CreateAntiMoniker_MWAI(INT_PTR* args){
    return (INT_PTR)CreateAntiMoniker((LPMONIKER *)*(args + 0));
}
INT_PTR WINAPI CreatePointerMoniker_MWAI(INT_PTR* args){
    return (INT_PTR)CreatePointerMoniker((LPUNKNOWN)*(args + 0), (LPMONIKER *)*(args + 1));
}
INT_PTR WINAPI CreateObjrefMoniker_MWAI(INT_PTR* args){
    return (INT_PTR)CreateObjrefMoniker((LPUNKNOWN)*(args + 0), (LPMONIKER  *)*(args + 1));
}
INT_PTR WINAPI GetRunningObjectTable_MWAI(INT_PTR* args){
    return (INT_PTR)GetRunningObjectTable((DWORD)*(args + 0), (LPRUNNINGOBJECTTABLE *)*(args + 1));
}
INT_PTR WINAPI HACCEL_UserSize_MWAI(INT_PTR* args){
    return (INT_PTR)HACCEL_UserSize((unsigned long *)*(args + 0), (unsigned long)*(args + 1), (HACCEL *)*(args + 2));
}
INT_PTR WINAPI HACCEL_UserMarshal_MWAI(INT_PTR* args){
    return (INT_PTR)HACCEL_UserMarshal((unsigned long *)*(args + 0), (unsigned char *)*(args + 1), (HACCEL *)*(args + 2));
}
INT_PTR WINAPI HACCEL_UserUnmarshal_MWAI(INT_PTR* args){
    return (INT_PTR)HACCEL_UserUnmarshal((unsigned long *)*(args + 0), (unsigned char *)*(args + 1), (HACCEL *)*(args + 2));
}
INT_PTR WINAPI HACCEL_UserFree_MWAI(INT_PTR* args){
    HACCEL_UserFree((unsigned long *)*(args + 0), (HACCEL *)*(args + 1));
    return 0;
}
INT_PTR WINAPI HGLOBAL_UserSize_MWAI(INT_PTR* args){
    return (INT_PTR)HGLOBAL_UserSize((unsigned long *)*(args + 0), (unsigned long)*(args + 1), (HGLOBAL *)*(args + 2));
}
INT_PTR WINAPI HGLOBAL_UserMarshal_MWAI(INT_PTR* args){
    return (INT_PTR)HGLOBAL_UserMarshal((unsigned long *)*(args + 0), (unsigned char *)*(args + 1), (HGLOBAL *)*(args + 2));
}
INT_PTR WINAPI HGLOBAL_UserUnmarshal_MWAI(INT_PTR* args){
    return (INT_PTR)HGLOBAL_UserUnmarshal((unsigned long *)*(args + 0), (unsigned char *)*(args + 1), (HGLOBAL *)*(args + 2));
}
INT_PTR WINAPI HGLOBAL_UserFree_MWAI(INT_PTR* args){
    HGLOBAL_UserFree((unsigned long *)*(args + 0), (HGLOBAL *)*(args + 1));
    return 0;
}
INT_PTR WINAPI HMENU_UserSize_MWAI(INT_PTR* args){
    return (INT_PTR)HMENU_UserSize((unsigned long *)*(args + 0), (unsigned long)*(args + 1), (HMENU *)*(args + 2));
}
INT_PTR WINAPI HMENU_UserMarshal_MWAI(INT_PTR* args){
    return (INT_PTR)HMENU_UserMarshal((unsigned long *)*(args + 0), (unsigned char *)*(args + 1), (HMENU *)*(args + 2));
}
INT_PTR WINAPI HMENU_UserUnmarshal_MWAI(INT_PTR* args){
    return (INT_PTR)HMENU_UserUnmarshal((unsigned long *)*(args + 0), (unsigned char *)*(args + 1), (HMENU *)*(args + 2));
}
INT_PTR WINAPI HMENU_UserFree_MWAI(INT_PTR* args){
    HMENU_UserFree((unsigned long *)*(args + 0), (HMENU *)*(args + 1));
    return 0;
}
INT_PTR WINAPI HWND_UserSize_MWAI(INT_PTR* args){
    return (INT_PTR)HWND_UserSize((unsigned long *)*(args + 0), (unsigned long)*(args + 1), (HWND *)*(args + 2));
}
INT_PTR WINAPI HWND_UserMarshal_MWAI(INT_PTR* args){
    return (INT_PTR)HWND_UserMarshal((unsigned long *)*(args + 0), (unsigned char *)*(args + 1), (HWND *)*(args + 2));
}
INT_PTR WINAPI HWND_UserUnmarshal_MWAI(INT_PTR* args){
    return (INT_PTR)HWND_UserUnmarshal((unsigned long *)*(args + 0), (unsigned char *)*(args + 1), (HWND *)*(args + 2));
}
INT_PTR WINAPI HWND_UserFree_MWAI(INT_PTR* args){
    HWND_UserFree((unsigned long *)*(args + 0), (HWND *)*(args + 1));
    return 0;
}
INT_PTR WINAPI HACCEL_UserSize64_MWAI(INT_PTR* args){
    return (INT_PTR)HACCEL_UserSize64((unsigned long *)*(args + 0), (unsigned long)*(args + 1), (HACCEL *)*(args + 2));
}
INT_PTR WINAPI HACCEL_UserMarshal64_MWAI(INT_PTR* args){
    return (INT_PTR)HACCEL_UserMarshal64((unsigned long *)*(args + 0), (unsigned char *)*(args + 1), (HACCEL *)*(args + 2));
}
INT_PTR WINAPI HACCEL_UserUnmarshal64_MWAI(INT_PTR* args){
    return (INT_PTR)HACCEL_UserUnmarshal64((unsigned long *)*(args + 0), (unsigned char *)*(args + 1), (HACCEL *)*(args + 2));
}
INT_PTR WINAPI HACCEL_UserFree64_MWAI(INT_PTR* args){
    HACCEL_UserFree64((unsigned long *)*(args + 0), (HACCEL *)*(args + 1));
    return 0;
}
INT_PTR WINAPI HGLOBAL_UserSize64_MWAI(INT_PTR* args){
    return (INT_PTR)HGLOBAL_UserSize64((unsigned long *)*(args + 0), (unsigned long)*(args + 1), (HGLOBAL *)*(args + 2));
}
INT_PTR WINAPI HGLOBAL_UserMarshal64_MWAI(INT_PTR* args){
    return (INT_PTR)HGLOBAL_UserMarshal64((unsigned long *)*(args + 0), (unsigned char *)*(args + 1), (HGLOBAL *)*(args + 2));
}
INT_PTR WINAPI HGLOBAL_UserUnmarshal64_MWAI(INT_PTR* args){
    return (INT_PTR)HGLOBAL_UserUnmarshal64((unsigned long *)*(args + 0), (unsigned char *)*(args + 1), (HGLOBAL *)*(args + 2));
}
INT_PTR WINAPI HGLOBAL_UserFree64_MWAI(INT_PTR* args){
    HGLOBAL_UserFree64((unsigned long *)*(args + 0), (HGLOBAL *)*(args + 1));
    return 0;
}
INT_PTR WINAPI HMENU_UserSize64_MWAI(INT_PTR* args){
    return (INT_PTR)HMENU_UserSize64((unsigned long *)*(args + 0), (unsigned long)*(args + 1), (HMENU *)*(args + 2));
}
INT_PTR WINAPI HMENU_UserMarshal64_MWAI(INT_PTR* args){
    return (INT_PTR)HMENU_UserMarshal64((unsigned long *)*(args + 0), (unsigned char *)*(args + 1), (HMENU *)*(args + 2));
}
INT_PTR WINAPI HMENU_UserUnmarshal64_MWAI(INT_PTR* args){
    return (INT_PTR)HMENU_UserUnmarshal64((unsigned long *)*(args + 0), (unsigned char *)*(args + 1), (HMENU *)*(args + 2));
}
INT_PTR WINAPI HMENU_UserFree64_MWAI(INT_PTR* args){
    HMENU_UserFree64((unsigned long *)*(args + 0), (HMENU *)*(args + 1));
    return 0;
}
INT_PTR WINAPI HWND_UserSize64_MWAI(INT_PTR* args){
    return (INT_PTR)HWND_UserSize64((unsigned long *)*(args + 0), (unsigned long)*(args + 1), (HWND *)*(args + 2));
}
INT_PTR WINAPI HWND_UserMarshal64_MWAI(INT_PTR* args){
    return (INT_PTR)HWND_UserMarshal64((unsigned long *)*(args + 0), (unsigned char *)*(args + 1), (HWND *)*(args + 2));
}
INT_PTR WINAPI HWND_UserUnmarshal64_MWAI(INT_PTR* args){
    return (INT_PTR)HWND_UserUnmarshal64((unsigned long *)*(args + 0), (unsigned char *)*(args + 1), (HWND *)*(args + 2));
}
INT_PTR WINAPI HWND_UserFree64_MWAI(INT_PTR* args){
    HWND_UserFree64((unsigned long *)*(args + 0), (HWND *)*(args + 1));
    return 0;
}
INT_PTR WINAPI StgConvertVariantToProperty_MWAI(INT_PTR* args){
    return (INT_PTR)StgConvertVariantToProperty((const PROPVARIANT*)*(args + 0), (USHORT)*(args + 1), (SERIALIZEDPROPERTYVALUE*)*(args + 2), (ULONG*)*(args + 3), (PROPID)*(args + 4), (BOOLEAN)*(args + 5), (ULONG*)*(args + 6));
}
INT_PTR WINAPI CreateStdProgressIndicator_MWAI(INT_PTR* args){
    return (INT_PTR)CreateStdProgressIndicator((HWND)*(args + 0), (LPCOLESTR)*(args + 1), (IBindStatusCallback *)*(args + 2), (IBindStatusCallback **)*(args + 3));
}
INT_PTR WINAPI SysAllocString_MWAI(INT_PTR* args){
    return (INT_PTR)SysAllocString((const OLECHAR *)*(args + 0));
}
INT_PTR WINAPI SysReAllocString_MWAI(INT_PTR* args){
    return (INT_PTR)SysReAllocString((BSTR*)*(args + 0), (const OLECHAR*)*(args + 1));
}
INT_PTR WINAPI SysAllocStringLen_MWAI(INT_PTR* args){
    return (INT_PTR)SysAllocStringLen((const OLECHAR *)*(args + 0), (UINT)*(args + 1));
}
INT_PTR WINAPI SysReAllocStringLen_MWAI(INT_PTR* args){
    return (INT_PTR)SysReAllocStringLen((BSTR*)*(args + 0), (const OLECHAR*)*(args + 1), (unsigned int)*(args + 2));
}
INT_PTR WINAPI SysAddRefString_MWAI(INT_PTR* args){
    return (INT_PTR)SysAddRefString((BSTR)*(args + 0));
}
INT_PTR WINAPI SysReleaseString_MWAI(INT_PTR* args){
    SysReleaseString((BSTR)*(args + 0));
    return 0;
}
INT_PTR WINAPI SysFreeString_MWAI(INT_PTR* args){
    SysFreeString((BSTR)*(args + 0));
    return 0;
}
INT_PTR WINAPI SysStringLen_MWAI(INT_PTR* args){
    return (INT_PTR)SysStringLen((BSTR)*(args + 0));
}
INT_PTR WINAPI SysStringByteLen_MWAI(INT_PTR* args){
    return (INT_PTR)SysStringByteLen((BSTR)*(args + 0));
}
INT_PTR WINAPI SysAllocStringByteLen_MWAI(INT_PTR* args){
    return (INT_PTR)SysAllocStringByteLen((LPCSTR)*(args + 0), (UINT)*(args + 1));
}
INT_PTR WINAPI DosDateTimeToVariantTime_MWAI(INT_PTR* args){
    return (INT_PTR)DosDateTimeToVariantTime((USHORT)*(args + 0), (USHORT)*(args + 1), (DOUBLE *)*(args + 2));
}
INT_PTR WINAPI VariantTimeToDosDateTime_MWAI(INT_PTR* args){
    return (INT_PTR)VariantTimeToDosDateTime((DOUBLE)*(args + 0), (USHORT *)*(args + 1), (USHORT *)*(args + 2));
}
INT_PTR WINAPI SafeArrayAllocDescriptor_MWAI(INT_PTR* args){
    return (INT_PTR)SafeArrayAllocDescriptor((UINT)*(args + 0), (SAFEARRAY **)*(args + 1));
}
INT_PTR WINAPI SafeArrayAllocDescriptorEx_MWAI(INT_PTR* args){
    return (INT_PTR)SafeArrayAllocDescriptorEx((VARTYPE)*(args + 0), (UINT)*(args + 1), (SAFEARRAY **)*(args + 2));
}
INT_PTR WINAPI SafeArrayAllocData_MWAI(INT_PTR* args){
    return (INT_PTR)SafeArrayAllocData((SAFEARRAY *)*(args + 0));
}
INT_PTR WINAPI SafeArrayCreate_MWAI(INT_PTR* args){
    return (INT_PTR)SafeArrayCreate((VARTYPE)*(args + 0), (UINT)*(args + 1), (SAFEARRAYBOUND *)*(args + 2));
}
INT_PTR WINAPI SafeArrayCreateEx_MWAI(INT_PTR* args){
    return (INT_PTR)SafeArrayCreateEx((VARTYPE)*(args + 0), (UINT)*(args + 1), (SAFEARRAYBOUND *)*(args + 2), (PVOID)*(args + 3));
}
INT_PTR WINAPI SafeArrayCopyData_MWAI(INT_PTR* args){
    return (INT_PTR)SafeArrayCopyData((SAFEARRAY *)*(args + 0), (SAFEARRAY *)*(args + 1));
}
INT_PTR WINAPI SafeArrayReleaseDescriptor_MWAI(INT_PTR* args){
    SafeArrayReleaseDescriptor((SAFEARRAY *)*(args + 0));
    return 0;
}
INT_PTR WINAPI SafeArrayDestroyDescriptor_MWAI(INT_PTR* args){
    return (INT_PTR)SafeArrayDestroyDescriptor((SAFEARRAY *)*(args + 0));
}
INT_PTR WINAPI SafeArrayReleaseData_MWAI(INT_PTR* args){
    SafeArrayReleaseData((PVOID)*(args + 0));
    return 0;
}
INT_PTR WINAPI SafeArrayDestroyData_MWAI(INT_PTR* args){
    return (INT_PTR)SafeArrayDestroyData((SAFEARRAY *)*(args + 0));
}
INT_PTR WINAPI SafeArrayAddRef_MWAI(INT_PTR* args){
    return (INT_PTR)SafeArrayAddRef((SAFEARRAY *)*(args + 0), (PVOID *)*(args + 1));
}
INT_PTR WINAPI SafeArrayDestroy_MWAI(INT_PTR* args){
    return (INT_PTR)SafeArrayDestroy((SAFEARRAY *)*(args + 0));
}
INT_PTR WINAPI SafeArrayRedim_MWAI(INT_PTR* args){
    return (INT_PTR)SafeArrayRedim((SAFEARRAY *)*(args + 0), (SAFEARRAYBOUND *)*(args + 1));
}
INT_PTR WINAPI SafeArrayGetDim_MWAI(INT_PTR* args){
    return (INT_PTR)SafeArrayGetDim((SAFEARRAY *)*(args + 0));
}
INT_PTR WINAPI SafeArrayGetElemsize_MWAI(INT_PTR* args){
    return (INT_PTR)SafeArrayGetElemsize((SAFEARRAY *)*(args + 0));
}
INT_PTR WINAPI SafeArrayGetUBound_MWAI(INT_PTR* args){
    return (INT_PTR)SafeArrayGetUBound((SAFEARRAY *)*(args + 0), (UINT)*(args + 1), (LONG *)*(args + 2));
}
INT_PTR WINAPI SafeArrayGetLBound_MWAI(INT_PTR* args){
    return (INT_PTR)SafeArrayGetLBound((SAFEARRAY *)*(args + 0), (UINT)*(args + 1), (LONG *)*(args + 2));
}
INT_PTR WINAPI SafeArrayLock_MWAI(INT_PTR* args){
    return (INT_PTR)SafeArrayLock((SAFEARRAY *)*(args + 0));
}
INT_PTR WINAPI SafeArrayUnlock_MWAI(INT_PTR* args){
    return (INT_PTR)SafeArrayUnlock((SAFEARRAY *)*(args + 0));
}
INT_PTR WINAPI SafeArrayAccessData_MWAI(INT_PTR* args){
    return (INT_PTR)SafeArrayAccessData((SAFEARRAY *)*(args + 0), (void **)*(args + 1));
}
INT_PTR WINAPI SafeArrayUnaccessData_MWAI(INT_PTR* args){
    return (INT_PTR)SafeArrayUnaccessData((SAFEARRAY *)*(args + 0));
}
INT_PTR WINAPI SafeArrayGetElement_MWAI(INT_PTR* args){
    return (INT_PTR)SafeArrayGetElement((SAFEARRAY *)*(args + 0), (LONG *)*(args + 1), (void *)*(args + 2));
}
INT_PTR WINAPI SafeArrayPutElement_MWAI(INT_PTR* args){
    return (INT_PTR)SafeArrayPutElement((SAFEARRAY *)*(args + 0), (LONG *)*(args + 1), (void *)*(args + 2));
}
INT_PTR WINAPI SafeArrayCopy_MWAI(INT_PTR* args){
    return (INT_PTR)SafeArrayCopy((SAFEARRAY *)*(args + 0), (SAFEARRAY **)*(args + 1));
}
INT_PTR WINAPI SafeArrayPtrOfIndex_MWAI(INT_PTR* args){
    return (INT_PTR)SafeArrayPtrOfIndex((SAFEARRAY *)*(args + 0), (LONG *)*(args + 1), (void **)*(args + 2));
}
INT_PTR WINAPI SafeArraySetRecordInfo_MWAI(INT_PTR* args){
    return (INT_PTR)SafeArraySetRecordInfo((SAFEARRAY *)*(args + 0), (IRecordInfo *)*(args + 1));
}
INT_PTR WINAPI SafeArrayGetRecordInfo_MWAI(INT_PTR* args){
    return (INT_PTR)SafeArrayGetRecordInfo((SAFEARRAY *)*(args + 0), (IRecordInfo **)*(args + 1));
}
INT_PTR WINAPI SafeArraySetIID_MWAI(INT_PTR* args){
    return (INT_PTR)SafeArraySetIID((SAFEARRAY *)*(args + 0), (const GUID * const)*(args + 1));
}
INT_PTR WINAPI SafeArrayGetIID_MWAI(INT_PTR* args){
    return (INT_PTR)SafeArrayGetIID((SAFEARRAY *)*(args + 0), (GUID *)*(args + 1));
}
INT_PTR WINAPI SafeArrayGetVartype_MWAI(INT_PTR* args){
    return (INT_PTR)SafeArrayGetVartype((SAFEARRAY *)*(args + 0), (VARTYPE *)*(args + 1));
}
INT_PTR WINAPI SafeArrayCreateVector_MWAI(INT_PTR* args){
    return (INT_PTR)SafeArrayCreateVector((VARTYPE)*(args + 0), (LONG)*(args + 1), (ULONG)*(args + 2));
}
INT_PTR WINAPI SafeArrayCreateVectorEx_MWAI(INT_PTR* args){
    return (INT_PTR)SafeArrayCreateVectorEx((VARTYPE)*(args + 0), (LONG)*(args + 1), (ULONG)*(args + 2), (PVOID)*(args + 3));
}
INT_PTR WINAPI VariantInit_MWAI(INT_PTR* args){
    VariantInit((VARIANTARG *)*(args + 0));
    return 0;
}
INT_PTR WINAPI VariantClear_MWAI(INT_PTR* args){
    return (INT_PTR)VariantClear((VARIANTARG *)*(args + 0));
}
INT_PTR WINAPI VariantCopy_MWAI(INT_PTR* args){
    return (INT_PTR)VariantCopy((VARIANTARG *)*(args + 0), (const VARIANTARG *)*(args + 1));
}
INT_PTR WINAPI VariantCopyInd_MWAI(INT_PTR* args){
    return (INT_PTR)VariantCopyInd((VARIANT *)*(args + 0), (const VARIANTARG *)*(args + 1));
}
INT_PTR WINAPI VariantChangeType_MWAI(INT_PTR* args){
    return (INT_PTR)VariantChangeType((VARIANTARG *)*(args + 0), (const VARIANTARG *)*(args + 1), (USHORT)*(args + 2), (VARTYPE)*(args + 3));
}
INT_PTR WINAPI VariantChangeTypeEx_MWAI(INT_PTR* args){
    return (INT_PTR)VariantChangeTypeEx((VARIANTARG *)*(args + 0), (const VARIANTARG *)*(args + 1), (LCID)*(args + 2), (USHORT)*(args + 3), (VARTYPE)*(args + 4));
}
INT_PTR WINAPI VectorFromBstr_MWAI(INT_PTR* args){
    return (INT_PTR)VectorFromBstr((BSTR)*(args + 0), (SAFEARRAY **)*(args + 1));
}
INT_PTR WINAPI BstrFromVector_MWAI(INT_PTR* args){
    return (INT_PTR)BstrFromVector((SAFEARRAY *)*(args + 0), (BSTR *)*(args + 1));
}
INT_PTR WINAPI VarUI1FromI2_MWAI(INT_PTR* args){
    return (INT_PTR)VarUI1FromI2((SHORT)*(args + 0), (BYTE *)*(args + 1));
}
INT_PTR WINAPI VarUI1FromI4_MWAI(INT_PTR* args){
    return (INT_PTR)VarUI1FromI4((LONG)*(args + 0), (BYTE *)*(args + 1));
}
INT_PTR WINAPI VarUI1FromI8_MWAI(INT_PTR* args){
    return (INT_PTR)VarUI1FromI8((LONG64)*(args + 0), (BYTE *)*(args + 1));
}
INT_PTR WINAPI VarUI1FromR4_MWAI(INT_PTR* args){
    return (INT_PTR)VarUI1FromR4((FLOAT)*(args + 0), (BYTE *)*(args + 1));
}
INT_PTR WINAPI VarUI1FromR8_MWAI(INT_PTR* args){
    return (INT_PTR)VarUI1FromR8((DOUBLE)*(args + 0), (BYTE *)*(args + 1));
}
INT_PTR WINAPI VarUI1FromDate_MWAI(INT_PTR* args){
    return (INT_PTR)VarUI1FromDate((DATE)*(args + 0), (BYTE *)*(args + 1));
}
INT_PTR WINAPI VarUI1FromStr_MWAI(INT_PTR* args){
    return (INT_PTR)VarUI1FromStr((LPCOLESTR)*(args + 0), (LCID)*(args + 1), (ULONG)*(args + 2), (BYTE *)*(args + 3));
}
INT_PTR WINAPI VarUI1FromDisp_MWAI(INT_PTR* args){
    return (INT_PTR)VarUI1FromDisp((IDispatch *)*(args + 0), (LCID)*(args + 1), (BYTE *)*(args + 2));
}
INT_PTR WINAPI VarUI1FromI1_MWAI(INT_PTR* args){
    return (INT_PTR)VarUI1FromI1((CHAR)*(args + 0), (BYTE *)*(args + 1));
}
INT_PTR WINAPI VarUI1FromUI2_MWAI(INT_PTR* args){
    return (INT_PTR)VarUI1FromUI2((USHORT)*(args + 0), (BYTE *)*(args + 1));
}
INT_PTR WINAPI VarUI1FromUI4_MWAI(INT_PTR* args){
    return (INT_PTR)VarUI1FromUI4((ULONG)*(args + 0), (BYTE *)*(args + 1));
}
INT_PTR WINAPI VarUI1FromUI8_MWAI(INT_PTR* args){
    return (INT_PTR)VarUI1FromUI8((ULONG64)*(args + 0), (BYTE *)*(args + 1));
}
INT_PTR WINAPI VarUI1FromDec_MWAI(INT_PTR* args){
    return (INT_PTR)VarUI1FromDec((const DECIMAL *)*(args + 0), (BYTE *)*(args + 1));
}
INT_PTR WINAPI VarI2FromUI1_MWAI(INT_PTR* args){
    return (INT_PTR)VarI2FromUI1((BYTE)*(args + 0), (SHORT *)*(args + 1));
}
INT_PTR WINAPI VarI2FromI4_MWAI(INT_PTR* args){
    return (INT_PTR)VarI2FromI4((LONG)*(args + 0), (SHORT *)*(args + 1));
}
INT_PTR WINAPI VarI2FromI8_MWAI(INT_PTR* args){
    return (INT_PTR)VarI2FromI8((LONG64)*(args + 0), (SHORT *)*(args + 1));
}
INT_PTR WINAPI VarI2FromR4_MWAI(INT_PTR* args){
    return (INT_PTR)VarI2FromR4((FLOAT)*(args + 0), (SHORT *)*(args + 1));
}
INT_PTR WINAPI VarI2FromR8_MWAI(INT_PTR* args){
    return (INT_PTR)VarI2FromR8((DOUBLE)*(args + 0), (SHORT *)*(args + 1));
}
INT_PTR WINAPI VarI2FromDate_MWAI(INT_PTR* args){
    return (INT_PTR)VarI2FromDate((DATE)*(args + 0), (SHORT *)*(args + 1));
}
INT_PTR WINAPI VarI2FromStr_MWAI(INT_PTR* args){
    return (INT_PTR)VarI2FromStr((LPCOLESTR)*(args + 0), (LCID)*(args + 1), (ULONG)*(args + 2), (SHORT *)*(args + 3));
}
INT_PTR WINAPI VarI2FromDisp_MWAI(INT_PTR* args){
    return (INT_PTR)VarI2FromDisp((IDispatch *)*(args + 0), (LCID)*(args + 1), (SHORT *)*(args + 2));
}
INT_PTR WINAPI VarI2FromI1_MWAI(INT_PTR* args){
    return (INT_PTR)VarI2FromI1((CHAR)*(args + 0), (SHORT *)*(args + 1));
}
INT_PTR WINAPI VarI2FromUI2_MWAI(INT_PTR* args){
    return (INT_PTR)VarI2FromUI2((USHORT)*(args + 0), (SHORT *)*(args + 1));
}
INT_PTR WINAPI VarI2FromUI4_MWAI(INT_PTR* args){
    return (INT_PTR)VarI2FromUI4((ULONG)*(args + 0), (SHORT *)*(args + 1));
}
INT_PTR WINAPI VarI2FromUI8_MWAI(INT_PTR* args){
    return (INT_PTR)VarI2FromUI8((ULONG64)*(args + 0), (SHORT *)*(args + 1));
}
INT_PTR WINAPI VarI2FromDec_MWAI(INT_PTR* args){
    return (INT_PTR)VarI2FromDec((const DECIMAL *)*(args + 0), (SHORT *)*(args + 1));
}
INT_PTR WINAPI VarI4FromUI1_MWAI(INT_PTR* args){
    return (INT_PTR)VarI4FromUI1((BYTE)*(args + 0), (LONG *)*(args + 1));
}
INT_PTR WINAPI VarI4FromI2_MWAI(INT_PTR* args){
    return (INT_PTR)VarI4FromI2((SHORT)*(args + 0), (LONG *)*(args + 1));
}
INT_PTR WINAPI VarI4FromI8_MWAI(INT_PTR* args){
    return (INT_PTR)VarI4FromI8((LONG64)*(args + 0), (LONG *)*(args + 1));
}
INT_PTR WINAPI VarI4FromR4_MWAI(INT_PTR* args){
    return (INT_PTR)VarI4FromR4((FLOAT)*(args + 0), (LONG *)*(args + 1));
}
INT_PTR WINAPI VarI4FromR8_MWAI(INT_PTR* args){
    return (INT_PTR)VarI4FromR8((DOUBLE)*(args + 0), (LONG *)*(args + 1));
}
INT_PTR WINAPI VarI4FromDate_MWAI(INT_PTR* args){
    return (INT_PTR)VarI4FromDate((DATE)*(args + 0), (LONG *)*(args + 1));
}
INT_PTR WINAPI VarI4FromStr_MWAI(INT_PTR* args){
    return (INT_PTR)VarI4FromStr((LPCOLESTR)*(args + 0), (LCID)*(args + 1), (ULONG)*(args + 2), (LONG *)*(args + 3));
}
INT_PTR WINAPI VarI4FromDisp_MWAI(INT_PTR* args){
    return (INT_PTR)VarI4FromDisp((IDispatch *)*(args + 0), (LCID)*(args + 1), (LONG *)*(args + 2));
}
INT_PTR WINAPI VarI4FromI1_MWAI(INT_PTR* args){
    return (INT_PTR)VarI4FromI1((CHAR)*(args + 0), (LONG *)*(args + 1));
}
INT_PTR WINAPI VarI4FromUI2_MWAI(INT_PTR* args){
    return (INT_PTR)VarI4FromUI2((USHORT)*(args + 0), (LONG *)*(args + 1));
}
INT_PTR WINAPI VarI4FromUI4_MWAI(INT_PTR* args){
    return (INT_PTR)VarI4FromUI4((ULONG)*(args + 0), (LONG *)*(args + 1));
}
INT_PTR WINAPI VarI4FromUI8_MWAI(INT_PTR* args){
    return (INT_PTR)VarI4FromUI8((ULONG64)*(args + 0), (LONG *)*(args + 1));
}
INT_PTR WINAPI VarI4FromDec_MWAI(INT_PTR* args){
    return (INT_PTR)VarI4FromDec((const DECIMAL *)*(args + 0), (LONG *)*(args + 1));
}
INT_PTR WINAPI VarI8FromUI1_MWAI(INT_PTR* args){
    return (INT_PTR)VarI8FromUI1((BYTE)*(args + 0), (LONG64 *)*(args + 1));
}
INT_PTR WINAPI VarI8FromI2_MWAI(INT_PTR* args){
    return (INT_PTR)VarI8FromI2((SHORT)*(args + 0), (LONG64 *)*(args + 1));
}
INT_PTR WINAPI VarI8FromR4_MWAI(INT_PTR* args){
    return (INT_PTR)VarI8FromR4((FLOAT)*(args + 0), (LONG64 *)*(args + 1));
}
INT_PTR WINAPI VarI8FromR8_MWAI(INT_PTR* args){
    return (INT_PTR)VarI8FromR8((DOUBLE)*(args + 0), (LONG64 *)*(args + 1));
}
INT_PTR WINAPI VarI8FromDate_MWAI(INT_PTR* args){
    return (INT_PTR)VarI8FromDate((DATE)*(args + 0), (LONG64 *)*(args + 1));
}
INT_PTR WINAPI VarI8FromStr_MWAI(INT_PTR* args){
    return (INT_PTR)VarI8FromStr((LPCOLESTR)*(args + 0), (LCID)*(args + 1), (ULONG)*(args + 2), (LONG64 *)*(args + 3));
}
INT_PTR WINAPI VarI8FromDisp_MWAI(INT_PTR* args){
    return (INT_PTR)VarI8FromDisp((IDispatch *)*(args + 0), (LCID)*(args + 1), (LONG64 *)*(args + 2));
}
INT_PTR WINAPI VarI8FromI1_MWAI(INT_PTR* args){
    return (INT_PTR)VarI8FromI1((CHAR)*(args + 0), (LONG64 *)*(args + 1));
}
INT_PTR WINAPI VarI8FromUI2_MWAI(INT_PTR* args){
    return (INT_PTR)VarI8FromUI2((USHORT)*(args + 0), (LONG64 *)*(args + 1));
}
INT_PTR WINAPI VarI8FromUI4_MWAI(INT_PTR* args){
    return (INT_PTR)VarI8FromUI4((ULONG)*(args + 0), (LONG64 *)*(args + 1));
}
INT_PTR WINAPI VarI8FromUI8_MWAI(INT_PTR* args){
    return (INT_PTR)VarI8FromUI8((ULONG64)*(args + 0), (LONG64 *)*(args + 1));
}
INT_PTR WINAPI VarI8FromDec_MWAI(INT_PTR* args){
    return (INT_PTR)VarI8FromDec((const DECIMAL *)*(args + 0), (LONG64 *)*(args + 1));
}
INT_PTR WINAPI VarR4FromUI1_MWAI(INT_PTR* args){
    return (INT_PTR)VarR4FromUI1((BYTE)*(args + 0), (FLOAT *)*(args + 1));
}
INT_PTR WINAPI VarR4FromI2_MWAI(INT_PTR* args){
    return (INT_PTR)VarR4FromI2((SHORT)*(args + 0), (FLOAT *)*(args + 1));
}
INT_PTR WINAPI VarR4FromI4_MWAI(INT_PTR* args){
    return (INT_PTR)VarR4FromI4((LONG)*(args + 0), (FLOAT *)*(args + 1));
}
INT_PTR WINAPI VarR4FromI8_MWAI(INT_PTR* args){
    return (INT_PTR)VarR4FromI8((LONG64)*(args + 0), (FLOAT *)*(args + 1));
}
INT_PTR WINAPI VarR4FromR8_MWAI(INT_PTR* args){
    return (INT_PTR)VarR4FromR8((DOUBLE)*(args + 0), (FLOAT *)*(args + 1));
}
INT_PTR WINAPI VarR4FromDate_MWAI(INT_PTR* args){
    return (INT_PTR)VarR4FromDate((DATE)*(args + 0), (FLOAT *)*(args + 1));
}
INT_PTR WINAPI VarR4FromStr_MWAI(INT_PTR* args){
    return (INT_PTR)VarR4FromStr((LPCOLESTR)*(args + 0), (LCID)*(args + 1), (ULONG)*(args + 2), (FLOAT *)*(args + 3));
}
INT_PTR WINAPI VarR4FromDisp_MWAI(INT_PTR* args){
    return (INT_PTR)VarR4FromDisp((IDispatch *)*(args + 0), (LCID)*(args + 1), (FLOAT *)*(args + 2));
}
INT_PTR WINAPI VarR4FromI1_MWAI(INT_PTR* args){
    return (INT_PTR)VarR4FromI1((CHAR)*(args + 0), (FLOAT *)*(args + 1));
}
INT_PTR WINAPI VarR4FromUI2_MWAI(INT_PTR* args){
    return (INT_PTR)VarR4FromUI2((USHORT)*(args + 0), (FLOAT *)*(args + 1));
}
INT_PTR WINAPI VarR4FromUI4_MWAI(INT_PTR* args){
    return (INT_PTR)VarR4FromUI4((ULONG)*(args + 0), (FLOAT *)*(args + 1));
}
INT_PTR WINAPI VarR4FromUI8_MWAI(INT_PTR* args){
    return (INT_PTR)VarR4FromUI8((ULONG64)*(args + 0), (FLOAT *)*(args + 1));
}
INT_PTR WINAPI VarR4FromDec_MWAI(INT_PTR* args){
    return (INT_PTR)VarR4FromDec((const DECIMAL *)*(args + 0), (FLOAT *)*(args + 1));
}
INT_PTR WINAPI VarR8FromUI1_MWAI(INT_PTR* args){
    return (INT_PTR)VarR8FromUI1((BYTE)*(args + 0), (DOUBLE *)*(args + 1));
}
INT_PTR WINAPI VarR8FromI2_MWAI(INT_PTR* args){
    return (INT_PTR)VarR8FromI2((SHORT)*(args + 0), (DOUBLE *)*(args + 1));
}
INT_PTR WINAPI VarR8FromI4_MWAI(INT_PTR* args){
    return (INT_PTR)VarR8FromI4((LONG)*(args + 0), (DOUBLE *)*(args + 1));
}
INT_PTR WINAPI VarR8FromI8_MWAI(INT_PTR* args){
    return (INT_PTR)VarR8FromI8((LONG64)*(args + 0), (DOUBLE *)*(args + 1));
}
INT_PTR WINAPI VarR8FromR4_MWAI(INT_PTR* args){
    return (INT_PTR)VarR8FromR4((FLOAT)*(args + 0), (DOUBLE *)*(args + 1));
}
INT_PTR WINAPI VarR8FromDate_MWAI(INT_PTR* args){
    return (INT_PTR)VarR8FromDate((DATE)*(args + 0), (DOUBLE *)*(args + 1));
}
INT_PTR WINAPI VarR8FromStr_MWAI(INT_PTR* args){
    return (INT_PTR)VarR8FromStr((LPCOLESTR)*(args + 0), (LCID)*(args + 1), (ULONG)*(args + 2), (DOUBLE *)*(args + 3));
}
INT_PTR WINAPI VarR8FromDisp_MWAI(INT_PTR* args){
    return (INT_PTR)VarR8FromDisp((IDispatch *)*(args + 0), (LCID)*(args + 1), (DOUBLE *)*(args + 2));
}
INT_PTR WINAPI VarR8FromI1_MWAI(INT_PTR* args){
    return (INT_PTR)VarR8FromI1((CHAR)*(args + 0), (DOUBLE *)*(args + 1));
}
INT_PTR WINAPI VarR8FromUI2_MWAI(INT_PTR* args){
    return (INT_PTR)VarR8FromUI2((USHORT)*(args + 0), (DOUBLE *)*(args + 1));
}
INT_PTR WINAPI VarR8FromUI4_MWAI(INT_PTR* args){
    return (INT_PTR)VarR8FromUI4((ULONG)*(args + 0), (DOUBLE *)*(args + 1));
}
INT_PTR WINAPI VarR8FromUI8_MWAI(INT_PTR* args){
    return (INT_PTR)VarR8FromUI8((ULONG64)*(args + 0), (DOUBLE *)*(args + 1));
}
INT_PTR WINAPI VarR8FromDec_MWAI(INT_PTR* args){
    return (INT_PTR)VarR8FromDec((const DECIMAL *)*(args + 0), (DOUBLE *)*(args + 1));
}
INT_PTR WINAPI VarDateFromUI1_MWAI(INT_PTR* args){
    return (INT_PTR)VarDateFromUI1((BYTE)*(args + 0), (DATE *)*(args + 1));
}
INT_PTR WINAPI VarDateFromI2_MWAI(INT_PTR* args){
    return (INT_PTR)VarDateFromI2((SHORT)*(args + 0), (DATE *)*(args + 1));
}
INT_PTR WINAPI VarDateFromI4_MWAI(INT_PTR* args){
    return (INT_PTR)VarDateFromI4((LONG)*(args + 0), (DATE *)*(args + 1));
}
INT_PTR WINAPI VarDateFromI8_MWAI(INT_PTR* args){
    return (INT_PTR)VarDateFromI8((LONG64)*(args + 0), (DATE *)*(args + 1));
}
INT_PTR WINAPI VarDateFromR4_MWAI(INT_PTR* args){
    return (INT_PTR)VarDateFromR4((FLOAT)*(args + 0), (DATE *)*(args + 1));
}
INT_PTR WINAPI VarDateFromR8_MWAI(INT_PTR* args){
    return (INT_PTR)VarDateFromR8((DOUBLE)*(args + 0), (DATE *)*(args + 1));
}
INT_PTR WINAPI VarDateFromStr_MWAI(INT_PTR* args){
    return (INT_PTR)VarDateFromStr((LPCOLESTR)*(args + 0), (LCID)*(args + 1), (ULONG)*(args + 2), (DATE *)*(args + 3));
}
INT_PTR WINAPI VarDateFromDisp_MWAI(INT_PTR* args){
    return (INT_PTR)VarDateFromDisp((IDispatch *)*(args + 0), (LCID)*(args + 1), (DATE *)*(args + 2));
}
INT_PTR WINAPI VarDateFromI1_MWAI(INT_PTR* args){
    return (INT_PTR)VarDateFromI1((CHAR)*(args + 0), (DATE *)*(args + 1));
}
INT_PTR WINAPI VarDateFromUI2_MWAI(INT_PTR* args){
    return (INT_PTR)VarDateFromUI2((USHORT)*(args + 0), (DATE *)*(args + 1));
}
INT_PTR WINAPI VarDateFromUI4_MWAI(INT_PTR* args){
    return (INT_PTR)VarDateFromUI4((ULONG)*(args + 0), (DATE *)*(args + 1));
}
INT_PTR WINAPI VarDateFromUI8_MWAI(INT_PTR* args){
    return (INT_PTR)VarDateFromUI8((ULONG64)*(args + 0), (DATE *)*(args + 1));
}
INT_PTR WINAPI VarDateFromDec_MWAI(INT_PTR* args){
    return (INT_PTR)VarDateFromDec((const DECIMAL *)*(args + 0), (DATE *)*(args + 1));
}
INT_PTR WINAPI VarCyFromUI1_MWAI(INT_PTR* args){
    return (INT_PTR)VarCyFromUI1((BYTE)*(args + 0), (CY *)*(args + 1));
}
INT_PTR WINAPI VarCyFromI2_MWAI(INT_PTR* args){
    return (INT_PTR)VarCyFromI2((SHORT)*(args + 0), (CY *)*(args + 1));
}
INT_PTR WINAPI VarCyFromI4_MWAI(INT_PTR* args){
    return (INT_PTR)VarCyFromI4((LONG)*(args + 0), (CY *)*(args + 1));
}
INT_PTR WINAPI VarCyFromI8_MWAI(INT_PTR* args){
    return (INT_PTR)VarCyFromI8((LONG64)*(args + 0), (CY *)*(args + 1));
}
INT_PTR WINAPI VarCyFromR4_MWAI(INT_PTR* args){
    return (INT_PTR)VarCyFromR4((FLOAT)*(args + 0), (CY *)*(args + 1));
}
INT_PTR WINAPI VarCyFromR8_MWAI(INT_PTR* args){
    return (INT_PTR)VarCyFromR8((DOUBLE)*(args + 0), (CY *)*(args + 1));
}
INT_PTR WINAPI VarCyFromDate_MWAI(INT_PTR* args){
    return (INT_PTR)VarCyFromDate((DATE)*(args + 0), (CY *)*(args + 1));
}
INT_PTR WINAPI VarCyFromStr_MWAI(INT_PTR* args){
    return (INT_PTR)VarCyFromStr((LPCOLESTR)*(args + 0), (LCID)*(args + 1), (ULONG)*(args + 2), (CY *)*(args + 3));
}
INT_PTR WINAPI VarCyFromDisp_MWAI(INT_PTR* args){
    return (INT_PTR)VarCyFromDisp((IDispatch *)*(args + 0), (LCID)*(args + 1), (CY *)*(args + 2));
}
INT_PTR WINAPI VarCyFromI1_MWAI(INT_PTR* args){
    return (INT_PTR)VarCyFromI1((CHAR)*(args + 0), (CY *)*(args + 1));
}
INT_PTR WINAPI VarCyFromUI2_MWAI(INT_PTR* args){
    return (INT_PTR)VarCyFromUI2((USHORT)*(args + 0), (CY *)*(args + 1));
}
INT_PTR WINAPI VarCyFromUI4_MWAI(INT_PTR* args){
    return (INT_PTR)VarCyFromUI4((ULONG)*(args + 0), (CY *)*(args + 1));
}
INT_PTR WINAPI VarCyFromUI8_MWAI(INT_PTR* args){
    return (INT_PTR)VarCyFromUI8((ULONG64)*(args + 0), (CY *)*(args + 1));
}
INT_PTR WINAPI VarCyFromDec_MWAI(INT_PTR* args){
    return (INT_PTR)VarCyFromDec((const DECIMAL *)*(args + 0), (CY *)*(args + 1));
}
INT_PTR WINAPI VarBstrFromUI1_MWAI(INT_PTR* args){
    return (INT_PTR)VarBstrFromUI1((BYTE)*(args + 0), (LCID)*(args + 1), (ULONG)*(args + 2), (BSTR *)*(args + 3));
}
INT_PTR WINAPI VarBstrFromI2_MWAI(INT_PTR* args){
    return (INT_PTR)VarBstrFromI2((SHORT)*(args + 0), (LCID)*(args + 1), (ULONG)*(args + 2), (BSTR *)*(args + 3));
}
INT_PTR WINAPI VarBstrFromI4_MWAI(INT_PTR* args){
    return (INT_PTR)VarBstrFromI4((LONG)*(args + 0), (LCID)*(args + 1), (ULONG)*(args + 2), (BSTR *)*(args + 3));
}
INT_PTR WINAPI VarBstrFromI8_MWAI(INT_PTR* args){
    return (INT_PTR)VarBstrFromI8((LONG64)*(args + 0), (LCID)*(args + 1), (ULONG)*(args + 2), (BSTR *)*(args + 3));
}
INT_PTR WINAPI VarBstrFromR4_MWAI(INT_PTR* args){
    return (INT_PTR)VarBstrFromR4((FLOAT)*(args + 0), (LCID)*(args + 1), (ULONG)*(args + 2), (BSTR *)*(args + 3));
}
INT_PTR WINAPI VarBstrFromR8_MWAI(INT_PTR* args){
    return (INT_PTR)VarBstrFromR8((DOUBLE)*(args + 0), (LCID)*(args + 1), (ULONG)*(args + 2), (BSTR *)*(args + 3));
}
INT_PTR WINAPI VarBstrFromDate_MWAI(INT_PTR* args){
    return (INT_PTR)VarBstrFromDate((DATE)*(args + 0), (LCID)*(args + 1), (ULONG)*(args + 2), (BSTR *)*(args + 3));
}
INT_PTR WINAPI VarBstrFromDisp_MWAI(INT_PTR* args){
    return (INT_PTR)VarBstrFromDisp((IDispatch *)*(args + 0), (LCID)*(args + 1), (ULONG)*(args + 2), (BSTR *)*(args + 3));
}
INT_PTR WINAPI VarBstrFromI1_MWAI(INT_PTR* args){
    return (INT_PTR)VarBstrFromI1((CHAR)*(args + 0), (LCID)*(args + 1), (ULONG)*(args + 2), (BSTR *)*(args + 3));
}
INT_PTR WINAPI VarBstrFromUI2_MWAI(INT_PTR* args){
    return (INT_PTR)VarBstrFromUI2((USHORT)*(args + 0), (LCID)*(args + 1), (ULONG)*(args + 2), (BSTR *)*(args + 3));
}
INT_PTR WINAPI VarBstrFromUI4_MWAI(INT_PTR* args){
    return (INT_PTR)VarBstrFromUI4((ULONG)*(args + 0), (LCID)*(args + 1), (ULONG)*(args + 2), (BSTR *)*(args + 3));
}
INT_PTR WINAPI VarBstrFromUI8_MWAI(INT_PTR* args){
    return (INT_PTR)VarBstrFromUI8((ULONG64)*(args + 0), (LCID)*(args + 1), (ULONG)*(args + 2), (BSTR *)*(args + 3));
}
INT_PTR WINAPI VarBstrFromDec_MWAI(INT_PTR* args){
    return (INT_PTR)VarBstrFromDec((const DECIMAL *)*(args + 0), (LCID)*(args + 1), (ULONG)*(args + 2), (BSTR *)*(args + 3));
}
INT_PTR WINAPI VarBoolFromUI1_MWAI(INT_PTR* args){
    return (INT_PTR)VarBoolFromUI1((BYTE)*(args + 0), (VARIANT_BOOL *)*(args + 1));
}
INT_PTR WINAPI VarBoolFromI2_MWAI(INT_PTR* args){
    return (INT_PTR)VarBoolFromI2((SHORT)*(args + 0), (VARIANT_BOOL *)*(args + 1));
}
INT_PTR WINAPI VarBoolFromI4_MWAI(INT_PTR* args){
    return (INT_PTR)VarBoolFromI4((LONG)*(args + 0), (VARIANT_BOOL *)*(args + 1));
}
INT_PTR WINAPI VarBoolFromI8_MWAI(INT_PTR* args){
    return (INT_PTR)VarBoolFromI8((LONG64)*(args + 0), (VARIANT_BOOL *)*(args + 1));
}
INT_PTR WINAPI VarBoolFromR4_MWAI(INT_PTR* args){
    return (INT_PTR)VarBoolFromR4((FLOAT)*(args + 0), (VARIANT_BOOL *)*(args + 1));
}
INT_PTR WINAPI VarBoolFromR8_MWAI(INT_PTR* args){
    return (INT_PTR)VarBoolFromR8((DOUBLE)*(args + 0), (VARIANT_BOOL *)*(args + 1));
}
INT_PTR WINAPI VarBoolFromDate_MWAI(INT_PTR* args){
    return (INT_PTR)VarBoolFromDate((DATE)*(args + 0), (VARIANT_BOOL *)*(args + 1));
}
INT_PTR WINAPI VarBoolFromStr_MWAI(INT_PTR* args){
    return (INT_PTR)VarBoolFromStr((LPCOLESTR)*(args + 0), (LCID)*(args + 1), (ULONG)*(args + 2), (VARIANT_BOOL *)*(args + 3));
}
INT_PTR WINAPI VarBoolFromDisp_MWAI(INT_PTR* args){
    return (INT_PTR)VarBoolFromDisp((IDispatch *)*(args + 0), (LCID)*(args + 1), (VARIANT_BOOL *)*(args + 2));
}
INT_PTR WINAPI VarBoolFromI1_MWAI(INT_PTR* args){
    return (INT_PTR)VarBoolFromI1((CHAR)*(args + 0), (VARIANT_BOOL *)*(args + 1));
}
INT_PTR WINAPI VarBoolFromUI2_MWAI(INT_PTR* args){
    return (INT_PTR)VarBoolFromUI2((USHORT)*(args + 0), (VARIANT_BOOL *)*(args + 1));
}
INT_PTR WINAPI VarBoolFromUI4_MWAI(INT_PTR* args){
    return (INT_PTR)VarBoolFromUI4((ULONG)*(args + 0), (VARIANT_BOOL *)*(args + 1));
}
INT_PTR WINAPI VarBoolFromUI8_MWAI(INT_PTR* args){
    return (INT_PTR)VarBoolFromUI8((ULONG64)*(args + 0), (VARIANT_BOOL *)*(args + 1));
}
INT_PTR WINAPI VarBoolFromDec_MWAI(INT_PTR* args){
    return (INT_PTR)VarBoolFromDec((const DECIMAL *)*(args + 0), (VARIANT_BOOL *)*(args + 1));
}
INT_PTR WINAPI VarI1FromUI1_MWAI(INT_PTR* args){
    return (INT_PTR)VarI1FromUI1((BYTE)*(args + 0), (CHAR *)*(args + 1));
}
INT_PTR WINAPI VarI1FromI2_MWAI(INT_PTR* args){
    return (INT_PTR)VarI1FromI2((SHORT)*(args + 0), (CHAR *)*(args + 1));
}
INT_PTR WINAPI VarI1FromI4_MWAI(INT_PTR* args){
    return (INT_PTR)VarI1FromI4((LONG)*(args + 0), (CHAR *)*(args + 1));
}
INT_PTR WINAPI VarI1FromI8_MWAI(INT_PTR* args){
    return (INT_PTR)VarI1FromI8((LONG64)*(args + 0), (CHAR *)*(args + 1));
}
INT_PTR WINAPI VarI1FromR4_MWAI(INT_PTR* args){
    return (INT_PTR)VarI1FromR4((FLOAT)*(args + 0), (CHAR *)*(args + 1));
}
INT_PTR WINAPI VarI1FromR8_MWAI(INT_PTR* args){
    return (INT_PTR)VarI1FromR8((DOUBLE)*(args + 0), (CHAR *)*(args + 1));
}
INT_PTR WINAPI VarI1FromDate_MWAI(INT_PTR* args){
    return (INT_PTR)VarI1FromDate((DATE)*(args + 0), (CHAR *)*(args + 1));
}
INT_PTR WINAPI VarI1FromStr_MWAI(INT_PTR* args){
    return (INT_PTR)VarI1FromStr((LPCOLESTR)*(args + 0), (LCID)*(args + 1), (ULONG)*(args + 2), (CHAR *)*(args + 3));
}
INT_PTR WINAPI VarI1FromDisp_MWAI(INT_PTR* args){
    return (INT_PTR)VarI1FromDisp((IDispatch *)*(args + 0), (LCID)*(args + 1), (CHAR *)*(args + 2));
}
INT_PTR WINAPI VarI1FromUI2_MWAI(INT_PTR* args){
    return (INT_PTR)VarI1FromUI2((USHORT)*(args + 0), (CHAR *)*(args + 1));
}
INT_PTR WINAPI VarI1FromUI4_MWAI(INT_PTR* args){
    return (INT_PTR)VarI1FromUI4((ULONG)*(args + 0), (CHAR *)*(args + 1));
}
INT_PTR WINAPI VarI1FromUI8_MWAI(INT_PTR* args){
    return (INT_PTR)VarI1FromUI8((ULONG64)*(args + 0), (CHAR *)*(args + 1));
}
INT_PTR WINAPI VarI1FromDec_MWAI(INT_PTR* args){
    return (INT_PTR)VarI1FromDec((const DECIMAL *)*(args + 0), (CHAR *)*(args + 1));
}
INT_PTR WINAPI VarUI2FromUI1_MWAI(INT_PTR* args){
    return (INT_PTR)VarUI2FromUI1((BYTE)*(args + 0), (USHORT *)*(args + 1));
}
INT_PTR WINAPI VarUI2FromI2_MWAI(INT_PTR* args){
    return (INT_PTR)VarUI2FromI2((SHORT)*(args + 0), (USHORT *)*(args + 1));
}
INT_PTR WINAPI VarUI2FromI4_MWAI(INT_PTR* args){
    return (INT_PTR)VarUI2FromI4((LONG)*(args + 0), (USHORT *)*(args + 1));
}
INT_PTR WINAPI VarUI2FromI8_MWAI(INT_PTR* args){
    return (INT_PTR)VarUI2FromI8((LONG64)*(args + 0), (USHORT *)*(args + 1));
}
INT_PTR WINAPI VarUI2FromR4_MWAI(INT_PTR* args){
    return (INT_PTR)VarUI2FromR4((FLOAT)*(args + 0), (USHORT *)*(args + 1));
}
INT_PTR WINAPI VarUI2FromR8_MWAI(INT_PTR* args){
    return (INT_PTR)VarUI2FromR8((DOUBLE)*(args + 0), (USHORT *)*(args + 1));
}
INT_PTR WINAPI VarUI2FromDate_MWAI(INT_PTR* args){
    return (INT_PTR)VarUI2FromDate((DATE)*(args + 0), (USHORT *)*(args + 1));
}
INT_PTR WINAPI VarUI2FromStr_MWAI(INT_PTR* args){
    return (INT_PTR)VarUI2FromStr((LPCOLESTR)*(args + 0), (LCID)*(args + 1), (ULONG)*(args + 2), (USHORT *)*(args + 3));
}
INT_PTR WINAPI VarUI2FromDisp_MWAI(INT_PTR* args){
    return (INT_PTR)VarUI2FromDisp((IDispatch *)*(args + 0), (LCID)*(args + 1), (USHORT *)*(args + 2));
}
INT_PTR WINAPI VarUI2FromI1_MWAI(INT_PTR* args){
    return (INT_PTR)VarUI2FromI1((CHAR)*(args + 0), (USHORT *)*(args + 1));
}
INT_PTR WINAPI VarUI2FromUI4_MWAI(INT_PTR* args){
    return (INT_PTR)VarUI2FromUI4((ULONG)*(args + 0), (USHORT *)*(args + 1));
}
INT_PTR WINAPI VarUI2FromUI8_MWAI(INT_PTR* args){
    return (INT_PTR)VarUI2FromUI8((ULONG64)*(args + 0), (USHORT *)*(args + 1));
}
INT_PTR WINAPI VarUI2FromDec_MWAI(INT_PTR* args){
    return (INT_PTR)VarUI2FromDec((const DECIMAL *)*(args + 0), (USHORT *)*(args + 1));
}
INT_PTR WINAPI VarUI4FromUI1_MWAI(INT_PTR* args){
    return (INT_PTR)VarUI4FromUI1((BYTE)*(args + 0), (ULONG *)*(args + 1));
}
INT_PTR WINAPI VarUI4FromI2_MWAI(INT_PTR* args){
    return (INT_PTR)VarUI4FromI2((SHORT)*(args + 0), (ULONG *)*(args + 1));
}
INT_PTR WINAPI VarUI4FromI4_MWAI(INT_PTR* args){
    return (INT_PTR)VarUI4FromI4((LONG)*(args + 0), (ULONG *)*(args + 1));
}
INT_PTR WINAPI VarUI4FromI8_MWAI(INT_PTR* args){
    return (INT_PTR)VarUI4FromI8((LONG64)*(args + 0), (ULONG *)*(args + 1));
}
INT_PTR WINAPI VarUI4FromR4_MWAI(INT_PTR* args){
    return (INT_PTR)VarUI4FromR4((FLOAT)*(args + 0), (ULONG *)*(args + 1));
}
INT_PTR WINAPI VarUI4FromR8_MWAI(INT_PTR* args){
    return (INT_PTR)VarUI4FromR8((DOUBLE)*(args + 0), (ULONG *)*(args + 1));
}
INT_PTR WINAPI VarUI4FromDate_MWAI(INT_PTR* args){
    return (INT_PTR)VarUI4FromDate((DATE)*(args + 0), (ULONG *)*(args + 1));
}
INT_PTR WINAPI VarUI4FromStr_MWAI(INT_PTR* args){
    return (INT_PTR)VarUI4FromStr((LPCOLESTR)*(args + 0), (LCID)*(args + 1), (ULONG)*(args + 2), (ULONG *)*(args + 3));
}
INT_PTR WINAPI VarUI4FromDisp_MWAI(INT_PTR* args){
    return (INT_PTR)VarUI4FromDisp((IDispatch *)*(args + 0), (LCID)*(args + 1), (ULONG *)*(args + 2));
}
INT_PTR WINAPI VarUI4FromI1_MWAI(INT_PTR* args){
    return (INT_PTR)VarUI4FromI1((CHAR)*(args + 0), (ULONG *)*(args + 1));
}
INT_PTR WINAPI VarUI4FromUI2_MWAI(INT_PTR* args){
    return (INT_PTR)VarUI4FromUI2((USHORT)*(args + 0), (ULONG *)*(args + 1));
}
INT_PTR WINAPI VarUI4FromUI8_MWAI(INT_PTR* args){
    return (INT_PTR)VarUI4FromUI8((ULONG64)*(args + 0), (ULONG *)*(args + 1));
}
INT_PTR WINAPI VarUI4FromDec_MWAI(INT_PTR* args){
    return (INT_PTR)VarUI4FromDec((const DECIMAL *)*(args + 0), (ULONG *)*(args + 1));
}
INT_PTR WINAPI VarUI8FromUI1_MWAI(INT_PTR* args){
    return (INT_PTR)VarUI8FromUI1((BYTE)*(args + 0), (ULONG64 *)*(args + 1));
}
INT_PTR WINAPI VarUI8FromI2_MWAI(INT_PTR* args){
    return (INT_PTR)VarUI8FromI2((SHORT)*(args + 0), (ULONG64 *)*(args + 1));
}
INT_PTR WINAPI VarUI8FromI8_MWAI(INT_PTR* args){
    return (INT_PTR)VarUI8FromI8((LONG64)*(args + 0), (ULONG64 *)*(args + 1));
}
INT_PTR WINAPI VarUI8FromR4_MWAI(INT_PTR* args){
    return (INT_PTR)VarUI8FromR4((FLOAT)*(args + 0), (ULONG64 *)*(args + 1));
}
INT_PTR WINAPI VarUI8FromR8_MWAI(INT_PTR* args){
    return (INT_PTR)VarUI8FromR8((DOUBLE)*(args + 0), (ULONG64 *)*(args + 1));
}
INT_PTR WINAPI VarUI8FromDate_MWAI(INT_PTR* args){
    return (INT_PTR)VarUI8FromDate((DATE)*(args + 0), (ULONG64 *)*(args + 1));
}
INT_PTR WINAPI VarUI8FromStr_MWAI(INT_PTR* args){
    return (INT_PTR)VarUI8FromStr((LPCOLESTR)*(args + 0), (LCID)*(args + 1), (ULONG)*(args + 2), (ULONG64 *)*(args + 3));
}
INT_PTR WINAPI VarUI8FromDisp_MWAI(INT_PTR* args){
    return (INT_PTR)VarUI8FromDisp((IDispatch *)*(args + 0), (LCID)*(args + 1), (ULONG64 *)*(args + 2));
}
INT_PTR WINAPI VarUI8FromI1_MWAI(INT_PTR* args){
    return (INT_PTR)VarUI8FromI1((CHAR)*(args + 0), (ULONG64 *)*(args + 1));
}
INT_PTR WINAPI VarUI8FromUI2_MWAI(INT_PTR* args){
    return (INT_PTR)VarUI8FromUI2((USHORT)*(args + 0), (ULONG64 *)*(args + 1));
}
INT_PTR WINAPI VarUI8FromUI4_MWAI(INT_PTR* args){
    return (INT_PTR)VarUI8FromUI4((ULONG)*(args + 0), (ULONG64 *)*(args + 1));
}
INT_PTR WINAPI VarUI8FromDec_MWAI(INT_PTR* args){
    return (INT_PTR)VarUI8FromDec((const DECIMAL *)*(args + 0), (ULONG64 *)*(args + 1));
}
INT_PTR WINAPI VarDecFromUI1_MWAI(INT_PTR* args){
    return (INT_PTR)VarDecFromUI1((BYTE)*(args + 0), (DECIMAL *)*(args + 1));
}
INT_PTR WINAPI VarDecFromI2_MWAI(INT_PTR* args){
    return (INT_PTR)VarDecFromI2((SHORT)*(args + 0), (DECIMAL *)*(args + 1));
}
INT_PTR WINAPI VarDecFromI4_MWAI(INT_PTR* args){
    return (INT_PTR)VarDecFromI4((LONG)*(args + 0), (DECIMAL *)*(args + 1));
}
INT_PTR WINAPI VarDecFromI8_MWAI(INT_PTR* args){
    return (INT_PTR)VarDecFromI8((LONG64)*(args + 0), (DECIMAL *)*(args + 1));
}
INT_PTR WINAPI VarDecFromR4_MWAI(INT_PTR* args){
    return (INT_PTR)VarDecFromR4((FLOAT)*(args + 0), (DECIMAL *)*(args + 1));
}
INT_PTR WINAPI VarDecFromR8_MWAI(INT_PTR* args){
    return (INT_PTR)VarDecFromR8((DOUBLE)*(args + 0), (DECIMAL *)*(args + 1));
}
INT_PTR WINAPI VarDecFromDate_MWAI(INT_PTR* args){
    return (INT_PTR)VarDecFromDate((DATE)*(args + 0), (DECIMAL *)*(args + 1));
}
INT_PTR WINAPI VarDecFromStr_MWAI(INT_PTR* args){
    return (INT_PTR)VarDecFromStr((LPCOLESTR)*(args + 0), (LCID)*(args + 1), (ULONG)*(args + 2), (DECIMAL *)*(args + 3));
}
INT_PTR WINAPI VarDecFromDisp_MWAI(INT_PTR* args){
    return (INT_PTR)VarDecFromDisp((IDispatch *)*(args + 0), (LCID)*(args + 1), (DECIMAL *)*(args + 2));
}
INT_PTR WINAPI VarDecFromI1_MWAI(INT_PTR* args){
    return (INT_PTR)VarDecFromI1((CHAR)*(args + 0), (DECIMAL *)*(args + 1));
}
INT_PTR WINAPI VarDecFromUI2_MWAI(INT_PTR* args){
    return (INT_PTR)VarDecFromUI2((USHORT)*(args + 0), (DECIMAL *)*(args + 1));
}
INT_PTR WINAPI VarDecFromUI4_MWAI(INT_PTR* args){
    return (INT_PTR)VarDecFromUI4((ULONG)*(args + 0), (DECIMAL *)*(args + 1));
}
INT_PTR WINAPI VarDecFromUI8_MWAI(INT_PTR* args){
    return (INT_PTR)VarDecFromUI8((ULONG64)*(args + 0), (DECIMAL *)*(args + 1));
}
INT_PTR WINAPI VarParseNumFromStr_MWAI(INT_PTR* args){
    return (INT_PTR)VarParseNumFromStr((LPCOLESTR)*(args + 0), (LCID)*(args + 1), (ULONG)*(args + 2), (NUMPARSE *)*(args + 3), (BYTE *)*(args + 4));
}
INT_PTR WINAPI VarNumFromParseNum_MWAI(INT_PTR* args){
    return (INT_PTR)VarNumFromParseNum((NUMPARSE *)*(args + 0), (BYTE *)*(args + 1), (ULONG)*(args + 2), (VARIANT *)*(args + 3));
}
INT_PTR WINAPI VarBstrCat_MWAI(INT_PTR* args){
    return (INT_PTR)VarBstrCat((BSTR)*(args + 0), (BSTR)*(args + 1), (LPBSTR)*(args + 2));
}
INT_PTR WINAPI VarBstrCmp_MWAI(INT_PTR* args){
    return (INT_PTR)VarBstrCmp((BSTR)*(args + 0), (BSTR)*(args + 1), (LCID)*(args + 2), (ULONG)*(args + 3));
}
INT_PTR WINAPI VarDateFromUdate_MWAI(INT_PTR* args){
    return (INT_PTR)VarDateFromUdate((UDATE *)*(args + 0), (ULONG)*(args + 1), (DATE *)*(args + 2));
}
INT_PTR WINAPI VarDateFromUdateEx_MWAI(INT_PTR* args){
    return (INT_PTR)VarDateFromUdateEx((UDATE *)*(args + 0), (LCID)*(args + 1), (ULONG)*(args + 2), (DATE *)*(args + 3));
}
INT_PTR WINAPI VarUdateFromDate_MWAI(INT_PTR* args){
    return (INT_PTR)VarUdateFromDate((DATE)*(args + 0), (ULONG)*(args + 1), (UDATE *)*(args + 2));
}
INT_PTR WINAPI GetAltMonthNames_MWAI(INT_PTR* args){
    return (INT_PTR)GetAltMonthNames((LCID)*(args + 0), (LPOLESTR * *)*(args + 1));
}
INT_PTR WINAPI VarWeekdayName_MWAI(INT_PTR* args){
    return (INT_PTR)VarWeekdayName((int)*(args + 0), (int)*(args + 1), (int)*(args + 2), (ULONG)*(args + 3), (BSTR *)*(args + 4));
}
INT_PTR WINAPI VarMonthName_MWAI(INT_PTR* args){
    return (INT_PTR)VarMonthName((int)*(args + 0), (int)*(args + 1), (ULONG)*(args + 2), (BSTR *)*(args + 3));
}
INT_PTR WINAPI VarTokenizeFormatString_MWAI(INT_PTR* args){
    return (INT_PTR)VarTokenizeFormatString((LPOLESTR)*(args + 0), (LPBYTE)*(args + 1), (int)*(args + 2), (int)*(args + 3), (int)*(args + 4), (LCID)*(args + 5), (int *)*(args + 6));
}
INT_PTR WINAPI LHashValOfNameSysA_MWAI(INT_PTR* args){
    return (INT_PTR)LHashValOfNameSysA((SYSKIND)*(args + 0), (LCID)*(args + 1), (LPCSTR)*(args + 2));
}
INT_PTR WINAPI LHashValOfNameSys_MWAI(INT_PTR* args){
    return (INT_PTR)LHashValOfNameSys((SYSKIND)*(args + 0), (LCID)*(args + 1), (const OLECHAR *)*(args + 2));
}
INT_PTR WINAPI LoadTypeLib_MWAI(INT_PTR* args){
    return (INT_PTR)LoadTypeLib((LPCOLESTR)*(args + 0), (ITypeLib **)*(args + 1));
}
INT_PTR WINAPI LoadTypeLibEx_MWAI(INT_PTR* args){
    return (INT_PTR)LoadTypeLibEx((LPCOLESTR)*(args + 0), (REGKIND)*(args + 1), (ITypeLib **)*(args + 2));
}
INT_PTR WINAPI LoadRegTypeLib_MWAI(INT_PTR* args){
    return (INT_PTR)LoadRegTypeLib((const GUID * const)*(args + 0), (WORD)*(args + 1), (WORD)*(args + 2), (LCID)*(args + 3), (ITypeLib **)*(args + 4));
}
INT_PTR WINAPI QueryPathOfRegTypeLib_MWAI(INT_PTR* args){
    return (INT_PTR)QueryPathOfRegTypeLib((const GUID * const)*(args + 0), (USHORT)*(args + 1), (USHORT)*(args + 2), (LCID)*(args + 3), (LPBSTR)*(args + 4));
}
INT_PTR WINAPI RegisterTypeLib_MWAI(INT_PTR* args){
    return (INT_PTR)RegisterTypeLib((ITypeLib *)*(args + 0), (LPCOLESTR)*(args + 1), (LPCOLESTR)*(args + 2));
}
INT_PTR WINAPI UnRegisterTypeLib_MWAI(INT_PTR* args){
    return (INT_PTR)UnRegisterTypeLib((const GUID * const)*(args + 0), (WORD)*(args + 1), (WORD)*(args + 2), (LCID)*(args + 3), (SYSKIND)*(args + 4));
}
INT_PTR WINAPI RegisterTypeLibForUser_MWAI(INT_PTR* args){
    return (INT_PTR)RegisterTypeLibForUser((ITypeLib *)*(args + 0), (OLECHAR  *)*(args + 1), (OLECHAR  *)*(args + 2));
}
INT_PTR WINAPI UnRegisterTypeLibForUser_MWAI(INT_PTR* args){
    return (INT_PTR)UnRegisterTypeLibForUser((const GUID * const)*(args + 0), (WORD)*(args + 1), (WORD)*(args + 2), (LCID)*(args + 3), (SYSKIND)*(args + 4));
}
INT_PTR WINAPI CreateTypeLib_MWAI(INT_PTR* args){
    return (INT_PTR)CreateTypeLib((SYSKIND)*(args + 0), (LPCOLESTR)*(args + 1), (ICreateTypeLib **)*(args + 2));
}
INT_PTR WINAPI CreateTypeLib2_MWAI(INT_PTR* args){
    return (INT_PTR)CreateTypeLib2((SYSKIND)*(args + 0), (LPCOLESTR)*(args + 1), (ICreateTypeLib2 **)*(args + 2));
}
INT_PTR WINAPI DispGetParam_MWAI(INT_PTR* args){
    return (INT_PTR)DispGetParam((DISPPARAMS *)*(args + 0), (UINT)*(args + 1), (VARTYPE)*(args + 2), (VARIANT *)*(args + 3), (UINT *)*(args + 4));
}
INT_PTR WINAPI DispGetIDsOfNames_MWAI(INT_PTR* args){
    return (INT_PTR)DispGetIDsOfNames((ITypeInfo *)*(args + 0), (LPOLESTR*)*(args + 1), (UINT)*(args + 2), (DISPID *)*(args + 3));
}
INT_PTR WINAPI DispInvoke_MWAI(INT_PTR* args){
    return (INT_PTR)DispInvoke((void *)*(args + 0), (ITypeInfo *)*(args + 1), (DISPID)*(args + 2), (WORD)*(args + 3), (DISPPARAMS *)*(args + 4), (VARIANT *)*(args + 5), (EXCEPINFO *)*(args + 6), (UINT *)*(args + 7));
}
INT_PTR WINAPI CreateDispTypeInfo_MWAI(INT_PTR* args){
    return (INT_PTR)CreateDispTypeInfo((INTERFACEDATA *)*(args + 0), (LCID)*(args + 1), (ITypeInfo **)*(args + 2));
}
INT_PTR WINAPI CreateStdDispatch_MWAI(INT_PTR* args){
    return (INT_PTR)CreateStdDispatch((IUnknown *)*(args + 0), (void *)*(args + 1), (ITypeInfo *)*(args + 2), (IUnknown **)*(args + 3));
}
INT_PTR WINAPI DispCallFunc_MWAI(INT_PTR* args){
    return (INT_PTR)DispCallFunc((void *)*(args + 0), (ULONG_PTR)*(args + 1), (CALLCONV)*(args + 2), (VARTYPE)*(args + 3), (UINT)*(args + 4), (VARTYPE *)*(args + 5), (VARIANTARG **)*(args + 6), (VARIANT *)*(args + 7));
}
INT_PTR WINAPI RegisterActiveObject_MWAI(INT_PTR* args){
    return (INT_PTR)RegisterActiveObject((IUnknown *)*(args + 0), (const IID * const)*(args + 1), (DWORD)*(args + 2), (DWORD *)*(args + 3));
}
INT_PTR WINAPI RevokeActiveObject_MWAI(INT_PTR* args){
    return (INT_PTR)RevokeActiveObject((DWORD)*(args + 0), (void *)*(args + 1));
}
INT_PTR WINAPI GetActiveObject_MWAI(INT_PTR* args){
    return (INT_PTR)GetActiveObject((const IID * const)*(args + 0), (void *)*(args + 1), (IUnknown **)*(args + 2));
}
INT_PTR WINAPI SetErrorInfo_MWAI(INT_PTR* args){
    return (INT_PTR)SetErrorInfo((ULONG)*(args + 0), (IErrorInfo *)*(args + 1));
}
INT_PTR WINAPI GetErrorInfo_MWAI(INT_PTR* args){
    return (INT_PTR)GetErrorInfo((ULONG)*(args + 0), (IErrorInfo **)*(args + 1));
}
INT_PTR WINAPI CreateErrorInfo_MWAI(INT_PTR* args){
    return (INT_PTR)CreateErrorInfo((ICreateErrorInfo **)*(args + 0));
}
INT_PTR WINAPI GetRecordInfoFromTypeInfo_MWAI(INT_PTR* args){
    return (INT_PTR)GetRecordInfoFromTypeInfo((ITypeInfo *)*(args + 0), (IRecordInfo **)*(args + 1));
}
INT_PTR WINAPI GetRecordInfoFromGuids_MWAI(INT_PTR* args){
    return (INT_PTR)GetRecordInfoFromGuids((const GUID * const)*(args + 0), (ULONG)*(args + 1), (ULONG)*(args + 2), (LCID)*(args + 3), (const GUID * const)*(args + 4), (IRecordInfo **)*(args + 5));
}
INT_PTR WINAPI OaBuildVersion_MWAI(INT_PTR* args){
    return (INT_PTR)OaBuildVersion();
}
INT_PTR WINAPI ClearCustData_MWAI(INT_PTR* args){
    ClearCustData((LPCUSTDATA)*(args + 0));
    return 0;
}
INT_PTR WINAPI OaEnablePerUserTLibRegistration_MWAI(INT_PTR* args){
    OaEnablePerUserTLibRegistration();
    return 0;
}
INT_PTR WINAPI OleBuildVersion_MWAI(INT_PTR* args){
    return (INT_PTR)OleBuildVersion();
}
INT_PTR WINAPI WriteFmtUserTypeStg_MWAI(INT_PTR* args){
    return (INT_PTR)WriteFmtUserTypeStg((LPSTORAGE)*(args + 0), (CLIPFORMAT)*(args + 1), (LPOLESTR)*(args + 2));
}
INT_PTR WINAPI ReadFmtUserTypeStg_MWAI(INT_PTR* args){
    return (INT_PTR)ReadFmtUserTypeStg((LPSTORAGE)*(args + 0), (CLIPFORMAT *)*(args + 1), (LPOLESTR *)*(args + 2));
}
INT_PTR WINAPI OleInitialize_MWAI(INT_PTR* args){
    return (INT_PTR)OleInitialize((LPVOID)*(args + 0));
}
INT_PTR WINAPI OleUninitialize_MWAI(INT_PTR* args){
    OleUninitialize();
    return 0;
}
INT_PTR WINAPI OleQueryLinkFromData_MWAI(INT_PTR* args){
    return (INT_PTR)OleQueryLinkFromData((LPDATAOBJECT)*(args + 0));
}
INT_PTR WINAPI OleQueryCreateFromData_MWAI(INT_PTR* args){
    return (INT_PTR)OleQueryCreateFromData((LPDATAOBJECT)*(args + 0));
}
INT_PTR WINAPI OleCreate_MWAI(INT_PTR* args){
    return (INT_PTR)OleCreate((const IID * const)*(args + 0), (const IID * const)*(args + 1), (DWORD)*(args + 2), (LPFORMATETC)*(args + 3), (LPOLECLIENTSITE)*(args + 4), (LPSTORAGE)*(args + 5), (LPVOID *)*(args + 6));
}
INT_PTR WINAPI OleCreateEx_MWAI(INT_PTR* args){
    return (INT_PTR)OleCreateEx((const IID * const)*(args + 0), (const IID * const)*(args + 1), (DWORD)*(args + 2), (DWORD)*(args + 3), (ULONG)*(args + 4), (DWORD*)*(args + 5), (LPFORMATETC)*(args + 6), (IAdviseSink *)*(args + 7), (DWORD *)*(args + 8), (LPOLECLIENTSITE)*(args + 9), (LPSTORAGE)*(args + 10), (LPVOID *)*(args + 11));
}
INT_PTR WINAPI OleCreateFromData_MWAI(INT_PTR* args){
    return (INT_PTR)OleCreateFromData((LPDATAOBJECT)*(args + 0), (const IID * const)*(args + 1), (DWORD)*(args + 2), (LPFORMATETC)*(args + 3), (LPOLECLIENTSITE)*(args + 4), (LPSTORAGE)*(args + 5), (LPVOID *)*(args + 6));
}
INT_PTR WINAPI OleCreateFromDataEx_MWAI(INT_PTR* args){
    return (INT_PTR)OleCreateFromDataEx((LPDATAOBJECT)*(args + 0), (const IID * const)*(args + 1), (DWORD)*(args + 2), (DWORD)*(args + 3), (ULONG)*(args + 4), (DWORD*)*(args + 5), (LPFORMATETC)*(args + 6), (IAdviseSink *)*(args + 7), (DWORD *)*(args + 8), (LPOLECLIENTSITE)*(args + 9), (LPSTORAGE)*(args + 10), (LPVOID *)*(args + 11));
}
INT_PTR WINAPI OleCreateLinkFromData_MWAI(INT_PTR* args){
    return (INT_PTR)OleCreateLinkFromData((LPDATAOBJECT)*(args + 0), (const IID * const)*(args + 1), (DWORD)*(args + 2), (LPFORMATETC)*(args + 3), (LPOLECLIENTSITE)*(args + 4), (LPSTORAGE)*(args + 5), (LPVOID *)*(args + 6));
}
INT_PTR WINAPI OleCreateLinkFromDataEx_MWAI(INT_PTR* args){
    return (INT_PTR)OleCreateLinkFromDataEx((LPDATAOBJECT)*(args + 0), (const IID * const)*(args + 1), (DWORD)*(args + 2), (DWORD)*(args + 3), (ULONG)*(args + 4), (DWORD*)*(args + 5), (LPFORMATETC)*(args + 6), (IAdviseSink *)*(args + 7), (DWORD *)*(args + 8), (LPOLECLIENTSITE)*(args + 9), (LPSTORAGE)*(args + 10), (LPVOID *)*(args + 11));
}
INT_PTR WINAPI OleCreateStaticFromData_MWAI(INT_PTR* args){
    return (INT_PTR)OleCreateStaticFromData((LPDATAOBJECT)*(args + 0), (const IID * const)*(args + 1), (DWORD)*(args + 2), (LPFORMATETC)*(args + 3), (LPOLECLIENTSITE)*(args + 4), (LPSTORAGE)*(args + 5), (LPVOID *)*(args + 6));
}
INT_PTR WINAPI OleCreateLink_MWAI(INT_PTR* args){
    return (INT_PTR)OleCreateLink((LPMONIKER)*(args + 0), (const IID * const)*(args + 1), (DWORD)*(args + 2), (LPFORMATETC)*(args + 3), (LPOLECLIENTSITE)*(args + 4), (LPSTORAGE)*(args + 5), (LPVOID *)*(args + 6));
}
INT_PTR WINAPI OleCreateLinkEx_MWAI(INT_PTR* args){
    return (INT_PTR)OleCreateLinkEx((LPMONIKER)*(args + 0), (const IID * const)*(args + 1), (DWORD)*(args + 2), (DWORD)*(args + 3), (ULONG)*(args + 4), (DWORD*)*(args + 5), (LPFORMATETC)*(args + 6), (IAdviseSink *)*(args + 7), (DWORD *)*(args + 8), (LPOLECLIENTSITE)*(args + 9), (LPSTORAGE)*(args + 10), (LPVOID *)*(args + 11));
}
INT_PTR WINAPI OleCreateLinkToFile_MWAI(INT_PTR* args){
    return (INT_PTR)OleCreateLinkToFile((LPCOLESTR)*(args + 0), (const IID * const)*(args + 1), (DWORD)*(args + 2), (LPFORMATETC)*(args + 3), (LPOLECLIENTSITE)*(args + 4), (LPSTORAGE)*(args + 5), (LPVOID *)*(args + 6));
}
INT_PTR WINAPI OleCreateLinkToFileEx_MWAI(INT_PTR* args){
    return (INT_PTR)OleCreateLinkToFileEx((LPCOLESTR)*(args + 0), (const IID * const)*(args + 1), (DWORD)*(args + 2), (DWORD)*(args + 3), (ULONG)*(args + 4), (DWORD*)*(args + 5), (LPFORMATETC)*(args + 6), (IAdviseSink *)*(args + 7), (DWORD *)*(args + 8), (LPOLECLIENTSITE)*(args + 9), (LPSTORAGE)*(args + 10), (LPVOID *)*(args + 11));
}
INT_PTR WINAPI OleCreateFromFile_MWAI(INT_PTR* args){
    return (INT_PTR)OleCreateFromFile((const IID * const)*(args + 0), (LPCOLESTR)*(args + 1), (const IID * const)*(args + 2), (DWORD)*(args + 3), (LPFORMATETC)*(args + 4), (LPOLECLIENTSITE)*(args + 5), (LPSTORAGE)*(args + 6), (LPVOID *)*(args + 7));
}
INT_PTR WINAPI OleCreateFromFileEx_MWAI(INT_PTR* args){
    return (INT_PTR)OleCreateFromFileEx((const IID * const)*(args + 0), (LPCOLESTR)*(args + 1), (const IID * const)*(args + 2), (DWORD)*(args + 3), (DWORD)*(args + 4), (ULONG)*(args + 5), (DWORD*)*(args + 6), (LPFORMATETC)*(args + 7), (IAdviseSink *)*(args + 8), (DWORD *)*(args + 9), (LPOLECLIENTSITE)*(args + 10), (LPSTORAGE)*(args + 11), (LPVOID *)*(args + 12));
}
INT_PTR WINAPI OleLoad_MWAI(INT_PTR* args){
    return (INT_PTR)OleLoad((LPSTORAGE)*(args + 0), (const IID * const)*(args + 1), (LPOLECLIENTSITE)*(args + 2), (LPVOID *)*(args + 3));
}
INT_PTR WINAPI OleSave_MWAI(INT_PTR* args){
    return (INT_PTR)OleSave((LPPERSISTSTORAGE)*(args + 0), (LPSTORAGE)*(args + 1), (BOOL)*(args + 2));
}
INT_PTR WINAPI OleLoadFromStream_MWAI(INT_PTR* args){
    return (INT_PTR)OleLoadFromStream((LPSTREAM)*(args + 0), (const IID * const)*(args + 1), (LPVOID *)*(args + 2));
}
INT_PTR WINAPI OleSaveToStream_MWAI(INT_PTR* args){
    return (INT_PTR)OleSaveToStream((LPPERSISTSTREAM)*(args + 0), (LPSTREAM)*(args + 1));
}
INT_PTR WINAPI OleSetContainedObject_MWAI(INT_PTR* args){
    return (INT_PTR)OleSetContainedObject((LPUNKNOWN)*(args + 0), (BOOL)*(args + 1));
}
INT_PTR WINAPI OleNoteObjectVisible_MWAI(INT_PTR* args){
    return (INT_PTR)OleNoteObjectVisible((LPUNKNOWN)*(args + 0), (BOOL)*(args + 1));
}
INT_PTR WINAPI RegisterDragDrop_MWAI(INT_PTR* args){
    return (INT_PTR)RegisterDragDrop((HWND)*(args + 0), (LPDROPTARGET)*(args + 1));
}
INT_PTR WINAPI RevokeDragDrop_MWAI(INT_PTR* args){
    return (INT_PTR)RevokeDragDrop((HWND)*(args + 0));
}
INT_PTR WINAPI DoDragDrop_MWAI(INT_PTR* args){
    return (INT_PTR)DoDragDrop((LPDATAOBJECT)*(args + 0), (LPDROPSOURCE)*(args + 1), (DWORD)*(args + 2), (LPDWORD)*(args + 3));
}
INT_PTR WINAPI OleSetClipboard_MWAI(INT_PTR* args){
    return (INT_PTR)OleSetClipboard((LPDATAOBJECT)*(args + 0));
}
INT_PTR WINAPI OleGetClipboard_MWAI(INT_PTR* args){
    return (INT_PTR)OleGetClipboard((LPDATAOBJECT *)*(args + 0));
}
INT_PTR WINAPI OleGetClipboardWithEnterpriseInfo_MWAI(INT_PTR* args){
    return (INT_PTR)OleGetClipboardWithEnterpriseInfo((IDataObject**)*(args + 0), (PWSTR*)*(args + 1), (PWSTR*)*(args + 2), (PWSTR*)*(args + 3), (PWSTR*)*(args + 4));
}
INT_PTR WINAPI OleFlushClipboard_MWAI(INT_PTR* args){
    return (INT_PTR)OleFlushClipboard();
}
INT_PTR WINAPI OleIsCurrentClipboard_MWAI(INT_PTR* args){
    return (INT_PTR)OleIsCurrentClipboard((LPDATAOBJECT)*(args + 0));
}
INT_PTR WINAPI OleCreateMenuDescriptor_MWAI(INT_PTR* args){
    return (INT_PTR)OleCreateMenuDescriptor((HMENU)*(args + 0), (LPOLEMENUGROUPWIDTHS)*(args + 1));
}
INT_PTR WINAPI OleSetMenuDescriptor_MWAI(INT_PTR* args){
    return (INT_PTR)OleSetMenuDescriptor((HOLEMENU)*(args + 0), (HWND)*(args + 1), (HWND)*(args + 2), (LPOLEINPLACEFRAME)*(args + 3), (LPOLEINPLACEACTIVEOBJECT)*(args + 4));
}
INT_PTR WINAPI OleDestroyMenuDescriptor_MWAI(INT_PTR* args){
    return (INT_PTR)OleDestroyMenuDescriptor((HOLEMENU)*(args + 0));
}
INT_PTR WINAPI OleDuplicateData_MWAI(INT_PTR* args){
    return (INT_PTR)OleDuplicateData((HANDLE)*(args + 0), (CLIPFORMAT)*(args + 1), (UINT)*(args + 2));
}
INT_PTR WINAPI OleRun_MWAI(INT_PTR* args){
    return (INT_PTR)OleRun((LPUNKNOWN)*(args + 0));
}
INT_PTR WINAPI OleIsRunning_MWAI(INT_PTR* args){
    return (INT_PTR)OleIsRunning((LPOLEOBJECT)*(args + 0));
}
INT_PTR WINAPI OleLockRunning_MWAI(INT_PTR* args){
    return (INT_PTR)OleLockRunning((LPUNKNOWN)*(args + 0), (BOOL)*(args + 1), (BOOL)*(args + 2));
}
INT_PTR WINAPI ReleaseStgMedium_MWAI(INT_PTR* args){
    ReleaseStgMedium((LPSTGMEDIUM)*(args + 0));
    return 0;
}
INT_PTR WINAPI CreateOleAdviseHolder_MWAI(INT_PTR* args){
    return (INT_PTR)CreateOleAdviseHolder((LPOLEADVISEHOLDER *)*(args + 0));
}
INT_PTR WINAPI OleCreateDefaultHandler_MWAI(INT_PTR* args){
    return (INT_PTR)OleCreateDefaultHandler((const IID * const)*(args + 0), (LPUNKNOWN)*(args + 1), (const IID * const)*(args + 2), (LPVOID *)*(args + 3));
}
INT_PTR WINAPI OleCreateEmbeddingHelper_MWAI(INT_PTR* args){
    return (INT_PTR)OleCreateEmbeddingHelper((const IID * const)*(args + 0), (LPUNKNOWN)*(args + 1), (DWORD)*(args + 2), (LPCLASSFACTORY)*(args + 3), (const IID * const)*(args + 4), (LPVOID *)*(args + 5));
}
INT_PTR WINAPI OleGetIconOfFile_MWAI(INT_PTR* args){
    return (INT_PTR)OleGetIconOfFile((LPOLESTR)*(args + 0), (BOOL)*(args + 1));
}
INT_PTR WINAPI OleGetIconOfClass_MWAI(INT_PTR* args){
    return (INT_PTR)OleGetIconOfClass((const IID * const)*(args + 0), (LPOLESTR)*(args + 1), (BOOL)*(args + 2));
}
INT_PTR WINAPI OleMetafilePictFromIconAndLabel_MWAI(INT_PTR* args){
    return (INT_PTR)OleMetafilePictFromIconAndLabel((HICON)*(args + 0), (LPOLESTR)*(args + 1), (LPOLESTR)*(args + 2), (UINT)*(args + 3));
}
INT_PTR WINAPI OleRegGetUserType_MWAI(INT_PTR* args){
    return (INT_PTR)OleRegGetUserType((const IID * const)*(args + 0), (DWORD)*(args + 1), (LPOLESTR *)*(args + 2));
}
INT_PTR WINAPI OleRegGetMiscStatus_MWAI(INT_PTR* args){
    return (INT_PTR)OleRegGetMiscStatus((const IID * const)*(args + 0), (DWORD)*(args + 1), (DWORD *)*(args + 2));
}
INT_PTR WINAPI OleRegEnumFormatEtc_MWAI(INT_PTR* args){
    return (INT_PTR)OleRegEnumFormatEtc((const IID * const)*(args + 0), (DWORD)*(args + 1), (LPENUMFORMATETC *)*(args + 2));
}
INT_PTR WINAPI OleRegEnumVerbs_MWAI(INT_PTR* args){
    return (INT_PTR)OleRegEnumVerbs((const IID * const)*(args + 0), (LPENUMOLEVERB *)*(args + 1));
}
INT_PTR WINAPI OleConvertOLESTREAMToIStorage_MWAI(INT_PTR* args){
    return (INT_PTR)OleConvertOLESTREAMToIStorage((LPOLESTREAM)*(args + 0), (LPSTORAGE)*(args + 1), (const DVTARGETDEVICE *)*(args + 2));
}
INT_PTR WINAPI OleConvertOLESTREAMToIStorage2_MWAI(INT_PTR* args){
    return (INT_PTR)OleConvertOLESTREAMToIStorage2((LPOLESTREAM)*(args + 0), (LPSTORAGE)*(args + 1), (const DVTARGETDEVICE *)*(args + 2), (DWORD)*(args + 3), (PVOID)*(args + 4), (OLESTREAMQUERYCONVERTOLELINKCALLBACK)*(args + 5));
}
INT_PTR WINAPI OleConvertIStorageToOLESTREAM_MWAI(INT_PTR* args){
    return (INT_PTR)OleConvertIStorageToOLESTREAM((LPSTORAGE)*(args + 0), (LPOLESTREAM)*(args + 1));
}
INT_PTR WINAPI OleSetAutoConvert_MWAI(INT_PTR* args){
    return (INT_PTR)OleSetAutoConvert((const IID * const)*(args + 0), (const IID * const)*(args + 1));
}
INT_PTR WINAPI SetConvertStg_MWAI(INT_PTR* args){
    return (INT_PTR)SetConvertStg((LPSTORAGE)*(args + 0), (BOOL)*(args + 1));
}
INT_PTR WINAPI OleConvertIStorageToOLESTREAMEx_MWAI(INT_PTR* args){
    return (INT_PTR)OleConvertIStorageToOLESTREAMEx((LPSTORAGE)*(args + 0), (CLIPFORMAT)*(args + 1), (LONG)*(args + 2), (LONG)*(args + 3), (DWORD)*(args + 4), (LPSTGMEDIUM)*(args + 5), (LPOLESTREAM)*(args + 6));
}
INT_PTR WINAPI OleConvertOLESTREAMToIStorageEx_MWAI(INT_PTR* args){
    return (INT_PTR)OleConvertOLESTREAMToIStorageEx((LPOLESTREAM)*(args + 0), (LPSTORAGE)*(args + 1), (CLIPFORMAT *)*(args + 2), (LONG *)*(args + 3), (LONG *)*(args + 4), (DWORD *)*(args + 5), (LPSTGMEDIUM)*(args + 6));
}
INT_PTR WINAPI OleConvertOLESTREAMToIStorageEx2_MWAI(INT_PTR* args){
    return (INT_PTR)OleConvertOLESTREAMToIStorageEx2((LPOLESTREAM)*(args + 0), (LPSTORAGE)*(args + 1), (CLIPFORMAT *)*(args + 2), (LONG *)*(args + 3), (LONG *)*(args + 4), (DWORD *)*(args + 5), (LPSTGMEDIUM)*(args + 6), (DWORD)*(args + 7), (PVOID)*(args + 8), (OLESTREAMQUERYCONVERTOLELINKCALLBACK)*(args + 9));
}
INT_PTR WINAPI GetOpenFileNameA_MWAI(INT_PTR* args){
    return (INT_PTR)GetOpenFileNameA((LPOPENFILENAMEA)*(args + 0));
}
INT_PTR WINAPI GetOpenFileNameW_MWAI(INT_PTR* args){
    return (INT_PTR)GetOpenFileNameW((LPOPENFILENAMEW)*(args + 0));
}
INT_PTR WINAPI GetSaveFileNameA_MWAI(INT_PTR* args){
    return (INT_PTR)GetSaveFileNameA((LPOPENFILENAMEA)*(args + 0));
}
INT_PTR WINAPI GetSaveFileNameW_MWAI(INT_PTR* args){
    return (INT_PTR)GetSaveFileNameW((LPOPENFILENAMEW)*(args + 0));
}
INT_PTR WINAPI GetFileTitleA_MWAI(INT_PTR* args){
    return (INT_PTR)GetFileTitleA((LPCSTR)*(args + 0), (LPSTR)*(args + 1), (WORD)*(args + 2));
}
INT_PTR WINAPI GetFileTitleW_MWAI(INT_PTR* args){
    return (INT_PTR)GetFileTitleW((LPCWSTR)*(args + 0), (LPWSTR)*(args + 1), (WORD)*(args + 2));
}
INT_PTR WINAPI ChooseColorA_MWAI(INT_PTR* args){
    return (INT_PTR)ChooseColorA((LPCHOOSECOLORA)*(args + 0));
}
INT_PTR WINAPI ChooseColorW_MWAI(INT_PTR* args){
    return (INT_PTR)ChooseColorW((LPCHOOSECOLORW)*(args + 0));
}
INT_PTR WINAPI FindTextA_MWAI(INT_PTR* args){
    return (INT_PTR)FindTextA((LPFINDREPLACEA)*(args + 0));
}
INT_PTR WINAPI FindTextW_MWAI(INT_PTR* args){
    return (INT_PTR)FindTextW((LPFINDREPLACEW)*(args + 0));
}
INT_PTR WINAPI ReplaceTextA_MWAI(INT_PTR* args){
    return (INT_PTR)ReplaceTextA((LPFINDREPLACEA)*(args + 0));
}
INT_PTR WINAPI ReplaceTextW_MWAI(INT_PTR* args){
    return (INT_PTR)ReplaceTextW((LPFINDREPLACEW)*(args + 0));
}
INT_PTR WINAPI ChooseFontA_MWAI(INT_PTR* args){
    return (INT_PTR)ChooseFontA((LPCHOOSEFONTA)*(args + 0));
}
INT_PTR WINAPI ChooseFontW_MWAI(INT_PTR* args){
    return (INT_PTR)ChooseFontW((LPCHOOSEFONTW)*(args + 0));
}
INT_PTR WINAPI PrintDlgA_MWAI(INT_PTR* args){
    return (INT_PTR)PrintDlgA((LPPRINTDLGA)*(args + 0));
}
INT_PTR WINAPI PrintDlgW_MWAI(INT_PTR* args){
    return (INT_PTR)PrintDlgW((LPPRINTDLGW)*(args + 0));
}
INT_PTR WINAPI PrintDlgExA_MWAI(INT_PTR* args){
    return (INT_PTR)PrintDlgExA((LPPRINTDLGEXA)*(args + 0));
}
INT_PTR WINAPI PrintDlgExW_MWAI(INT_PTR* args){
    return (INT_PTR)PrintDlgExW((LPPRINTDLGEXW)*(args + 0));
}
INT_PTR WINAPI CommDlgExtendedError_MWAI(INT_PTR* args){
    return (INT_PTR)CommDlgExtendedError();
}
INT_PTR WINAPI PageSetupDlgA_MWAI(INT_PTR* args){
    return (INT_PTR)PageSetupDlgA((LPPAGESETUPDLGA)*(args + 0));
}
INT_PTR WINAPI PageSetupDlgW_MWAI(INT_PTR* args){
    return (INT_PTR)PageSetupDlgW((LPPAGESETUPDLGW)*(args + 0));
}
INT_PTR WINAPI uaw_lstrcmpW_MWAI(INT_PTR* args){
    return (INT_PTR)uaw_lstrcmpW((PCUWSTR)*(args + 0), (PCUWSTR)*(args + 1));
}
INT_PTR WINAPI uaw_lstrcmpiW_MWAI(INT_PTR* args){
    return (INT_PTR)uaw_lstrcmpiW((PCUWSTR)*(args + 0), (PCUWSTR)*(args + 1));
}
INT_PTR WINAPI uaw_lstrlenW_MWAI(INT_PTR* args){
    return (INT_PTR)uaw_lstrlenW((LPCUWSTR)*(args + 0));
}
INT_PTR WINAPI ChangeServiceConfigA_MWAI(INT_PTR* args){
    return (INT_PTR)ChangeServiceConfigA((SC_HANDLE)*(args + 0), (DWORD)*(args + 1), (DWORD)*(args + 2), (DWORD)*(args + 3), (LPCSTR)*(args + 4), (LPCSTR)*(args + 5), (LPDWORD)*(args + 6), (LPCSTR)*(args + 7), (LPCSTR)*(args + 8), (LPCSTR)*(args + 9), (LPCSTR)*(args + 10));
}
INT_PTR WINAPI ChangeServiceConfigW_MWAI(INT_PTR* args){
    return (INT_PTR)ChangeServiceConfigW((SC_HANDLE)*(args + 0), (DWORD)*(args + 1), (DWORD)*(args + 2), (DWORD)*(args + 3), (LPCWSTR)*(args + 4), (LPCWSTR)*(args + 5), (LPDWORD)*(args + 6), (LPCWSTR)*(args + 7), (LPCWSTR)*(args + 8), (LPCWSTR)*(args + 9), (LPCWSTR)*(args + 10));
}
INT_PTR WINAPI ChangeServiceConfig2A_MWAI(INT_PTR* args){
    return (INT_PTR)ChangeServiceConfig2A((SC_HANDLE)*(args + 0), (DWORD)*(args + 1), (LPVOID)*(args + 2));
}
INT_PTR WINAPI ChangeServiceConfig2W_MWAI(INT_PTR* args){
    return (INT_PTR)ChangeServiceConfig2W((SC_HANDLE)*(args + 0), (DWORD)*(args + 1), (LPVOID)*(args + 2));
}
INT_PTR WINAPI CloseServiceHandle_MWAI(INT_PTR* args){
    return (INT_PTR)CloseServiceHandle((SC_HANDLE)*(args + 0));
}
INT_PTR WINAPI ControlService_MWAI(INT_PTR* args){
    return (INT_PTR)ControlService((SC_HANDLE)*(args + 0), (DWORD)*(args + 1), (LPSERVICE_STATUS)*(args + 2));
}
INT_PTR WINAPI CreateServiceA_MWAI(INT_PTR* args){
    return (INT_PTR)CreateServiceA((SC_HANDLE)*(args + 0), (LPCSTR)*(args + 1), (LPCSTR)*(args + 2), (DWORD)*(args + 3), (DWORD)*(args + 4), (DWORD)*(args + 5), (DWORD)*(args + 6), (LPCSTR)*(args + 7), (LPCSTR)*(args + 8), (LPDWORD)*(args + 9), (LPCSTR)*(args + 10), (LPCSTR)*(args + 11), (LPCSTR)*(args + 12));
}
INT_PTR WINAPI CreateServiceW_MWAI(INT_PTR* args){
    return (INT_PTR)CreateServiceW((SC_HANDLE)*(args + 0), (LPCWSTR)*(args + 1), (LPCWSTR)*(args + 2), (DWORD)*(args + 3), (DWORD)*(args + 4), (DWORD)*(args + 5), (DWORD)*(args + 6), (LPCWSTR)*(args + 7), (LPCWSTR)*(args + 8), (LPDWORD)*(args + 9), (LPCWSTR)*(args + 10), (LPCWSTR)*(args + 11), (LPCWSTR)*(args + 12));
}
INT_PTR WINAPI DeleteService_MWAI(INT_PTR* args){
    return (INT_PTR)DeleteService((SC_HANDLE)*(args + 0));
}
INT_PTR WINAPI EnumDependentServicesA_MWAI(INT_PTR* args){
    return (INT_PTR)EnumDependentServicesA((SC_HANDLE)*(args + 0), (DWORD)*(args + 1), (LPENUM_SERVICE_STATUSA)*(args + 2), (DWORD)*(args + 3), (LPDWORD)*(args + 4), (LPDWORD)*(args + 5));
}
INT_PTR WINAPI EnumDependentServicesW_MWAI(INT_PTR* args){
    return (INT_PTR)EnumDependentServicesW((SC_HANDLE)*(args + 0), (DWORD)*(args + 1), (LPENUM_SERVICE_STATUSW)*(args + 2), (DWORD)*(args + 3), (LPDWORD)*(args + 4), (LPDWORD)*(args + 5));
}
INT_PTR WINAPI EnumServicesStatusA_MWAI(INT_PTR* args){
    return (INT_PTR)EnumServicesStatusA((SC_HANDLE)*(args + 0), (DWORD)*(args + 1), (DWORD)*(args + 2), (LPENUM_SERVICE_STATUSA)*(args + 3), (DWORD)*(args + 4), (LPDWORD)*(args + 5), (LPDWORD)*(args + 6), (LPDWORD)*(args + 7));
}
INT_PTR WINAPI EnumServicesStatusW_MWAI(INT_PTR* args){
    return (INT_PTR)EnumServicesStatusW((SC_HANDLE)*(args + 0), (DWORD)*(args + 1), (DWORD)*(args + 2), (LPENUM_SERVICE_STATUSW)*(args + 3), (DWORD)*(args + 4), (LPDWORD)*(args + 5), (LPDWORD)*(args + 6), (LPDWORD)*(args + 7));
}
INT_PTR WINAPI EnumServicesStatusExA_MWAI(INT_PTR* args){
    return (INT_PTR)EnumServicesStatusExA((SC_HANDLE)*(args + 0), (SC_ENUM_TYPE)*(args + 1), (DWORD)*(args + 2), (DWORD)*(args + 3), (LPBYTE)*(args + 4), (DWORD)*(args + 5), (LPDWORD)*(args + 6), (LPDWORD)*(args + 7), (LPDWORD)*(args + 8), (LPCSTR)*(args + 9));
}
INT_PTR WINAPI EnumServicesStatusExW_MWAI(INT_PTR* args){
    return (INT_PTR)EnumServicesStatusExW((SC_HANDLE)*(args + 0), (SC_ENUM_TYPE)*(args + 1), (DWORD)*(args + 2), (DWORD)*(args + 3), (LPBYTE)*(args + 4), (DWORD)*(args + 5), (LPDWORD)*(args + 6), (LPDWORD)*(args + 7), (LPDWORD)*(args + 8), (LPCWSTR)*(args + 9));
}
INT_PTR WINAPI GetServiceKeyNameA_MWAI(INT_PTR* args){
    return (INT_PTR)GetServiceKeyNameA((SC_HANDLE)*(args + 0), (LPCSTR)*(args + 1), (LPSTR)*(args + 2), (LPDWORD)*(args + 3));
}
INT_PTR WINAPI GetServiceKeyNameW_MWAI(INT_PTR* args){
    return (INT_PTR)GetServiceKeyNameW((SC_HANDLE)*(args + 0), (LPCWSTR)*(args + 1), (LPWSTR)*(args + 2), (LPDWORD)*(args + 3));
}
INT_PTR WINAPI GetServiceDisplayNameA_MWAI(INT_PTR* args){
    return (INT_PTR)GetServiceDisplayNameA((SC_HANDLE)*(args + 0), (LPCSTR)*(args + 1), (LPSTR)*(args + 2), (LPDWORD)*(args + 3));
}
INT_PTR WINAPI GetServiceDisplayNameW_MWAI(INT_PTR* args){
    return (INT_PTR)GetServiceDisplayNameW((SC_HANDLE)*(args + 0), (LPCWSTR)*(args + 1), (LPWSTR)*(args + 2), (LPDWORD)*(args + 3));
}
INT_PTR WINAPI LockServiceDatabase_MWAI(INT_PTR* args){
    return (INT_PTR)LockServiceDatabase((SC_HANDLE)*(args + 0));
}
INT_PTR WINAPI NotifyBootConfigStatus_MWAI(INT_PTR* args){
    return (INT_PTR)NotifyBootConfigStatus((BOOL)*(args + 0));
}
INT_PTR WINAPI OpenSCManagerA_MWAI(INT_PTR* args){
    return (INT_PTR)OpenSCManagerA((LPCSTR)*(args + 0), (LPCSTR)*(args + 1), (DWORD)*(args + 2));
}
INT_PTR WINAPI OpenSCManagerW_MWAI(INT_PTR* args){
    return (INT_PTR)OpenSCManagerW((LPCWSTR)*(args + 0), (LPCWSTR)*(args + 1), (DWORD)*(args + 2));
}
INT_PTR WINAPI OpenServiceA_MWAI(INT_PTR* args){
    return (INT_PTR)OpenServiceA((SC_HANDLE)*(args + 0), (LPCSTR)*(args + 1), (DWORD)*(args + 2));
}
INT_PTR WINAPI OpenServiceW_MWAI(INT_PTR* args){
    return (INT_PTR)OpenServiceW((SC_HANDLE)*(args + 0), (LPCWSTR)*(args + 1), (DWORD)*(args + 2));
}
INT_PTR WINAPI QueryServiceConfigA_MWAI(INT_PTR* args){
    return (INT_PTR)QueryServiceConfigA((SC_HANDLE)*(args + 0), (LPQUERY_SERVICE_CONFIGA)*(args + 1), (DWORD)*(args + 2), (LPDWORD)*(args + 3));
}
INT_PTR WINAPI QueryServiceConfigW_MWAI(INT_PTR* args){
    return (INT_PTR)QueryServiceConfigW((SC_HANDLE)*(args + 0), (LPQUERY_SERVICE_CONFIGW)*(args + 1), (DWORD)*(args + 2), (LPDWORD)*(args + 3));
}
INT_PTR WINAPI QueryServiceConfig2A_MWAI(INT_PTR* args){
    return (INT_PTR)QueryServiceConfig2A((SC_HANDLE)*(args + 0), (DWORD)*(args + 1), (LPBYTE)*(args + 2), (DWORD)*(args + 3), (LPDWORD)*(args + 4));
}
INT_PTR WINAPI QueryServiceConfig2W_MWAI(INT_PTR* args){
    return (INT_PTR)QueryServiceConfig2W((SC_HANDLE)*(args + 0), (DWORD)*(args + 1), (LPBYTE)*(args + 2), (DWORD)*(args + 3), (LPDWORD)*(args + 4));
}
INT_PTR WINAPI QueryServiceLockStatusA_MWAI(INT_PTR* args){
    return (INT_PTR)QueryServiceLockStatusA((SC_HANDLE)*(args + 0), (LPQUERY_SERVICE_LOCK_STATUSA)*(args + 1), (DWORD)*(args + 2), (LPDWORD)*(args + 3));
}
INT_PTR WINAPI QueryServiceLockStatusW_MWAI(INT_PTR* args){
    return (INT_PTR)QueryServiceLockStatusW((SC_HANDLE)*(args + 0), (LPQUERY_SERVICE_LOCK_STATUSW)*(args + 1), (DWORD)*(args + 2), (LPDWORD)*(args + 3));
}
INT_PTR WINAPI QueryServiceObjectSecurity_MWAI(INT_PTR* args){
    return (INT_PTR)QueryServiceObjectSecurity((SC_HANDLE)*(args + 0), (SECURITY_INFORMATION)*(args + 1), (PSECURITY_DESCRIPTOR)*(args + 2), (DWORD)*(args + 3), (LPDWORD)*(args + 4));
}
INT_PTR WINAPI QueryServiceStatus_MWAI(INT_PTR* args){
    return (INT_PTR)QueryServiceStatus((SC_HANDLE)*(args + 0), (LPSERVICE_STATUS)*(args + 1));
}
INT_PTR WINAPI QueryServiceStatusEx_MWAI(INT_PTR* args){
    return (INT_PTR)QueryServiceStatusEx((SC_HANDLE)*(args + 0), (SC_STATUS_TYPE)*(args + 1), (LPBYTE)*(args + 2), (DWORD)*(args + 3), (LPDWORD)*(args + 4));
}
INT_PTR WINAPI RegisterServiceCtrlHandlerA_MWAI(INT_PTR* args){
    return (INT_PTR)RegisterServiceCtrlHandlerA((LPCSTR)*(args + 0), (LPHANDLER_FUNCTION)*(args + 1));
}
INT_PTR WINAPI RegisterServiceCtrlHandlerW_MWAI(INT_PTR* args){
    return (INT_PTR)RegisterServiceCtrlHandlerW((LPCWSTR)*(args + 0), (LPHANDLER_FUNCTION)*(args + 1));
}
INT_PTR WINAPI RegisterServiceCtrlHandlerExA_MWAI(INT_PTR* args){
    return (INT_PTR)RegisterServiceCtrlHandlerExA((LPCSTR)*(args + 0), (LPHANDLER_FUNCTION_EX)*(args + 1), (LPVOID)*(args + 2));
}
INT_PTR WINAPI RegisterServiceCtrlHandlerExW_MWAI(INT_PTR* args){
    return (INT_PTR)RegisterServiceCtrlHandlerExW((LPCWSTR)*(args + 0), (LPHANDLER_FUNCTION_EX)*(args + 1), (LPVOID)*(args + 2));
}
INT_PTR WINAPI SetServiceObjectSecurity_MWAI(INT_PTR* args){
    return (INT_PTR)SetServiceObjectSecurity((SC_HANDLE)*(args + 0), (SECURITY_INFORMATION)*(args + 1), (PSECURITY_DESCRIPTOR)*(args + 2));
}
INT_PTR WINAPI SetServiceStatus_MWAI(INT_PTR* args){
    return (INT_PTR)SetServiceStatus((SERVICE_STATUS_HANDLE)*(args + 0), (LPSERVICE_STATUS)*(args + 1));
}
INT_PTR WINAPI StartServiceCtrlDispatcherA_MWAI(INT_PTR* args){
    return (INT_PTR)StartServiceCtrlDispatcherA((const  SERVICE_TABLE_ENTRYA    *)*(args + 0));
}
INT_PTR WINAPI StartServiceCtrlDispatcherW_MWAI(INT_PTR* args){
    return (INT_PTR)StartServiceCtrlDispatcherW((const  SERVICE_TABLE_ENTRYW    *)*(args + 0));
}
INT_PTR WINAPI StartServiceA_MWAI(INT_PTR* args){
    return (INT_PTR)StartServiceA((SC_HANDLE)*(args + 0), (DWORD)*(args + 1), (LPCSTR             *)*(args + 2));
}
INT_PTR WINAPI StartServiceW_MWAI(INT_PTR* args){
    return (INT_PTR)StartServiceW((SC_HANDLE)*(args + 0), (DWORD)*(args + 1), (LPCWSTR             *)*(args + 2));
}
INT_PTR WINAPI UnlockServiceDatabase_MWAI(INT_PTR* args){
    return (INT_PTR)UnlockServiceDatabase((SC_LOCK)*(args + 0));
}
INT_PTR WINAPI NotifyServiceStatusChangeA_MWAI(INT_PTR* args){
    return (INT_PTR)NotifyServiceStatusChangeA((SC_HANDLE)*(args + 0), (DWORD)*(args + 1), (PSERVICE_NOTIFYA)*(args + 2));
}
INT_PTR WINAPI NotifyServiceStatusChangeW_MWAI(INT_PTR* args){
    return (INT_PTR)NotifyServiceStatusChangeW((SC_HANDLE)*(args + 0), (DWORD)*(args + 1), (PSERVICE_NOTIFYW)*(args + 2));
}
INT_PTR WINAPI ControlServiceExA_MWAI(INT_PTR* args){
    return (INT_PTR)ControlServiceExA((SC_HANDLE)*(args + 0), (DWORD)*(args + 1), (DWORD)*(args + 2), (PVOID)*(args + 3));
}
INT_PTR WINAPI ControlServiceExW_MWAI(INT_PTR* args){
    return (INT_PTR)ControlServiceExW((SC_HANDLE)*(args + 0), (DWORD)*(args + 1), (DWORD)*(args + 2), (PVOID)*(args + 3));
}
INT_PTR WINAPI QueryServiceDynamicInformation_MWAI(INT_PTR* args){
    return (INT_PTR)QueryServiceDynamicInformation((SERVICE_STATUS_HANDLE)*(args + 0), (DWORD)*(args + 1), (PVOID           *)*(args + 2));
}
INT_PTR WINAPI WaitServiceState_MWAI(INT_PTR* args){
    return (INT_PTR)WaitServiceState((SC_HANDLE)*(args + 0), (DWORD)*(args + 1), (DWORD)*(args + 2), (HANDLE)*(args + 3));
}
