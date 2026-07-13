#include <iostream>
using namespace std;

int main() {
    int choice;
    double balance = 1000.0, amount;

    cout << "1. Check Balance\n2. Deposit\n3. Withdraw\nEnter choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Current Balance: $" << balance;
            break;
        case 2:
            cout << "Enter deposit amount: ";
            cin >> amount;
            switch (amount > 0) {
                case true:  cout << "New Balance: $" << balance + amount; break;
                case false: cout << "Invalid deposit amount!"; break;
            }
            break;
        case 3:
            cout << "Enter withdrawal amount: ";
            cin >> amount;
            switch (amount > 0 && amount <= balance) {
                case true:  cout << "New Balance: $" << balance - amount; break;
                case false: cout << "Invalid or insufficient funds!"; break;
            }
            break;
        default:
            cout << "Invalid menu choice!";
    }
    return 0;
}
