#include <iostream>
using namespace std;
int main(){
int score;
    cout << ". Enter test score (out of 100): ";
    cin >> score;
    if (score >= 50) {
        cout << "Congratulations, you passed!\n";
    }
    return 0;
}