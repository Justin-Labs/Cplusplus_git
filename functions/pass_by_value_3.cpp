#include <iostream>
// pass by value semantics for pointers. This does update the contents
// since a pointer is just an address to the variable that's in the main
// functions scope. so even in the called function, it's using the address
// of the variable to modify it back in the main scope.
using std::cout;
using std::endl;

void update_revenue(double* revenue_ptr);

int main() 
{
    double bellevue_store_revenue = 100034.45;

    double* revenue_ptr = &bellevue_store_revenue;

    cout << "Bellevue revenue before update: "
         << bellevue_store_revenue << endl;

    update_revenue(revenue_ptr);

    cout << "Bellevue revenue after update: "
         << bellevue_store_revenue << endl;

    return 0;
}

void update_revenue(double* revenue_ptr) {
    cout << "In update_revenue" << endl;

    *revenue_ptr = 1.1 * (*revenue_ptr);
}
