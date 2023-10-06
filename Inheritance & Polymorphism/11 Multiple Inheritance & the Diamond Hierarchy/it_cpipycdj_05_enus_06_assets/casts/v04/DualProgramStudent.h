#pragma once
#include <string>
#include "UndergradStudent.h"
#include "GradStudent.h"

class DualProgramStudent : public UndergradStudent, public GradStudent {
  private:
    std::string name;

  public:
    DualProgramStudent(std::string name, std::string major, bool teaching_assistantship);

    float compute_tuition() const override;
};
