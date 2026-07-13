#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char op;
    cout << "Enter expression (e.g., 5 + 3): ";
    cin >> num1 >> op >> num2;

    if (op == '+' || op == '-' || op == '*' || op == '/') {
        if (op == '+') {
            cout << "Result: " << num1 + num2;
        } else if (op == '-') {
            cout << "Result: " << num1 - num2;
        } else if (op == '*') {
            cout << "Result: " << num1 * num2;
        } else {
            if (num2 != 0) {
                cout << "Result: " << num1 / num2;
            } else {
                cout << "Error: Division by zero!";
            }
        }
    } else {
        cout << "Error: Invalid operator!";
    }
    return 0;
}
