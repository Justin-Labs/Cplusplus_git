#include <iostream>
#include "Employee.h"
#include "FulltimeEmployee.h"
#include "ContractEmployee.h"

using std::cout;
using std::endl;

int main()
{
    Employee emp_joan {"parttime", "Joan", 20000};
    FulltimeEmployee emp_janice {"Janice", 50000, 5.5};
    ContractEmployee emp_terence {"Terence", 60000, 10, 200};

    Employee* joan_ptr {&emp_joan};
    Employee* janice_ptr {&emp_janice};
    Employee* terence_ptr {&emp_terence};

    cout << "------ Employee ------" << endl;
    cout << joan_ptr->get_total_salary() << endl;

    cout << "------ FulltimeEmployee ------" << endl;
    cout << janice_ptr->get_total_salary() << endl;

    cout << "------ ContractEmployee ------" << endl;
    cout << terence_ptr->get_total_salary() << endl;
}

