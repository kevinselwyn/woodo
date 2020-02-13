#include <stdio.h>
#include <unistd.h>

char *woodo = "It's a weird tree.";
char *sudowoodo = ""
"    _              __\n"
"   / `\\  (~._    ./  )\n"
"   \\__/ __`-_\\__/ ./\n"
"  _ \\ \\/  \\   \\ |_   __\n"
"(   )  \\__/ -^    \\ /  \\\n"
" \\_/ \"  \\  | o  o  |.. /  __\n"
"      \\. --' ====  /  || /  \\\n"
"        \\   .  .  |---__.\\__/\n"
"        /  :     /   |   |\n"
"        /   :   /     \\_/\n"
"     --/ ::    (\n"
"    (  |     (  (____\n"
"  .--  .. ----**.____)\n"
"  \\___/";

int main() {
	int sudo = getuid();

	printf("%s\n", sudo != 0 ? woodo : sudowoodo);

	return 0;
}
