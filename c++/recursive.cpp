#include <iostream>
using namespace std;

int f(int n) {
    if (n == 0 || n == 1) {
        return n + 1;
    }
    return f(n - 1) + f(n / 2);
}

int main() {
    int n;
    cin >> n;
    int ans = f(n);
    cout << ans << endl;
    return 0;
}