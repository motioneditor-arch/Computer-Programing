// 20. Check whether a person is eligible for a driving license

#include <iostream>
using namespace std;

int main() {
    int age;
    cin >> age;

    if (age >= 18)
        cout << "Eligible for Driving License";
    else
        cout << "Not Eligible";

    return 0;
}