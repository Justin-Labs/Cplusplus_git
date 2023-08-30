#include <string>           //Implementation file
#include <iostream>

#include "Student.h"

using std::string;
using std::cout;
using std::endl;

Student::Student(string name, float gpa, string major) :
    name(name), gpa(gpa), major(major) {
        
        // map.count() can only return 0 or 1
        if (student_major_map.count(major) == 0) {  //the first time a major is encountered it will create a new key pair                                                    
            student_major_map[major] = 0;           //we set the count of the major to 0
        }
        student_major_map[major]++;      //and then it will increment the value each time it is encountered.
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

int Student::get_major_count(string major) {
    return Student::student_major_map[major];
}