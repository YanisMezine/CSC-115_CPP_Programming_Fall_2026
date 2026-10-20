#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    // Variable section
    char employed, recentGrad;

    // Input section
    cout << "Are you employed? (Y/N): ";
    cin >> employed;
    cout << "Are you a recent graduate? (Y/N): ";
    cin >> recentGrad;

    // Input validation section
    if ((employed != 'Y' && employed != 'y' && employed != 'N' && employed != 'n') ||
        (recentGrad != 'Y' && recentGrad != 'y' && recentGrad != 'N' && recentGrad != 'n')) {
        cout << "Please answer Y or N for both questions." << endl;
        return 0;
    }

    // Process and output section
    if (employed == 'Y' || employed == 'y')
    {
        if (recentGrad == 'Y' || recentGrad == 'y')
        {
            cout << "Congrats! you are qualified for this program." << endl;
        }
        else
        {
            cout << "You are not qualified for this program. You need to graduate first!" << endl;
        }
    }
    else
    {
        cout << "You are not qualified for the special program. You need to be employed!" << endl;
    }
return 0;
}

