#include <iostream>         //client file

#include "Student.h"

using std::cout;
using std::endl;

void some_function() {
    cout << "------------------" << endl;
    cout << "Inside some_function" << endl;

    Student caroline("Caroline", 3.9f, "Math");
}

int main() {

    Student robert("Robert", 3.3f, "Chemistry");
    
    {
        cout << "---------------" << endl;
        Student edward ("Edward", 3.9f, "Chemistry");
        cout << "Inside nested scope" << endl;
    }

    cout << "Just outside nested scope" << endl;

    some_function();

    cout << "----------------" << endl;
    cout << "Returned from some_function" << endl;
    
    cout << "End of main..." <<  endl;

    return 0;
}