#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int a;
        scanf("%d",&a);
        if(a>31){
            printf("Value of more than 31\n");
            continue;
        }
        a=(1<<a);
        printf("%d\n",a);
    }




	return 0;
}