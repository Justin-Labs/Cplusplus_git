#include <iostream>
// shows how compilier will not allow unitilized ref.
using std::cout;
using std::endl;

int main()
{
    int unit_sales = 102;
    int& unit_sales_ref;

    unit_sales_ref = unit_sales;

    return 0;
}