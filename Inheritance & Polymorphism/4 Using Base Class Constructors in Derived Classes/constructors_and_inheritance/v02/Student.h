#pragma once
#include <string>

class Student {
  private:
    std::string name;
    float gpa;
    std::string major;

  public:

    Student();

    Student(std::string name);

    Student(std::string name, float gpa);

    Student(std::string name, float gpa, std::string major);

    std::string get_name() const;

    float get_gpa() const;

    std::string get_major() const;
};
