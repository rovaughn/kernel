#include "clear_screen.h"
#include "write_str.h"

void kmain (void *mbd, unsigned int magic)
{
    if (magic != 0x2badb002)
    {
        // Error, magic number is incorrect.
        mbd = 0; // This is so "mbd" is "used" to suppress the compiler's errors
        return;
    }
    else
    {
        char *bootLoaderName = (char*)((long*)mbd)[16];
        
        // init_keyboard();
        clear_screen();
        
        write_str(bootLoaderName);
        write_str("\nHello, master.  What is your command?");
    }
}
