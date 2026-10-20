#include <iostream>
#include <string>

using namespace std;
// Variable section
const int MIN_LENGTH = 8;
string password;

int main() {
    // Input section
    cout << "\nEnter a password : ";
    cin >> password;

    // Process and output section
    if (password.length() < MIN_LENGTH) {
        cout << "Password is too short. It must be at least " << MIN_LENGTH << " characters long." << endl;
    } else {
        cout << "Password accepted." << endl;
    }
    return 0;
}
