// Example program

#include <iostream>
#include <string>

// Variable section
using namespace std;
int length, width, area;
// Main function
int main() {
    // Output section
    cout << "This program calculates the area of a";
    cout << " rectangle." << endl;

    // Input section
    cout << "What is the length of rectangle?" << endl;
    cin >> length;

    cout << "What is the width of rectangle?" << endl;
    cin >> width;

    // Input validation section
    if (cin.fail() || length <= 0 || width <= 0) {
        cout << "Please enter positive whole numbers." << endl;
        return 0;
    }

    // Process section
    area = length * width;
    // Output section
    cout << "The area of the rectangle is: " << area << " square units." << endl;
    return 0;
}
