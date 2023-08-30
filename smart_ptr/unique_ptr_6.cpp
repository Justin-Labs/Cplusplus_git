#include <iostream>
#include <memory>
// demonstrates how we can change what our unique_ptr to raw dumb pointer.
// by using .release()
using std::cout;
using std::endl;
using std::unique_ptr;
using std::make_unique;

int main()
{
    auto revenue_ptr {make_unique<double>(48572.76)};

    cout << "revenue_ptr -------" << endl;
    cout << "Original " << revenue_ptr.get() << endl;
    cout << "Value " << *revenue_ptr << endl;

    double * revenue__raw_ptr = revenue_ptr.release();

    cout << "After release revenue_ptr -----" << endl;
    cout << "Address " << revenue_ptr.get() << endl;
    
    cout << "After release revenue_raw_ptr ------" << endl;
    cout << "Value " << *revenue__raw_ptr << endl;

    delete revenue__raw_ptr;
    revenue__raw_ptr = nullptr;

    return 0;
}