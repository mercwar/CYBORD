#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_EXPORTS 32768
#define MAX_CONSTS  65536
#define MAX_NAME    128

typedef struct {
    char* name;
    long long val;
} ConstItem;

static char* g_exp = NULL;
static int g_cnt = 0;
static char* g_emitted = NULL;
static int g_emitCnt = 0;

static ConstItem* g_consts = NULL;
static int g_constCnt = 0;

static int Cmp(const void* a, const void* b) {
    return strcmp((const char*)a, (const char*)b);
}

static int CmpConst(const void* a, const void* b) {
    return strcmp(((const ConstItem*)a)->name, ((const ConstItem*)b)->name);
}

static int HasExp(const char* n) {
    return (g_cnt > 0 && g_exp) ? (bsearch(n, g_exp, g_cnt, MAX_NAME, Cmp) != NULL) : 0;
}

static int AlreadyEmitted(const char* n) {
    for (int i = 0; i < g_emitCnt; i++) {
        if (strcmp(g_emitted + (i * MAX_NAME), n) == 0) return 1;
    }
    if (g_emitCnt < MAX_EXPORTS) {
        strcpy(g_emitted + (g_emitCnt++ * MAX_NAME), n);
    }
    return 0;
}

static void ParseDefineLine(const char* line) {
    const char* p = line;
    while (*p == ' ' || *p == '\t') p++;
    if (*p != '#') return;
    p++;
    while (*p == ' ' || *p == '\t') p++;
    if (strncmp(p, "define", 6) != 0 || !isspace((unsigned char)*(p + 6))) return;
    p += 6;
    while (*p == ' ' || *p == '\t') p++;

    char* name = (char*)calloc(MAX_NAME, 1);
    int i = 0;
    if (!isalpha((unsigned char)*p) && *p != '_') { free(name); return; }
    while ((isalnum((unsigned char)*p) || *p == '_') && i < MAX_NAME - 1) {
        *(name + i++) = *p++;
    }
    *(name + i) = 0;

    if (*p == '(' || i < 2) { free(name); return; }
    while (*p == ' ' || *p == '\t') p++;
    if (!*p) { free(name); return; }

    char* expr = (char*)calloc(256, 1);
    int ei = 0;
    while (*p && *p != '\r' && *p != '\n' && ei < 254) {
        if (*p == '/' && (*(p + 1) == '/' || *(p + 1) == '*')) break;
        *(expr + ei++) = *p++;
    }
    while (ei > 0 && isspace((unsigned char)*(expr + ei - 1))) ei--;
    *(expr + ei) = 0;

    char* v = expr;
    while (*v == '(' || isspace((unsigned char)*v)) v++;
    if (isalpha((unsigned char)*v)) {
        char* closeParen = strchr(v, ')');
        if (closeParen) {
            v = closeParen + 1;
            while (*v == '(' || isspace((unsigned char)*v)) v++;
        }
    }

    char* endPtr = NULL;
    long long val = strtoll(v, &endPtr, 0);
    if (endPtr == v) { free(expr); free(name); return; }

    while (*endPtr == 'u' || *endPtr == 'U' || *endPtr == 'l' || *endPtr == 'L' ||
           *endPtr == 'i' || *endPtr == '6' || *endPtr == '4' || *endPtr == ')' ||
           isspace((unsigned char)*endPtr)) {
        endPtr++;
    }
    if (*endPtr != '\0') { free(expr); free(name); return; }

    if (g_constCnt < MAX_CONSTS) {
        (g_consts + g_constCnt)->name = name;
        (g_consts + g_constCnt)->val = val;
        g_constCnt++;
    } else {
        free(name);
    }
    free(expr);
}

