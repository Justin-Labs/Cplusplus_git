#include <iostream>
#include "GradStudent.h"
#include "UndergradStudent.h"
#include "PhdStudent.h"

using std::cout;
using std::endl;

void display_grad_student_details(const Student& student) {
    const UndergradStudent& undergrad_student = (UndergradStudent&) student;

    cout <<"**************************" << endl;
    cout << "Name: " << undergrad_student.get_name() 
         << ", major: " << undergrad_student.get_major() 
         << ", tuition: " << undergrad_student.compute_tuition() << endl << endl;
}


int main()
{
    PhdStudent linda {"Linda", false, true};
    PhdStudent terry {"Terry", true, false};

    display_grad_student_details(linda);
    display_grad_student_details(terry);
}

