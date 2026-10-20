#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // Constant and variable section
    const double PI = 3.14159265359;

    double radius, angle;
    double area, circumference, arcLength;

    // Input section
    cout << "Radius of the circle: ";
    cin >> radius;

    cout << "Central angle in degrees: ";
    cin >> angle;

    // Input validation section
    if (cin.fail() || radius < 0 || angle < 0 || angle > 360) {
        cout << "Please enter a nonnegative radius and an angle from 0 to 360." << endl;
        return 0;
    }

    // Process section
    area = PI * radius * radius;
    circumference = 2 * PI * radius;
    arcLength = (angle / 360.0) * circumference;

    // Output section
    cout << fixed << setprecision(2);

    // Results
    cout << "\nCircle Calculations\n";
    cout << "-------------------\n";
    cout << "Radius: " << radius << endl;
    cout << "Angle: " << angle << " degrees\n\n";

    cout << "Area: " << area << endl;
    cout << "Circumference: " << circumference << endl;
    cout << "Arc Length: " << arcLength << endl;

    return 0;
}
