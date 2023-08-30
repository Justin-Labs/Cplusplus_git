#include <string>           //Implementation file
#include <iostream>

#include "Student.h"

using std::string;
using std::cout;
using std::endl;

Student::Student(string name, float gpa, string major) :
    name(name), gpa(gpa), major(major) {
        
        cout << "Student constructor called: " << name << endl;
}


string Student::get_name() const {
    return name;
}

float Student::get_gpa() const {
    return gpa;
}

string Student::get_major() const {
    return major;
}

Student::~Student() {
    cout << "Student destructor called: " << name << endl;
}
