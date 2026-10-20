#include <iostream>
#include <string>

using namespace std;
// Variable section
int grade;

int main() {

    // Input section
    cout << "Enter your grade: ";
    cin >> grade;

    // Input validation section
    while(cin.fail() || grade < 0 || grade > 100) {
        if (cin.eof()) return 0;
        cin.clear();
        cin.ignore(10000, '\n');
        
        cout << "Invalid grade. Please enter a value from 0 to 100: ";
        cin >> grade;
    }

    // Output section
    cout << "Your grade is: " << grade << endl;

return 0;
}
