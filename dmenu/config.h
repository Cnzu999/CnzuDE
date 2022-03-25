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
	[SchemeNorm] = { "#f2e0d3", "#423554" },
	[SchemeSel] = { "#f2e0d3", "#da9589" },
	[SchemeSelHighlight] = { "#f4848c", "#d5302c" },
	[SchemeNormHighlight] = { "#f4848c", "#423554" },
	[SchemeOut] = { "#000000", "#d5302c" },
	[SchemeOutHighlight] = { "#f4848c", "#d5302c" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      =  0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
