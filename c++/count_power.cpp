#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        int a;
        cin >> a;
        if(a > 31) {
            cout << "Value of more than 31" << endl;
            continue;
        }
        a = (1 << a);
        cout << a << endl;
    }
    return 0;
}