#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
// Variable section
int number1, number2;


int main()
{
    // Input section
    cout << "\nEnter a number: ";
    cin >> number1;
    cout << "\nEnter a second number ";
    cin >> number2;

    if (cin.fail()) {
        cout << "Please enter two valid whole numbers." << endl;
        return 0;
    }

    // Input validation section
    if (number2 == 0)
    {
        cout << "The division over "<<number2 << " is undefined!"<< endl;
    }
    else
    {
        cout << "The result of the division is: " << fixed << setprecision(2) << (static_cast<double>(number1) / number2) << endl;
    }

    return 0;
}
