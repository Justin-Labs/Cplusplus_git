#include <iostream>         //client file

#include "Student.h"

using std::cout;
using std::endl;

int main()
{
    Student* robert = new Student("Robert", 3.3f, "Chemistry");

    delete robert;
    robert = nullptr;
    cout << "End of main..." << endl;

    return 0;
}
