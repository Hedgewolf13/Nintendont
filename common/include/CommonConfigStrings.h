
#ifndef __COMMON_CONFIG_STRINGS_H__
#define __COMMON_CONFIG_STRINGS_H__

//Strings must match order in CommonConfig.h
const char* OptionStrings[] =
{
	"Custom Cheats",
	"Debugger",
	"Debugger Wait",
	"Memcard Emulation",
	"Force Widescreen",
	"Force Progressive",
	"Unlock Read Speed",
	"OSReport",
	"Log",
	"Drive Access LED",
	"Auto Boot",
	
	"Language",
	"Video",
	"Videomode",
	"Memcard Blocks",
	"Memcard Multi",
};

const char* LanguageStrings[] =
{
	"Eng",
	"Ger",
	"Fre",
	"Spa",
	"Ita",
	"Dut",

	"Auto",
};

const char* VideoStrings[] =
{
	"Auto",
	"Force",
	"None",
	"Invalid",
	"Force (Deflicker)",
};

const char* VideoModeStrings[] =
{
	"PAL50",
	"PAL60",
	"NTSC",
	"MPAL",
};

// This should match `enum ninmeleecontrollerfix` in `CommonConfig.h`
const char *MeleeControllerFixStrings[] =
{
	"None",
	"UCF",
	"Toggle",
};

#endif
