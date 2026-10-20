// Example program 5

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

// Variable section

int main()
{ double day1, day2, day3, total;

    // Input section
    cout << "Enter the sales for day 1: ";
    cin >> day1;
    cout << "Enter the sales for day 2: ";
    cin >> day2;
    cout << "Enter the sales for day 3: ";
    cin >> day3;

    // Input validation section
    if (cin.fail() || day1 < 0 || day2 < 0 || day3 < 0) {
        cout << "Please enter valid sales amounts." << endl;
        return 0;
    }

    // Process section
    total = day1 + day2 + day3;

    // Output section
    cout << "The total sales for the three days is: " << total << endl;

    cout << "\nSales amounts:" << endl;
    cout << "----------" << endl;
    cout << setprecision(2) << fixed;
    cout << "Day 1: $" << setw(8) << day1 << endl;
    cout << "Day 2: $" << setw(8) << day2 << endl;
    cout << "Day 3: $" << setw(8) << day3 << endl;
    cout << "Total: $" << setw(8) << total << endl;

    return 0;
}
