#include <stdio.h>
#include <stdlib.h>


void makeChange(int balance){
    int charge[3]={1,5,50};
    int count[3]={0};
    
    for(int i=2;i>=0;i--){
        if(balance >= charge[i]){
            count[i]= balance/charge[i];
            balance = balance%charge[i];
        }
    }

    for(int i=0;i<3;i++){
        if(i!=2){
            printf("%d,",count[i]);
        }
        else{
            printf("%d\n",count[i]);
        }
    }

}

int main(){
    int N; // money
    scanf("%d",&N);
    int price[3]={15,20,30}; // item's price
    int amount[3]={0};
    // input
    for(int i=0;i<3;i++){
        scanf(",%d",&amount[i]);
    }
    // print
    // for(int i=0;i<3;i++){
    //     printf("%d ",amount[i]);
    // }
    // printf("\n");
    
    int cost=0;
    for(int i=0;i<3;i++){
        cost+=price[i]*amount[i];
    }
    // if enough
    if(N>=cost){
        // printf("balance: %d\n",N-cost);
        makeChange(N-cost);
    }
    else{
        printf("%d\n",0);
    }
    

    return 0;
}