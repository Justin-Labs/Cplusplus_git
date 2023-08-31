#include <string>
#include <iostream>

#include "Student.h"

using std::string;
using std::cout;
using std::endl;

string Student::get_name() const {
    return name;
}

void Student::set_name(string n) {
    name = n;
}

float Student::get_gpa() const {
    return gpa;
}

void Student::set_gpa(float g) {
    gpa = g;
}
