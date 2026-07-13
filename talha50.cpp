#include <iostream>
using namespace std;
int main(){
 int err;
    cout << "\n. Enter a response error status (0, 404, 500): ";
    cin >> err;
    switch (err) {
        case 0: cout << "Success\n"; break;
        case 404: cout << "Not Found\n"; break;
        case 500: cout << "Server Error\n"; break;
        default: cout << "Unhandled status code\n"; break;
    }
    return 0;
}
    