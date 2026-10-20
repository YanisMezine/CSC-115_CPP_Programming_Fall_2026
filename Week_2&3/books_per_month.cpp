//Example program 3

#include <iostream>
#include <string>

using namespace std;

// Variable section
int books;   // Number of books to read
int months;  // number of months spent reading
double perMonth;  //Average number of books per month

// Main function

int main() {
// Input section
cout << "How many books do you plan to read?";
cin >> books;
cout << "How many months will it take you to read them?";
cin >> months;
// Input validation section
if (cin.fail() || months <= 0 || books < 0) {
    cout << "Please enter a positive number of months and a nonnegative number of books." << endl;
    return 0;
}
// Process section
perMonth = static_cast<double>(books) / months;
// Output section
cout << "That is " << perMonth << " books per month." << endl;
    return 0;
}
