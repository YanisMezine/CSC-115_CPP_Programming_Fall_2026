#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // Constant value for pi
    const double PI = 3.14159265359;

    // Variables
    double radius, angle;
    double area, circumference, arcLength;

    // Input
    cout << "Radius of the circle: ";
    cin >> radius;

    cout << "Central angle in degrees: ";
    cin >> angle;

    // Calculations
    area = PI * radius * radius;
    circumference = 2 * PI * radius;
    arcLength = (angle / 360.0) * circumference;

    // Format output
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