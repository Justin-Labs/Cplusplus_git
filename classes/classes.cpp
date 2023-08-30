#include <iostream>

using namespace::std;

class BankAccount {
    string name {};     // Member variables of our BankAccount class
    float balance {0};
};

int main()
{
    BankAccount claudia_account;    //Creation of two objects, these are both BankAccount objects
    BankAccount peter_account;      //Also known as instances of the BankAccount class

    cout << "-------Claudia's account-------" << endl;
    cout << claudia_account.name << endl;       //redunderlining because those fields are private by default.
    cout << claudia_account.balance << endl;    //that means we're not allowed to access them from code not 
                                                //defined from inside the class.

    cout << "-------Peter's account-------" << endl;
    cout << peter_account.name << endl;
    cout << peter_account.balance << endl;

    return 0;
}