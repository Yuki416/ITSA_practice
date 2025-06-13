#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n > 0) {
        cout << "正數" << endl;
    }
    else if (n < 0) {
        cout << "負數" << endl;
    }
    else {
        cout << "0" << endl;
    }

    return 0;
}