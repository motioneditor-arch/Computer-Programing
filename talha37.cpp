#include <iostream>
using namespace std;
int main(){
int height;
    cout << "\n. Enter height in cm: ";
    cin >> height;
    if (height > 150) {
        cout << "You can ride the roller coaster\n";
    } else {
        cout << "Too short\n";
    }
    return 0;
}
    