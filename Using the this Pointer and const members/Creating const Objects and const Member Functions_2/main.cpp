#include <iostream>         //client file

#include "BankAccount.h"

using std::cout;
using std::endl;

int main() {

    const BankAccount nora_account("Nora", 7634.45f);

    cout << nora_account.get_name() << endl;
    cout << nora_account.get_balance() << endl;

//    nora_account.withdraw(23.45f);        can't invoke non const methods on a const object.
    
    return 0;
}