#include <iostream>
using namespace std;

int main() {
    char grade;
    cout << "Enter your grade (A, B, C, D, F): ";
    cin >> grade;

    if ((grade >= 'A' && grade <= 'D') || (grade >= 'a' && grade <= 'd') || grade == 'F' || grade == 'f') {
        if (grade == 'F' || grade == 'f') {
            cout << "Failing: Better luck next time.";
        } else {
            cout << "Passing: ";
            if (grade == 'A' || grade == 'a') {
                cout << "Excellent work!";
            } else if (grade == 'B' || grade == 'b') {
                cout << "Good job!";
            } else if (grade == 'C' || grade == 'c') {
                cout << "Average effort.";
            } else {
                cout << "Needs improvement.";
            }
        }
    } else {
        cout << "Invalid grade entered.";
    }
    return 0;
}
