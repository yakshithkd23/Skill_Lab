#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "linked.h"

Song *current = NULL;  // Pointer to track the currently playing song

// Insert a song into the circular linked list
// this is the node creation process
void insertSong(char *title) {
    Song *newSong = (Song *)malloc(sizeof(Song));
    if (newSong == NULL) {
        printf("Memory allocation failed.\n");
        return;
    }

    strcpy(newSong->title, title);

    if (current == NULL) {  // If the list is empty
        newSong->next = newSong; // Circular link
        current = newSong;
    } else {
        newSong->next = current->next;
        current->next = newSong;
        current = newSong;  // Update current to the new song
    }
}


// Display the currently playing song
//printing of thr list 
void displayCurrentSong() {
    if (current != NULL) {
        printf("Currently playing: %s\n", current->title);
    } else {
        printf("Playlist is empty.\n");
    }
}

// Move to the next song in the circular list
// printing next song by using p->next method 
void nextSong() {
    if (current != NULL) {
        current = current->next;
        displayCurrentSong();
    }
}

// Delete the current song from the playlist
//deletecircular
void deleteCurrentSong() {
    if (current == NULL) {
        printf("Playlist is empty. Nothing to delete.\n");
        return;
    }

    Song *temp = current->next;
    if (temp == current) { // If there is only one song in the list
        free(current);
        current = NULL;
    } else {
        current->next = temp->next;
        free(temp);
    }
}
