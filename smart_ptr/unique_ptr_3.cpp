#include <iostream>
#include <memory>
// demonstrates how we can make a differernt unique pointer take ownership.
// looks like I'll have to manually do an overloading on operator<< for unique_ptrs.
// unless I can get compiler updated or mapped better. C++20 has it
// for now 
using std::cout;
using std::endl;
using std::unique_ptr;
using std::make_unique;

int main()
{
    auto revenue_ptr {make_unique<double>(48572.76)};

    cout << "revenue_ptr -------" << endl;      //original line
    cout << "Original " << revenue_ptr.get() << endl; //cout << "Original " << revenue_ptr << endl;

    auto revenue_ptr_move = std::move(revenue_ptr);

    cout << "After move " << revenue_ptr.get() << endl;

    cout << "revenue_ptr_move------" << endl;
    cout << "Moved address " << revenue_ptr_move.get() << endl;
    cout << "Moved value " << *revenue_ptr_move << endl;

    return 0;
}