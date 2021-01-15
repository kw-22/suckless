// Modify this file to change what commands output to your status bar, and recompile using the make command.
static const Block blocks[] = {
    /* Icon */      /* Command */      /* Update Interval */      /* Update Signal */
    {"",       "$HOME/.local/share/statusbar/caps",            0,  13},

    {"📔",     "$HOME/.local/share/statusbar/course",         60,  12},

//    {"🎵",     "$HOME/.local/share/statusbar/music",           2,  11},

    {"",       "$HOME/.local/share/statusbar/weather",         0,  10},

    {"📦",     "$HOME/.local/share/statusbar/pacpackages",     0,  9},

    {"🖥",     "$HOME/.local/share/statusbar/cpu",             5,  8},

    {"🖥",     "$HOME/.local/share/statusbar/mem",            10,  7},

    {"💽",     "$HOME/.local/share/statusbar/disk",          300,  6},

    {"🔆",     "$HOME/.local/share/statusbar/brightness",      0,  5},

    {"",       "$HOME/.local/share/statusbar/volume",          0,  4},

    {"",       "$HOME/.local/share/statusbar/battery",       120,  3},

    {"",       "$HOME/.local/share/statusbar/internet",       10,  2},

    {"🕰",      "$HOME/.local/share/statusbar/clock",          30,  1},
};

// Sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char delim[] = " ";
static unsigned int delim_len = 1;
