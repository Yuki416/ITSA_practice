#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[]) {
    char ch;
    scanf("%c",&ch);
    ch = tolower(ch);

    char vowels[]={'a','e','i','o','u'};
    for(int i=0;i<5;i++){
        if(ch==vowels[i]){
            printf("母音\n");
            return 0;
        }
    }

    printf("子音\n");



	return 0;
}