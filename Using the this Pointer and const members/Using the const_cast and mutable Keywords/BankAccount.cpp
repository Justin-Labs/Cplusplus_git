#include <string>           //Implementation file
#include <iostream>

#include "BankAccount.h"

using std::string;
using std::cout;
using std::endl;

BankAccount::BankAccount(string name, float balance) 
    : name(name), balance(balance) {
    }

string BankAccount::get_name() const{       
    cout << "const version of get_name()" << endl;
    return name;
}

float BankAccount::get_balance() const{
    cout << "const version of get_balance()" << endl;
    return balance;
}

void BankAccount::set_name(string n) {
    name = n;
}

void BankAccount::set_balance(float b) {
    balance = b;
}