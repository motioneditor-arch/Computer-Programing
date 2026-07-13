#include <iostream>
using namespace std;
int main(){
int length, width;
    cout << "\n. Enter length and width: ";
    cin >> length >> width;
    if (length == width) {
        cout << "It's a square\n";
    } else {
        cout << "It's a rectangle\n";
    }
    return 0;
}