#include <iostream>
// example showing fix to previous example, where we make a const float* to a const float.
using std::cout;
using std::endl;

int main()
{
    const float linda_gpa = 3.4f;
    const float* gpa_ptr = &linda_gpa;

    return 0;
}