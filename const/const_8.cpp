#include <iostream>
// example showing how we can't update a value with a float const* ptr.
// but we can still update via variable itself since its not const.
using std::cout;
using std::endl;
// example showing how we can't update/change address of a const ptr.
int main()
{
    float linda_gpa = 3.4f;
    float* const gpa_ptr = &linda_gpa;

    cout << "gpa_ptr (Linda): " << gpa_ptr << endl;
    cout << "gpa_ptr value (Linda): " << *gpa_ptr << endl;

    float megan_gpa = 3.7f;

    cout << "----Updated pointer (this is not allowed!)----" << endl;
    gpa_ptr = &megan_gpa;

    return 0;
}