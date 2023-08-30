#include <string>
#include <iostream>

#include "Student.h"

using std::string;
using std::cout;
using std::endl;

string Student::get_name() const {
    return name;
}

float Student::get_gpa() const {
    return gpa;
}
