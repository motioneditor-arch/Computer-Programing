// 9. Check if a password length is at least 8 characters

#include <iostream>
using namespace std;

int main() {
    int length;
    cin >> length;

    if (length >= 8) {
        cout << "Valid Password Length";
    }

    return 0;
}