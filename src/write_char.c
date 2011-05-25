#include "write_char.h"
#include "put_char.h"
#include "write_cursor.h"
#include "video_system.h"

void write_char (char c)
{
    if (c == '\n')
    {
        write_cursor.col = 0;
        write_cursor.row += 1;

        return;
    }

    put_char(c, write_cursor.color, write_cursor.row, write_cursor.col);

    write_cursor.col += 1;

    if (write_cursor.col >= video_system.width)
    {
        write_cursor.col = 0;
        write_cursor.row += 1;
    }
}
