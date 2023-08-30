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
                                        //display number in scientific format with 3 digits after decimal point 
    cout << "Area of the circle is: " << std::scientific << std::setprecision(3)
         << M_PI * radius * radius << endl;

    return 0;
}