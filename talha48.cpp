#include <iostream>
using namespace std;
int main(){
 int gscore;
    cout << "\n48. Enter game score: ";
    cin >> gscore;
    if (gscore == 0) {
        cout << "Noob\n";
    } else if (gscore <= 1000) {
        cout << "Amateur\n";
    } else if (gscore <= 5000) {
        cout << "Pro\n";
    } else {
        cout << "Legend\n";
    }
    return 0;
}
    