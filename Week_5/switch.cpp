#include <iostream>
#include <string>
#include <cctype>

using namespace std;

// Variable section
char choice;

// Main function
int main() {
        // Input section
        cout << "============================== Welcome to Alphabet Menu ==============================" << endl;
        cout << "Please pick one letter (A, B, C) from the following menu:" << endl;
        cout << "1. Type (A) to choose A benefits" << endl;
        cout << "2. Type (B) to choose B benefits" << endl;
        cout << "3. Type (C) to choose C benefits" << endl;
        cout << "======================================================================================" << endl;
        cin >> choice;

        // Process and input validation section
        switch(toupper(choice)) {
            case 'A':
                cout << "You chose A benefits." << endl;
                break;
            case 'B':
                cout << "You chose B benefits." << endl;
                break;
            case 'C':
                cout << "You chose C benefits." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
return 0;
}
