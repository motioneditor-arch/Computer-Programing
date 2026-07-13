#include <iostream>
using namespace std;
int main(){
char grade;
    cout << "\n. Enter grade letter (A, B, C, D, F): ";
    cin >> grade;
    switch (grade) {
        case 'A': case 'a': cout << "Excellent\n"; break;
        case 'B': case 'b':
        case 'C': case 'c': cout << "Good\n"; break;
        case 'D': case 'd': cout << "Poor\n"; break;
        case 'F': case 'f': cout << "Fail\n"; break;
        default: cout << "Invalid Grade\n"; break;
    }
    return 0;
}