#include "color.h"

color_t make_color (int fore, int fore_bright, int back, int back_bright)
{
    fore_bright &= 1; // Make sure they're only 1 or 0
    back_bright &= 1;

    return (back_bright << 7) | (back << 4) | (fore_bright << 3) | fore;
}
