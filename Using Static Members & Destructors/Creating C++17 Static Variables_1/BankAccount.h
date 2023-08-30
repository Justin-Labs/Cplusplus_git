#pragma once            //header file
#include <string>
//There is a good reason why we don't have any using statements in this header file. 

class BankAccount {
    private:
        std::string name;
        float balance;
        std::string account_type;

    public:

        BankAccount(std::string name, float balance, std::string account_type);

        std::string get_name() const;

        float get_balance() const;

        void set_balance(float amount);

        std::string get_account_type() const;

        void display() const;

        ~BankAccount();
};