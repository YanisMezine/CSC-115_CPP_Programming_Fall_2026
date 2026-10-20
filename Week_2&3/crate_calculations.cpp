// Example program 10

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

// Variable section

int main()
{
    const double COST_PER_CUBIC_FOOT = 0.23;
    const double CHARGE_PER_CUBIC_FOOT = 0.50;
    
    double length, width, height, volume, cost, charge, profit;

    cout << setprecision(2) << fixed << showpoint;

    // Input section
    cout << "Enter the dimensions of the crate (in feet): " << endl;
    cout << "Length: ";
    cin >> length;
    cout << "Width: ";
    cin >> width;
    cout << "Height: ";
    cin >> height;

    // Input validation section
    if (cin.fail() || length <= 0 || width <= 0 || height <= 0) {
        cout << "Crate dimensions must be positive." << endl;
        return 0;
    }

    // Process section
    volume = length * width * height;
    cost = volume * COST_PER_CUBIC_FOOT;
    charge = volume * CHARGE_PER_CUBIC_FOOT;
    profit = charge - cost;

    // Output section
    cout << "The volume of the crate is: " << volume << " cubic feet" << endl;
    cout << "Cost to build: $" << cost << endl;
    cout << "Charge to customer: $" << charge << endl;
    cout << "Profit: $" << profit << endl;

    return 0;
}
