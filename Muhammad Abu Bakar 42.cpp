// 42. Check Eligible for Vote and CNIC

#include <iostream>
using namespace std;

int main() {
    int age, cnic;
    cin >> age >> cnic;

    if (age >= 18) {
        if (cnic == 1)
            cout << "Eligible";
    }

    return 0;
}