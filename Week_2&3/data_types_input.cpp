// Example program 2

#include <iostream>
#include <string>  

// Variable section
using namespace std;

int whole;
double fractional;
char letter;

// Main function

int main() {
    // Input section
    cout << "Insert all of your data"<< endl;
    cin >> whole >> fractional >> letter;

    // Input validation section
    if (cin.fail()) {
        cout << "Please enter a whole number, a decimal number, and a letter." << endl;
        return 0;
    }

    // Output section
    cout << "You entered the whole number: " << whole << endl;
    cout << "You entered the fractional number: " << fractional << endl;
    cout << "You entered the letter: " << letter << endl;

    return 0;
}
