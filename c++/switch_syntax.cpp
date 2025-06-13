#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;

    switch(num){
        case 1:
            cout << "Person" << endl;
            break;
        case 2:
            cout << "Fairy" << endl;
            break;
        case 3:
            cout << "Dwarf" << endl;
            break;
        default:
            break;  
    }

    return 0;
}