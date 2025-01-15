#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *strings[] = {
        "apple", "banana", "orange", "kiwi", "watermelon"
    };
    int num_strings = sizeof(strings) / sizeof(strings[0]); // 計算字串數量

    // 輸出字串陣列
    for (int i = 0; i < num_strings; i++) {
        printf("strings[%d]: %s\n", i, strings[i]);
    }

    //動態配置字串並賦值
    char *new_string = (char*)malloc(sizeof(char) * (strlen("grapefruit")+1));
    strcpy(new_string, "grapefruit");

    strings[1] = new_string; // 指向新字串

    printf("\n修改後的字串陣列:\n");
    for (int i = 0; i < num_strings; i++) {
        printf("strings[%d]: %s\n", i, strings[i]);
    }

    free(new_string);//釋放記憶體

    return 0;
}