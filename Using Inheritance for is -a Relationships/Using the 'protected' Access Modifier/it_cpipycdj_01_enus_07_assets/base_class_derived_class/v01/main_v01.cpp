#include <iostream>
#include "Student.h"
#include "GraduateStudent.h"

using std::cout;
using std::endl;

int main()
{
    Student student;
    GraduateStudent grad_student;

    cout << "Student: " << typeid(student).name() << endl;
    cout << "GraduateStudent: " << typeid(grad_student).name() << endl;

    cout << "----------------------" << endl;
    
    cout << "Student is a base class of GraduateStudent: " 
         << std::boolalpha << std::is_base_of_v<Student, GraduateStudent> << endl;
    cout << "GraduateStudent is a base class of Student: " 
         << std::boolalpha << std::is_base_of_v<GraduateStudent, Student> << endl;
}
