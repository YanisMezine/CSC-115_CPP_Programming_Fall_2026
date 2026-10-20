// Libraries
#include <iostream>
#include <string>

// Variable section
using namespace std;
int x, y, a;
bool result1, result2, result3, result4;

// Main function
int main() {
    // Input section
    cout << "Enter the value of x: ";
    cin >> x;
    cout << "\nEnter the value of y: ";
    cin >> y;
    cout << "\nEnter the value of a: ";
    cin >> a;

    // Input validation section
    if (cin.fail()) {
        cout << "Please enter valid whole numbers." << endl;
        return 0;
    }

    // Process section
    result1 = (x<y);
    result2 = (x>y);
    result3 = (a==4);
    result4 = (a==5);
    
    // Output section
    cout << "The value of result1 is: " << result1 << endl;
    cout << "The value of result2 is: " << result2 << endl;
    cout << "The value of result3 is: " << result3 << endl;
    cout << "The value of result4 is: " << result4 << endl;
    return 0;
}
