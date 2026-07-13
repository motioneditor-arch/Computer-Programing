#include <iostream>
using namespace std;
int main(){
int speed;
    cout << "\n. Enter speed: ";
    cin >> speed;
    if (speed < 20) {
        cout << "Slow\n";
    } else if (speed <= 60) {
        cout << "Moderate\n";
    } else {
        cout << "Fast\n";
    }
    return 0;
}