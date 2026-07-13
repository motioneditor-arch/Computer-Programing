#include <iostream>
using namespace std;
int main(){
int A, B, C;
    cout << "\n. Enter three numbers: ";
    cin >> A >> B >> C;
    if (A >= B) {
        if (A >= C) {
            cout << A << " is the largest.\n";
        } else {
            cout << C << " is the largest.\n";
        }
    } else {
        if (B >= C) {
            cout << B << " is the largest.\n";
        } else {
            cout << C << " is the largest.\n";
        }
    }
    return 0;
}
    