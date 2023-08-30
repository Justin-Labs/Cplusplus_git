#include <iostream>

using std::cout;
using std::endl;

int main()
{
    int unit_sales = 102;
    int& unit_sales_ref = unit_sales; //initialization of ref

    cout << "Original unit_sales: " << unit_sales << endl;
    cout << "Original unit_sales (using reference): " << unit_sales_ref << endl;

    // NOTE: unit_sales is updated to 199 using the reference. The references
    // is not reassigned!
    int more_unit_sales = 199;
    unit_sales_ref = more_unit_sales;

    cout << "Updated unit_sales: " << unit_sales << endl;
    cout << "Updated unit_sales (using reference): " << unit_sales_ref << endl;

    return 0;
}