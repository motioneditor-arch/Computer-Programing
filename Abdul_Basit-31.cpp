#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char op;
    cout << "Enter expression (e.g., 5 + 3): ";
    cin >> num1 >> op >> num2;

    switch (op) {
        case '+':
            cout << "Result: " << num1 + num2;
            break;
        case '-':
            cout << "Result: " << num1 - num2;
            break;
        case '*':
            cout << "Result: " << num1 * num2;
            break;
        case '/':
            switch (num2 != 0) { // Nested switch for zero check
                case true:  cout << "Result: " << num1 / num2; break;
                case false: cout << "Error: Division by zero!"; break;
            }
            break;
        default:
            cout << "Error: Invalid operator!";
    }
    return 0;
}
