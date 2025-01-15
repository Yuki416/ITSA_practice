#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    char str[5];
    scanf("%s",str);
    int len=strlen(str);
    for(int i=0;i<len;i++){
        printf("%c\n",str[i]);
    }




	return 0;
}