#include <iostream>
using namespace std;

int main() {
    int shapeChoice;
    cout << "1. Circle\n2. Rectangle\nSelect shape: ";
    cin >> shapeChoice;

    if (shapeChoice == 1 || shapeChoice == 2) {
        if (shapeChoice == 1) {
            double r;
            cout << "Enter radius: ";
            cin >> r;
            if (r > 0) {
                cout << "Area: " << 3.14159 * r * r;
            } else {
                cout << "Invalid radius!";
            }
        } else {
            double l, w;
            cout << "Enter length and width: ";
            cin >> l >> w;
            if (l > 0) {
                if (w > 0) {
                    cout << "Area: " << l * w;
                } else {
                    cout << "Width must be positive!";
                }
            } else {
                cout << "Length must be positive!";
            }
        }
    } else {
        cout << "Invalid selection!";
    }
    return 0;
}
