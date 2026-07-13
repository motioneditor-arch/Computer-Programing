#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter three angles: ";
    cin >> a >> b >> c;

    if (a + b + c != 180) {
        cout << "Invalid Triangle" << endl;
    } else if (a <= 0 || b <= 0 || c <= 0) {
        cout << "Invalid Triangle" << endl;
    } else {
        cout << "Valid Triangle" << endl;
    }
    return 0;
}
