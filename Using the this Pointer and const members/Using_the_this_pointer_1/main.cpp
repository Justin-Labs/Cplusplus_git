#include <iostream>         //client file

#include "BankAccount.h"

using std::cout;
using std::endl;

int main() {

    BankAccount claudi_account("Claudia", 10000.45f);
    BankAccount peter_account("Peter", 6667.34f);

    cout << "----------Withdraw and Deposit----------" << endl;

    claudi_account.withdraw(300);
    peter_account.deposit(4000);

    claudi_account.display();
    peter_account.display();

    return 0;
}