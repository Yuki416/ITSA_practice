#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>
#define MAX_LEN 85

int main(){
    int K; //測資數
    scanf("%d",&K);
    for(int i=0;i<K;i++){
        int N; // char amount
        scanf("%d",&N);
        getchar(); // remove \n
        
        char str[MAX_LEN];
        scanf("%s",&str);


        int count=0;
        for(int j=0;j<N;j++){
            if(str[j]=='.'){
                j+=2;
                count++;
            }
        } 
        printf("%d\n",count);
    }
    


    return 0;
}