#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char *argv[]) {
    int code[]={10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35};
    char letters[]="ABCDEFGHJKLMNPQRSTUVXYWZIO\0";
    int letter_amount=strlen(letters);
    // printf("letters=%d\n",letter_amount);
    
    char str[11];
    scanf("%s",str);
    // check first letter
    if(!isupper(str[0])){
        printf("WRONG!!!\n");
        return 0;
    }
    // check gender code
    if(str[1]!='1' && str[1]!='2'){
        printf("WRONG!!!\n");
        return 0;
    }

    
    char ch=str[0];
    int x1,x2;
    for(int i=0;i<letter_amount;i++){
        if(letters[i]==ch){
            // printf("%d\n",code[i]);
            x1=code[i]/10;
            x2=code[i]%10;
        }
    }
    // printf("x1=%d x2=%d\n",x1,x2);

    int p=x1+(9*x2);

    for(int i=1;i<=8;i++){
        p+= (9-i)*(str[i]-'0');
    }
    p+=str[9]-'0';

    // printf("%d\n",p);
    if(p%10==0){
        printf("CORRECT!!!\n");
    }
    else{
        printf("WRONG!!!\n");
    }



    return 0;
}