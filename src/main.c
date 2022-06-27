#include "termcolor.h"
#include <stdio.h>

int main() {
    cprint("Passed", FG_GREEN);
    cprint("Failed", FG_RED);

    char *msg = "Hello!!";
    char *new;
    color(msg, new, FG_BLUE);
    printf("%s\n", new);

    return 0;
}
