#include <iostream>
using namespace std;

int main() {
    int vehicle, passType;
    cout << "Vehicle (1: Bike, 2: Car, 3: Truck): ";
    cin >> vehicle;
    cout << "Pass (1: Single, 2: Return): ";
    cin >> passType;

    switch (vehicle) {
        case 1: // Bike
            switch (passType) {
                case 1:  cout << "Toll: $2"; break;
                case 2:  cout << "Toll: $3"; break;
                default: cout << "Invalid pass type!";
            }
            break;
        case 2: // Car
            switch (passType) {
                case 1:  cout << "Toll: $5"; break;
                case 2:  cout << "Toll: $8"; break;
                default: cout << "Invalid pass type!";
            }
            break;
        case 3: // Truck
            switch (passType) {
                case 1:  cout << "Toll: $12"; break;
                case 2:  cout << "Toll: $20"; break;
                default: cout << "Invalid pass type!";
            }
            break;
        default:
            cout << "Invalid vehicle type!";
    }
    return 0;
}
