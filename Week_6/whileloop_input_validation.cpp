#include <iostream>
#include <string>

using namespace std;
// Variable section
double gas_price;

int main() {

    // Input section
    cout << "Enter the gas price: ";
    cin >> gas_price;

    // Input validation section
    while(cin.fail() || gas_price < 0 || gas_price > 5) {
        if (cin.eof()) return 0;
        cin.clear();
        cin.ignore(10000, '\n');
        
        cout << "This is unacceptable. Please enter a gas price from 0 to 5: ";
        cin >> gas_price;
    }

    // Output section
    cout << "The gas price is acceptable, the price is : " << gas_price << endl;

return 0;
}
