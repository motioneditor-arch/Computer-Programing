#include <iostream>
using namespace std;

int main() {
    int angle;
    cout << "Enter angle in degrees (0-360): ";
    cin >> angle;

    if (angle >= 0 && angle <= 360) {
        if (angle == 0 || angle == 90 || angle == 180 || angle == 270 || angle == 360) {
            cout << "Axis Angle (On Boundary)";
        } else {
            if (angle > 0 && angle < 90) {
                cout << "Quadrant I";
            } else if (angle > 90 && angle < 180) {
                cout << "Quadrant II";
            } else if (angle > 180 && angle < 270) {
                cout << "Quadrant III";
            } else {
                cout << "Quadrant IV";
            }
        }
    } else {
        cout << "Angle outside [0, 360] range!";
    }
    return 0;
}
