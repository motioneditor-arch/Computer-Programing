// 39. Print Subject Name

#include <iostream>
using namespace std;

int main() {
    int subject;
    cin >> subject;

    switch(subject) {
        case 1: cout << "Math"; break;
        case 2: cout << "Physics"; break;
        case 3: cout << "Chemistry"; break;
        case 4: cout << "Computer"; break;
        default: cout << "Invalid";
    }

    return 0;
}