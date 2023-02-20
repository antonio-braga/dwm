//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/

    {" 📥  ", "bash ~/.config/dwm/dotfiles/scripts/blocks/archlinux-updates", 3600,	 0},

	{" ⛅  ", "bash ~/.config/dwm/dotfiles/scripts/blocks/weather",	          3600,  0},

	{" 🎧  ", "bash ~/.config/dwm/dotfiles/scripts/blocks/volume-bar",	  	  1,	 0},
	
	{" 💻  ", "bash ~/.config/dwm/dotfiles/scripts/blocks/cpu-bar",	          5,   	 0},
	
	{" 📦  ", "bash ~/.config/dwm/dotfiles/scripts/blocks/ram-bar",	          5, 	 0},
	
	{" 💾  ", "bash ~/.config/dwm/dotfiles/scripts/blocks/disk-bar",	      3600,	 0},

	{" 🕑  ", "bash ~/.config/dwm/dotfiles/scripts/blocks/clock-bar",		  30,    0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
