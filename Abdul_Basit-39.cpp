#include <iostream>
using namespace std;

int main() {
    int category, isWeekend;
    cout << "Enter Category (1: Child, 2: Adult, 3: Senior): ";
    cin >> category;
    cout << "Is it weekend? (1: Yes, 0: No): ";
    cin >> isWeekend;

    switch (category) {
        case 1: // Child
            switch (isWeekend) {
                case 1:  cout << "Ticket Price: $8"; break;
                case 0:  cout << "Ticket Price: $5"; break;
                default: cout << "Invalid weekend flag!";
            }
            break;
        case 2: // Adult
            switch (isWeekend) {
                case 1:  cout << "Ticket Price: $15"; break;
                case 0:  cout << "Ticket Price: $12"; break;
                default: cout << "Invalid weekend flag!";
            }
            break;
        case 3: // Senior
            switch (isWeekend) {
                case 1:  cout << "Ticket Price: $10"; break;
                case 0:  cout << "Ticket Price: $7"; break;
                default: cout << "Invalid weekend flag!";
            }
            break;
        default:
            cout << "Invalid Category!";
    }
    return 0;
}
