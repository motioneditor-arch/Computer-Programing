#include <iostream>
using namespace std;
int main(){
int wtemp;
    cout << "\n. Enter water temperature: ";
    cin >> wtemp;
    if (wtemp <= 0) {
        cout << "Ice\n";
    } else if (wtemp >= 100) {
        cout << "Gas\n";
    } else {
        cout << "Liquid\n";
    }
    return 0;
}
    