#include <string>           //Implementation file
#include <iostream>         //Implementation of our constructor chaining

#include "BankAccount.h"

using std::string;
using std::cout;
using std::endl;
                                         //these are in order that they are declared in header file.   
BankAccount::BankAccount(string n) :     //1 input argument constructor, adds a default value
    BankAccount(n, 100) {                //invokes 2 argument constructor   
        cout << "BankAccount 1 argument constructor: "  << endl;
    }

BankAccount::BankAccount(string n, float b) :     //2 input arguments
    BankAccount(n, b, "checking") {               //invokes 3 argument constructor, adds a default value
        cout << "BankAccount 2 argument constructor: " << endl;
    }

BankAccount::BankAccount(string n, float b, string at) :     //3 input arguments
    BankAccount(n, b, at, 0) {                               //invokes four arugment constructor, adds a default value 
        cout << "BankAccount 3 argument constructor: " << endl;
    }

BankAccount::BankAccount(string n, float b, string at, float sc) :     //four input arguments for each of the member variables
    name(n), balance(b), account_type(at), service_charge(sc) {

        cout << "-------------------------" << endl;
        cout << "BankAccount 4 arugment constructor: " << name
             << " balance: " << balance
             << " account type: " << at 
             << " service charge: " << sc << endl;
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

float BankAccount::get_service_charge() {
    return service_charge;
}