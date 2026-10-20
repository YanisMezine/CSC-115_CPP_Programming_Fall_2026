#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;

// Variable section
const int MIN_LENGTH = 8;
string password, username;

int main() {
    // Input section
    cout << "Enter a username: ";
    cin >> username;
    cout << "Enter a password: ";
    cin >> password;

    // Input validation and output section
    if (username.length() < MIN_LENGTH) {
        cout << "Username is too short. It must be at least " << MIN_LENGTH << " characters long." << endl;
    } else if (password.length() < MIN_LENGTH) {
        cout << "Password is too short. It must be at least " << MIN_LENGTH << " characters long." << endl;
    } else {
        cout << "Username and password accepted." << endl;
    }

    return 0;
}
