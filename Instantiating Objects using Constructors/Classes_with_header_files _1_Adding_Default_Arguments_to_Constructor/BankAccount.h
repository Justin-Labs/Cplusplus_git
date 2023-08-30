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
        std::string name {};
        float balance {0};

    public:
    //    BankAccount() = default;
                                // This causes confusion for compiler since both have default values..
        BankAccount(std::string n = "Unknown", float b = 100.0f);

        std::string get_name();

        float get_balance();
};