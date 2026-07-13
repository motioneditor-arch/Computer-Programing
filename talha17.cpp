#include <iostream>

using namespace std;
int main(){
int valA, valB;
    cout << "\n. Enter two numbers: ";
    cin >> valA >> valB;
    if (valA > valB) {
        cout << valA << " is larger.\n";
    } else {
        cout << valB << " is larger.\n";
    }
    return 0;
}
    