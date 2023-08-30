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

    cout << "Area of the circle is: " << M_PI * radius * radius << endl;
    //will end up using the default float and display result up to 4 places after decibel
    return 0;
}