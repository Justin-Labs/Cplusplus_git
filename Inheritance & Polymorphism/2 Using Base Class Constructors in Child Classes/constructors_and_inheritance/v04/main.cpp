#include <iostream>
#include "GraduateStudent.h"

using std::cout;
using std::endl;

int main()
{
    cout << "--------------------------" << endl;
    GraduateStudent liz("Liz", 3.1f, "Biology", false);
    liz.display_info();
}

