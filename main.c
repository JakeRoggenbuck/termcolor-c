#include <stdio.h>
#include "src/termcolor.h"

int main() {
	cprint("Passed", FG_GREEN);
	cprint("Failed", FG_RED);
	return 0;
}
