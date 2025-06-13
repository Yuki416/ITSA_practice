#include <iostream>
#include <cmath>

int main() {
    int num;
    std::cin >> num;

    bool isPrime = true;
    if (num < 2) {
        isPrime = false;
    } else {
        for (int i = 2; i <= std::sqrt(num); i++) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }
    }

    if (isPrime) {
        std::cout << "YES\n";
    } else {
        std::cout << "NO\n";
    }

    return 0;
}