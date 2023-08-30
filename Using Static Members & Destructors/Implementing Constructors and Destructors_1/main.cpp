#include <iostream>         //client file

#include "Student.h"

using std::cout;
using std::endl;

int main()
{
    Student* student_list = new Student[3] {};

    delete[] student_list;          // this prevents memory leak
    student_list = nullptr;       // like good citizens we set it to null ptr 
    cout << "End of main..." << endl;

    return 0;
}
