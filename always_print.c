#include "shell.h"

void always_print(const char *message) {
    write(STDOUT_FILENO, message, strlen(message));
}
