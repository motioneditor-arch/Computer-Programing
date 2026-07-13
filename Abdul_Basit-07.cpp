#include <iostream>
using namespace std;

int main() {
    int score;
    cout << "Enter score (0-100): ";
    cin >> score;

    if (score >= 90) { cout << "Grade: A" << endl; }
    if (score >= 75 && score < 90) { cout << "Grade: B" << endl; }
    if (score < 75) { cout << "Grade: C" << endl; }
    return 0;
}
