#include <iostream>
using namespace std;
int main(){
int s1, s2, s3;
    cout << "\n. Enter 3 sides of a triangle: ";
    cin >> s1 >> s2 >> s3;
    if (s1 == s2 && s2 == s3) {
        cout << "Equilateral\n";
    } else if (s1 == s2 || s2 == s3 || s1 == s3) {
        cout << "Isosceles\n";
    } else {
        cout << "Scalene\n";
    }
    return 0;
}