#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

// Variable section
int days;
double sales, total = 0;

int main() {
    // Input section
    cout << "How many days have you made sales? "<<endl;
    cin >> days;

    // Input validation section
    while (cin.fail() || days <= 0) {
        if (cin.eof()) return 0;
        cin.clear();
        cin.ignore(10000, '\n');
        cout << "Please enter a positive number of days: ";
        cin >> days;
    }

    // Process section
    for(int count=1; count<=days; count++) {
        cout << "Enter the sales for day " << count << " : ";
        cin >> sales;

        // Input validation section
        while (cin.fail() || sales < 0) {
            if (cin.eof()) return 0;
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "Please enter a valid sales amount: ";
            cin >> sales;
        }
        total += sales;
    }
    // Output section
    cout << "The total sales for the " << days << " days is: $" << fixed << setprecision(2) << total << endl;
    return 0;
}
