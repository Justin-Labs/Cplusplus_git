#include <string>           //Implementation file
#include <iostream>

#include "BankAccount.h"

using std::string;
using std::cout;
using std::endl;

BankAccount::BankAccount(string n, float b) {
    name = n;
    balance = b;

    cout << "BankAccount constructor for: " << name
         << " balance: " << balance << endl;
}

string BankAccount::get_name() {
    return name;
}

float BankAccount::get_balance() {
    return balance;
}