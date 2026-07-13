#include <iostream>
using namespace std;
int main(){
int num;
    cout << ". Enter a number: ";
    cin >> num;
    if (num % 2 == 0) {
        cout << "This is an even number.\n";
    }
    return 0;
}