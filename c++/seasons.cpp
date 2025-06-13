#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int month;
    cin >> month;

    vector<vector<int>> seasons = {{12, 1, 2}, {3, 4, 5}, {6, 7, 8}, {9, 10, 11}};
    vector<string> season_names = {"Winter", "Spring", "Summer", "Autumn"};

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            if (seasons[i][j] == month) {
                cout << season_names[i] << endl;
            }
        }
    }

    return 0;
}