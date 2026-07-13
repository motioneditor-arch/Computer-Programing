// 27. Classify a person's age

#include <iostream>
using namespace std;

int main() {
    int age;
    cin >> age;

    if (age <= 12)
        cout << "Child";
    else if (age <= 19)
        cout << "Teenager";
    else if (age <= 59)
        cout << "Adult";
    else
        cout << "Senior Citizen";

    return 0;
}