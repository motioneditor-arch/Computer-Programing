#include <iostream>

using namespace std;
int main(){
int age;
    cout << "\n. Enter your age: ";
    cin >> age;
    if (age < 12) {
        cout << "Child\n";
    } else if (age <= 19) {
        cout << "Teenager\n";
    } else if (age <= 64) {
        cout << "Adult\n";
    } else {
        cout << "Senior\n";
    }
    return 0;
}
    