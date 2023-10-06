#include <iostream>
#include "Employee.h"
#include "FulltimeEmployee.h"

using std::cout;
using std::endl;

int main()
{
    Employee emp_joan {"parttime", "Joan", 20000};
    FulltimeEmployee emp_janice {"Janice", 50000, 3};

    cout << "------ Employee ------" << endl;
    cout << "Total salary: " << emp_joan.get_total_salary() << endl;

    cout << "------ FulltimeEmployee ------" << endl;
    cout << "Total salary: " << emp_janice.get_total_salary() << endl;
}


