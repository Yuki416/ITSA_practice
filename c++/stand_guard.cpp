#include <iostream>
#include <string>
using namespace std;

int main() {
    int K; // 測資數
    cin >> K;
    for (int i = 0; i < K; i++) {
        int N; // char amount
        cin >> N;
        string str;
        cin >> str;

        int count = 0;
        for (int j = 0; j < N; j++) {
            if (str[j] == '.') { // 遇到空地就安排士兵，並跳過三格（因為士兵能守三格），這樣能保證士兵數最少。
                j += 2;
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}