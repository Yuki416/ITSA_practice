#include <stdio.h>
#include <stdlib.h>

int main(){
    int miles;
    scanf("%d",&miles);

    double kilometers=(double)miles*1.6;
    printf("%.1f\n",kilometers);

    return 0;
}