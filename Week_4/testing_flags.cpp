#include <iostream>
#include <string>

using namespace std;
bool SalesMetQuota = false;
double SalesAmount;

int main() {
    cout << "Enter the sales amount: ";
    cin >> SalesAmount;

    if (SalesAmount > 100000) {
        SalesMetQuota = true;
    } else {
        SalesMetQuota = false;
    }
    if (SalesMetQuota) {
        cout << "Congratulations! You met the sales quota." << endl;
    } else {
        cout << "You did not meet the sales quota." << endl;
    }

    return 0;
}