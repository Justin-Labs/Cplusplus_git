#include <iostream>
#include <string>

using std::cout;
using std::endl;

int main() 
{
    //Initialize revenue_ptr with a nullptr, the {} after revenue_ptr does this.
    double* revenue_ptr {};

    //Requests memory from the free store(heap) for a double variable
    revenue_ptr = new double;

    //References the memory in the free store and assigns a value
    *revenue_ptr = 20308.345;

    cout << "Revenue is: " << *revenue_ptr << endl;

    delete revenue_ptr;
}
