#include <iostream>
using namespace std;

int main() {
    int temp;
    cout << "Enter temperature: ";
    cin >> temp;

    if (temp > 30) {
        cout << "Hot day!" << endl;
    } else {
        if (temp >= 15) {
            cout << "Warm day!" << endl;
        } else {
            cout << "Cold day!" << endl;
        }
    }
    return 0;
}
