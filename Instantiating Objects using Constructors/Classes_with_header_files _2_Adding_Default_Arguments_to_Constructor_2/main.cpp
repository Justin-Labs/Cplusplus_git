#include <iostream>         //client file

#include "BankAccount.h"

using std::cout;
using std::endl;

int main() {

    BankAccount claudi_account("Claudia", 10000.45f, "savings");

    BankAccount peter_account("Peter", 5555.55f, "checking");


    cout << "------Claudia's account------";
    cout << claudi_account.get_name() << endl;
    cout << claudi_account.get_balance() << endl;
    cout << claudi_account.get_account_type() << endl;

    cout << "------Peter's account------";
    cout << peter_account.get_name() << endl;
    cout << peter_account.get_balance() << endl;
    cout << peter_account.get_account_type() << endl;

    return 0;
}