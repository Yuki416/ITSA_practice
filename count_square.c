#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int a,b;
        scanf("%d %d",&a,&b);
        int result=(a+b)*(a+b);
        printf("%d\n",result);
    }




	return 0;
}