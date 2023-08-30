#include <iostream>

using std::cout;
using std::endl;

int main() 
{
    float linda_gpa = 3.4f;
    float megan_gpa = 3.7f;

    float* gpa_ptr = &linda_gpa;

    cout << "gpa_ptr (Linda): " << gpa_ptr << endl;
    cout << "gpa_ptr value (Linda): " << *gpa_ptr << endl;

    cout << "------Updated value------" << endl;
    *gpa_ptr = 4.0f;

    cout << "gpa_ptr (Linda): " << gpa_ptr << endl;
    cout << "gpa_ptr value (Linda): " << *gpa_ptr << endl;
    cout << "Linda gpa: " << linda_gpa << endl;

    cout << "-------Updated pointer-------" << endl;
    gpa_ptr = & megan_gpa;
    cout << "gpa_ptr (Megan): " << gpa_ptr << endl;
    cout << "gpa_ptr value (Megan): " << *gpa_ptr << endl;

    return 0;
}