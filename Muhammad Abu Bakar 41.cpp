// 41. Check Positive and Even

#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;

    if (num > 0) {
        if (num % 2 == 0) {
            cout << "Positive Even Number";
        }
    }

    return 0;
}