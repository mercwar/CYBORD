#ifndef ZEND_WIN32
#define ZEND_WIN32
#endif
#ifndef PHP_WIN32
#define PHP_WIN32
#endif
#ifndef ZTS
#define ZTS 1
#endif

#include <sapi/embed/php_embed.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char **argv) {
    if (argc < 2) {
        fprintf(stderr, "Usage: %s <script.php> [hex_payload]\n", *argv);
        return 1;
    }

    char exe_dir[MAX_PATH] = {0};
    GetModuleFileNameA(NULL, exe_dir, MAX_PATH);
    char *last_slash = strrchr(exe_dir, '\\');
    if (last_slash) {
        *last_slash = '\0';
    }

    /* Force Embed SAPI to read php.ini from cbord_php.exe's directory */
    php_embed_module.php_ini_ignore = 0;
    php_embed_module.php_ini_path_override = _strdup(exe_dir);

    int exit_status = 0;
    PHP_EMBED_START_BLOCK(argc - 1, argv + 1)
        zend_file_handle file_handle;
        zend_stream_init_filename(&file_handle, *(argv + 1));

        if (php_execute_script(&file_handle) == FAILURE) {
            fprintf(stderr, "Failed to execute %s\n", *(argv + 1));
            exit_status = 1;
        } else {
            exit_status = EG(exit_status);
        }
    PHP_EMBED_END_BLOCK()

    return exit_status;
}
