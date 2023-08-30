#include <iostream>

#include "BankAccount.h"

using std::cout;
using std::endl;

int main()
{
  BankAccount lily_account("Lily", 1300.00f);

  lily_account.display();

  lily_account.update_credit_card("Amex");
  lily_account.update_credit_limit(5000);

  lily_account.display();

  return 0;
}
 