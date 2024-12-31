#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[] = "lon\n";
    int len = strlen(str);
    char result[5];    // 改為5，為結束符號預留空間
    // 
    
    for(int i = 0; i < len; i++) {
        result[i] = toupper(str[i]);
    }
    result[len] = '\0';    // 加入字串結束符號
    
    puts(result);
    return 0;
}