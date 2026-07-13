#include <iostream>
using namespace std;
int main(){
string user, pass;
    cout << "\n. Enter username: ";
    cin >> user;
    if (user == "admin") {
        cout << "Enter password: ";
        cin >> pass;
        if (pass == "secure123") {
            cout << "Authentication successful.\n";
        } else {
            cout << "Incorrect password.\n";
        }
    } else {
        cout << "Unknown user.\n";
    }
    return 0;
}
    