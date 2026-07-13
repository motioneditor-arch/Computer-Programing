#include <iostream>
using namespace std;
int main(){
int m_days;
    cout << "\n. Enter a month number (1-12): ";
    cin >> m_days;
    switch (m_days) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            cout << "31 days\n";
            break;
        case 4: case 6: case 9: case 11:
            cout << "30 days\n";
            break;
        case 2:
            cout << "28 or 29 days\n";
            break;
        default:
            cout << "Invalid month context\n";
            break;
    }
    return 0;
}
    