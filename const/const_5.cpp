#include <iostream>
// example showing how float const * can be reassigned.
using std::cout;
using std::endl;

int main()
{
    const float linda_gpa = 3.4f;
    float const * gpa_ptr = &linda_gpa;

    cout << "gpa_ptr (Linda): " << gpa_ptr << endl;
    cout << "gpa_ptr value (Linda): " << *gpa_ptr << endl;

    const float megan_gpa = 3.7f;

    cout << "----Updated pointer (this is allowed!)----" << endl;
    gpa_ptr = &megan_gpa;
    cout << "gpa_ptr (Megan): " << gpa_ptr << endl;
    cout << "gpa_ptr value (Megan): " << *gpa_ptr << endl;

    cout << "Linda gpa (no change): " << linda_gpa <<endl;

    return 0;
}