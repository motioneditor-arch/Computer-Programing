#include <iostream>
using namespace std;
int main(){

char tier;
    cout << "\n. Enter vehicle tier rating (S, A, B): ";
    cin >> tier;
    switch (tier) {
        case 'S': case 's': cout << "S = Supercar\n"; break;
        case 'A': case 'a': cout << "A = Sports car\n"; break;
        case 'B': case 'b': cout << "B = Stock car\n"; break;
        default: cout << "Unknown Class\n"; break;
        return 0;

}
}