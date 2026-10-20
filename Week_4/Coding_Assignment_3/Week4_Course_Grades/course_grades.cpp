#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    // Variable Section
    int math = 0, science = 0, english = 0, coding = 0, dancing = 0;
    int numberOfCourses = 0, courseNumber, grade, choice = 0;
    double total = 0, average;

    string mathID, scienceID, englishID, codingID, dancingID;
    string courseID, searchID;

    cout << "This program is designed to calculate grades." << endl;

    // Input Section
    while (choice != 5) {
        cout << "\nCourse Grades Menu" << endl;
        cout << "------------------" << endl;
        cout << "1. Enter Number of Courses" << endl;
        cout << "2. Display a Specific Course and Grade" << endl;
        cout << "3. Display All Courses and Grades" << endl;
        cout << "4. Display Overall Average and Letter Grade" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        // Input validation section
        if (cin.fail()) {
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "Invalid choice. Please enter 1 through 5." << endl;
            continue;
        }

        // Process section
        switch (choice) {
            case 1:
                cout << "How many courses do you want to enter (1-5)? ";
                cin >> numberOfCourses;

                // Input Validation Section
                if (cin.fail() || numberOfCourses < 1 || numberOfCourses > 5) {
                    cin.clear();
                    cin.ignore(10000, '\n');
                    cout << "Invalid number of courses. Enter 1 through 5." << endl;
                    numberOfCourses = 0;
                    break;
                }

                total = 0;
                courseNumber = 1;
                while (courseNumber <= numberOfCourses) {
                    cout << "\nCourse " << courseNumber << " ID: ";
                    cin >> courseID;
                    cout << "Grade: ";
                    cin >> grade;

                    // Input validation section
                    if (cin.fail() || grade < 0 || grade > 100) {
                        cin.clear();
                        cin.ignore(10000, '\n');
                        cout << "Invalid grade. Grades must be between 0 and 100." << endl;
                        numberOfCourses = 0;
                        total = 0;
                        break;
                    }
                    else {
                        if (courseNumber == 1) {
                            mathID = courseID;
                            math = grade;
                        }
                        else if (courseNumber == 2) {
                            scienceID = courseID;
                            science = grade;
                        }
                        else if (courseNumber == 3) {
                            englishID = courseID;
                            english = grade;
                        }
                        else if (courseNumber == 4) {
                            codingID = courseID;
                            coding = grade;
                        }
                        else if (courseNumber == 5) {
                            dancingID = courseID;
                            dancing = grade;
                        }
                        total = total + grade;
                    }
                    courseNumber = courseNumber + 1;
                }

                if (numberOfCourses > 0) {
                    cout << "\nCourses entered successfully!" << endl;
                }
                break;

            case 2:
                // Output section
                if (numberOfCourses == 0) {
                    cout << "Please enter your courses first." << endl;
                }
                else {
                    cout << "Enter the course ID to find: ";
                    cin >> searchID;

                    if (numberOfCourses >= 1 && searchID == mathID) {
                        cout << mathID << " Math: " << math << endl;
                    }
                    else if (numberOfCourses >= 2 && searchID == scienceID) {
                        cout << scienceID << " Science: " << science << endl;
                    }
                    else if (numberOfCourses >= 3 && searchID == englishID) {
                        cout << englishID << " English: " << english << endl;
                    }
                    else if (numberOfCourses >= 4 && searchID == codingID) {
                        cout << codingID << " Coding: " << coding << endl;
                    }
                    else if (numberOfCourses >= 5 && searchID == dancingID) {
                        cout << dancingID << " Dancing: " << dancing << endl;
                    }
                    else {
                        cout << "Course not found." << endl;
                    }
                }
                break;

            case 3:
                if (numberOfCourses == 0) {
                    cout << "Please enter your courses first." << endl;
                }
                else {
                    cout << "\nCourse Grades" << endl;
                    cout << "-------------" << endl;
                    if (numberOfCourses >= 1) cout << mathID << " Math: " << math << endl;
                    if (numberOfCourses >= 2) cout << scienceID << " Science: " << science << endl;
                    if (numberOfCourses >= 3) cout << englishID << " English: " << english << endl;
                    if (numberOfCourses >= 4) cout << codingID << " Coding: " << coding << endl;
                    if (numberOfCourses >= 5) cout << dancingID << " Dancing: " << dancing << endl;
                }
                break;

            case 4:
                // Process and output section
                if (numberOfCourses == 0) {
                    cout << "Please enter your courses first." << endl;
                }
                else {
                    average = total / numberOfCourses;
                    cout << fixed << setprecision(2);
                    cout << "\nAverage Grade: " << average << endl;

                    if (average >= 94) {
                        cout << "Letter Grade: A" << endl;
                    }
                    else if (average >= 90) {
                        cout << "Letter Grade: A-" << endl;
                    }
                    else if (average >= 84) {
                        cout << "Letter Grade: B+" << endl;
                    }
                    else if (average >= 79) {
                        cout << "Letter Grade: B-" << endl;
                    }
                    else if (average >= 74) {
                        cout << "Letter Grade: C+" << endl;
                    }
                    else if (average >= 70) {
                        cout << "Letter Grade: C" << endl;
                    }
                    else if (average >= 60) {
                        cout << "Letter Grade: D" << endl;
                    }
                    else {
                        cout << "Letter Grade: F" << endl;
                    }
                }
                break;

            case 5:
                cout << "Thank you for using the program!" << endl;
                break;

            default:
                cout << "Invalid choice. Please enter 1 through 5." << endl;
        }
    }

    return 0;
}
