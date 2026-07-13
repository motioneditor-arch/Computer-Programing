#include <iostream>
using namespace std;
int main(){
int coin;
    cout << "\n. Enter coin amount (1, 5, 10, 25): ";
    cin >> coin;
    if (coin == 1) {
        cout << "Penny\n";
    } else if (coin == 5) {
        cout << "Nickel\n";
    } else if (coin == 10) {
        cout << "Dime\n";
    } else if (coin == 25) {
        cout << "Quarter\n";
    } else {
        cout << "Unknown\n";
    }
    return 0;
}
    