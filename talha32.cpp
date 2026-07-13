#include <iostream>
#include<string>
using namespace std;
int main(){
string username;
    cout << "\n. Enter username: ";
    cin >> username;
    if (username == "admin") {
        cout << "Welcome Admin\n";
    } else {
        cout << "Welcome Guest\n";
    }
    return 0;
}