#include <iostream>

using namespace std;
int main(){
int total;
    cout << ". Enter your shopping total: $";
    cin >> total;
    if (total > 100) {
        cout << "You qualify for a discount!\n";
    }
    return 0;
}
    