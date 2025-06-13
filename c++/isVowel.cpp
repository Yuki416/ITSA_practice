#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char ch;
    cin >> ch;
    ch = tolower(ch);

    char vowels[] = {'a', 'e', 'i', 'o', 'u'};
    bool isVowel = false;
    for (int i = 0; i < 5; i++) {
        if (ch == vowels[i]) {
            isVowel = true;
            break;
        }
    }

    if (isVowel)
        cout << "母音" << endl;
    else
        cout << "子音" << endl;

    return 0;
}