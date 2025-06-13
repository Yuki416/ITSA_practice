#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    cout << a << "+" << b << "=" << a + b << endl;
    cout << a << "*" << b << "=" << a * b << endl;
    cout << a << "-" << b << "=" << a - b << endl;
    cout << a << "/" << b << "=";

    if (a % b < 0) {
        int q = a / b - 1; // 商減1 確保餘數為正數
        int r = a - q * b;
        cout << q << "..." << r << endl;
    } else {
        cout << a / b << "..." << a % b << endl;
    }

    return 0;
}