#include <iostream>
// example showing compiler doesn't like use trying to create a ptr to create
// a back way of modifiying a const value.
using std::cout;
using std::endl;

int main()
{
    const float linda_gpa = 3.4f;
    float* gpa_ptr = &linda_gpa;

    return 0;
}