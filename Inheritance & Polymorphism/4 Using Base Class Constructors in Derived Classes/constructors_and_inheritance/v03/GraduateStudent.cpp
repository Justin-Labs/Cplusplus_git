#include <string>
#include <iostream>

#include "GraduateStudent.h"

using std::string;
using std::cout;
using std::endl;

GraduateStudent::GraduateStudent(bool scholarship) :
        scholarship(scholarship) {
    cout << "GraduateStudent(scholarship) ctor " << endl;
}

GraduateStudent::GraduateStudent(string name, bool scholarship) :
        Student(name), scholarship(scholarship) {
    cout << "GraduateStudent(name, scholarship) ctor " << endl;
}

GraduateStudent::GraduateStudent(string name, float gpa, bool scholarship) :
        Student(name, gpa), scholarship(scholarship) {
    cout << "GraduateStudent(name, gpa, scholarship) ctor " << endl;
}

GraduateStudent::GraduateStudent(string name, float gpa, string major, bool scholarship) :
        Student(name, gpa, major), scholarship(scholarship) {
    cout << "GraduateStudent(name, gpa, major, scholarship) ctor " << endl;
}

bool GraduateStudent::has_scholarship() const {
    return scholarship;
}

void GraduateStudent::display_info()  const {
    cout << "Name: " << get_name() << endl;
    cout << "GPA: " << get_gpa() << endl;
    cout << "Major: " << get_major() << endl;

    cout << "Has scholarship: " << std::boolalpha << scholarship << endl;
}
