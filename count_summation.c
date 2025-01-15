#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int round;
    scanf("%d",&round);
    for(int i=0;i<round;i++){
        int a,b,sum;
        scanf("%d %d",&a,&b);
        if(a>b){
            int temp=a;
            a=b;
            b=temp;
        }
        // sigma(a,b,i+=1)
        sum=(a+b)*(b-a+1) / 2;
        printf("%d\n",sum);
    }




	return 0;
}