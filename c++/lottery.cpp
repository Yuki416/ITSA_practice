#include <iostream>
#include <vector>
#include <string>

#define MAXSIZE 9

int main() {
    // prize type
    std::string special;
    std::vector<std::string> first(3);
    std::cin >> special;
    for (int i = 0; i < 3; i++) {
        std::cin >> first[i];
    }

    // input invoice
    long long n;
    std::cin >> n;
    std::vector<std::string> invoices(n);
    std::vector<long long> count(7, 0); // special, first, second, ..., sixth
    long long total = 0;
    std::vector<bool> hit(n, false); // 判斷某invoice是否中獎
    for (int i = 0; i < n; i++) {
        std::cin >> invoices[i];
    }

    for (int i = 0; i < n; i++) {
        // special prize
        if (invoices[i] == special) {
            hit[i] = true;
            count[0]++;
            total += 2000000;
            continue;
        }
        // 頭獎
        for (int j = 0; j < 3 && !hit[i]; j++) {
            if (invoices[i] == first[j]) {
                hit[i] = true;
                count[1]++;
                total += 200000;
                break;
            }
        }
    }

    // 2nd, 3rd, ...
    for (int k = 2; k <= (9 - 3); k++) { // k=6 為6獎
        for (int i = 0; i < n; i++) {
            if (hit[i]) continue;
            for (int j = 0; j < 3; j++) {
                if (invoices[i].substr(k - 1) == first[j].substr(k - 1)) {
                    hit[i] = true;
                    count[k]++;
                    switch (k) {
                        case 2:
                            total += 40000;
                            break;
                        case 3:
                            total += 10000;
                            break;
                        case 4:
                            total += 4000;
                            break;
                        case 5:
                            total += 1000;
                            break;
                        case 6:
                            total += 200;
                            break;
                    }
                    break;
                }
            }
        }
    }

    // 輸出各獎項中獎張數
    for (int i = 0; i < 7; i++) {
        std::cout << count[i];
        if (i < 6) std::cout << " ";
    }
    std::cout << "\n" << total << std::endl;

    return 0;
}