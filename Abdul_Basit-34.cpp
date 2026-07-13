#include <iostream>
using namespace std;

int main() {
    int day;
    cout << "Enter day number (1-7): ";
    cin >> day;

    if (day >= 1 && day <= 7) {
        if (day <= 5) {
            cout << "Weekday: ";
            if (day == 1) cout << "Monday";
            else if (day == 2) cout << "Tuesday";
            else if (day == 3) cout << "Wednesday";
            else if (day == 4) cout << "Thursday";
            else cout << "Friday";
        } else {
            cout << "Weekend: ";
            if (day == 6) cout << "Saturday";
            else cout << "Sunday";
        }
    } else {
        cout << "Invalid day number!";
    }
    return 0;
}
