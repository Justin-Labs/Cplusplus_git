#include <iostream>
#include <string>

using std::cout;
using std::endl;

int main() 
{
    //Pointer initialized with memory on the free store
    //points to a variable which is initialized to 0.0
    double* revenue_ptr1 {new double {}};

    //Pointer initialized with nullptr. Has not been
    //allocated any memory on the free store
    double* revenue_ptr2 {};

    cout << "Revenue pointer 1: " << revenue_ptr1 << endl;
    cout << "Revenue pointer 2: " << revenue_ptr2 << endl;

    delete revenue_ptr1;
    delete revenue_ptr2;
}
