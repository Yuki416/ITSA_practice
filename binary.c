#include <stdio.h>

int main(){
    // decimal to binary
    int num;
    scanf("%d", &num);
    int binary[10];
    for(int i = 0; i < 8; i++){
        binary[i] = num % 2;
        num /= 2;
    }
    for(int i = 7; i >= 0; i--){
        printf("%d", binary[i]);
    }
    

}