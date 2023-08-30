#include <string>
#include <iostream>

#include "BankAccount.h"

using std::string;
using std::cout;
using std::endl;
using std::to_string;  //second time using this one 

BankAccount::BankAccount(string name, float balance) :
    name(name), balance(balance), credit_card("Mastercard", 1000) {
    
}

void BankAccount::update_credit_card(std::string n) {
    credit_card.name = n;           //accessing private members of credit card
}

void BankAccount::update_credit_limit(float l) {
    credit_card.limit = l;          // accessing private members of credit card
}

void BankAccount::display() const {
    cout << "-----------------------------" << endl;
    cout << "Name: " << name << " balance: " << balance << endl;
    cout << "Credit card: " << credit_card.name 
         << " limit: " << credit_card.limit << endl;
    cout << "-----------------------------" << endl;
}
