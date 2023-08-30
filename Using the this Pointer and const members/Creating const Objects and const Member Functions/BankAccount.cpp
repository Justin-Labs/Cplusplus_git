#include <string>           //Implementation file
#include <iostream>

#include "BankAccount.h"

using std::string;
using std::cout;
using std::endl;

BankAccount::BankAccount(string n, float b) 
    : name (name), balance(balance) {
    }

string BankAccount::get_name() {
    return name;
}

float BankAccount::get_balance() {
    return balance;
}

bool BankAccount::withdraw(float amount) {
    if (this->balance >= amount) {
        this->balance -= amount;
        cout << "New balance: " << this->balance
             << " after withdrawing: " << amount << endl;

             return true;
    }

    cout << "Insuffiecent balance" << this->balance
         << " could not withdraw: " << amount << endl;

    return false;
}

bool BankAccount::deposit(float amount) {
    if (amount >= 0) {
        this->balance += amount;

        cout << "New balance: " << this->balance
             << " after depositing: " << amount << endl;

        return true;
    }

    cout << "Unchanged balance: " << this->balance
         << " could not deposit: " << amount << endl;

    return false;
}