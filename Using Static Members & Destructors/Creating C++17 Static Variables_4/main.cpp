#include <iostream>         //client file

#include "Student.h"

using std::cout;
using std::endl;

int main() {

    Student robert("Robert", 3.3f, "Chemistry");
    Student edward("Edward", 3.6f, "Chemistry");
    Student caroline("Caroline", 3.9f, "Math");
    Student george("George", 2.8f, "Chemistry");
    Student jackie("Jackie", 3.1f, "Math");

    cout << "Total number of students in Chemistry (using class): "
         << Student::get_major_count("Chemistry") << endl;

     Student::deregister_student_from_major(robert);

     cout << "Total number of students in Chemistry (after deregistration): "
          << Student::get_major_count("Chemistry") << endl;

    return 0;
}