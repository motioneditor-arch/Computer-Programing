#include <iostream>
using namespace std;

int main() {
    int speed;
    cout << "Enter speed: ";
    cin >> speed;

    if (speed <= 60) { cout << "Normal Speed" << endl; }
    if (speed > 60 && speed <= 80) { cout << "Warning: Speeding" << endl; }
    if (speed > 80) { cout << "Reckless Driving Penalty!" << endl; }
    return 0;
}
