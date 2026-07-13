#include <iostream>
using namespace std;

int main() {
    char grade;
    cout << "Enter your grade (A, B, C, D, F): ";
    cin >> grade;

    switch (grade) {
        case 'A': case 'a':
        case 'B': case 'b':
            cout << "Passing: ";
            switch (grade) {
                case 'A': case 'a': cout << "Excellent work!"; break;
                case 'B': case 'b': cout << "Good job!"; break;
            }
            break;
        case 'C': case 'c':
        case 'D': case 'd':
            cout << "Passing: ";
            switch (grade) {
                case 'C': case 'c': cout << "Average effort."; break;
                case 'D': case 'd': cout << "Needs improvement."; break;
            }
            break;
        case 'F': case 'f':
            cout << "Failing: Better luck next time.";
            break;
        default:
            cout << "Invalid grade entered.";
    }
    return 0;
}
