#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    // Variable section
    int x;

    // Input section
    cout << "Enter a number: ";
    cin >> x;

    // Input validation section
    if (cin.fail()) {
        cout << "Please enter a valid whole number." << endl;
        return 0;
    }

    // Process and output section
    if (x >= 20 && x <= 40)
    {
        cout << x <<" is in the acceptable range" << endl;
    }
    else
    {
        cout << x << " is not in the acceptable range" << endl;
    }
    return 0;
}
