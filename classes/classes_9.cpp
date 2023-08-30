#include <iostream>

using namespace::std;
// thought instructor was going to show a good way to use but didn't
class BankAccount {

    private:
        string name {};     
        float balance {0};

        string get_name() {
            return name;
        }

        float get_balance() {
            return balance;
        }
    

    public:

    BankAccount() = default;        //default constructor.

    BankAccount(string n, float b) {    //a special method. same name as the class itself.
        name = n;                       //constructor that takes in two input arguments.
        balance = b;

        cout << "BankAccount constructor for: " << name
            << " balance: " << balance << endl;
    }
};

int main()
{
    BankAccount claudia_account("Claudia", 10000.45f);    
    BankAccount peter_account{"Peter", 5555.55f}; 

    BankAccount sarah_account;   

    cout << "------Claudia's account------" << endl;
    cout << claudia_account.get_name() << endl;
    cout << claudia_account.get_balance() << endl;

    cout << "------Peter's account------" << endl;
    cout << peter_account.get_name() << endl;
    cout << peter_account.get_balance() << endl;

    cout << "------Sarah's account------" << endl;
    cout << sarah_account.get_name() << endl;
    cout << sarah_account.get_balance() << endl;

    return 0;
}