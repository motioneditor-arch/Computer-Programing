// 29. Classify a student's result

#include <iostream>
using namespace std;

int main() {
    int marks;
    cin >> marks;

    if (marks >= 80)
        cout << "Distinction";
    else if (marks >= 60)
        cout << "First Division";
    else if (marks >= 40)
        cout << "Pass";
    else
        cout << "Fail";

    return 0;
}