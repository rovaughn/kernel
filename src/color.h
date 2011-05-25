#ifndef COLOR
#define COLOR

typedef unsigned char color_t;

enum color_e
{
    BLACK = 0,
    BLUE,
    GREEN,
    CYAN,
    RED,
    MAGENTA,
    BROWN,
    WHITE
};

color_t make_color (int fore, int fore_bright, int back, int back_bright);

#endif
