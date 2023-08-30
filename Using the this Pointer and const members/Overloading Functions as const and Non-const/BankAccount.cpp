#include <string>           //Implementation file
#include <iostream>

#include "BankAccount.h"

using std::string;
using std::cout;
using std::endl;

BankAccount::BankAccount(string name, float balance) 
    : name(name), balance(balance) {
    }

string BankAccount::get_name() const{       //since we changed it in the .h file, we had to match the type here
    cout << "const version of get_name()" << endl;
    return name;
}

float BankAccount::get_balance() const{
    cout << "const version of get_balance()" << endl;
    return balance;
}

string& BankAccount::get_name() {           // overloaded version matching the type reference
    cout << "non_const version of get_name()" << endl;
    return name;
}

float& BankAccount::get_balance() {
    cout << "non_const version of get_balance()" << endl;
    return balance;
}