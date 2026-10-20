//Example program 8

#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include <random>

using namespace std;

// Variable section

int main()
{   
    // constants
    const int MIN = 1;
    const int MAX = 6;

    random_device engine;

    uniform_int_distribution<int> diceValue(MIN, MAX);

    // Process and output section
    cout << "Rolling the dice..." << endl;
    cout << diceValue(engine) << endl;
    cout << diceValue(engine) << endl;
    return 0;
}
