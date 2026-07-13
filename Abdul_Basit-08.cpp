#include <iostream>
using namespace std;

int main() {
    int score;
    cout << "Enter score: ";
    cin >> score;

    if (score >= 90) {
        cout << "Grade: A" << endl;
    } else {
        if (score >= 75) {
            cout << "Grade: B" << endl;
        } else {
            cout << "Grade: C" << endl;
        }
    }
    return 0;
}
