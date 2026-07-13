#include <iostream>
using namespace std;
int main(){
 int year;
    cout << "\n. Enter a year: ";
    cin >> year;
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                cout << "Leap Year\n";
            } else {
                cout << "Common Year\n";
            }
        } else {
            cout << "Leap Year\n";
        }
    } else {
        cout << "Common Year\n";
    }
    return 0;
}
    