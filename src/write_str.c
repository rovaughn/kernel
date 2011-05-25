#include "write_str.h"
#include "write_char.h"

void write_str (const char *str)
{
    int i;

    for (i = 0; str[i] != '\0'; ++i)
    {
        write_char(str[i]);
    }
}
