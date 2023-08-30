#include <iostream>         //client file

#include "BankAccount.h"

using std::cout;
using std::endl;

int main() {

    BankAccount claudi_account("Claudia", 10000.45f);
    BankAccount peter_account("Peter", 6667.34f);

    cout << "Address of claudia_account: " << &claudi_account << endl;
    claudi_account.display();

    cout << "---------------------------" << endl;
    cout << "Address of peter_account: " << &peter_account << endl;
    peter_account.display();

    return 0;
}