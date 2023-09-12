#include <string>
#include <iostream>

#include "FulltimeEmployee.h"

using std::string;
using std::cout;
using std::endl;

FulltimeEmployee::FulltimeEmployee(string name, float salary, float bonus_percent) :
    Employee("fulltime", name, salary), bonus_percent(bonus_percent) {
}

float FulltimeEmployee::get_total_salary() const {
    cout << "FulltimeEmployee: get_total_salary() " << get_name()  << endl;

    float base_salary = Employee::get_total_salary();

    return  base_salary + base_salary * bonus_percent * 0.01;
}
