#include <iostream>
#include <string>

using namespace std;

// Variable section
int y, x=1;

int main() {

    // Process and output section (postfix and prefix)
    y = x++;
    cout << y << endl;
    cout << x << endl;

    y = ++x;
    cout << y << endl;

return 0;
}
