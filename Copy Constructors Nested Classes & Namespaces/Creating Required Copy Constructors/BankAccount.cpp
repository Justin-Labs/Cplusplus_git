#include <string>
#include <iostream>

#include "BankAccount.h"

using std::string;
using std::cout;
using std::endl;

BankAccount::BankAccount(string name, float balance) :
    name(name), balance(balance) {
    
    credit_card = new CreditCard("Visa", 1000);
    cout << "Constructing account: " << name << " balance: " << balance << endl;
}

void BankAccount::set_credit_limit(float l) {
    credit_card->set_limit(l);
}

void BankAccount::set_balance(float amount) {
    balance = amount;
}

void BankAccount::display() const {
    cout << "Name: " << name << " balance: " << balance << endl;
    credit_card->display();

    cout << "Address of CreditCard variable: " << credit_card << endl;
}

BankAccount::~BankAccount() {
    delete credit_card;

    cout << "Destructing account: " << name << " balance: " << balance << endl;
}
