#pragma once            //header file
#include <string>
//There is a good reason why we don't have any using statements in this header file. 
#include "Program.h"

class Student {

    private:

        std::string name;
        float gpa;
        std::string major;
        Program* program;

    public:

        Student();

        Student(std::string name, float gpa, std::string major);

        std::string get_name() const;

        float get_gpa() const;

        std::string get_major() const;

        ~Student();      
};