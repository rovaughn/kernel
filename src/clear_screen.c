#include "clear_screen.h"
#include "video_system.h"

void clear_screen ()
{
    volatile char *video = video_system.pointer;
    int            i;
    
    for (i = 0; i < video_system.width * video_system.height * 2; i += 2)
    {
        video[i]     = ' ';
        video[i + 1] = 0x00;
    }
}
