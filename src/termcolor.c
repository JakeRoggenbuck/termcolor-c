#include "termcolor.h"
#include <stdio.h>

void cprint(char *text, int color) {
    char buf[3];
    sprintf(buf, "%d", color);
    printf("\e[%sm%s\e[0m", buf, text);
}

void color(char *text, char *out, int color) {
    sprintf(out, "\e[%dm%s\e[0m", color, text);
}

void rprint(char *text) {
    int clr = 31;
    int i = 0;
    char c = text[i];

    while (c != '\0') {
        c = text[i];
        cprint(&c, clr);
        ++i;

        if (clr < 36) {
            ++clr;
        } else {
            clr = 31;
        }
    }
}
