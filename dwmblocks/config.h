// Modify this file to change what commands output to your status bar, and recompile using the make command.
static const Block blocks[] = {
    /* Icon */      /* Command */      /* Update Interval */      /* Update Signal */
    {"",       "$XDG_DATA_HOME/statusbar/caps",            0,  13},

    {"📔",     "$XDG_DATA_HOME/statusbar/course",         60,  12},

//    {"🎵",     "$XDG_DATA_HOME/statusbar/music",           2,  11},

    {"",       "$XDG_DATA_HOME/statusbar/weather",         0,  10},

    {"📦",     "$XDG_DATA_HOME/statusbar/pacpackages",     0,  9},

    {"🖥",     "$XDG_DATA_HOME/statusbar/cpu",             5,  8},

    {"🖥",     "$XDG_DATA_HOME/statusbar/mem",            10,  7},

    {"💽",     "$XDG_DATA_HOME/statusbar/disk",          300,  6},

    {"🔆",     "$XDG_DATA_HOME/statusbar/brightness",      0,  5},

    {"",       "$XDG_DATA_HOME/statusbar/volume",          0,  4},

    {"",       "$XDG_DATA_HOME/statusbar/battery",       120,  3},

    {"",       "$XDG_DATA_HOME/statusbar/internet",       10,  2},

    {"🕰",      "$XDG_DATA_HOME/statusbar/clock",          30,  1},
};

// Sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char delim[] = " ";
static unsigned int delim_len = 1;
