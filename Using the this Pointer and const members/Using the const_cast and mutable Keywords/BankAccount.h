#pragma once            //header file
#include <string>
//There is a good reason why we don't have any using statements in this header file. 

class BankAccount {
    private:
    std::string name;
    float balance;

    public:

        BankAccount(std::string n, float b);

        std::string get_name() const; //const placed on the right to declare the method as const
                                      //if it was on the far left it would declare it's return type as const.
        float get_balance() const;

        void set_name(std::string n);

        void set_balance(float b);
};