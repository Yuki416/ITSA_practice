#include <iostream>
using namespace std;

int main() {
    int miles;
    cin >> miles;

    double kilometers = static_cast<double>(miles) * 1.6; // static_cast 用於基本型態間的安全轉換
    cout << fixed;
    cout.precision(1);
    cout << kilometers << endl;

    return 0;
}