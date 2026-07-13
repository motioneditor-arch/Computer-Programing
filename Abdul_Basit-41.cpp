#include <iostream>
using namespace std;

int main() {
    char light;
    int isEmergency;
    cout << "Enter light color (R/Y/G): ";
    cin >> light;
    cout << "Emergency vehicle? (1: Yes, 0: No): ";
    cin >> isEmergency;

    switch (isEmergency) {
        case 1:
            cout << "PROCEED WITH CAUTION (Emergency Priority)";
            break;
        case 0:
            switch (light) {
                case 'R': case 'r': cout << "STOP"; break;
                case 'Y': case 'y': cout << "SLOW DOWN"; break;
                case 'G': case 'g': cout << "GO"; break;
                default: cout << "Invalid light color!";
            }
            break;
        default:
            cout << "Invalid emergency status!";
    }
    return 0;
}
