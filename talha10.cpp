#include <iostream>

using namespace std;
int main(){

double n1, n2;
    char op;
    cout << "\n10. Enter calculation (e.g., 5 + 3): ";
    cin >> n1 >> op >> n2;
    switch (op) {
        case '+': cout << "Result: " << (n1 + n2) << "\n"; break;
        case '-': cout << "Result: " << (n1 - n2) << "\n"; break;
        case '*': cout << "Result: " << (n1 * n2) << "\n"; break;
        case '/': 
            if (n2 != 0) cout << "Result: " << (n1 / n2) << "\n";
            else cout << "Error: Division by zero\n";
            break;
        default: cout << "Invalid operator\n"; break;
    }
    return 0;
}
    