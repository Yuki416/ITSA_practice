#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d+%d=%d\n",a,b,a+b);
    printf("%d*%d=%d\n",a,b,a*b);
    printf("%d-%d=%d\n",a,b,a-b);
    printf("%d/%d=",a,b);

    if(a%b<0){
        int q=a/b -1;
        int r= a- q*b;
        printf("%d...%d\n",q,r);
    }
    else{
        printf("%d...%d\n",a/b,a%b);
    }

	return 0;
}