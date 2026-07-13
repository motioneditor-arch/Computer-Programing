#include <iostream>
using namespace std;
int main(){
int age;
    char student;
    cout << "\n. Enter age and student status (Y/N): ";
    cin >> age >> student;
    if (age < 18) {
        cout << "Youth Discount Applied.\n";
        if (student == 'Y' || student == 'y') {
            cout << "Additional Student Discount Applied!\n";
        }
    } else {
        cout << "Regular Rate.\n";
    }
    return 0;
}