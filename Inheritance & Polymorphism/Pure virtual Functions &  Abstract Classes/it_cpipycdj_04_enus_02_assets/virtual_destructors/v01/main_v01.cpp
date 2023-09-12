#include <iostream>
#include "Employee.h"
#include "FulltimeEmployee.h"

using std::cout;
using std::endl;


void display_total_salary(const Employee& emp_ref) {
   cout << emp_ref.get_total_salary() << endl << endl;
}

int main()
{
    FulltimeEmployee emp_joan {"Joan", 60000, 7};
    FulltimeEmployee emp_janice {"Janice", 50000, 5.5};

    cout << "------ FulltimeEmployee ------" << endl;
    display_total_salary(emp_joan);

    cout << "------ FulltimeEmployee ------" << endl;
    display_total_salary(emp_janice);
}


