#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter three angles: ";
    cin >> a >> b >> c;
    int sum = a + b + c;

    if (sum == 180 && a > 0 && b > 0 && c > 0) { cout << "Valid Triangle" << endl; }
    if (sum != 180) { cout << "Invalid Triangle" << endl; }
    if (sum == 180 && (a <= 0 || b <= 0 || c <= 0)) { cout << "Invalid Triangle" << endl; }
    return 0;
}
