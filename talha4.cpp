#include <iostream>

using namespace std;

int main() {
    int age, citizen;
    cout << "Enter age: ";
    cin >> age;
    
    cout << "Are you a citizen? (1 for citizen, 0 for not): ";
    cin >> citizen;
    
    if (age >= 18) {
        if (citizen == 1) {
            cout << "Can Vote\n";
        } else {
            cout << "Must be a citizen to vote.\n";
        }
    } else {
        cout << "Too young to vote.\n";
    }
    
    return 0;
}