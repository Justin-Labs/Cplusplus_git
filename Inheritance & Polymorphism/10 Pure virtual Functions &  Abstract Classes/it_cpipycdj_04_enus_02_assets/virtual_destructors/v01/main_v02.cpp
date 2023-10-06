#include <iostream>
#include <memory>
#include "Employee.h"
#include "FulltimeEmployee.h"

using std::cout;
using std::endl;
using std::unique_ptr;

void display_total_salary(const Employee& emp_ref) {
   cout << emp_ref.get_total_salary() << endl << endl;
}

int main()
{
    Employee* emp_joan = new FulltimeEmployee{"Joan", 60000, 7};

    unique_ptr<Employee> emp_janice = 
        std::make_unique<FulltimeEmployee>("Janice", 50000, 5.5);

    cout << "------ FulltimeEmployee ------" << endl;
    display_total_salary(*emp_joan);

    cout << "------ FulltimeEmployee ------" << endl;
    display_total_salary(*emp_janice);

    delete emp_joan;
    emp_joan = nullptr;
}


