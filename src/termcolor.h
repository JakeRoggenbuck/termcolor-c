#ifndef TERMCOLOR_H
#define TERMCOLOR_H

enum FGColor {
    FG_BLACK = 30,
    FG_RED = 31,
    FG_GREEN = 32,
    FG_YELLOW = 33,
    FG_BLUE = 34,
    FG_PURPLE = 35,
    FG_CYAN = 36,
    FG_LIGHTGRAY = 37,
};

enum BGCOlor {
    BG_BLACK = 40,
    BG_RED = 41,
    BG_GREEN = 42,
    BG_YELLOW = 43,
    BG_BLUE = 44,
    BG_PURPLE = 45,
    BG_CYAN = 46,
    BG_LIGHTGRAY = 47,
};

char *cprint(char *text, int color);

#endif // TERMCOLOR_H
