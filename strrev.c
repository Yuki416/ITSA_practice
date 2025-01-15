#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    char num_str[5]; // include \0
    scanf("%s",num_str);
    int len=strlen(num_str);
    for(int i=len-1;i>=0;i--){
        if(i==0){
            printf("%c\n",num_str[i]);
            break;
        }
        printf("%c,",num_str[i]);
    }




	return 0;
}