#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        int result = (a + b) * (a + b);
        cout << result << endl;
    }
    return 0;
}