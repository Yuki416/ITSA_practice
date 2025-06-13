#include <iostream>
#include <string>
#include <cctype>

int main() {
    int code[] = {10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35};
    std::string letters = "ABCDEFGHJKLMNPQRSTUVXYWZIO";
    int letter_amount = letters.length();

    std::string str;
    std::cin >> str;

    // check length
    if (str.length() != 10) {
        std::cout << "WRONG!!!" << std::endl;
        return 0;
    }

    // check first letter
    if (!std::isupper(str[0])) {
        std::cout << "WRONG!!!" << std::endl;
        return 0;
    }
    // check gender code
    if (str[1] != '1' && str[1] != '2') {
        std::cout << "WRONG!!!" << std::endl;
        return 0;
    }

    char ch = str[0];
    int x1 = 0, x2 = 0;
    for (int i = 0; i < letter_amount; i++) {
        if (letters[i] == ch) {
            x1 = code[i] / 10;
            x2 = code[i] % 10;
            break;
        }
    }

    int p = x1 + (9 * x2);

    for (int i = 1; i <= 8; i++) {
        if (!std::isdigit(str[i])) {
            std::cout << "WRONG!!!" << std::endl;
            return 0;
        }
        p += (9 - i) * (str[i] - '0');
    }
    if (!std::isdigit(str[9])) {
        std::cout << "WRONG!!!" << std::endl;
        return 0;
    }
    p += str[9] - '0';

    if (p % 10 == 0) {
        std::cout << "CORRECT!!!" << std::endl;
    } else {
        std::cout << "WRONG!!!" << std::endl;
    }

    return 0;
}