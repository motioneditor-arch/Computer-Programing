#include <iostream>
using namespace std;

int main() {
    int shapeChoice;
    cout << "1. Circle\n2. Rectangle\nSelect shape: ";
    cin >> shapeChoice;

    switch (shapeChoice) {
        case 1: {
            double r;
            cout << "Enter radius: ";
            cin >> r;
            switch (r > 0) {
                case true:  cout << "Area: " << 3.14159 * r * r; break;
                case false: cout << "Invalid radius!"; break;
            }
            break;
        }
        case 2: {
            double l, w;
            cout << "Enter length and width: ";
            cin >> l >> w;
            switch (l > 0 && w > 0) {
                case true:  cout << "Area: " << l * w; break;
                case false: cout << "Dimensions must be positive!"; break;
            }
            break;
        }
        default:
            cout << "Invalid selection!";
    }
    return 0;
}
