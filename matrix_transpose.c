#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,m; // row, col of original matrix
    scanf("%d %d",&n,&m);

    // initialize transpose matrix m*n
    int** arr=(int**)malloc(m*sizeof(int*));
    for(int i=0;i<m;i++){
        arr[i]=(int*)malloc(n*sizeof(int));
    }

    for(int i=0;i<n;i++){ // 按照original matrix 的順序讀入
        for(int j=0;j<m;j++){
            int entry;
            scanf("%d",&entry);
            arr[j][i]=entry; // 一開始就存到transpose matrix 的位置
        }
    }

    // output transpose matrix
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d",arr[i][j]);
            if(j!=n-1){ // 最後一行不用空格
                printf(" ");
            }
        }
        printf("\n");
    }

}