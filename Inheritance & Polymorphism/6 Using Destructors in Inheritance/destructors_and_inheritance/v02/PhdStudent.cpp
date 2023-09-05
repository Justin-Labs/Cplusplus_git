#include <string>
#include <iostream>

#include "PhdStudent.h"

using std::string;
using std::cout;
using std::endl;

PhdStudent::PhdStudent(
    string name, float gpa, string major, bool scholarship, string thesis_topic) :
    GraduateStudent(name, gpa, major, scholarship), thesis_topic(thesis_topic) {
    cout << "PhdStudent constructor: " << name << endl;
}

string PhdStudent::get_thesis_topic() const {
    return thesis_topic;
}

PhdStudent::~PhdStudent() {
    cout << "PhdStudent destructor: " << get_name() << endl;
}
