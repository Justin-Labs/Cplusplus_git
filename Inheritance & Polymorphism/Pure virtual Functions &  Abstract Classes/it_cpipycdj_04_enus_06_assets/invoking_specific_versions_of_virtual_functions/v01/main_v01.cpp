#include <iostream>
#include "Employee.h"
#include "FulltimeEmployee.h"
#include "EngineeringEmployee.h"

using std::cout;
using std::endl;


int main()
{
    EngineeringEmployee emp_nina {"Nina", 70000, 10, 30, 500};

    cout << "------ EngineeringEmployee ------" << endl;
    cout << "Total salary: " << emp_nina.get_total_salary() << endl;
}


