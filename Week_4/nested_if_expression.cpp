#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    char employed, recentGrad;

    cout << "Are you employed? (Y/N): ";
    cin >> employed;
    cout << "Are you a recent graduate? (Y/N): ";
    cin >> recentGrad;


    if (employed == 'Y')
    {
        if (recentGrad == 'Y')
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

