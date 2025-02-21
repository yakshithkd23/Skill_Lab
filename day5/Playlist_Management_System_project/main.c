#include <stdio.h>
#include "linked.h"
#include <string.h>


int main() {
    int choice;
    char title[100];

    while (1) {
        printf("\nPlaylist Management System\n");
        printf("1. Add Song\n");
        printf("2. Show Current Song\n");
        printf("3. Next Song\n");
        printf("4. Delete Current Song\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); 

        switch (choice) {
            case 1:
                printf("Enter song title: ");
                fgets(title, sizeof(title), stdin);
                title[strcspn(title, "\n")] = 0;
                insertSong(title);
                break;
            case 2:
                displayCurrentSong();
                break;
            case 3:
                nextSong();
                break;
            case 4:
                deleteCurrentSong();
                break;
            case 5:
                printf("Exiting...\n");
                return 0;
            default:
                printf("Invalid choice. Try again.\n");
        }
    }
}
