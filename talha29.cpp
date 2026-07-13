#include <iostream>
using namespace std;
int main(){
int degree, exp;
    cout << "\n. Do you have a degree? (1=Yes, 0=No): ";
    cin >> degree;
    if (degree == 1) {
        cout << "Enter years of experience: ";
        cin >> exp;
        if (exp > 2) {
            cout << "Hired\n";
        } else {
            cout << "Position requires more experience.\n";
        }
    } else {
        cout << "Position requires a degree.\n";
    }
    return 0;
}