#include <string>
#include <iostream>

#include "BankAccount.h"

using std::string;
using std::cout;
using std::endl;

BankAccount::BankAccount(string name, float balance, string account_type) :
    name(name), balance(balance), account_type(account_type) {
    
    cout << "Constructing: " << name << " balance: " << balance << endl;
}

BankAccount::BankAccount(const BankAccount& bank_account) :         // making an explicit copy constructor,
    name(bank_account.name),                                        // copy constructor must pass by const reference.
    balance(bank_account.balance),                                  // otherwise compiler error by inifinite recursion.
    account_type(bank_account.account_type) {
    
    cout << "Copy constructing: " << name << " balance: " << balance << endl;
}

string BankAccount::get_name() const {
    return name;
}

float BankAccount::get_balance() const {
    return balance;
}

void BankAccount::set_balance(float amount) {
    balance = amount;
}

string BankAccount::get_account_type() const {
    return account_type;
}

void BankAccount::display() const {
    cout << "Name: " << name << " balance: " << balance 
         << " account type: " << account_type << endl;
}

BankAccount::~BankAccount() {
    cout << "Destructing: " << name << " balance: " << balance << endl;
}
