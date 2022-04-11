#include <stdio.h>
#include "termcolor.h"

char *cprint(char *text, int color) {
    char buf[3];
    sprintf(buf, "%d", color);
    printf("\e[%sm%s\e[0m\n", buf, text);
}
