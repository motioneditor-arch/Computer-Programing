#include <iostream>
using namespace std;

int main() {
    int temp;
    cout << "Enter temperature in Celsius: ";
    cin >> temp;

    if (temp > 30) { cout << "Hot day!" << endl; }
    if (temp >= 15 && temp <= 30) { cout << "Warm day!" << endl; }
    if (temp < 15) { cout << "Cold day!" << endl; }
    return 0;
}
