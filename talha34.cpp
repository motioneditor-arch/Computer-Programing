#include <iostream>
using namespace std;
int main(){

double balance, amount;
    cout << "\n. Enter account balance and withdrawal amount: ";
    cin >> balance >> amount;
    if (amount > 0) {
        if (balance >= amount) {
            cout << "Item purchased / Cash withdrawn.\n";
        } else {
            cout << "Insufficient funds\n";
        }
    } else {
        cout << "Invalid withdrawal amount.\n";
    }
     return 0;
}