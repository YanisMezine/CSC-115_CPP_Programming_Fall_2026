#include <iostream>
#include <string>

using namespace std;
const int MIN_LENGTH = 8;
string password;

int main() {
    cout << "\nEnter a password : ";
    cin >> password;

    if (int len = password.length(); len < MIN_LENGTH) {
        cout << "Password is too short. It must be at least " << MIN_LENGTH << " characters long." << endl;
    } else {
        cout << "Password accepted." << endl;
    }
    return 0;
}