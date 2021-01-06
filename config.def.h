/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"JetBrainsMonoMedium Nerd Font:size=10",
	"Noto Sans CJK JP Medium:size=10"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */

static const char col_base00[]      = "#151515";
static const char col_base01[]      = "#202020";
static const char col_base02[]      = "#303030";
static const char col_base04[]      = "#b0b0b0";
static const char col_base0C[]      = "#12cfc0";
static const char col_base0D[]      = "#6fc2ef";
static const char *colors[SchemeLast][2] = {
	           /*     fg         bg       */
	[SchemeNorm] = { "#bbbbbb", "#222222" },
	[SchemeSel]  = { col_base00, col_base0D },
	[SchemeOut]  = { "#000000", "#00ffff" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
