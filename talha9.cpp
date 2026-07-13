#include <iostream>

using namespace std;

int main() {
int num;
    cout << "\n. Enter a number: ";
    cin >> num;
    if (num % 2 == 0) {
        cout << "The number is even.\n";
        if (num > 100) {
            cout << "It is also greater than 100.\n";
        }
    } else {
        cout << "The number is odd.\n";
    }
    return 0;
}
    