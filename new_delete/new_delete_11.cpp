#include <iostream>
#include <string>

using std::cout;
using std::endl;

int main() 
{
    //Pointer initialized with memory on the free store
    //points to a variable which is initialized to 24500.89
    double* revenue_ptr1 {new double {24500.89}};

    //Pointer initialized with memory on the free store
    //points to a variable which is initialized to 100887.33
    double* revenue_ptr2 {new double {100887.33}};

    cout << "Revenue pointer 1: " << *revenue_ptr1 << endl;
    cout << "Revenue pointer 2: " << *revenue_ptr2 << endl;

    delete revenue_ptr1;
    delete revenue_ptr2;
    //this prevents a crash 
    revenue_ptr1 = nullptr;
    revenue_ptr2 = nullptr;

    delete revenue_ptr1;
    delete revenue_ptr2;
}
