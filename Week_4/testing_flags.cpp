#include <iostream>
#include <string>

using namespace std;
// Variable section
bool SalesMetQuota = false;
double SalesAmount;

int main() {
    // Input section
    cout << "Enter the sales amount: ";
    cin >> SalesAmount;

    // Input validation section
    if (cin.fail() || SalesAmount < 0) {
        cout << "Please enter a valid sales amount." << endl;
        return 0;
    }

    // Process section
    if (SalesAmount >= 100000) {
        SalesMetQuota = true;
    } else {
        SalesMetQuota = false;
    }
    // Output section
    if (SalesMetQuota) {
        cout << "Congratulations! You met the sales quota." << endl;
    } else {
        cout << "You did not meet the sales quota." << endl;
    }

    return 0;
}
