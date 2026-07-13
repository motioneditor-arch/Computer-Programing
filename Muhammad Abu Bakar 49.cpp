// 49. Check Marks and Attendance

#include <iostream>
using namespace std;

int main() {
    int marks, attendance;
    cin >> marks >> attendance;

    if (marks >= 50) {
        if (attendance >= 75)
            cout << "Eligible for Exam";
    }

    return 0;
}