#include <iostream>
#include <string>
#include <map>

int main() {
    std::map<std::string, std::string> dict = {
        {"dog", "狗"}, {"cat", "貓"}, {"duck", "鴨"}, {"cow", "牛"}, {"fox", "狐"},
        {"狗", "dog"}, {"貓", "cat"}, {"鴨", "duck"}, {"牛", "cow"}, {"狐", "fox"}
    };

    std::string str;
    std::cin >> str;
    if (dict.count(str)) { // 若key 存在則回傳1, 否則回傳0
        std::cout << dict[str] << std::endl;
    }
    return 0;
}