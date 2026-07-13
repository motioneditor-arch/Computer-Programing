// 26. Calculate discount

#include <iostream>
using namespace std;

int main() {
    int amount;
    cin >> amount;

    if (amount >= 5000)
        cout << "20% Discount";
    else if (amount >= 3000)
        cout << "10% Discount";
    else if (amount >= 1000)
        cout << "5% Discount";
    else
        cout << "No Discount";

    return 0;
}