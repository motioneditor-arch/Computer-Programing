#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;

    if (age >= 0 && age <= 12) {
        cout << "Child" << endl;
    }
    if (age >= 13 && age <= 19) {
        cout << "Teenager" << endl;
    }
    if (age >= 20) {
        cout << "Adult" << endl;
    }
    return 0;
}
