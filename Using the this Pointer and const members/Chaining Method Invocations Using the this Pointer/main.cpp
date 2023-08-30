#include <iostream>         //client file

#include "BankAccount.h"

using std::cout;
using std::endl;

int main() {

    BankAccount claudi_account("Claudia", 10000.45f); //local object on the stack.

    cout << "------------Withdraw and Deposit---------------" << endl;
    // Starts with .  and then -> for each subseqent chained invocation
    claudi_account.withdraw(300)->withdraw(200)->deposit(5000)->deposit(2500);

    return 0;
}