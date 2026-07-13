// 28. Determine the season based on the month number

#include <iostream>
using namespace std;

int main() {
    int month;
    cin >> month;

    if (month == 12 || month == 1 || month == 2)
        cout << "Winter";
    else if (month >= 3 && month <= 5)
        cout << "Spring";
    else if (month >= 6 && month <= 8)
        cout << "Summer";
    else if (month >= 9 && month <= 11)
        cout << "Autumn";
    else
        cout << "Invalid";
}