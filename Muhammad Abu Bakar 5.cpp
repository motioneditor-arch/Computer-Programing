// 5. Check if a character is an uppercase letter

#include <iostream>
using namespace std;

int main() {
    char ch;
    cin >> ch;

    if (ch >= 'A' && ch <= 'Z') {
        cout << "Uppercase Letter";
    }

    return 0;
}