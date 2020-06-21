#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *trackNum;
    char *command = malloc(sizeof(char) * 50);
    int selMenu;

    printf("Welcome to Custom Tracking Service.\n");

    while(1){
        strcpy(command, "CustomTracker_Client_Java.exe ");

        printf("Please input your Tracking Number : ");
        scanf("%s", trackNum);

        while(1){
            printf("\nPlease select Menu.\n");
            printf("1. Get Parcel Information\n");
            printf("2. Get Parcel Tracking Information\n");
            scanf("%d", &selMenu);

            if(selMenu == 1){
                strcat(command, "Parcel ");
            }else if(selMenu == 2){
                strcat(command, "Track ");
            }else{
                printf("Wrong Selection. Try Again.\n");
                continue;
            }
            break;
        }

        strcat(command, trackNum);

        system(command);

        printf("Press 0 to check More Parcel, other keys for EXIT.\n");
        scanf("%d", &selMenu);

        if(selMenu == 0){
            continue;
        }

        return 0;
    }
}
