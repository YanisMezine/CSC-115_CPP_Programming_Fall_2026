#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
// Variable section
int number;

int main()
{
    // Input section
    cout << "Enter a number: ";
    cin >> number;

    // Input validation section
    if (cin.fail()) {
        cout << "Please enter a valid whole number." << endl;
        return 0;
    }

    // Process and output section
    if (number % 2 == 0)
    {
        cout << number << " is an even number." << endl;
    }
    else
    {
        cout << number << " is an odd number." << endl;
    }

    return 0;
}
