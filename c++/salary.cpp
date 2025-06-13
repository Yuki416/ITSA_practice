#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int hour, hour_rate;
    double salary = 0;
    cin >> hour >> hour_rate;

    int first_part, second_part, third_part;

    if (hour <= 60) {
        salary = hour * hour_rate;
    } else if (hour <= 120) {
        first_part = 60;
        second_part = hour - 60;
        salary = first_part * hour_rate + second_part * hour_rate * 1.33;
    } else {
        first_part = 60;
        second_part = 60;
        third_part = hour - 120;
        salary = first_part * hour_rate + second_part * hour_rate * 1.33 + third_part * hour_rate * 1.66;
    }
    double factor = 10;
    salary = round(salary * factor) / factor;
    cout << fixed;
    cout.precision(1);
    cout << salary << endl;

    return 0;
}