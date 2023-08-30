#include <string>           //Implementation file
#include <iostream>

#include "BankAccount.h"

using std::string;
using std::cout;
using std::endl;

BankAccount::BankAccount(const string& n, const float& b, const string& at) :
    name(n), balance(b), account_type(at) {                 //these are in order that they are declared in header file.
        cout << "BankAccount contructor for: " << name
             << " balance: " << balance
             << " account type: " << account_type << endl;
}

const string& BankAccount::get_name() {
    return name;
}

const float& BankAccount::get_balance() {
    return balance;
}

const string& BankAccount::get_account_type() {
    return account_type;
}