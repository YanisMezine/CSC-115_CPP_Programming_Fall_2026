#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
int testScore;


int main(){
    cout << "Enter your test score: ";
cin >> testScore;

if (((testScore <= 100)||(testScore >= 90))) {
        cout << "You received an A." << endl;
    }
    else 
    {
    if (testScore >= 80) {
        cout << "You received a B." << endl;
    }
        else 
        {
            if (testScore >= 70) {
                cout << "You received a C." << endl;
            }
            else 
            {
                if (testScore >= 60) {
                    cout << "You received a D." << endl;
                }
                else 
                {
                    cout << "You received an F." << endl;
                }
            }
        }
    }
return 0;
}
