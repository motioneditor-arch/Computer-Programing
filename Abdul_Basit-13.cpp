#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    if (a >= b && a >= c) { cout << "Largest is " << a << endl; }
    if (b > a && b >= c) { cout << "Largest is " << b << endl; }
    if (c > a && c > b) { cout << "Largest is " << c << endl; }
    return 0;
}
