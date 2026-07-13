// 38. ATM Menu

#include <iostream>
using namespace std;

int main() {
    int choice;
    cin >> choice;

    switch(choice) {
        case 1: cout << "Balance"; break;
        case 2: cout << "Deposit"; break;
        case 3: cout << "Withdraw"; break;
        case 4: cout << "Exit"; break;
        default: cout << "Invalid Choice";
    }

    return 0;
}