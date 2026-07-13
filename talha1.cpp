#include <iostream>

using namespace std;

int main() {
    // 1. [if] Positive Check
    int num1;
    cout << "1. Enter an integer: ";
    cin >> num1;
    if (num1 > 0) {
        cout << "The number is positive.\n";
    }
    return 0;
}