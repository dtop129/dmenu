/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                     /* -b  option; if 0, dmenu appears at bottom     */
static int colorprompt = 1;                /* -p  option; if 1, prompt uses SchemeSel, otherwise SchemeNorm */
static int restrict_return = 0;		   /* -r option; if 1, disables shift-return */
static int one_selection = 0;		   /* -1 option; if 1, disables ctrl-return */
static int nostdin = 0;                    /* -n option, if 1, disable stdin, using dmenu only as text input */
static int fuzzy = 1;                      /* -F  option; if 0, dmenu doesn't use fuzzy matching     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = { "monospace:size=13", "Noto Sans CJK JP:size=13" };
static char *prompt      = NULL;      /* -p  option; prompt to the left of input field */

static char normfgcolor[] = "#957fb8";
static char normbgcolor[] = "#1f1f28";
static char selfgcolor[]  = "#7fb4ca";
static char selbgcolor[]  = "#2e2b47";
static char outfgcolor[]  = "#f9cb8c";
static char outbgcolor[]  = "#353252";
static char seloutfgcolor[]  = "#f083a2";
static char seloutbgcolor[]  = "#3e3a61";
static char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm]    =    { normfgcolor,    normbgcolor },
	[SchemeSel]     =    { selfgcolor,     selbgcolor  },
	[SchemeOut]     =    { outfgcolor,     outbgcolor  },
	[SchemeSelOut]  = { seloutfgcolor,  seloutbgcolor  },
 };
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;
/* -h option; minimum height of a menu line */
static unsigned int lineheight = 33;
static unsigned int min_lineheight = 8;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
