#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

#define MAX_LEN 1005 // add null char

typedef struct Token{
    char* token_address;
    struct Token *next;
}Token;

bool is_repeated(Token *head, char *token_address){
    Token *current = head;
    while(current!=NULL && current->token_address != token_address){
        if(strcmp(current->token_address, token_address)==0){ // if the token have appeared before
            return true;
        }
        current = current->next;
    }
    return false;
}

int main(){
    char str[MAX_LEN];
    fgets(str,MAX_LEN,stdin);

    unsigned int len=strlen(str);
    // if(len>0 && (str[len-1]=='\n' || str[len-1]=='\r')){
    //     str[len-1]='\0';
    // }
    
    // to lower case
    for(int i=0;i<len;i++){
        str[i]=tolower(str[i]);
    }

    Token *head=NULL; // head of linked list
    Token *tail=NULL; // tail of linked list
    char* token=strtok(str," \r\n"); // str 結尾的\n 要寫 \r\n
    while(token!=NULL){
        Token *new_token=(Token*)malloc(sizeof(Token));
        new_token->token_address=token;
        new_token->next=NULL;
        if(head==NULL){
            head=new_token;
            tail=new_token;
        }
        else{
            // 判斷是否重複
            if(!is_repeated(head,new_token->token_address)){ // 不重複再append
                tail->next=new_token;
                tail=new_token;    
            }
        }

        token=strtok(NULL," \r\n");

    }
    // print linked list
    Token *current=head;
    while(current!=NULL){
        // if not last token, print space
        if(current->next!=NULL){
            printf("%s ",current->token_address);
        }
        else{
            printf("%s\n",current->token_address);
        }
    
        current=current->next;
    }

    // free linked list
    current=head;
    while(current!=NULL){
        Token *temp=current;
        current=current->next;
        free(temp);
    }

    return 0;
}