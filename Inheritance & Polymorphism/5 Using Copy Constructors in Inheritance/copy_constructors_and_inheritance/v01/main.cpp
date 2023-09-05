#include <iostream>
#include "GraduateStudent.h"

using std::cout;
using std::endl;

int main()
{
    cout << "----------Original-----------" << endl;

    GraduateStudent liz("Liz", 3.1f, "Biology", true);
    liz.display_info();

    cout << "-------------Copy-------------" << endl;

    GraduateStudent liz_copy(liz);
    liz_copy.display_info();
}

