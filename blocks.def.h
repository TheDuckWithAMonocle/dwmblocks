//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"Mem:", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	1,		10},

	{"Vol:", "~/dwmblocks/scripts/volume.sh",				1,		100},

	{"", "~/dwmblocks/scripts/battery.sh",					1,		11},

	{"", "~/dwmblocks/scripts/wireless.sh",					1,		22},		

	{"", "date '+%b %d (%a) %I:%M%p'",					5,		13},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
