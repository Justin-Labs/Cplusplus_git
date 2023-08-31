#include <string>
#include <iostream>

#include "GraduateStudent.h"

using std::string;
using std::cout;
using std::endl;

bool GraduateStudent::has_scholarship() const {         //one method has_scholarship() which is marked const and simply returns member variable scholarhip
    return scholarship;
}
