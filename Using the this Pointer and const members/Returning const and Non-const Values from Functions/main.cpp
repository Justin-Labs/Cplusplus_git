#include <iostream>         //client file

#include "BankAccount.h"

using std::cout;
using std::endl;

int main() {

    BankAccount harry_account("Harry", 7345.33f);

    cout << "---------update non-const object -----------" << endl;
    harry_account.get_name() = "Harry Smith";
    harry_account.get_balance() = 10000.1f;

    cout << "--------non-const object---------" << endl;
    cout << harry_account.get_name() << endl;
    cout << harry_account.get_balance() << endl;
    
    return 0;
}