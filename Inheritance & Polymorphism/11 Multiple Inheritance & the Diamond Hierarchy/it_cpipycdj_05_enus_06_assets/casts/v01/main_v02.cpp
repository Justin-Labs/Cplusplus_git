#include <iostream>
#include "GradStudent.h"
#include "UndergradStudent.h"
#include "PhdStudent.h"

using std::cout;
using std::endl;

void display_grad_student_details(const Student& student) {
    const GradStudent& grad_student = (GradStudent&) student;

    cout <<"**************************" << endl;
    cout << "Name: " << grad_student.get_name() 
         << ", has teaching assistantship: " << std::boolalpha 
         << grad_student.has_teaching_assistantship() 
         << ", tuition: " << grad_student.compute_tuition() << endl << endl;
}


int main()
{
    PhdStudent linda {"Linda", true, false};
    PhdStudent terry {"Terry", false, true};

    display_grad_student_details(linda);
    display_grad_student_details(terry);
}

