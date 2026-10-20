#include <iostream>
#include <string>

using namespace std;

// Variable section
char choice;
int a,b;

// Main function
int main() {
        // Input section
        cout << "========================== Welcome to Basic Calculator Menu ==========================" << endl;
        cout << "Please pick one number (1, 2, 3) from the following menu:" << endl;
        cout << "1. Type (1) to Add Number." << endl;
        cout << "2. Type (2) to Subtract Numbers." << endl;
        cout << "3. Type (3) to Quit." << endl;
        cout << "======================================================================================" << endl;
        cin >> choice;

        // Process and input validation section
        switch(choice) {
            case '1':
                cout << "You chose to add numbers." << endl;
                cout << "Enter a value for a: ";
                cin >> a;
                cout << "Enter a value for b: ";
                cin >> b;
                // Input validation section
                if (cin.fail()) {
                    cout << "Please enter two valid whole numbers." << endl;
                    return 0;
                }
                // Output section
                cout << "Result: " << a + b << endl;
                break;
            case '2':
                cout << "You chose to subtract numbers." << endl;
                cout << "Enter a value for a: ";
                cin >> a;
                cout << "Enter a value for b: ";
                cin >> b;
                // Input validation section
                if (cin.fail()) {
                    cout << "Please enter two valid whole numbers." << endl;
                    return 0;
                }
                // Output section
                cout << "Result: " << a - b << endl;
                break;
            case '3':
                cout << "Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
return 0;
}
