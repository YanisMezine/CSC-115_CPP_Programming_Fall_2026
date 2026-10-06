#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    // Variables
    int math, science, english, coding, dancing;
    double average;

    string mathID, scienceID, englishID, codingID, dancingID;

    cout << "This program is designed to calculate grades." << endl;

    cout << "Please enter your Math course ID: ";
    cin >> mathID;
    cout << "Please enter your grade Math: ";
    cin >> math;

    cout << "Please enter your Science course ID: ";
    cin >> scienceID;
    cout << "Please enter your grade Science: ";
    cin >> science;

    cout << "Please enter your English course ID: ";
    cin >> englishID;
    cout << "Please enter your grade English: ";
    cin >> english;

    cout << "Please enter your Coding course ID: ";
    cin >> codingID;
    cout << "Please enter your grade Coding: ";
    cin >> coding;

    cout << "Please enter your Dancing course ID: ";
    cin >> dancingID;
    cout << "Please enter your grade Dancing: ";
    cin >> dancing;

    // Protection Code
    if (math < 0 || math > 100 ||
        science < 0 || science > 100 ||
        english < 0 || english > 100 ||
        coding < 0 || coding > 100 ||
        dancing < 0 || dancing > 100) {

        cout << "\nInvalid grade entered." << endl;
        cout << "Grades must be between 0 and 100." << endl;

        return 0;
    }

    // Calculate Average
    average = (math + science + english + coding + dancing) / 5.0;

    // Display Courses and Grades
    cout << "\nCourse Grades" << endl;
    cout << "-------------" << endl;

    cout << mathID << " Math: " << math << endl;
    cout << scienceID << " Science: " << science << endl;
    cout << englishID << " English: " << english << endl;
    cout << codingID << " Coding: " << coding << endl;
    cout << dancingID << " Dancing: " << dancing << endl;

    cout << fixed << setprecision(2);
    cout << "\nYour average is: " << average << endl;

    // Determine Letter Grade
    if (average >= 94) {
        cout << "Your grade is: A" << endl;
    }
    else if (average >= 90) {
        cout << "Your grade is: A-" << endl;
    }
    else if (average >= 84) {
        cout << "Your grade is: B+" << endl;
    }
    else if (average >= 79) {
        cout << "Your grade is: B-" << endl;
    }
    else if (average >= 74) {
        cout << "Your grade is: C+" << endl;
    }
    else if (average >= 70) {
        cout << "Your grade is: C" << endl;
    }
    else if (average >= 60) {
        cout << "Your grade is: D" << endl;
    }
    else {
        cout << "Your grade is: F" << endl;
    }

    return 0;
}
