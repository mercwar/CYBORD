#include <windows.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "win32_table.h"

#undef API

static const char* SkipWs(const char* p) {
    while (*p && isspace((unsigned char)*p)) p++;
    return p;
}

static char* ParseToken(const char** pp, int* outWasQuoted) {
    const char* p = SkipWs(*pp);
    if (outWasQuoted) *outWasQuoted = 0;
    if (!*p) { *pp = p; return NULL; }

    char* out = (char*)calloc(4096, 1);
    int i = 0;

    if (*p == '"' || *p == '\'') {
        if (outWasQuoted) *outWasQuoted = 1;
        char q = *p++;
        while (*p && *p != q && i < 4094) {
            if (*p == '\\' && *(p + 1)) {
                p++;
                if (*p == 'n') *(out + i++) = '\n';
                else if (*p == 'r') *(out + i++) = '\r';
                else if (*p == 't') *(out + i++) = '\t';
                else *(out + i++) = *p;
            } else {
                *(out + i++) = *p;
            }
            p++;
        }
        if (*p == q) p++;
    } else {
        while (*p && !isspace((unsigned char)*p) && i < 4094) {
            *(out + i++) = *p++;
        }
    }

    *pp = p;
    return out;
}

static MwaiFn LookupInStaticTable(const char* name) {
    size_t left = 0;
    size_t right = MWAI_TABLE_COUNT;
    while (left < right) {
        size_t mid = left + (right - left) / 2;
        int cmp = strcmp((kMwaiTable + mid)->name, name);
        if (cmp == 0) return (kMwaiTable + mid)->fn;
        if (cmp < 0) left = mid + 1;
        else right = mid;
    }
    return NULL;
}

static int LookupConst(const char* name, INT_PTR* outVal) {
    if (_stricmp(name, "true") == 0) { *outVal = 1; return 1; }
    if (_stricmp(name, "false") == 0 || _stricmp(name, "null") == 0) { *outVal = 0; return 1; }

    // Common Win32 alias macros that reference other #defines in Windows SDK headers
    if (strcmp(name, "MB_OK") == 0) { *outVal = MB_OK; return 1; }
    if (strcmp(name, "MB_OKCANCEL") == 0) { *outVal = MB_OKCANCEL; return 1; }
    if (strcmp(name, "MB_ABORTRETRYIGNORE") == 0) { *outVal = MB_ABORTRETRYIGNORE; return 1; }
    if (strcmp(name, "MB_YESNOCANCEL") == 0) { *outVal = MB_YESNOCANCEL; return 1; }
    if (strcmp(name, "MB_YESNO") == 0) { *outVal = MB_YESNO; return 1; }
    if (strcmp(name, "MB_RETRYCANCEL") == 0) { *outVal = MB_RETRYCANCEL; return 1; }
    if (strcmp(name, "MB_CANCELTRYCONTINUE") == 0) { *outVal = MB_CANCELTRYCONTINUE; return 1; }
    if (strcmp(name, "MB_ICONHAND") == 0 || strcmp(name, "MB_ICONERROR") == 0 || strcmp(name, "MB_ICONSTOP") == 0) { *outVal = MB_ICONERROR; return 1; }
    if (strcmp(name, "MB_ICONQUESTION") == 0) { *outVal = MB_ICONQUESTION; return 1; }
    if (strcmp(name, "MB_ICONEXCLAMATION") == 0 || strcmp(name, "MB_ICONWARNING") == 0) { *outVal = MB_ICONWARNING; return 1; }
    if (strcmp(name, "MB_ICONASTERISK") == 0 || strcmp(name, "MB_ICONINFORMATION") == 0) { *outVal = MB_ICONINFORMATION; return 1; }
    if (strcmp(name, "MB_TOPMOST") == 0) { *outVal = MB_TOPMOST; return 1; }
    if (strcmp(name, "MB_SYSTEMMODAL") == 0) { *outVal = MB_SYSTEMMODAL; return 1; }
    if (strcmp(name, "SW_HIDE") == 0) { *outVal = SW_HIDE; return 1; }
    if (strcmp(name, "SW_SHOWNORMAL") == 0 || strcmp(name, "SW_NORMAL") == 0) { *outVal = SW_SHOWNORMAL; return 1; }
    if (strcmp(name, "SW_SHOWMINIMIZED") == 0) { *outVal = SW_SHOWMINIMIZED; return 1; }
    if (strcmp(name, "SW_SHOWMAXIMIZED") == 0 || strcmp(name, "SW_MAXIMIZE") == 0) { *outVal = SW_SHOWMAXIMIZED; return 1; }
    if (strcmp(name, "SW_SHOW") == 0) { *outVal = SW_SHOW; return 1; }
    if (strcmp(name, "SW_MINIMIZE") == 0) { *outVal = SW_MINIMIZE; return 1; }
    if (strcmp(name, "SW_RESTORE") == 0) { *outVal = SW_RESTORE; return 1; }

    size_t left = 0;
    size_t right = MWAI_CONST_COUNT;
    while (left < right) {
        size_t mid = left + (right - left) / 2;
        int cmp = strcmp((kConstTable + mid)->name, name);
        if (cmp == 0) {
            *outVal = (kConstTable + mid)->val;
            return 1;
        }
        if (cmp < 0) left = mid + 1;
        else right = mid;
    }
    return 0;
}

