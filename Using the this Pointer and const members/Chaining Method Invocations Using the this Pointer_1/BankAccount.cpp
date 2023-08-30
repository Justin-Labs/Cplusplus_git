#include <string>           //Implementation file
#include <iostream>

#include "BankAccount.h"

using std::string;
using std::cout;
using std::endl;

BankAccount::BankAccount(string n, float b) 
    : name (n), balance(b) {
    }

void BankAccount::display() {
    cout << "Name: " << name << " balance: " << balance << endl;
    cout << "Address of account using the 'this' pointer: "
         << this << endl;           // accessing the hidden this pointer. will be of type BankAccount*
}

BankAccount& BankAccount::withdraw(float amount) {      //matched the reference return type
    if (balance >= amount) {
        balance -= amount;
        cout << "New balance: " << balance
             << " after withdrawing: " << amount << endl;

             return *this;                              // and derefereced the this pointer
    }

    cout << "Insuffiecent balance" << balance
         << " could not withdraw: " << amount << endl;

    return *this;
}

BankAccount& BankAccount::deposit(float amount) {
    if (amount >= 0) {
        balance += amount;

        cout << "New balance: " << balance
             << " after depositing: " << amount << endl;

        return *this;
    }

    cout << "Unchanged balance: " << balance
         << " could not deposit: " << amount << endl;

    return *this;
}