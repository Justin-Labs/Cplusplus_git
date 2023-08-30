#include <iostream>

using std::cout;
using std::endl;

int main()
{
    cout << "Size of float is " << sizeof(float) << " bytes."<<endl;
    cout << "Size of double is " << sizeof(double) << " bytes."<<endl;
    cout << "Size of long double is " << sizeof(long double) << " bytes."<<endl;

    float balance = 1000.64F; //F suffix indicates single precision
    double earths_gravity = 9.807; //no suffix because floating point literals are stored in double precision by default
    long double planks_constant = 6.62607004e-34L; //L suffix indicate extended precision

    cout << endl <<"Balance: " << balance << endl;
    cout << "Earth's gravity: " << earths_gravity << endl;
    cout << "Planck's constant: " << planks_constant << endl;

    return 0;
}