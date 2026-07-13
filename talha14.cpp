#include <iostream>

using namespace std;
int main(){
int age;
    int weight;
    cout << "\n. Enter age and weight (kg): ";
    cin >> age >> weight;
    if (age >= 18) {
        if (weight >= 50.0) {
            cout << "Eligible to donate blood.\n";
        } else {
            cout << "Ineligible: Underweight.\n";
        }
    } else {
        cout << "Ineligible: Underage.\n";
    }
    return 0;
}
    