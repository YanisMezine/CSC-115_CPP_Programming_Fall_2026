#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
int number;

int main()
{
    cout << "Enter a number: ";
    cin >> number;

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
