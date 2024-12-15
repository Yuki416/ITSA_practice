#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LEN 5

void fill_digit_matrix(int digit_matrix[5][24], char digit, int start_col) {

    // Define patterns for each digit (0-9)
    switch (digit) {
        case '0':
            for (int i = start_col; i < start_col + 5; i++) {
                digit_matrix[0][i] = 1; // Top horizontal line
                digit_matrix[4][i] = 1; // Bottom horizontal line
            }
            digit_matrix[1][start_col] = 1; // Left vertical
            digit_matrix[2][start_col] = 1;
            digit_matrix[3][start_col] = 1;
            digit_matrix[1][start_col + 4] = 1; // Right vertical
            digit_matrix[2][start_col + 4] = 1;
            digit_matrix[3][start_col + 4] = 1;
            break;
        case '1':
            for (int j = 0; j < 5; j++) {
                digit_matrix[j][start_col + 4] = 1; // Right vertical line
            }
            break;
        case '2':
            for (int i = start_col; i < start_col + 5; i++) {
                digit_matrix[0][i] = 1; // Top horizontal line
                digit_matrix[2][i] = 1; // Middle horizontal line
                digit_matrix[4][i] = 1; // Bottom horizontal line
            }
            digit_matrix[1][start_col + 4] = 1; // Top-right vertical line
            digit_matrix[3][start_col] = 1; // Bottom-left vertical line
            break;
        case '3':
            for (int i = start_col; i < start_col + 5; i++) {
                digit_matrix[0][i] = 1; // Top horizontal line
                digit_matrix[2][i] = 1; // Middle horizontal line
                digit_matrix[4][i] = 1; // Bottom horizontal line
            }
            digit_matrix[1][start_col + 4] = 1; // Top-right vertical line
            digit_matrix[3][start_col + 4] = 1; // Bottom-right vertical line
            break;
        case '4':
            for (int i = start_col; i < start_col + 5; i++) {
                digit_matrix[2][i] = 1; // Middle horizontal line
            }
            digit_matrix[0][start_col] = 1; // Top-left vertical line
            digit_matrix[1][start_col] = 1;
            digit_matrix[0][start_col + 4] = 1; // Top-right vertical line
            digit_matrix[1][start_col + 4] = 1; 
            digit_matrix[2][start_col + 4] = 1;
            digit_matrix[3][start_col + 4] = 1;
            digit_matrix[4][start_col + 4] = 1;
            break;
        case '5':
            for (int i = start_col; i < start_col + 5; i++) {
                digit_matrix[0][i] = 1; // Top horizontal line
                digit_matrix[2][i] = 1; // Middle horizontal line
                digit_matrix[4][i] = 1; // Bottom horizontal line
            }
            digit_matrix[1][start_col] = 1; // Top-left vertical line
            digit_matrix[3][start_col + 4] = 1; // Bottom-right vertical line
            break;
        case '6':
            for (int i = start_col; i < start_col + 5; i++) {
                digit_matrix[0][i] = 1; // Top horizontal line
                digit_matrix[2][i] = 1; // Middle horizontal line
                digit_matrix[4][i] = 1; // Bottom horizontal line
            }
            digit_matrix[1][start_col] = 1; // Top-left vertical line
            digit_matrix[3][start_col] = 1; // Bottom-left vertical line
            digit_matrix[3][start_col + 4] = 1; // Bottom-right vertical line
            break;
        case '7':
            for (int i = start_col; i < start_col + 5; i++) {
                digit_matrix[0][i] = 1; // Top horizontal line
            }
            digit_matrix[1][start_col + 4] = 1; // Top-right vertical line
            digit_matrix[2][start_col + 4] = 1;
            digit_matrix[3][start_col + 4] = 1;
            digit_matrix[4][start_col + 4] = 1;
            break;
        case '8':
            for (int i = start_col; i < start_col + 5; i++) {
                digit_matrix[0][i] = 1; // Top horizontal line
                digit_matrix[2][i] = 1; // Middle horizontal line
                digit_matrix[4][i] = 1; // Bottom horizontal line
            }
            digit_matrix[1][start_col] = 1; // Top-left vertical line
            digit_matrix[3][start_col] = 1; // Bottom-left vertical line
            digit_matrix[1][start_col + 4] = 1; // Top-right vertical line
            digit_matrix[3][start_col + 4] = 1; // Bottom-right vertical line
            break;
        case '9':
            for (int i = start_col; i < start_col + 5; i++) {
                digit_matrix[0][i] = 1; // Top horizontal line
                digit_matrix[2][i] = 1; // Middle horizontal line
                digit_matrix[4][i] = 1; // Bottom horizontal line
            }
            digit_matrix[1][start_col] = 1; // Top-left vertical line
            digit_matrix[1][start_col + 4] = 1; // Top-right vertical line
            digit_matrix[3][start_col + 4] = 1; // Bottom-right vertical line
            break;
        default:
            break;
    }
}

int main() {
    char str[MAX_LEN];
    fgets(str, MAX_LEN, stdin); // include \n

    int digit_matrix[5][24] = {0}; // 5x20 matrix for digits
    int len = strlen(str);
    // str[len - 1] = '\0';

    int start_col = 0;
    for (int i = 0; i < len; i++) {
        fill_digit_matrix(digit_matrix, str[i], start_col);
        start_col += 6; // Move to the next digit position (5 for digit + 1 for space)
    }

    // Display
    for (int j = 0; j < 5; j++) {
        for (int i = 0; i < start_col-1; i++) {
            if (digit_matrix[j][i] == 1) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
