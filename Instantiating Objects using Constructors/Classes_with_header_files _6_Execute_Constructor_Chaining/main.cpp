#include <iostream>         //client file

#include "BankAccount.h"

using std::cout;
using std::endl;

int main() {

    BankAccount claudi_account("Claudia", 10000.45f, "savings", 1.1f);

    BankAccount peter_account("Peter", 5555.55f, "checking");

    BankAccount sarah_account("Sarah, 234.34f");

    BankAccount greg_account("Greg");

    return 0;
}