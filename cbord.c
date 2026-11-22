#include <windows.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#undef API

#ifdef __cplusplus
extern "C" {
#endif
__declspec(dllimport) void CALLBACK API(HWND hwnd, HINSTANCE hinst, LPSTR lpszCmdLine, int nCmdShow);
#ifdef __cplusplus
}
#endif

static const char* SkipWs(const char* p) {
    while (*p && isspace((unsigned char)*p)) p++;
    return p;
}

static const char* SkipToken(const char* p) {
    p = SkipWs(p);
    if (*p == '"') {
        p++;
        while (*p && *p != '"') p++;
        if (*p == '"') p++;
    } else {
        while (*p && !isspace((unsigned char)*p)) p++;
    }
    return SkipWs(p);
}

// Translates {"FuncName": [a1, a2, ...]} into native CLI "FuncName a1 a2 ..."
static char* JsonToNativeCmd(const char* json) {
    const char* p = SkipWs(json);
    if (*p != '{') return NULL;
    p = SkipWs(p + 1);
    if (*p != '"') return NULL;
    p++;

    char* cmd = (char*)calloc(16384, 1);
    if (!cmd) return NULL;
    int outPos = 0;

    while (*p && *p != '"' && outPos < 16000) {
        *(cmd + outPos++) = *p++;
    }
    if (*p != '"') { free(cmd); return NULL; }
    p = SkipWs(p + 1);
    if (*p != ':') { free(cmd); return NULL; }
    p = SkipWs(p + 1);
    if (*p != '[') { free(cmd); return NULL; }
    p = SkipWs(p + 1);

    while (*p && *p != ']' && outPos < 16000) {
        p = SkipWs(p);
        *(cmd + outPos++) = ' ';

        if (*p == '"') {
            *(cmd + outPos++) = '"';
            p++;
            while (*p && *p != '"' && outPos < 16000) {
                if (*p == '\\' && *(p + 1)) {
                    // Keep escape sequence intact for ParseToken in cbord.dll
                    *(cmd + outPos++) = *p++;
                }
                *(cmd + outPos++) = *p++;
            }
            if (*p == '"') {
                *(cmd + outPos++) = '"';
                p++;
            }
        } else {
            while (*p && *p != ',' && *p != ']' && !isspace((unsigned char)*p) && outPos < 16000) {
                *(cmd + outPos++) = *p++;
            }
        }
        p = SkipWs(p);
        if (*p == ',') p++;
    }

    return cmd;
}

int main(int argc, char** argv) {
    const char* rawAfterExe = SkipToken(GetCommandLineA());

    if (argc < 2 || !*rawAfterExe) {
        API(NULL, GetModuleHandleA(NULL), (LPSTR)"MessageBoxW 0 \"Hello from cbord.exe!\" \"CBORD\" 64", SW_SHOWDEFAULT);
        return 0;
    }

    const char* arg1 = *(argv + 1);
    char* translated = NULL;
    const char* nativeCmd = NULL;

    if (_stricmp(arg1, "--json") == 0 || _stricmp(arg1, "-j") == 0 || _stricmp(arg1, "/json") == 0) {
        if (argc < 3) {
            fprintf(stderr, "Error: Missing JSON payload after %s\n", arg1);
            return 1;
        }
        translated = JsonToNativeCmd(*(argv + 2));
        if (!translated) {
            fprintf(stderr, "Error: Invalid JSON payload.\n");
            return 2;
        }
        nativeCmd = translated;
    } else if (_stricmp(arg1, "--cli") == 0 || _stricmp(arg1, "-c") == 0 || _stricmp(arg1, "/cli") == 0) {
        if (argc < 3) {
            fprintf(stderr, "Error: Missing CLI payload after %s\n", arg1);
            return 1;
        }
        // If user wrapped the entire CLI string in outer quotes, use argv[2] unquoted; otherwise keep raw unstripped tail
        const char* afterFlag = SkipToken(rawAfterExe);
        nativeCmd = (*afterFlag == '"' && argc == 3) ? *(argv + 2) : afterFlag;
    } else {
        nativeCmd = rawAfterExe;
    }

    API(NULL, GetModuleHandleA(NULL), (LPSTR)nativeCmd, SW_SHOWDEFAULT);
    free(translated);
    return 0;
}
