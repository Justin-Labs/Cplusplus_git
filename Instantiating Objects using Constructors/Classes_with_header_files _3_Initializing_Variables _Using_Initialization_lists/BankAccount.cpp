#include <string>           //Implementation file
#include <iostream>

#include "BankAccount.h"

using std::string;
using std::cout;
using std::endl;

BankAccount::BankAccount(string n, float b, string at) :
    name(n), balance(b), account_type(at) {                 //these are in order that they are declared in header file.
        cout << "BankAccount contructor for: " << name
             << " balance: " << balance
             << " account type: " << account_type << endl;
}

string BankAccount::get_name() {
    return name;
}

float BankAccount::get_balance() {
    return balance;
}

string BankAccount::get_account_type() {
    return account_type;
}