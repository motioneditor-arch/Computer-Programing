#include <iostream>
using namespace std;
int main(){
int year;
    cout << "\n. Enter a year: ";
    cin >> year;
    if (year % 4 == 0) {
        cout << "Potential Leap Year\n";
    } else {
        cout << "Common Year\n";
    }
    return 0;
}
    