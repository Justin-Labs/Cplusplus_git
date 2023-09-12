#include <iostream>
#include "Employee.h"
#include "ContractEmployee.h"

using std::cout;
using std::endl;

void display_total_salary(const Employee& emp) {
   cout << emp.get_total_salary() << endl << endl;
}

int main()
{
    ContractEmployee emp_terence {"Terence", 60000, 10, 200};

    cout << "------ ContractEmployee ------" << endl;
    cout << "Name: " << emp_terence.get_name() << endl;
    cout << "Total salary: " << emp_terence.get_total_salary() << endl;

    cout << "------ ContractEmployee (no longer sliced!) ------" << endl;
    cout << "Name: " << emp_terence.get_name() << endl;
    display_total_salary(emp_terence);
}


