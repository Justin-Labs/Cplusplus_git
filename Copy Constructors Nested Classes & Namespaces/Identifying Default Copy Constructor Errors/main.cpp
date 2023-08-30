#include <iostream>

#include "BankAccount.h"

using std::cout;
using std::endl;

int main()
{
  BankAccount lily_account("Lily", 13466.11f);

  BankAccount lily_account_copy {lily_account};
  lily_account_copy.set_balance(20000);
  lily_account_copy.set_credit_limit(5000);

  cout << "------------- Original ----------------" << endl;
  lily_account.display();

  cout << "------------- Copy ----------------" << endl;
  lily_account_copy.display();

  cout << "------------- End of main() destructors will be called  ----------------" << endl;

  return 0;
}
