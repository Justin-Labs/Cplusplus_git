#include <string>
#include <iostream>

#include "FulltimeEmployee.h"

using std::string;
using std::cout;
using std::endl;

FulltimeEmployee::FulltimeEmployee(string name, float salary, float base_bonus_percent) :
    Employee("fulltime", name, salary), base_bonus_percent(base_bonus_percent) {
}

float FulltimeEmployee::get_total_salary(float bonus_percent) const {
    cout << "FulltimeEmployee: get_total_salary() " << get_name() 
         << " bonus %: " << bonus_percent << endl;

    float final_bonus_percent = base_bonus_percent + bonus_percent;

    return  get_salary() + get_salary() * final_bonus_percent * 0.01;
}
