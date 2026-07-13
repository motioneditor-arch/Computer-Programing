#include <iostream>
using namespace std;
int main(){
int x, y;
    cout << "\n. Enter X and Y coordinates: ";
    cin >> x >> y;
    if (x > 0) {
        if (y > 0) cout << "Quadrant 1\n";
        else cout << "Quadrant 4\n";
    } else {
        if (y > 0) cout << "Quadrant 2\n";
        else cout << "Quadrant 3\n";
    }
    return 0;
}
    