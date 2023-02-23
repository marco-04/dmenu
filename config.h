/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int incremental = 0;                 /* -r  option; if 1, outputs text each time a key is pressed */
static int constout = 0;                    /* -o  option; if 1, outputs currently selected text each time an arrow key is pressed (overrides incremental) */
static int fuzzy = 1;                      /* -F  option; if 0, dmenu doesn't use fuzzy matching     */
static const unsigned int alpha = 0xf0;
static unsigned int maxhist     = 64;
static int histnodup            = 1;	/* if 0, record repeated histories */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"monospace:size=10"
};

/*
 * Use prefix matching by default; can be inverted with the -x flag.
 */
static int use_prefix = 1;

/* Center patch */
static int centered = 0;                    /* -c option; centers dmenu on screen */
static int min_width = 500;                    /* minimum width when centered */

static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*                         fg         bg       */
	[SchemeNorm]          = { "#bbbbbb", "#222222" },
	[SchemeSel]           = { "#eeeeee", "#005577" },
	[SchemeMid]           = { "#eeeeee", "#770000" },
	[SchemeOut]           = { "#000000", "#00ffff" },
	[SchemeSelHighlight]  = { "#ffc978", "#005577" },
	[SchemeNormHighlight] = { "#ffc978", "#222222" },
	[SchemeOutHighlight]  = { "#ffc978", "#00ffff" },
};

static const unsigned int alphas[SchemeLast][2] = {
	[SchemeNorm] = { OPAQUE, alpha },
	[SchemeSel] = { OPAQUE, alpha },
	[SchemeOut] = { OPAQUE, alpha },
};

/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;
/* -h option; minimum height of a menu line */
static unsigned int lineheight = 0;
static unsigned int min_lineheight = 8;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* tsv-alt: reverse the order of tab separation.
 * 0 = display<TAB>output. 1 = output<TAB>display
 * can be reversed with -r as well */
static int revtab = 0;

/* Size of the window border */
static unsigned int border_width = 5;

/* Fullwidth toggle */
static int fullwidth = 0;

/* -n option; preselected item starting from 0 */
static unsigned int preselected = 0;
