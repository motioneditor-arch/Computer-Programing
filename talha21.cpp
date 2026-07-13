#include <iostream>
using namespace std;
int main(){
int temp;
    cout << ". Enter temperature in Celsius: ";
    cin >> temp;
    if (temp <= 0) {
        cout << "It's freezing outside.\n";
    }
    return 0;
}
    