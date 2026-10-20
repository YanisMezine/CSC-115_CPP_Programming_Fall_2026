//Example program 9

#include <iostream>
#include <string>

using namespace std;

// Variable section

int main()
{
    double num1, num2, num3, avg;
    // Input section
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    cout << "Enter the third number: ";
    cin >> num3;

    // Input validation section
    if (cin.fail()) {
        cout << "Please enter three valid numbers." << endl;
        return 0;
    }

    // Process section
    avg = (num1 + num2 + num3) / 3.0;

    // Output section
    cout << "The average is: " << avg << endl;

    return 0;
}
