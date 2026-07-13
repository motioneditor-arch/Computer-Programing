// 45. Check Divisible by 2 and 5

#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;

    if (num % 2 == 0) {
        if (num % 5 == 0)
            cout << "Divisible by 2 and 5";
    }

    return 0;
}