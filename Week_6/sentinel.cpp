// Sentinel example - enter sales until -1 is entered
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    // Variable section
    double sale = 0, total = 0;
    int numberOfSales = 0;

    // Input section
    cout << "Enter a sale amount (-1 to stop): ";
    cin >> sale;

    // Process section
    while (sale != -1) {
        if (cin.eof()) return 0;
        // Input validation section
        if (cin.fail() || sale < 0) {
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "Invalid amount. Enter a sale or -1 to stop: ";
        }
        else {
            total += sale;
            numberOfSales++;
            cout << "Enter another sale (-1 to stop): ";
        }
        cin >> sale;
    }

    // Output section
    cout << fixed << setprecision(2);
    cout << "Number of sales: " << numberOfSales << endl;
    cout << "Total sales: $" << total << endl;
    return 0;
}
