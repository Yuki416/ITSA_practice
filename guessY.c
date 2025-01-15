#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int round;
    scanf("%d",&round);
    for(int i=0;i<round;i++){
        int x;
        scanf("%d",&x);
        if(50<=x && x<=70){
            printf("%d\n",x);
        }
        else{
            printf("%d\n",100);
        }

    }



	return 0;
}