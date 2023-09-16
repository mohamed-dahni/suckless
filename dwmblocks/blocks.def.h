//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/											/*Update Interval*/	/*Update Signal*/
	{"",		"~/Src/suckless/dwmblocks/scripts/pacupdate",		5,			0},

	{"",		"~/Src/suckless/dwmblocks/scripts/memory",			30,			0},

	{"",	"~/Src/suckless/dwmblocks/scripts/volume",			30,			0},

	{"",	"~/Src/suckless/dwmblocks/scripts/clock",			5,			0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
