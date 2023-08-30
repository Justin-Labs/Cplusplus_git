#pragma once            //header file
#include <string>
//There is a good reason why we don't have any using statements in this header file. The code in a header
//file is going to be included in some other files, typically, .cpp files. If a header file had a using
//statement, then any source files other other header files, which #include this header file, would
//also end up having that using construct, and that might not be a good thing, name conflicts might
//arise, or that function might end up pulling in more code and more elements from a namespace then it
//wanted to.

class BankAccount {
    private:
    std::string name;
    float balance;

    public:

        BankAccount(std::string n, float b);

        std::string get_name() const; //const placed on the right to declare the method as const
                                      //if it was on the far left it would declare it's return type as const.
        float get_balance() const;

        bool withdraw(float amount);

        bool deposit(float amount);
};