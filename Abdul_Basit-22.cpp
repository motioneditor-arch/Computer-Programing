#include <iostream>
using namespace std;

int main() {
    double bill;
    cout << "Enter total bill amount: ";
    cin >> bill;

    if (bill >= 100) { cout << "Discounted Price: $" << bill * 0.90 << endl; }
    if (bill >= 50 && bill < 100) { cout << "Discounted Price: $" << bill * 0.95 << endl; }
    if (bill < 50) { cout << "Discounted Price: $" << bill << endl; }
    return 0;
}
