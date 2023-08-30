#include <string>
#include <iostream>

#include "BankAccount.h"

using std::string;
using std::cout;
using std::endl;

BankAccount::BankAccount(string name, float balance) :                                      //Parameterized constructor
    name(name), balance(balance) {                                                          //
                                                                                            //
    credit_card = new CreditCard("Visa", 1000);                                             //
    cout << "Constructing account: " << name << " balance: " << balance << endl;            //
}

BankAccount::BankAccount(const BankAccount& bank_account):                                  //All part of fix for copy constructor for object pointers
    name(bank_account.name), balance(bank_account.balance) {                                //
                                                                                            //
        credit_card = new CreditCard(*(bank_account.credit_card));                          //Copy constructor take in input argument of type const, CreditCard reference.
        cout << "Copy constructing account: " << name << " balance: " << balance << endl;   //
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
