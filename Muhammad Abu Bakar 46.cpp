// 46. Check Age and Salary

#include <iostream>
using namespace std;

int main() {
    int age, salary;
    cin >> age >> salary;

    if (age >= 18) {
        if (salary >= 50000)
            cout << "Eligible";
    }

    return 0;
}