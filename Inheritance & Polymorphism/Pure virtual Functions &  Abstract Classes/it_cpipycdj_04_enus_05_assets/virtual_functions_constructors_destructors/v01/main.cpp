#include <iostream>
#include "Employee.h"
#include "FulltimeEmployee.h"

using std::cout;
using std::endl;

int main()
{
    FulltimeEmployee emp_janice {"Janice", 50000, 10};

    cout << "------ FulltimeEmployee ------" << endl;
    cout << "Total salary: " << emp_janice.get_total_salary() << endl;
    cout << "------------------------------" << endl;
}
