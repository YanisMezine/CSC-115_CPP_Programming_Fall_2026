#include <iostream>
#include <string>

using namespace std;
// Variable section
const int MIN=1, MAX=10;

int main() {

    // Process and output section
    for (int num=MIN; num<=MAX; num+=2) {
        cout << "The squared value of " << num << " is " << num * num << endl;
    }
return 0;
}
