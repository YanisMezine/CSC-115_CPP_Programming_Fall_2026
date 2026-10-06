#include <iostream>
#include <iomanip>
#include <cmath>


using namespace std;

int main() {
    // Varaible 
    int math, science, english, coding, dancing;
    double average;

    cout << "This program is designed to calculate grades." << endl;
    cout << "Please enter your grades Math: " << endl;
    cin >> math;
    cout << "Please enter your grades Science: " << endl;
    cin >> science;
    cout << "Please enter your grades English: " << endl;
    cin >> english;
    cout << "Please enter your grades Coding: " << endl;
    cin >> coding;
    cout << "Please enter your grades Dancing: " << endl;
    cin >> dancing;

    double average = (math + science + english + coding + dancing) / 5.0;

    if (average >= 94) {
        cout << "Your average is: " << fixed << setprecision(2) << average << endl;
        cout << "Your grade is: A" << endl;
    } else if (average >= 90) {
        cout << "Your average is: " << fixed << setprecision(2) << average << endl;
        cout << "Your grade is: A-" << endl;
    } else if (average >= 84) {
        cout << "Your average is: " << fixed << setprecision(2) << average << endl;
        cout << "Your grade is: B+" << endl;
    } else if (average >= 79) {
        cout << "Your average is: " << fixed << setprecision(2) << average << endl;
        cout << "Your grade is: B-" << endl;
    } else if (average >= 74) {
        cout << "Your average is: " << fixed << setprecision(2) << average << endl;
        cout << "Your grade is: C+" << endl;
    } else if (average >= 70) {
        cout << "Your average is: " << fixed << setprecision(2) << average << endl;
        cout << "Your grade is: C" << endl;
    } else if (average >= 60) {
        cout << "Your average is: " << fixed << setprecision(2) << average << endl;
        cout << "Your grade is: D" << endl;
    } else {
        cout << "Your average is: " << fixed << setprecision(2) << average << endl;
        cout << "Your grade is: F" << endl;
    }

    return 0;
}