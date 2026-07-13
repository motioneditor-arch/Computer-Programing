#include <iostream>
using namespace std;

int main() {
    int score;
    cout << "Enter game score: ";
    cin >> score;

    if (score >= 1000) {
        cout << "Tier: Pro" << endl;
    } else if (score >= 500) {
        cout << "Tier: Advanced" << endl;
    } else {
        cout << "Tier: Beginner" << endl;
    }
    return 0;
}
