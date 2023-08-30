#include <iostream>

using namespace::std;
// setting up access to information properly.
class BankAccount {
    private:
    string name {};     
    float balance {0};

    public:
    string get_name() {     //called getter methods, because all they do is return a value
        return name;        //of a member variable.
    }

    float get_balance() {
        return balance;
    }
};

int main()
{
    BankAccount claudia_account;    
    BankAccount peter_account;      

    cout << "-------Claudia's account-------" << endl;
    cout << claudia_account.get_name() << endl;       
    cout << claudia_account.get_balance() << endl;      
                                                
    cout << "-------Peter's account-------" << endl;
    cout << peter_account.get_name() << endl;
    cout << peter_account.get_balance() << endl;

    return 0;
}