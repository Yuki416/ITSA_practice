#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        double edge;
        cin >> edge;
        double area = edge * edge;

        // round to 1 decimal place
        int k = 1;
        double factor = pow(10, k);
        area = round(area * factor) / factor;
        cout << fixed;
        cout.precision(1);
        cout << area << endl;
    }
    return 0;
}