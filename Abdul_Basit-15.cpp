#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    if (a >= b && a >= c) {
        cout << "Largest is " << a << endl;
    } else if (b >= a && b >= c) {
        cout << "Largest is " << b << endl;
    } else {
        cout << "Largest is " << c << endl;
    }
    return 0;
}
