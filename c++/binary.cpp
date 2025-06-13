#include <iostream>
using namespace std;

int main() {
    // decimal to binary
    int num;
    cin >> num;
    int binary[10];
    for (int i = 0; i < 8; i++) {
        binary[i] = num % 2;
        num /= 2;
    }
    for (int i = 7; i >= 0; i--) {
        cout << binary[i];
    }
    cout << endl;
    return 0;
}