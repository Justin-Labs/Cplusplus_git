#include <iostream>
#include "GraduateStudent.h"

using std::cout;
using std::endl;

int main()
{
    GraduateStudent ethan(false);
    cout << "--------------------------" << endl;

    GraduateStudent vera("Vera", true);
    cout << "--------------------------" << endl;

    GraduateStudent larry("Larry", 3.4f, true);
    cout << "--------------------------" << endl;

    GraduateStudent liz("Liz", 3.1f, "Biology", false);
    cout << "--------------------------" << endl;
}

