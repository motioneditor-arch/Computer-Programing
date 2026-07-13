#include <iostream>
using namespace std;

int main() {
    double bmi;
    cout << "Enter your BMI value: ";
    cin >> bmi;

    if (bmi < 18.5) {
        cout << "Underweight" << endl;
    } else {
        if (bmi <= 24.9) {
            cout << "Normal weight" << endl;
        } else {
            cout << "Overweight" << endl;
        }
    }
    return 0;
}
