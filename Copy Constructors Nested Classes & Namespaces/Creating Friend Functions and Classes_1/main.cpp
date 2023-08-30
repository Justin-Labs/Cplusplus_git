#include <iostream>

#include "BankAccount.h"

using std::cout;
using std::endl;

int main()
{
  BankAccount lily_account("Lily", 1300.00f);

  lily_account.withdraw(50);
  lily_account.withdraw(300);

  lily_account.deposit(3000);
  lily_account.deposit(-30);

  lily_account.withdraw(20000);

  display_transaction_report(lily_account);

  return 0;
}
 