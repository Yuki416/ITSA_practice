#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int n;
    scanf("%d",&n);
    
    if(n>0){
        printf("正數\n");
    }
    else if(n<0){
        printf("負數\n");
    }
    else{
        printf("0\n");
    }




	return 0;
}