// 35. Display Color Name

#include <iostream>
using namespace std;

int main() {
    int color;
    cin >> color;

    switch(color) {
        case 1: cout << "Red"; break;
        case 2: cout << "Green"; break;
        case 3: cout << "Blue"; break;
        default: cout << "Invalid";
    }

    return 0;
}