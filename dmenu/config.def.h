/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"Roboto Mono:size=11"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#b3b3b3", "#222222" },
	[SchemeSel] = { "#b3b3b3", "#da9589" },
	[SchemeSelHighlight] = { "#ffffff", "#da9589" },
	[SchemeNormHighlight] = { "#ffffff", "#222222" },
	[SchemeOut] = { "#000000", "#da9589" },
	[SchemeOutHighlight] = { "#ffffff", "#da9589" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      =  0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