static void LoadExp(const char* p) {
    FILE* f = fopen(p, "r");
    if (!f) return;

    g_exp = (char*)calloc(MAX_EXPORTS, MAX_NAME);
    g_emitted = (char*)calloc(MAX_EXPORTS, MAX_NAME);
    char* l = (char*)malloc(2048);
    char* sym = (char*)malloc(MAX_NAME);
    int inExp = 0;

    while (fgets(l, 2048, f)) {
        char* s = l;
        while (*s == ' ' || *s == '\t') s++;
        if (strncmp(s, "Exports", 7) == 0) { inExp = 1; continue; }
        if (!inExp || strncmp(s, "ordinal", 7) == 0 || *s == '\r' || *s == '\n' || *s == 0) continue;
        if (isdigit((unsigned char)*s)) {
            while (isdigit((unsigned char)*s)) s++;
            while (*s == ' ' || *s == '\t') s++;
        }
        memset(sym, 0, MAX_NAME);
        int i = 0;
        while (*s && !isspace((unsigned char)*s) && *s != '@' && i < MAX_NAME - 1) {
            *(sym + i++) = *s++;
        }
        if (i > 0 && isalpha((unsigned char)*sym) && g_cnt < MAX_EXPORTS) {
            strcpy(g_exp + (g_cnt++ * MAX_NAME), sym);
        }
    }

    free(l);
    free(sym);
    fclose(f);

    if (g_cnt > 0) {
        qsort(g_exp, g_cnt, MAX_NAME, Cmp);
        int u = 0;
        for (int i = 0; i < g_cnt; i++) {
            char* cur = g_exp + (i * MAX_NAME);
            if (u == 0 || strcmp(cur, g_exp + ((u - 1) * MAX_NAME)) != 0) {
                strcpy(g_exp + (u++ * MAX_NAME), cur);
            }
        }
        g_cnt = u;
    }
}

static int IsTypeKw(const char* w) {
    const char* kw[] = {
        "void","VOID","int","INT","long","LONG","short","SHORT","char","CHAR",
        "wchar_t","WCHAR","unsigned","signed","const","CONST","volatile","VOLATILE",
        "struct","union","enum","BOOL","BOOLEAN","BYTE","WORD","DWORD","QWORD",
        "FLOAT","DOUBLE","HANDLE","HWND","HDC","HINSTANCE","HMODULE","HKEY",
        "HMENU","HICON","HCURSOR","HBRUSH","HPEN","HFONT","HBITMAP","HRGN",
        "HGLOBAL","HLOCAL","HRESULT","LRESULT","WPARAM","LPARAM","UINT","ULONG",
        "USHORT","UCHAR","SIZE_T","SSIZE_T","INT_PTR","UINT_PTR","LONG_PTR",
        "ULONG_PTR","DWORD_PTR","LPSTR","LPCSTR","LPWSTR","LPCWSTR","LPVOID",
        "LPCVOID","PVOID","PDWORD","LPDWORD","PBOOL","LPBOOL","PBYTE","LPBYTE",
        "PUINT","LPUINT","PHANDLE","LPHANDLE","LPPOINT","LPRECT","LPSIZE",
        "LPMSG","LPSECURITY_ATTRIBUTES","LPOVERLAPPED","LPFILETIME",
        "LPSYSTEMTIME","ATOM","COLORREF","LCID","LANGID",NULL
    };
    for (int i = 0; *(kw + i); i++) {
        if (strcmp(w, *(kw + i)) == 0) return 1;
    }
    return 0;
}

static int IsBadType(const char* t) {
    if (!t || !*t || strstr(t, "...") || strstr(t, "float") || strstr(t, "double") || strstr(t, "#line")) return 1;
    if (strchr(t, '*') != NULL) return 0;
    if (strstr(t, "struct ") != NULL || strstr(t, "union ") != NULL) return 1;
    const char* bv[] = {
        "POINT","RECT","SIZE","COORD","SMALL_RECT","MSG","GUID","IID","CLSID",
        "UUID","FILETIME","SYSTEMTIME","VARIANT","PROPVARIANT","DECIMAL","CY",
        "LARGE_INTEGER","ULARGE_INTEGER","FILE_SEGMENT_ELEMENT","SLIST_HEADER",
        "CONTEXT","BLENDFUNCTION","TRIVERTEX","GRADIENT_RECT","COLORADJUSTMENT",
        "XFORM","in_addr","IN_ADDR","in6_addr","IN6_ADDR",NULL
    };
    for (int i = 0; *(bv + i); i++) {
        if (strstr(t, *(bv + i))) return 1;
    }
    return 0;
}

static int IsVoidRet(const char* rt) {
    if (!rt || strchr(rt, '*') != NULL) return 0;
    const char* p = rt;
    while (*p) {
        while (isspace((unsigned char)*p)) p++;
        if (!*p) break;
        const char* start = p;
        while (*p && !isspace((unsigned char)*p)) p++;
        size_t len = (size_t)(p - start);
        if (len == 4 && (strncmp(start, "void", 4) == 0 || strncmp(start, "VOID", 4) == 0)) {
            return 1;
        }
    }
    return 0;
}

