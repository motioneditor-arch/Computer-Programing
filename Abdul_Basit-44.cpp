#include <iostream>
using namespace std;

int main() {
    int choice;
    double balance = 1000.0, amount;

    cout << "1. Check Balance\n2. Deposit\n3. Withdraw\nEnter choice: ";
    cin >> choice;

    if (choice >= 1 && choice <= 3) {
        if (choice == 1) {
            cout << "Current Balance: $" << balance;
        } else if (choice == 2) {
            cout << "Enter deposit amount: ";
            cin >> amount;
            if (amount > 0) {
                cout << "New Balance: $" << balance + amount;
            } else {
                cout << "Invalid deposit amount!";
            }
        } else {
            cout << "Enter withdrawal amount: ";
            cin >> amount;
            if (amount > 0) {
                if (amount <= balance) {
                    cout << "New Balance: $" << balance - amount;
                } else {
                    cout << "Insufficient funds!";
                }
            } else {
                cout << "Invalid withdrawal amount!";
            }
        }
    } else {
        cout << "Invalid menu choice!";
    }
    return 0;
}
