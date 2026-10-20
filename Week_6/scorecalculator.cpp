#include <iostream>
#include <string>

using namespace std;
// Variable section
int score1, score2, score3;
char choice;

int main() {
    do
    {
        // Input section
        cout << "Enter the 3 scores" << endl;
        cin >> score1 >> score2 >> score3;

        // Input validation section
        while (cin.fail() || score1 < 0 || score1 > 100 ||
               score2 < 0 || score2 > 100 || score3 < 0 || score3 > 100) {
            if (cin.eof()) return 0;
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "Invalid scores. Please enter 3 scores between 0 and 100: ";
            cin >> score1 >> score2 >> score3;
        }

        // Process section
        double avg = (score1 + score2 + score3) / 3.0;

        // Output section
        cout << "The average score is: " << avg << endl;

        cout << "Do you want to enter another set of scores? (y/n): ";
        cin >> choice;
        // Input validation section
        while (choice != 'y' && choice != 'Y' && choice != 'n' && choice != 'N') {
            if (cin.eof()) return 0;
            cout << "Please enter y or n: ";
            cin >> choice;
        }
    }
    while (choice == 'y' || choice == 'Y');

    cout << "Thank you for using the score calculator!" << endl;
}
