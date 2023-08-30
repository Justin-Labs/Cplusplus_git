#include <iostream>         //client file

#include "BankAccount.h"

using std::cout;
using std::endl;

int main() {

    const BankAccount nora_account("Nora", 7634.45f);

    cout << nora_account.get_name() << endl;

    nora_account.withdraw(23.45f);
    
    return 0;
}