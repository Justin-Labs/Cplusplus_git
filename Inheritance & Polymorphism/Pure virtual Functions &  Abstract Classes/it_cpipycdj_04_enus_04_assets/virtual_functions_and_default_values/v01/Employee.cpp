#include <string>
#include <iostream>

#include "Employee.h"

using std::string;
using std::cout;
using std::endl;

Employee::Employee(string employee_type, string name, float salary) :
        employee_type(employee_type), name(name), salary(salary) {
}

string Employee::get_name() const {
    return name;
}

float Employee::get_salary() const {
    return salary;
}

float Employee::get_total_salary(float bonus_percent) const {
    cout << "Employee: get_total_salary() " << name 
         << " bonus %: " << bonus_percent << endl;

    return salary + salary * bonus_percent * 0.01;
}
