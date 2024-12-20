#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>
#define MAX_LEN 85

// 自定義錯誤處理函式
void handle_error(const char *message, int test_case_number, const char *test_case) {
    fprintf(stderr, "Error: %s\n", message);
    fprintf(stderr, "Test case #%d: %s\n", test_case_number, test_case);
    exit(EXIT_FAILURE); // 結束程式，返回錯誤狀態
}
int main(){
    int K; //測資數
    scanf("%d",&K);
    for(int i=0;i<K;i++){
        int N; // char amount
        scanf("%d",&N);
        getchar(); // remove \n
        
        char str[MAX_LEN];
        fgets(str,N+1,stdin);
        printf("%d\n",strlen(str)); // 長度包含\n
        // str[N]='\0';
        printf("%d\n",strlen(str)); // 長度只含字串
        if (str[N ] == '\n') {
            str[N ] = '\0';
        }

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