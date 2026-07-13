#include <iostream>
using namespace std;

int main() {
    char light;
    int isEmergency;
    cout << "Enter light color (R/Y/G): ";
    cin >> light;
    cout << "Emergency vehicle? (1: Yes, 0: No): ";
    cin >> isEmergency;

    if (isEmergency == 1) {
        cout << "PROCEED WITH CAUTION (Emergency Priority)";
    } else if (isEmergency == 0) {
        if (light == 'R' || light == 'r') {
            cout << "STOP";
        } else if (light == 'Y' || light == 'y') {
            cout << "SLOW DOWN";
        } else if (light == 'G' || light == 'g') {
            cout << "GO";
        } else {
            cout << "Invalid light color!";
        }
    } else {
        cout << "Invalid emergency status!";
    }
    return 0;
}
