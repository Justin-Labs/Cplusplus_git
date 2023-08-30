#include <iostream>
// example showing how we can't update a value with a float const* ptr.
// but we can still update via variable itself since its not const.
using std::cout;
using std::endl;
// example showing how we can't change the address pointed to or the contents pointed to
// by a const * const ptr.
int main()
{
    float linda_gpa = 3.4f;
    float const * const gpa_ptr = &linda_gpa;

    cout << "gpa_ptr (Linda): " << gpa_ptr << endl;
    cout << "gpa_ptr value (Linda): " << *gpa_ptr << endl;

    float megan_gpa = 3.7f;

    cout << "---- Update pointer (this is not allowed!)----" << endl;
    gpa_ptr = &megan_gpa;

    //cout <<"----Update vlue (this is allowed!)----" << endl;
    //*gpa_ptr = 4.0f;

    return 0;
}