static int EmitArgs(FILE* out, const char* pl, int dry) {
    const char* p = pl;
    while (isspace((unsigned char)*p)) p++;
    if (!*p) return 1;
    if (strncmp(p, "void", 4) == 0 || strncmp(p, "VOID", 4) == 0) {
        const char* after = p + 4;
        while (isspace((unsigned char)*after)) after++;
        if (*after == '\0') return 1;
    }
    int idx = 0, depth = 0;
    const char* st = p;
    char* pm = (char*)malloc(512);

    for (;; p++) {
        if (*p == '(') depth++;
        else if (*p == ')') depth--;
        else if ((*p == ',' && depth == 0) || !*p) {
            size_t len = (size_t)(p - st);
            if (len >= 510) { free(pm); return 0; }
            memset(pm, 0, 512);
            memcpy(pm, st, len);
            char* s = pm;
            while (isspace((unsigned char)*s)) s++;
            char* e = s + strlen(s);
            while (e > s && isspace((unsigned char)*(e - 1))) *--e = 0;
            if (*s == 0 || strchr(s, '(')) { free(pm); return 0; }

            char* br = strchr(s, 0x5B);
            int isArr = (br != NULL);
            if (isArr) {
                *br = 0;
                e = s + strlen(s);
                while (e > s && isspace((unsigned char)*(e - 1))) *--e = 0;
            }

            char* ls = strrchr(s, ' ');
            char* lt = strrchr(s, '*');
            if (lt && (!ls || lt > ls)) *(lt + 1) = 0;
            else if (ls && !IsTypeKw(ls + 1)) *ls = 0;

            e = s + strlen(s);
            while (e > s && isspace((unsigned char)*(e - 1))) *--e = 0;
            if (*s == 0) { free(pm); return 0; }
            if (isArr) strcat(s, "*");
            if (IsBadType(s)) { free(pm); return 0; }

            if (!dry) {
                if (idx > 0) fprintf(out, ", ");
                fprintf(out, "(%s)*(args + %d)", s, idx);
            }
            idx++;
            if (!*p) break;
            st = p + 1;
        }
    }

    free(pm);
    return 1;
}
static void LoadConsts(const char* defsPath) {
    if (!defsPath) return;
    FILE* f = fopen(defsPath, "r");
    if (!f) return;
    char* line = (char*)malloc(16384);
    while (fgets(line, 16384, f)) {
        ParseDefineLine(line);
    }
    free(line);
    fclose(f);
}

