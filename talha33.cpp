#include <iostream>
using namespace std;
int main(){

double bmi;
    cout << "\n. Enter BMI value: ";
    cin >> bmi;
    if (bmi < 18.5) {
        cout << "Underweight\n";
    } else if (bmi <= 24.9) {
        cout << "Normal\n";
    } else {
        cout << "Overweight\n";
    }    return 0;
}