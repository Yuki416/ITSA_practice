#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
#include <unordered_set>

int main() {
    std::string line;
    std::getline(std::cin, line); // 從標準輸入讀取一整行字串

    // Convert to lowercase
    std::transform(line.begin(), line.end(), line.begin(), ::tolower); // 將整行字串的所有字元轉為小寫，確保比較時不分大小寫

    std::istringstream iss(line); // 將字串依照空白分割成一個個單字（token）
    std::string token;
    std::vector<std::string> tokens;
    std::unordered_set<std::string> seen; // 來記錄已經出現過的單字，只有第一次出現的單字才會被加入 tokens 向量
    // unordered_set 是無序集合，它不會保留元素加入時的順序, 而set 會按照字典序 排列，都不適合存答案

    while (iss >> token) { // 從字串流中依序讀取每個單字
        if (seen.find(token) == seen.end()) { // 檢查這個單字是否還沒出現過
            tokens.push_back(token); // 如果沒出現過，就加入到 tokens 向量中，並紀錄到 seen 集合中
            seen.insert(token);
        }
    }

    for (size_t i = 0; i < tokens.size(); ++i) {
        std::cout << tokens[i];
        if (i != tokens.size() - 1) {
            std::cout << " ";
        }
    }
    std::cout << std::endl;

    return 0;
}