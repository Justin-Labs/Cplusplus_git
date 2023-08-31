#include <iostream>
#include "Student.h"
#include "GraduateStudent.h"

using std::cout;
using std::endl;

int main()
{
    Student student;
    GraduateStudent grad_student;

    student.name = "Ethan";
    student.gpa = 3.7f;

    grad_student.name = "Vera";    //proves that grad_student is a derived class of student and can access student member variables.
    grad_student.gpa = 3.9f;       //proves that grad_student is a derived class of student and can access student member variables.
    grad_student.scholarship = true;

    cout << "Student name: " << student.get_name() 
         << " gpa: " << student.get_gpa() << endl;

    cout << "GraduateStudent name: " << grad_student.get_name() 
         << " gpa: " << grad_student.get_gpa()
         << " scholarship: " << std::boolalpha <<grad_student.has_scholarship() << endl;
}
