#include <iostream>
using namespace std;

int main() {
    int round;
    cin >> round;
    for (int i = 0; i < round; i++) {
        int x;
        cin >> x;
        if (50 <= x && x <= 70) {
            cout << x << endl;
        } else {
            cout << 100 << endl;
        }
    }
    return 0;
}