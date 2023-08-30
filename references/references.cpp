#include <iostream>

using std::cout;
using std::endl;

int main()
{
    int unit_sales = 102;
    int& unit_sales_ref = unit_sales; //initialization of ref

    cout << "Original unit_sales: " << unit_sales << endl;
    cout << "Original unit_sales (using reference): " << unit_sales_ref << endl;

    cout << "--------Update unit_sales using reference------" << endl;
    unit_sales_ref = 266;

    cout << "Updated unit_sales: " << unit_sales << endl;
    cout << "Updated unit_sales (using reference): " << unit_sales_ref << endl;

    return 0;
}