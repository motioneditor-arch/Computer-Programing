#include <iostream>
using namespace std;

int main() {
    int speed;
    cout << "Enter speed: ";
    cin >> speed;

    if (speed <= 60) {
        cout << "Normal Speed" << endl;
    } else if (speed <= 80) {
        cout << "Warning: Speeding" << endl;
    } else {
        cout << "Reckless Driving Penalty!" << endl;
    }
    return 0;
}
