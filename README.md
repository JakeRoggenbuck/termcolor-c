# termcolor-c

```c
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
```

I made this just in case I start writing a bunch of CLI stuff in C in the next few months before college, and during college as well.
