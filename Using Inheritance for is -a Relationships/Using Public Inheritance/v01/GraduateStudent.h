#pragma once
#include <string>
#include "Student.h"

class GraduateStudent : public Student {    //graduateStudent derives from  the student class. The type of this inheritance is public.
  public:
    bool scholarship;

    GraduateStudent() = default;

    bool has_scholarship() const;
};
