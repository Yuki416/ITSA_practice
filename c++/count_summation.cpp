#include <iostream>
using namespace std;

int main() {
    int round;
    cin >> round;
    for (int i = 0; i < round; i++) {
        int a, b, sum;
        cin >> a >> b;
        if (a > b) {
            int temp = a;
            a = b;
            b = temp;
        }
        // sigma(a,b,i+=1)
        sum = (a + b) * (b - a + 1) / 2;
        cout << sum << endl;
    }
    return 0;
}