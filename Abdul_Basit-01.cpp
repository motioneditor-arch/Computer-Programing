#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    if (num > 0) {
        cout << "The number is positive." << endl;
    }
    if (num < 0) {
        cout << "The number is negative." << endl;
    }
    if (num == 0) {
        cout << "The number is zero." << endl;
    }
    return 0;
}
