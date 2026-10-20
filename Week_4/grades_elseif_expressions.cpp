#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
// Variable section
int testScore;


int main(){
    // Input section
    cout << "Enter your test score: ";
    cin >> testScore;

    // Input validation section
    if (cin.fail() || testScore < 0 || testScore > 100) {
        cout << "Invalid score. Please enter a score from 0 to 100." << endl;
        return 0;
    }

    // Process and output section
if ((testScore >= 90)&&(testScore <= 100)) {
        cout << "You received an A." << endl;
}
else if ((testScore >= 80)&&(testScore < 90)) {
        cout << "You received a B." << endl;
}
else if ((testScore >= 70)&&(testScore < 80)) {
        cout << "You received a C." << endl;
}
else if ((testScore >= 60)&&(testScore < 70)) {
        cout << "You received a D." << endl;
}
else {
        cout << "You received an F." << endl;
}
return 0;
}
