#include <iostream>
#include <vector>
#include <string>

using namespace std;

const int ROWS = 5;
const int DIGIT_WIDTH = 5;
const int SPACE = 1;

void fill_digit_matrix(vector<vector<int>>& digit_matrix, char digit, int start_col) {
    switch (digit) {
        case '0':
            for (int i = start_col; i < start_col + DIGIT_WIDTH; i++) {
                digit_matrix[0][i] = 1;
                digit_matrix[4][i] = 1;
            }
            digit_matrix[1][start_col] = 1;
            digit_matrix[2][start_col] = 1;
            digit_matrix[3][start_col] = 1;
            digit_matrix[1][start_col + 4] = 1;
            digit_matrix[2][start_col + 4] = 1;
            digit_matrix[3][start_col + 4] = 1;
            break;
        case '1':
            for (int j = 0; j < ROWS; j++) {
                digit_matrix[j][start_col + 4] = 1;
            }
            break;
        case '2':
            for (int i = start_col; i < start_col + DIGIT_WIDTH; i++) {
                digit_matrix[0][i] = 1;
                digit_matrix[2][i] = 1;
                digit_matrix[4][i] = 1;
            }
            digit_matrix[1][start_col + 4] = 1;
            digit_matrix[3][start_col] = 1;
            break;
        case '3':
            for (int i = start_col; i < start_col + DIGIT_WIDTH; i++) {
                digit_matrix[0][i] = 1;
                digit_matrix[2][i] = 1;
                digit_matrix[4][i] = 1;
            }
            digit_matrix[1][start_col + 4] = 1;
            digit_matrix[3][start_col + 4] = 1;
            break;
        case '4':
            for (int i = start_col; i < start_col + DIGIT_WIDTH; i++) {
                digit_matrix[2][i] = 1;
            }
            digit_matrix[0][start_col] = 1;
            digit_matrix[1][start_col] = 1;
            digit_matrix[0][start_col + 4] = 1;
            digit_matrix[1][start_col + 4] = 1;
            digit_matrix[2][start_col + 4] = 1;
            digit_matrix[3][start_col + 4] = 1;
            digit_matrix[4][start_col + 4] = 1;
            break;
        case '5':
            for (int i = start_col; i < start_col + DIGIT_WIDTH; i++) {
                digit_matrix[0][i] = 1;
                digit_matrix[2][i] = 1;
                digit_matrix[4][i] = 1;
            }
            digit_matrix[1][start_col] = 1;
            digit_matrix[3][start_col + 4] = 1;
            break;
        case '6':
            for (int i = start_col; i < start_col + DIGIT_WIDTH; i++) {
                digit_matrix[0][i] = 1;
                digit_matrix[2][i] = 1;
                digit_matrix[4][i] = 1;
            }
            digit_matrix[1][start_col] = 1;
            digit_matrix[3][start_col] = 1;
            digit_matrix[3][start_col + 4] = 1;
            break;
        case '7':
            for (int i = start_col; i < start_col + DIGIT_WIDTH; i++) {
                digit_matrix[0][i] = 1;
            }
            digit_matrix[1][start_col + 4] = 1;
            digit_matrix[2][start_col + 4] = 1;
            digit_matrix[3][start_col + 4] = 1;
            digit_matrix[4][start_col + 4] = 1;
            break;
        case '8':
            for (int i = start_col; i < start_col + DIGIT_WIDTH; i++) {
                digit_matrix[0][i] = 1;
                digit_matrix[2][i] = 1;
                digit_matrix[4][i] = 1;
            }
            digit_matrix[1][start_col] = 1;
            digit_matrix[3][start_col] = 1;
            digit_matrix[1][start_col + 4] = 1;
            digit_matrix[3][start_col + 4] = 1;
            break;
        case '9':
            for (int i = start_col; i < start_col + DIGIT_WIDTH; i++) {
                digit_matrix[0][i] = 1;
                digit_matrix[2][i] = 1;
                digit_matrix[4][i] = 1;
            }
            digit_matrix[1][start_col] = 1;
            digit_matrix[1][start_col + 4] = 1;
            digit_matrix[3][start_col + 4] = 1;
            break;
        default:
            break;
    }
}

int main() {
    string str;
    getline(cin, str);

    int max_digits = 4; // 最多4個數字
    int cols = max_digits * (DIGIT_WIDTH + SPACE) - 1; // 最後一個數字不需要空格
    vector<vector<int>> digit_matrix(ROWS, vector<int>(cols, 0));

    int start_col = 0;
    int count = 0;
    for (char ch : str) {
        if (isdigit(ch) && count < max_digits) {
            fill_digit_matrix(digit_matrix, ch, start_col);
            start_col += DIGIT_WIDTH + SPACE;
            count++;
        }
    }

    for (int j = 0; j < ROWS; j++) {
        for (int i = 0; i < start_col - 1; i++) {
            cout << (digit_matrix[j][i] ? '*' : ' ');
        }
        cout << endl;
    }

    return 0;
}