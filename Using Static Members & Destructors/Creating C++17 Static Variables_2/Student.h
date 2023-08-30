#pragma once            //header file
#include <string>
#include <map>
//There is a good reason why we don't have any using statements in this header file. 

class Student {

    private:
        static inline std::map<std::string, int> student_major_map {};

        std::string name;
        float gpa;
        std::string major;

    public:

        Student(std::string name, float gpa, std::string major);

        std::string get_name() const;

        float get_gpa() const;

        std::string get_major() const;

        int get_major_count(std::string major) const;
};