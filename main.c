#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *trackNum;
    char *command = malloc(sizeof(char) * 50);
    int selMenu;

    printf("Unipass 관세청 통관조회 서비스입니다.\n");

    while(1){
        strcpy(command, "CustomTracker_Client_Java.exe ");

        printf("관세청에서의 조회가 가능한 송장번호를 입력해주세요 : ");
        scanf("%s", trackNum);

        while(1){
            printf("\n메뉴를 선택합니다.\n");
            printf("1. 통관중인 물품의 상세정보 확인\n");
            printf("2. 물품의 통관 진행정보 확인\n");
            scanf("%d", &selMenu);

            if(selMenu == 1){
                strcat(command, "Parcel ");
            }else if(selMenu == 2){
                strcat(command, "Track ");
            }else{
                printf("올바르지 않은 입력입니다. 다시 시도해주세요.\n");
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
