#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;


int main()
{
    // Variable section
    const int highScore = 95;
    int score1, score2, score3;
    double average;

    // Input section
    cout << "Enter 3 test scores:";
    cin >> score1 >> score2 >> score3;

    // Input validation section
    if (cin.fail() || score1 < 0 || score1 > 100 ||
        score2 < 0 || score2 > 100 || score3 < 0 || score3 > 100) {
        cout << "Please enter three valid scores from 0 to 100." << endl;
        return 0;
    }

    // Process section
    average = (score1 + score2 + score3) / 3.0;
    // Output section
    cout << "\nYour average score is: " << average << endl;

    if(average >= highScore)
    {
        cout << "Congratulations! High score!\n" << endl;
        cout << "That's a high score.\n";
        cout << "You deserve a pat on the back!\n";
    }
}

