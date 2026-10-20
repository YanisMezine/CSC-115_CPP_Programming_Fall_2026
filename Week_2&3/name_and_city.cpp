//Example program 6

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

// Variable section

int main()
{ 
    string name;
    string city;

    // Input section
    cout << "Please enter your name: ";
    getline(cin, name);
    cout << "Please enter the city you live in: ";
    getline(cin, city);

    // Output section
    cout << "Hello, " << name << endl;
    cout << "You live in " << city << "." << endl;

    return 0;
}
