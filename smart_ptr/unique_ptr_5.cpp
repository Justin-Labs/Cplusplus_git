#include <iostream>
#include <memory>
// demonstrates how we can change what our unique_ptr points to using .reset method
// found work around by .get()
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

    revenue_ptr.reset(new double{10000.67});

    cout << "After reset revenue_ptr -----" << endl;
    cout << "Address " << revenue_ptr.get() << endl;
    cout << "Value " << *revenue_ptr << endl;

    return 0;
}