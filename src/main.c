#include <stdio.h>
#include "termcolor.h"

int main() {
	cprint("Passed", FG_GREEN);
	cprint("Failed", FG_RED);
	return 0;
}
