#include <iostream>         //client file

#include "BankAccount.h"

using std::cout;
using std::endl;

int main() {

    const BankAccount nora_account("Nora", 7634.45f);

    nora_account.balance += 10;    // won't work since it's a const

    return 0;
}