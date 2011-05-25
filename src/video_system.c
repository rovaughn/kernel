#include "video_system.h"

// Text mode is always 80 columns by 25 rows
struct video_system_t video_system = {(volatile char*)0xb8000, 80, 25};
