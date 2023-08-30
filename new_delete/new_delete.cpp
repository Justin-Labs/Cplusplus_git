#include <iostream>
// c style allocation and deallocation
using std::cout;
using std::endl;

int main()
{
    double* revenue_ptr = (double *)malloc(sizeof(double));

    cout << "Uninitialized revenue: " << *revenue_ptr << endl;

    free (revenue_ptr);
}