#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *trackNum;
    char *command = malloc(sizeof(char) * 50);
    int selMenu;

    strcpy(command, "CustomTracker_Client_Java.exe ");

    printf("Welcome to Custom Tracking Service.\n");
    printf("Please input your Tracking Number. : ");
    scanf("%s", trackNum);

    printf("\nPlease select Menu.\n");
    printf("1. Get Parcel Information\n");
    printf("2. Get Parcel Tracking Information\n");
    scanf("%d", &selMenu);

    switch (selMenu){
        case 1:
            strcat(command, "Parcel ");
            break;
        case 2:
            strcat(command, "Track ");
            break;
    }
    strcat(command, trackNum);

    system(command);

    return 0;
}
