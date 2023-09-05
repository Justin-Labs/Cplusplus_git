#include <iostream>
#include "GraduateStudent.h"

using std::cout;
using std::endl;


int main()
{
    GraduateStudent liz("Liz", 3.1f, "Biology", false);
    liz.display_info();

    cout << "--------------------------" << endl;

    GraduateStudent terry("Terry", 3.3f, "Math");
    terry.display_info();

    cout << "--------------------------" << endl;

    GraduateStudent jess;
    jess.display_info();
}


