#include <iostream>
#include <string>
// most idomatic way
using std::cout;
using std::endl;

int main() 
{
    //Declare double pointer, requests memory from the free store
    //for a double variable and initializes the double variable
    //with a value.
    double* revenue_ptr {new double {20308.345}};

    cout << "Revenue is: " << *revenue_ptr << endl;

    delete revenue_ptr;
}
