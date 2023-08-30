#include <string>           //Implementation file
#include <iostream>         // changed our code in the constructor so that the names of the input arguments into the 
                            //constructor are exactly the same as the names of our member variables.
                            //also removed the const ref variable types.
#include "BankAccount.h"

using std::string;
using std::cout;
using std::endl;

BankAccount::BankAccount(string name, float balance, string account_type) :     //for now this can work.
    name(name), balance(balance), account_type(account_type) {                 //these are in order that they are declared in header file.
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