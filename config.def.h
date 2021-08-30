/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                     /* -b  option; if 0, dmenu appears at bottom     */
static int colorprompt = 1;                /* -p  option; if 1, prompt uses SchemeSel, otherwise SchemeNorm */
static int restrict_return = 0;		   /* -r option; if 1, disables shift-return */
static int one_selection = 0;		   /* -1 option; if 1, disables ctrl-return */
static int nostdin = 0;                    /* -n option, if 1, disable stdin, using dmenu only as text input */
static int fuzzy = 1;                      /* -F  option; if 0, dmenu doesn't use fuzzy matching     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static char font[] = "monospace:size=10";
static char font2[] = "monospace:size=10";
static const char *fonts[] = { font, font2 };
static char *prompt      = NULL;      /* -p  option; prompt to the left of input field */

static char normfgcolor[] = "#bbbbbb";
static char normbgcolor[] = "#222222";
static char selfgcolor[]  = "#eeeeee";
static char selbgcolor[]  = "#005577";
static char outfgcolor[]  = "#eeeeee";
static char outbgcolor[]  = "#005577";
static char seloutfgcolor[]  = "#eeeeee";
static char seloutbgcolor[]  = "#005577";
static char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm]    =    { normfgcolor,    normbgcolor },
	[SchemeSel]     =    { selfgcolor,     selbgcolor  },
	[SchemeOut]     =    { outfgcolor,     outbgcolor  },
	[SchemeSelOut]  = { seloutfgcolor,  seloutbgcolor  },
 };
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/*
 * Xresources preferences to load at startup
 */
ResourcePref resources[] = {
	{ "font",           STRING, &font },
	{ "font2",          STRING, &font2 },
	{ "normfgcolor",    STRING, &normfgcolor },
	{ "normbgcolor",    STRING, &normbgcolor },
	{ "selfgcolor",     STRING, &selfgcolor },
	{ "selbgcolor",     STRING, &selbgcolor },
	{ "outfgcolor",     STRING, &outfgcolor },
	{ "outbgcolor",     STRING, &outbgcolor },
	{ "seloutfgcolor",  STRING, &seloutfgcolor },
	{ "seloutbgcolor",  STRING, &seloutbgcolor },
};
