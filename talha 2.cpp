#include <iostream>

using namespace std;

int main() {
int score;
    cout << "\n. Enter exam score: ";
    cin >> score;
    if (score >= 50) {
        cout << "Pass\n";
    } else {
        cout << "Fail\n";
    }
    return 0;
}
    