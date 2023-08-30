#include <string>           //Implementation file
#include <iostream>

#include "BankAccount.h"

using std::string;
using std::cout;
using std::endl;

BankAccount::BankAccount(string n, float b) 
    : name(name), balance(balance) {
    }

string BankAccount::get_name() const{       //since we changed it in the .h file, we had to match the type here
    return name;
}

float BankAccount::get_balance() const{
    return balance;
}

bool BankAccount::withdraw(float amount) {
    if (balance >= amount) {
        balance -= amount;
        cout << "New balance: " << balance
             << " after withdrawing: " << amount << endl;

             return true;
    }

    cout << "Insuffiecent balance" << balance
         << " could not withdraw: " << amount << endl;

    return false;
}

bool BankAccount::deposit(float amount) {
    if (amount >= 0) {
        balance += amount;

        cout << "New balance: " << balance
             << " after depositing: " << amount << endl;

        return true;
    }

    cout << "Unchanged balance: " << balance
         << " could not deposit: " << amount << endl;

    return false;
}