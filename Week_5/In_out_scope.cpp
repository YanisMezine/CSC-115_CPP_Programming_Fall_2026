#include <iostream>
#include <string>

using namespace std;

// Variable section
const int MIN_VALUE = 10;
int number;

int main() {
    // Input section
    cin >> number;
    // Process section (demonstrates local and outer scope)
    if (number < MIN_VALUE) {
        int number;
        // Input section for the inner number
        cin >> number;
        // Output section
        cout << "Inner number's value: " << number << endl;
    }

    // Output section
    cout << "Outer number's value: " << number << endl;
    return 0;
}
