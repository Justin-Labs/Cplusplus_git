#include <iostream>

using namespace::std;

class BankAccount {
    public:             //changes access to public
    string name {};     
    float balance {0};
};

int main()
{
    BankAccount claudia_account;    
    BankAccount peter_account;      

    cout << "-------Claudia's account-------" << endl;
    claudia_account.name = "Claudia";
    claudia_account.balance = 10000;

    cout << claudia_account.name << endl;       
    cout << claudia_account.balance << endl;      
                                                
    cout << "-------Peter's account-------" << endl;
    peter_account.name = "Peter";
    peter_account.balance = 5555;

    cout << peter_account.name << endl;
    cout << peter_account.balance << endl;

    return 0;
}