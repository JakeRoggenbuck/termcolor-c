# termcolor-c

```c
#include <stdio.h>
#include "termcolor.h"

int main() {
	cprint("Passed\n", FG_GREEN);
	cprint("Failed\n", FG_RED);
	return 0;
}
```

I made this just in case I start writing a bunch of CLI stuff in C in the next few months before college, and during college as well.
