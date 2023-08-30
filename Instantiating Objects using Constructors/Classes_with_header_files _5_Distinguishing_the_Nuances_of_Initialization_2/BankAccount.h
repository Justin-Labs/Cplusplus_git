#pragma once            //header file (no longer const ref), now does have initalize here, do so in client main file.
#include <string>

class BankAccount {

    private:
        std::string name{};
        float balance{0};
        std::string account_type{};

    public:
        BankAccount() = default;
        
        BankAccount(std::string n, float b, std::string at);

        std::string get_name();

        float get_balance();

        std::string get_account_type();
};