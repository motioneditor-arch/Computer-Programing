#include <iostream>
using namespace std;
int main(){
char dir;
    cout << "\n. Enter heading character (N, S, E, W): ";
    cin >> dir;
    switch (dir) {
        case 'N': case 'n': cout << "North\n"; break;
        case 'S': case 's': cout << "South\n"; break;
        case 'E': case 'e': cout << "East\n"; break;
        case 'W': case 'w': cout << "West\n"; break;
        default: cout << "Lost\n"; break;
    }
    return 0;
}
    