#include "termcolor.h"
#include <stdio.h>

void cprint(char *text, int color) {
    char buf[3];
    sprintf(buf, "%d", color);
    printf("\e[%sm%s\e[0m\n", buf, text);
}

void color(char *text, char *out, int color) {
    sprintf(out, "\e[%dm%s\e[0m", color, text);
}
