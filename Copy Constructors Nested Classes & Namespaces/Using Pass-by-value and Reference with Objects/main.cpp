#include <iostream>

#include "BankAccount.h"

using std::cout;
using std::endl;

void update_and_display_account_details(BankAccount bank_account) {
  bank_account.set_balance(9999);     

  bank_account.display();
}

int main()
{
  BankAccount james_account("James", 4687.23f, "savings");

  cout << "-------------Before function-------------" << endl;
  update_and_display_account_details(james_account);
  cout << "-------------After function--------------" << endl;

  return 0;
}
