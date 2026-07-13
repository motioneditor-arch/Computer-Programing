// 17. Check whether a number is divisible by 3

#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;

    if (num % 3 == 0)
        cout << "Divisible by 3";
    else
        cout << "Not Divisible by 3";

    return 0;
}