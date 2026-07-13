#include <iostream>
using namespace std;

int main() {
    int angle;
    cout << "Enter angle in degrees (0-360): ";
    cin >> angle;

    // Mapping ranges to discrete key identifiers
    int key = (angle == 0 || angle == 90 || angle == 180 || angle == 270 || angle == 360) ? 0 :
              (angle > 0 && angle < 90) ? 1 :
              (angle > 90 && angle < 180) ? 2 :
              (angle > 180 && angle < 270) ? 3 :
              (angle > 270 && angle < 360) ? 4 : -1;

    switch (key) {
        case 0:
            cout << "Axis Angle (On Boundary)";
            break;
        case 1: cout << "Quadrant I"; break;
        case 2: cout << "Quadrant II"; break;
        case 3: cout << "Quadrant III"; break;
        case 4: cout << "Quadrant IV"; break;
        default:
            cout << "Angle outside [0, 360] range!";
    }
    return 0;
}
