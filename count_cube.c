#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int round;
    scanf("%d",&round);
    for(int i=0;i<round;i++){
        int n;
        scanf("%d",&n);

        int square_n=n*n;
        int cube_n=square_n*n;
        printf("%d %d %d\n",n,square_n,cube_n);

    }




	return 0;
}