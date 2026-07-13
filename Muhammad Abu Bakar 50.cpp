// 50. Login System

#include <iostream>
using namespace std;

int main() {
    int user, pass;
    cin >> user >> pass;

    if (user == 1234) {
        if (pass == 5678)
            cout << "Login Successful";
    }

    return 0;
}