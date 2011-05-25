#ifndef WRITE_CURSOR
#define WRITE_CURSOR

#include "color.h"

struct write_cursor_t
{
    int     row, col;
    color_t color;
} write_cursor;

#endif
