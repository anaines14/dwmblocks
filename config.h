// Modify this file to change what commands output to your statusbar, and
// recompile using the make command.

/* name of the environment variable that will be set on button input */
#define DWMBLOCKS_ENV "DWMBLOCKS_BUTTON"
#define DWMBLOCKS_PIDFILEPATH "/tmp/dwmblocks.pid"

static const Block blocks[] = {
  /*Icon*/  /*Command*/ /*Update Interval (s)*/ /*Update Signal*/
  { "",       "temps",    60,                     1 },
  { "",       "volume",    0,                     2 },
  { "",       "camera",    0,                     6 },
  { "",       "battery",  60,                     3 },
  { "",       "clock",    30,                     4 },
  { "♥",      "heart",     0,                     5 },
};

// sets delimeter between status commands. NULL character ('\0') means no
// delimeter.
static char delim = ' ';
static char replaceNewLineChar = ' '; // '\0' for deletion
