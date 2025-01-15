#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXLEN 10

int main(int argc, char *argv[]) {
    char key[][MAXLEN]={"dog","cat","duck","cow","fox","狗","貓","鴨","牛","狐"};
    char value[][MAXLEN]={"狗","貓","鴨","牛","狐","dog","cat","duck","cow","fox"};
    int n=sizeof(key) / sizeof(key[0]);

    char str[MAXLEN];
    scanf("%s",str);
    for(int i=0;i<n;i++){
        if(strcmp(str,key[i])==0){
            puts(value[i]);
        }
    }




	return 0;
}