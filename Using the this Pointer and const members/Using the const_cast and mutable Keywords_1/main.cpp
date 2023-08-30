#include <iostream>         //client file

#include "BankAccount.h"k

using std::cout;
using std::endl;

int main() {

    const BankAccount harry_account("Harry", 7345.33f);

    cout << "---------- checking the balance -----------" << endl;
    cout << harry_account.get_balance() << endl;
    cout << harry_account.get_balance() << endl;
    cout << harry_account.get_balance() << endl;
    
    return 0;
}