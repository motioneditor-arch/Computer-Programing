#include <iostream>

using namespace std;

int main() {
	int num2;
    cout << "\n2. Enter an integer: ";
    cin >> num2;
    if (num2 % 2 == 0) {
        cout << "Even\n";
    } else {
        cout << "Odd\n";
    }
    return 0;
}
    