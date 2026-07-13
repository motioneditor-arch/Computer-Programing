#include <iostream>

using namespace std;
int main(){
int temp ;
    cout << "\n. Enter temperature in Celsius: ";
    cin >> temp;
    if (temp > 30) {
        cout << "Hot Day\n";
    } else {
        cout << "Pleasant Day\n";
    }
    return 0;
}
    