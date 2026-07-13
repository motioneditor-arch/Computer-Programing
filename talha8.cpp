#include <iostream>

using namespace std;

int main() {
int score;
    cout << "\n. Enter score (0-100): ";
    cin >> score;
    if (score >= 90) {
        cout << "A\n";
    } else if (score >= 80) {
        cout << "B\n";
    } else if (score >= 70) {
        cout << "C\n";
    } else {
        cout << "F\n";
    }
    return 0;
}
    