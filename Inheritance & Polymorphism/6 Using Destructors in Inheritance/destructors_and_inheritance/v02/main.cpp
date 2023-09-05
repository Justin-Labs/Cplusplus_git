#include <iostream>
#include "PhdStudent.h"

using std::cout;
using std::endl;

int main()
{
    PhdStudent liz("Liz", 3.1f, "Biology", true, 
                   "Some hard topic in Biology");
    PhdStudent terry("Terry", 3.5f, "English", true,
                     "Some complex topic in English");

    cout << "------------------------------------" << endl;
}

