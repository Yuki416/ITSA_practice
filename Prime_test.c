#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main(){
    int num;
    scanf("%d",&num);

    bool isPrime=1;
    for(int i=2;i<=sqrt(num);i++){
        if(num%i==0){
            isPrime=0;
            break;
        }
    }

    if(isPrime || num==2){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }

    return 0;
}