// 47. Check Number Between 100 and 200

#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;

    if (num > 100) {
        if (num < 200)
            cout << "Between 100 and 200";
    }

    return 0;
}