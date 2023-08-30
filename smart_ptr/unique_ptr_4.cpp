#include <iostream>
#include <memory>
// demonstrates how we can change what our unique_ptr points to using .reset method
// looks like I'll have to manually do an overloading on operator<< for unique_ptrs.
// unless I can get compiler updated or mapped better... not standard till C++20.
// found can use .get() (to get the stored pointer) after revenue_ptr to make work.
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

    revenue_ptr.reset();

    cout << "After reset revenue_ptr -----" << endl;
    cout << "Address " << revenue_ptr.get() << endl;
    
    if (revenue_ptr == nullptr) {
        cout << "This pointer is now null!" << endl;
    }

    return 0;
}