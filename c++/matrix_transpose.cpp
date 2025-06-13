#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m; // row, col of original matrix
    cin >> n >> m;

    // initialize transpose matrix m*n
    vector<vector<int>> arr(m, vector<int>(n));

    for (int i = 0; i < n; i++) { // 按照original matrix 的順序讀入
        for (int j = 0; j < m; j++) {
            int entry;
            cin >> entry;
            arr[j][i] = entry; // 一開始就存到transpose matrix 的位置
        }
    }

    // output transpose matrix
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j];
            if (j != n - 1) { // 最後一行不用空格
                cout << " ";
            }
        }
        cout << endl;
    }
}