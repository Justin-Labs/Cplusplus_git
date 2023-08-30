#include <iostream>         //client file

#include "Student.h"

using std::cout;
using std::endl;

int main() {

    Student robert("Robert", 3.3f, "History");
    Student edward("Edward", 3.6f, "Political Science");
    Student caroline("Caroline", 3.9f, "Math");
    Student george("George", 2.8f, "Chemistry");
    Student jackie("Jackie", 3.1f, "Physics");

    return 0;
}