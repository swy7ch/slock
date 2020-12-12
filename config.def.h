/* user and group to drop privileges to */
static const char *user  = "swytch";
static const char *group = "swytch";
static const char col_orange[]      = "#f7a583";
static const char col_blue[]        = "#458588";
static const char col_purple[]      = "#d3869b";
static const char col_white[]       = "#ebdbb2";
static const char col_black[]       = "#1d2021";
static const char col_gray[]        = "#373737";
static const char col_lightgray[]   = "#a89984";

static const char *colorname[NUMCOLS] = {
	[INIT] =   col_black,    /* after initialization */
	[INPUT] =  col_blue,     /* during input */
	[FAILED] = col_orange,   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;
