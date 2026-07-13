#include <iostream>
using namespace std;
int main(){
 double price, cash;
    cout << "\n47. Enter item price and your cash balance: ";
    cin >> price >> cash;
    if (cash >= price) {
        cout << "Item purchased\n";
    } else {
        cout << "Insufficient funds\n";
    }
    return 0;
}
    