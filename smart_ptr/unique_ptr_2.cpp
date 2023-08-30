#include <iostream>
#include <memory>
// demonstrates how unique ptr doesn't allow copies of itself.
using std::cout;
using std::endl;
using std::unique_ptr;
using std::make_unique;

int main()
{
    auto revenue_ptr {make_unique<double>(48572.76)};

    auto revenue_ptr_copy = revenue_ptr;

    return 0;
}