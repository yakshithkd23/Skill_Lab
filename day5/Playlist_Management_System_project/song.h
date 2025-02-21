#ifndef SONG_H
#define SONG_H

// Define the Song structure
typedef struct Song {
    char title[100];
    struct Song *next;  // Pointer to the next song (circular linked list)
} Song;

#endif
