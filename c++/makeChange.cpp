#include <iostream>
#include <vector>
using namespace std;

void makeChange(int balance) {
    vector<int> charge = {1, 5, 50};
    vector<int> count(3, 0);

    for (int i = 2; i >= 0; i--) {
        if (balance >= charge[i]) {
            count[i] = balance / charge[i];
            balance = balance % charge[i];
        }
    }

    for (int i = 0; i < 3; i++) {
        if (i != 2) {
            cout << count[i] << ",";
        } else {
            cout << count[i] << endl;
        }
    }
}

int main() {
    int N; // money
    cin >> N;
    vector<int> price = {15, 20, 30}; // item's price
    vector<int> amount(3, 0);

    // input
    char comma;
    for (int i = 0; i < 3; i++) {
        cin >> comma >> amount[i];
    }

    int cost = 0;
    for (int i = 0; i < 3; i++) {
        cost += price[i] * amount[i];
    }

    // if enough
    if (N >= cost) {
        makeChange(N - cost);
    } else {
        cout << 0 << endl;
    }

    return 0;
}