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

    grad_student.name = "Vera";
    grad_student.gpa = 3.9f;
    grad_student.scholarship = true;

    cout << "---Student---" << endl;
    cout << "name: " << student.get_name() 
         << " gpa: " << student.get_gpa() << endl;

    cout << "---GraduateStudent---" << endl;
    grad_student.display_info();
}

