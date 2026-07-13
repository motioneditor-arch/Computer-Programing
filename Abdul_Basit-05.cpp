#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;

    if (age <= 19) {
        if (age <= 12) {
            cout << "Child" << endl;
        } else {
            cout << "Teenager" << endl;
        }
    } else {
        cout << "Adult" << endl;
    }
    return 0;
}
