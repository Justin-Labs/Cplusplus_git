#include <string>
#include <iostream>

#include "GraduateStudent.h"

using std::string;
using std::cout;
using std::endl;

bool GraduateStudent::has_scholarship() const {
    return scholarship;
}

void GraduateStudent::set_scholarship(bool s) {
    scholarship = s;
}

void GraduateStudent::display_info()  const {
    cout << "name: " << name << " gpa: " << gpa
         << " scholarship: " << std::boolalpha << scholarship << endl;
}