int main(int argc, char** argv) {
    if (argc < 6) return 1;
    LoadExp(*(argv + 1));
    g_consts = (ConstItem*)calloc(MAX_CONSTS, sizeof(ConstItem));
    if (argc >= 7) LoadConsts(*(argv + 6));

    FILE* in = fopen(*(argv + 2), "r");
    FILE* out = fopen(*(argv + 3), "w");
    FILE* hdr = fopen(*(argv + 4), "w");
    FILE* def = fopen(*(argv + 5), "w");
    if (!in || !out || !hdr || !def) return 2;

    fprintf(out, "#include <windows.h>\n#include <stdint.h>\n\n");
    fprintf(hdr, "#pragma once\n#include <windows.h>\n#include <stdint.h>\n");
    fprintf(hdr, "typedef INT_PTR (WINAPI *MwaiFn)(INT_PTR*);\n");
    fprintf(hdr, "typedef struct { const char* name; MwaiFn fn; } MwaiEntry;\n");
    fprintf(hdr, "typedef struct { const char* name; INT_PTR val; } MwaiConst;\n\n");
    fprintf(def, "LIBRARY win32api\nEXPORTS\n");

    char* line = (char*)malloc(16384);
    char* st = (char*)malloc(65536);
    char* fn = (char*)malloc(MAX_NAME);
    size_t pos = 0;

    while (fgets(line, 16384, in)) {
        char* ls = line;
        while (*ls == ' ' || *ls == '\t') ls++;
        if (*ls == '#') continue;

        for (char* p = ls; *p; p++) {
            char ch = (*p == '\r' || *p == '\n') ? ' ' : *p;
            if (pos < 65534) *(st + pos++) = ch;
            if (ch == ';') {
                *(st + pos) = 0;
                pos = 0;
                if (strstr(st, "typedef") || strchr(st, '{')) continue;

                char* sc = strstr(st, "__stdcall");
                if (!sc) continue;

                char* ns = sc + 9;
                while (isspace((unsigned char)*ns)) ns++;

                char* op = strchr(ns, '(');
                if (!op) continue;

                memset(fn, 0, MAX_NAME);
                char* ne = op;
                while (ne > ns && isspace((unsigned char)*(ne - 1))) ne--;
                size_t nl = (size_t)(ne - ns);
                if (!nl || nl >= MAX_NAME) continue;
                memcpy(fn, ns, nl);

                if (!HasExp(fn) || strcmp(fn, "ReclaimVirtualMemory") == 0) continue;

                int d = 1;
                char* cp = op + 1;
                while (*cp && d > 0) {
                    if (*cp == '(') d++;
                    else if (*cp == ')') d--;
                    if (d > 0) cp++;
                }
                if (d != 0 || *cp != ')') continue;

                *cp = 0;
                *sc = 0;

                char* rt = st;
                while (isspace((unsigned char)*rt)) rt++;

                char* ds = strstr(rt, "__declspec(dllimport)");
                if (ds) rt = ds + 21;
                while (isspace((unsigned char)*rt)) rt++;

                if (IsBadType(rt) || !EmitArgs(out, op + 1, 1) || AlreadyEmitted(fn)) continue;

                int vd = IsVoidRet(rt);
                fprintf(out, "INT_PTR WINAPI %s_MWAI(INT_PTR* args){\n    ", fn);
                if (vd) {
                    fprintf(out, "%s(", fn);
                    EmitArgs(out, op + 1, 0);
                    fprintf(out, ");\n    return 0;\n}\n");
                } else {
                    fprintf(out, "return (INT_PTR)%s(", fn);
                    EmitArgs(out, op + 1, 0);
                    fprintf(out, ");\n}\n");
                }

                fprintf(hdr, "__declspec(dllimport) INT_PTR WINAPI %s_MWAI(INT_PTR* args);\n", fn);
            }
        }
    }

    if (g_emitCnt > 0 && g_emitted) {
        qsort(g_emitted, g_emitCnt, MAX_NAME, Cmp);
    }

    fprintf(hdr, "\nstatic const MwaiEntry kMwaiTable[] = {\n");
    for (int i = 0; i < g_emitCnt; i++) {
        const char* name = g_emitted + (i * MAX_NAME);
        fprintf(hdr, "    { %c%s%c, %s_MWAI },\n", 34, name, 34, name);
        fprintf(def, "    %s_MWAI @%d\n", name, i + 1);
    }
    fprintf(hdr, "};\n#define MWAI_TABLE_COUNT (sizeof(kMwaiTable) / sizeof(MwaiEntry))\n\n");

    int uniqueConsts = 0;
    if (g_constCnt > 0) {
        qsort(g_consts, g_constCnt, sizeof(ConstItem), CmpConst);
        for (int i = 0; i < g_constCnt; i++) {
            if (uniqueConsts == 0 || strcmp((g_consts + i)->name, (g_consts + uniqueConsts - 1)->name) != 0) {
                if (uniqueConsts != i) { free((g_consts + uniqueConsts)->name); *(g_consts + uniqueConsts) = *(g_consts + i); (g_consts + i)->name = NULL; } uniqueConsts++;
            }
        }
    }

    fprintf(hdr, "static const MwaiConst kConstTable[] = {\n");
    for (int i = 0; i < uniqueConsts; i++) {
        fprintf(hdr, "    { %c%s%c, (INT_PTR)%lldLL },\n", 34, (g_consts + i)->name, 34, (g_consts + i)->val);
    }
    fprintf(hdr, "};\n#define MWAI_CONST_COUNT (sizeof(kConstTable) / sizeof(MwaiConst))\n");

    free(fn);
    free(st);
    free(line);
    for (int i = 0; i < uniqueConsts; i++) free((g_consts + i)->name);
    free(g_consts);
    free(g_emitted);
    free(g_exp);
    fclose(in);
    fclose(out);
    fclose(hdr);
    fclose(def);
    return 0;
}
