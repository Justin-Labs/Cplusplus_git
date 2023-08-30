#pragma once            //header file
#include <string>
//There is a good reason why we don't have any using statements in this header file. 

class BankAccount {
    private:
        std::string name;
        float balance;

        mutable unsigned int balance_check_count = 0;       //newly added variable with mutable keyword.
                //indication to the compiler to be relaxed about enforcing constness on balance_check_count..
                //will allow a const method to change balance_check_count.
    public:

        BankAccount(std::string n, float b);

        std::string get_name() const;

        float get_balance() const;
};