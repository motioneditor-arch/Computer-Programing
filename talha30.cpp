#include <iostream>
using namespace std;
int main(){
int choice;
    cout << "\n. Menu:\n1. Pizza\n2. Burger\n3. Salad\nEnter selection: ";
    cin >> choice;
    switch (choice) {
        case 1: cout << "You chose Pizza\n"; break;
        case 2: cout << "You chose Burger\n"; break;
        case 3: cout << "You chose Salad\n"; break;
        default: cout << "Invalid Choice\n"; break;
    }
    return 0;
}