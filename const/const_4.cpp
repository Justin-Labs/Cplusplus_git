#include <iostream>
// example showing how float const * is equivalent to const float *
// also shows how we can't change a const value.
using std::cout;
using std::endl;

int main()
{
    const float linda_gpa = 3.4f;
    float const * gpa_ptr = &linda_gpa;

    cout << "gpa_ptr (Linda): " << gpa_ptr << endl;
    cout << "gpa_ptr value (Linda): " << *gpa_ptr << endl;

    cout << "----Updated value (not allowed)----" << endl;
    *gpa_ptr = 4.0f;

    return 0;
}