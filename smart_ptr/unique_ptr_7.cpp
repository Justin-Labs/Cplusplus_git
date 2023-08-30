#include <iostream>
#include <memory>
// demonstrates how we can make a unique ptr to an array.
using std::cout;
using std::endl;
using std::unique_ptr;
using std::make_unique;

int main()
{
    const int size = 5;

    unique_ptr<int[]> unit_sales_redmond {make_unique<int[]>(size)};

    for (int i = 0; i < size; i++) {
        unit_sales_redmond[i] = 2 * (i + 7);
    }

    for (int i = 0; i < size; i++) {
        cout << unit_sales_redmond[i] << endl;
    }

    return 0;
}