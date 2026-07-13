#include <iostream>
using namespace std;
int main(){
int speed;
    cout << ". Enter your driving speed: ";
    cin >> speed;
    if (speed > 65) {
        cout << "Slow down! Speed limit exceeded.\n";
    }
    return 0;
}
    