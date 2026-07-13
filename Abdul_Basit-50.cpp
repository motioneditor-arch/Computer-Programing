#include <iostream>
using namespace std;

int main() {
    int vehicle, passType;
    cout << "Vehicle (1: Bike, 2: Car, 3: Truck): ";
    cin >> vehicle;
    cout << "Pass (1: Single, 2: Return): ";
    cin >> passType;

    if (vehicle >= 1 && vehicle <= 3) {
        if (passType == 1 || passType == 2) {
            if (vehicle == 1) {
                if (passType == 1) cout << "Toll: $2";
                else cout << "Toll: $3";
            } else if (vehicle == 2) {
                if (passType == 1) cout << "Toll: $5";
                else cout << "Toll: $8";
            } else {
                if (passType == 1) cout << "Toll: $12";
                else cout << "Toll: $20";
            }
        } else {
            cout << "Invalid pass type!";
        }
    } else {
        cout << "Invalid vehicle type!";
    }
    return 0;
}
