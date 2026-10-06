#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;

const int MIN_LENGTH = 8;
string password, username;

int main() {
    cout << "Enter a username: ";
    cin >> username;
    cout << "Enter a password: ";
    cin >> password;

    if (int ulen = username.length(); ulen < MIN_LENGTH) {
        cout << "Username is too short. It must be at least " << MIN_LENGTH << " characters long." << endl;
    } else if (int plen = password.length(); plen < MIN_LENGTH) {
        cout << "Password is too short. It must be at least " << MIN_LENGTH << " characters long." << endl;
    } else {
        cout << "Username and password accepted." << endl;
    }

    return 0;
}
