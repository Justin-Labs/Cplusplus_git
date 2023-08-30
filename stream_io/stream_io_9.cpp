#include <iostream>
#include <string>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    float radius;

    cout << "Please input circle radius: ";
    cin >> radius;
                                        //my first use of Manipulator...
    cout << "Area of the circle is: " << std::defaultfloat
         << M_PI * radius * radius << endl;
        //explicity sets the result to default, which is four decimal places.
    return 0;
}