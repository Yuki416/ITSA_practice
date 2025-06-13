#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t, b, h;
    cin >> t >> b >> h;

    double area = (t + b) * h / 2.0;
    double factor = 10;
    area = round(area * factor) / factor;
    cout << "Trapezoid area:" << fixed;
    cout.precision(1);
    cout << area << endl;

    return 0;
}