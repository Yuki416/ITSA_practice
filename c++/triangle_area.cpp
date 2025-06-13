#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    double area = a * b / 2.0;
    cout << "Triangle area:" << fixed;
    cout.precision(1);
    cout << area << endl;
    return 0;
}