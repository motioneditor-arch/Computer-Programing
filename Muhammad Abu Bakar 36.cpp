// 36. Print Fruit Name

#include <iostream>
using namespace std;

int main() {
    int fruit;
    cin >> fruit;

    switch(fruit) {
        case 1: cout << "Apple"; break;
        case 2: cout << "Banana"; break;
        case 3: cout << "Mango"; break;
        case 4: cout << "Orange"; break;
        default: cout << "Invalid";
    }

    return 0;
}