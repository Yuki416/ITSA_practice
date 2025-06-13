#include <iostream>
using namespace std;

int main() {
    int round;
    cin >> round;
    for (int i = 0; i < round; i++) {
        int n;
        cin >> n;

        int square_n = n * n;
        int cube_n = square_n * n;
        cout << n << " " << square_n << " " << cube_n << endl;
    }
    return 0;
}