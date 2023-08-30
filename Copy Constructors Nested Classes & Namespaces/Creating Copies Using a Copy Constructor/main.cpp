#include <iostream>

#include "BankAccount.h"

using std::cout;
using std::endl;

int main()
{
  BankAccount james_account("James", 6487.23f, "savings");

  BankAccount james_copy {james_account};

  cout << "--------------Original------------" << endl;
  james_account.display();

  cout << "--------------Copy------------" << endl;
  james_copy.display();

  james_copy.set_balance(10000);

  cout << "--------------Copy (changed)------------" << endl;
  james_copy.display();

  cout << "--------------Original (unchanged) ------------" << endl;
  james_account.display();


  return 0;
}
