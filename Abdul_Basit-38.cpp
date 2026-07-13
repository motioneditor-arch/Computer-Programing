#include <iostream>
using namespace std;

int main() {
    int month, year;
    cout << "Enter month (1-12) and year: ";
    cin >> month >> year;

    if (month >= 1 && month <= 12) {
        if (month == 2) {
            if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
                cout << "29 days (Leap Year)";
            } else {
                cout << "28 days";
            }
        } else {
            if (month == 4 || month == 6 || month == 9 || month == 11) {
                cout << "30 days";
            } else {
                cout << "31 days";
            }
        }
    } else {
        cout << "Invalid month!";
    }
    return 0;
}
