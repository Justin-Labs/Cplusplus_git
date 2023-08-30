#include <iostream>
#include <memory>
// unique_ptr: owns whatever it points to exclusively
using std::cout;
using std::endl;
using std::unique_ptr;
using std::make_unique;

int main()
{
    // Pre C++14 style of initializing unique pointers
    unique_ptr<double> revenue_ptr_1 {new double {2345.98}};

    // Modern style of initializing unique pointers - this function
    // prevents some subtle memory leaks
    unique_ptr<double> revenue_ptr_2 {make_unique<double>(100345.67)};

    // Compact modern style of initializein unique pointers
    auto revenue_ptr_3 {make_unique<double>(48572.76)};

    cout << "Revenue 1: " << *revenue_ptr_1 << endl;
    cout << "Revenue 2: " << *revenue_ptr_2 << endl;
    cout << "Revenue 3: " << *revenue_ptr_3 << endl;

    return 0;
}