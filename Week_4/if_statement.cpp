#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;


int main()
{
    const int highScore = 95;
    int score1, score2, score3;
    double average;

    cout << "Enter 3 test scores:";
    cin >> score1 >> score2 >> score3;

    average = (score1 + score2 + score3) / 3.0;
    cout << "\nYour average score is: " << average << endl;

    if(average >= highScore)
    {
        cout << "Congratulations! High score!\n" << endl;
        cout << "That's a high score.\n";
        cout << "You deserve a pat on the back!\n";
    }
}

