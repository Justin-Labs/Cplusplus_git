#include <iostream>         //client file

#include "BankAccount.h"

using std::cout;
using std::endl;

int main() {

    const BankAccount nora_account("Nora", 7654.45f);
    BankAccount harry_account("Harry", 7345.33f);


    cout << "--------- const object -----------" << endl;
    cout << nora_account.get_name() << endl;
    cout << nora_account.get_balance() << endl;

    cout << "--------non-const object---------" << endl;
    cout << harry_account.get_name() << endl;
    cout << harry_account.get_balance() << endl;
    
    return 0;
}