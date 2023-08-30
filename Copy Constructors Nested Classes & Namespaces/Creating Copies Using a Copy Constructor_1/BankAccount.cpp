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
