# termcolor-c
Simple color printing in C

# Example
```c
#include "termcolor.h"
#include <stdio.h>

int main() {
    cprint("Passed\n", FG_GREEN);
    cprint("Failed\n", FG_RED);

    char *msg = "Hello!!";
    char *new;
    color(msg, new, FG_BLUE);
    printf("%s\n", new);

    return 0;
}
```

![image](https://user-images.githubusercontent.com/35516367/175891993-edce1459-de1a-4232-814c-c4c4cc095729.png)

## Quick start

#### Add termcolor as a dependency
```
git submodule add git@github.com:JakeRoggenbuck/termcolor-c.git
```

#### For CMakeLists.txt (if you are using that)
```diff
-add_executable(project_name ${SOURCES})
+add_executable(project_name ${SOURCES} termcolor-c/src/termcolor.c)
+include_directories(${PROJECT_SOURCE_DIR}/termcolor-c/src)
```

#### Add the color printing code
```c
#include "termcolor.h"
#include <stdio.h>

int main() {
    cprint("Hello World!\n", FG_GREEN);
    return 0;
}
```

## Why
I made this just in case I start writing a bunch of CLI stuff in C in the next few months before college, and during college as well.
So far, here are my favorites:
- [diri-c](https://github.com/jakeroggenbuck/diri-c)
- [cosmic-ray-detector](https://github.com/JakeRoggenbuck/cosmic-ray-detector)
