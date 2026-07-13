// 11. Check whether a number is even or odd

#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;

    if (num % 2 == 0)
        cout << "Even";
    else
        cout << "Odd";

    return 0;
}