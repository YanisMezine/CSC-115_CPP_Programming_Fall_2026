#include <iostream>
#include <string>

using namespace std;
// Variable section
const int MIN = 0, MAX = 100;
int number = MIN;

int main() {
    // Process and output section
    while(number <= MAX) {
        cout << "The number is: \t\t" << number << endl;
        number++;
    }
return 0;
}
