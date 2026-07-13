#include <iostream>
using namespace std;

int main() {
    int category, isWeekend;
    cout << "Enter Category (1: Child, 2: Adult, 3: Senior): ";
    cin >> category;
    cout << "Is it weekend? (1: Yes, 0: No): ";
    cin >> isWeekend;

    if (category >= 1 && category <= 3) {
        if (isWeekend == 1 || isWeekend == 0) {
            if (category == 1) {
                if (isWeekend) cout << "Ticket Price: $8";
                else cout << "Ticket Price: $5";
            } else if (category == 2) {
                if (isWeekend) cout << "Ticket Price: $15";
                else cout << "Ticket Price: $12";
            } else {
                if (isWeekend) cout << "Ticket Price: $10";
                else cout << "Ticket Price: $7";
            }
        } else {
            cout << "Invalid weekend flag!";
        }
    } else {
        cout << "Invalid Category!";
    }
    return 0;
}
