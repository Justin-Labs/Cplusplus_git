#include <string>

#include "DualProgramStudent.h"

using std::string;

DualProgramStudent::DualProgramStudent(
    string name, string major, bool teaching_assistantship) : 
    Student(name), UndergradStudent(name, major), 
    GradStudent(name, teaching_assistantship) {
}

float DualProgramStudent::compute_tuition() const {
    float tuition = 45000 * 5;
    if (has_teaching_assistantship()) {
        tuition = tuition * 0.4;
    }

    return tuition;
}
