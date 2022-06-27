#include "termcolor.h"
#include <stdio.h>

int main() {
    cprint("Passed\n", FG_GREEN);
    cprint("Failed\n", FG_RED);

    char *msg = "Hello!!";
    char *new;
    color(msg, new, FG_BLUE);
    printf("%s\n", new);

	rprint("Hey there\n");

    return 0;
}
