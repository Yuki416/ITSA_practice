#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int month;
    scanf("%d",&month);

    int seasons[4][3] = {{12, 1, 2}, {3, 4, 5}, {6, 7, 8}, {9, 10, 11}};
    char *season_names[] = {"Winter", "Spring", "Summer", "Autumn"};
    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            if(seasons[i][j]==month){
                printf("%s\n",season_names[i]);
            }
        }
    }



	return 0;
}