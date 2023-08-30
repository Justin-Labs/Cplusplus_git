#include <iostream>
// example showing how we can't update a value with a float const* ptr.
// but we can still update via variable itself since its not const.
using std::cout;
using std::endl;

int main()
{
    float linda_gpa = 3.4f;
    float const * gpa_ptr = &linda_gpa;

    cout << "gpa_ptr (Linda): " << gpa_ptr << endl;
    cout << "gpa_ptr value (Linda): " << *gpa_ptr << endl;

//    cout << "----Upate value through pointer (not allowed)----" << endl;
//    *gpa_ptr = 4.0f;

    cout << "----Update value using variable (allowed!)----" << endl;
    linda_gpa = 4.0f;

    cout << "gpa_ptr value after udate (Linda): " << *gpa_ptr << endl;

    return 0;
}