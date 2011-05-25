#include "put_char.h"
#include "video_system.h"

void put_char (char c, color_t color, int row, int col)
{
    volatile char *video = video_system.pointer;
    int            index = 2 * ((row * video_system.width) + col);

    video[index]     = c;
    video[index + 1] = color;
}