static INT_PTR ParseNumericOrConst(const char* tok) {
    char* buf = (char*)calloc(1024, 1);
    if (!buf) return 0;
    strncpy(buf, tok, 1023);

    INT_PTR result = 0;
    char* part = strtok(buf, "|+");
    while (part) {
        while (*part && isspace((unsigned char)*part)) part++;
        char* end = part + strlen(part);
        while (end > part && isspace((unsigned char)*(end - 1))) *--end = 0;

        if (*part) {
            INT_PTR cval = 0;
            if (LookupConst(part, &cval)) {
                result |= cval;
            } else {
                result |= (INT_PTR)_strtoi64(part, NULL, 0);
            }
        }
        part = strtok(NULL, "|+");
    }
    free(buf);
    return result;
}

static int IsConstExpression(const char* tok, INT_PTR* outVal) {
    if (!tok || !*tok) return 0;
    char* buf = (char*)calloc(1024, 1);
    if (!buf) return 0;
    strncpy(buf, tok, 1023);

    INT_PTR result = 0;
    int matchedAny = 0;
    char* part = strtok(buf, "|+");
    while (part) {
        while (*part && isspace((unsigned char)*part)) part++;
        char* end = part + strlen(part);
        while (end > part && isspace((unsigned char)*(end - 1))) *--end = 0;

        if (*part) {
            INT_PTR cval = 0;
            if (LookupConst(part, &cval)) {
                result |= cval;
                matchedAny = 1;
            } else {
                free(buf);
                return 0;
            }
        }
        part = strtok(NULL, "|+");
    }
    free(buf);
    if (matchedAny) *outVal = result;
    return matchedAny;
}

#ifdef __cplusplus
extern "C" {
#endif

__declspec(dllexport) void CALLBACK API(HWND hwnd, HINSTANCE hinst, LPSTR lpszCmdLine, int nCmdShow) {
    (void)hwnd; (void)hinst; (void)nCmdShow;
    if (!lpszCmdLine || !*lpszCmdLine) return;

    const char* p = SkipWs(lpszCmdLine);
    char* funcName = ParseToken(&p, NULL);
    if (!funcName || !*funcName) {
        free(funcName);
        return;
    }

    char* sym = (char*)calloc(256, 1);
    int isWide = 0;
    MwaiFn fn = LookupInStaticTable(funcName);
    if (!fn) {
        snprintf(sym, 256, "%sW", funcName);
        fn = LookupInStaticTable(sym);
        if (fn) isWide = 1;
    } else if (strlen(funcName) > 0 && *(funcName + strlen(funcName) - 1) == 'W') {
        isWide = 1;
    }
    if (!fn) {
        snprintf(sym, 256, "%sA", funcName);
        fn = LookupInStaticTable(sym);
    }
    free(sym);
    free(funcName);

    if (!fn) return;

    INT_PTR* args = (INT_PTR*)calloc(16, sizeof(INT_PTR));
    void** allocs = (void**)calloc(16, sizeof(void*));
    int idx = 0;

    while (*(p = SkipWs(p)) && idx < 16) {
        int wasQuoted = 0;
        char* tok = ParseToken(&p, &wasQuoted);
        if (!tok) break;

        if (wasQuoted) {
            INT_PTR constVal = 0;
            if (IsConstExpression(tok, &constVal)) {
                *(args + idx) = constVal;
                free(tok);
            } else if (isWide) {
                int wlen = MultiByteToWideChar(CP_UTF8, 0, tok, -1, NULL, 0);
                wchar_t* ws = (wchar_t*)calloc((size_t)wlen, sizeof(wchar_t));
                MultiByteToWideChar(CP_UTF8, 0, tok, -1, ws, wlen);
                free(tok);
                *(allocs + idx) = ws;
                *(args + idx) = (INT_PTR)ws;
            } else {
                *(allocs + idx) = tok;
                *(args + idx) = (INT_PTR)tok;
            }
        } else {
            *(args + idx) = ParseNumericOrConst(tok);
            free(tok);
        }
        idx++;
    }

    fn(args);

    for (int i = 0; i < 16; i++) free(*(allocs + i));
    free(allocs);
    free(args);
}

#ifdef __cplusplus
}
#endif
