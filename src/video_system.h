#ifndef VIDEO_SYSTEM
#define VIDEO_SYSTEM

struct video_system_t
{
    volatile char *pointer;
    int            width;
    int            height;
};

struct video_system_t video_system;

#endif
