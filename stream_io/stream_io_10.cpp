#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    float radius;

    cout << "Please input circle radius: ";
    cin >> radius;
                                        //manipulator and another manipulator.
    cout << "Area of the circle is: " << std::defaultfloat << std::setprecision(3)
         << M_PI * radius * radius << endl;
        //explicity sets the result to default, then sets it to only 3 digits total.
    return 0;
}