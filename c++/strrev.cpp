#include <iostream>
#include <string>
using namespace std;

int main() {
    string num_str;
    cin >> num_str;
    int len = num_str.length();
    for (int i = len - 1; i >= 0; i--) {
        if (i == 0) {
            cout << num_str[i] << endl;
            break;
        }
        cout << num_str[i] << ",";
    }
    return 0;
}