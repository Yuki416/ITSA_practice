#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXSIZE 9
#define int long long 

signed main(){
    // prize type
    char special[MAXSIZE],first[3][MAXSIZE];
    scanf("%s",special);
    for(int i=0;i<3;i++){
        scanf("%s",first[i]);
    }

    // input invoice
    int n;
    scanf("%lld",&n);
    char (*invoices)[MAXSIZE]=(char (*)[MAXSIZE])malloc(n*sizeof(char[MAXSIZE]));
    int count[7]={0}; // special , first ,second, ..., sixth
    long long total=0;
    int *hit=(int *)calloc(n,sizeof(int));  // 用來判斷某invoice是否中獎
    for(int i=0;i<n;i++){
        scanf("%s",invoices[i]);
    }
    
    for(int i=0;i<n;i++){ // i 控制第幾張發票, j 控制第幾個頭獎
        // special prize
        if(strcmp(invoices[i],special)==0){
            hit[i]=1;
            count[0]++;
            total+=2000000;
            continue; // read next invoice
        }
        // 看頭獎
        for(int j=0;j<3 && hit[i]==0;j++){
            if(strcmp(invoices[i],first[j])==0){
                hit[i]=1;
                count[1]++;
                total+=200000;
                break;
            }
            
        }
    }

    // 2nd , 3rd, ...
    for(int k=2;k<=(9-3);k++){ // k=6 為6獎
        for(int i=0;i<n;i++){ // run through all invoices
            if(hit[i]==1) continue; // 如果已經中獎就不用再看了

            for(int j=0;j<3;j++){
                if(strcmp(invoices[i]+(k-1),first[j]+(k-1))==0){
                    // printf("k=%lld invoice=%s first[j]=%s\n",k,invoice+(k-1),first[j]+k-1);
                    hit[i]=1;
                    count[k]++;
                    switch (k) {
                        case 2: 
                            total += 40000; 
                            break;
                        case 3: 
                            total += 10000; 
                            break;
                        case 4: 
                            total += 4000; 
                            break;
                        case 5: 
                            total += 1000; 
                            break;
                        case 6: 
                            total += 200; 
                            break;
                    }
                    break; // 中獎後換下一張 invoice
                }
            }

        }
    }


    // 輸出各獎項中獎張數
    for (int i = 0; i < 7; i++) {
        printf("%lld", count[i]);
        if (i < 6) {
            printf(" ");
        }
    }
    printf("\n");
    printf("%lld\n", total);

    free(invoices);
    free(hit);
    
    return 0;

}