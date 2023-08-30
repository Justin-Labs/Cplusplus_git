#pragma once            //header file
#include <string>

class BankAccount {

    private:
        const std::string name {};
        const float balance {0};
        const std::string account_type{};

    public:
        BankAccount() = default;
        
        BankAccount(std::string n, float b, std::string at);

        std::string get_name();

        float get_balance();

        std::string get_account_type();
};