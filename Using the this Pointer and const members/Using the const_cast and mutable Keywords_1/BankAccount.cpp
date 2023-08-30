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
    return name;
}

float BankAccount::get_balance() const{
    balance_check_count++;

    cout << "You have checked your balance " 
         << balance_check_count << " time(s) ";
         
    return balance;
}
