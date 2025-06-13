#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    while (b > 0) {
        int temp = a;
        a = b;
        b = temp % b;
        // cout << a << " " << b << endl;
    }
    cout << a << endl;
    return 0;
}