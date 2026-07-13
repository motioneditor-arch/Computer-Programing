#include <iostream>
#include <string>
using namespace std;
int main(){
string light;
    cout << "\n18. Enter light color (Red/Yellow/Green): ";
    cin >> light;
    if (light == "Red" || light == "red") {
        cout << "Stop\n";
    } else if (light == "Yellow" || light == "yellow") {
        cout << "Caution\n";
    } else if (light == "Green" || light == "green") {
        cout << "Go\n";
    } else {
        cout << "Invalid Light\n";
    }
    return 0;
}
    