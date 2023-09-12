#include <iostream>
#include "Employee.h"
#include "FulltimeEmployee.h"
#include "EngineeringEmployee.h"

using std::cout;
using std::endl;


int main()
{
    EngineeringEmployee emp_nina {"Nina", 70000, 10, 30, 500};

    float base_salary = emp_nina.Employee::get_total_salary();
    float base_plus_bonus_salary = emp_nina.FulltimeEmployee::get_total_salary();
    float base_plus_bonus_plus_stock_salary = emp_nina.get_total_salary();

    cout << "------ EngineeringEmployee ------" << endl;
    cout << "Total salary: " << emp_nina.get_total_salary() << endl;
    cout << "Stock: " << base_plus_bonus_plus_stock_salary - base_plus_bonus_salary << endl;
    cout << "Bonus: " << base_plus_bonus_salary - base_salary << endl;
    cout << "Base: " << base_salary << endl;
}


