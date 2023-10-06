#pragma once
#include <string>
#include "Employee.h"

class FulltimeEmployee : public Employee {

  private:
    float base_bonus_percent;

  public:
    FulltimeEmployee(std::string name, float salary, float base_bonus_percent);

    float get_total_salary(float bonus_percent = 8) const override;
};
