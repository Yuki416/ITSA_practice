#include <stdio.h>

int main(){
    int n;
    int coins[3]={0}; // 10,5,1
    int value[3]={10,5,1};
    scanf("%d",&n);

    if(n>=10){
        coins[0]=n/10;
        n= n%10;
    }

    if(n>=5){
        coins[1]=n/5;
        n = n%5;
    }
    coins[2]=n;

    for(int i=0;i<3;i++){
        printf("NT%d=%d\n",value[i],coins[i]);
    }

}