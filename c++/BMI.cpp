#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double w, h;
    cin >> w >> h;
    h = h / 100;
    double BMI = w / (h * h);

    double factor = pow(10, 2);
    BMI = round(BMI * factor) / factor;

    cout << fixed;
    cout.precision(2);
    cout << BMI << endl;

    return 0;
}