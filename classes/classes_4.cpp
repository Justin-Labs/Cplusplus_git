#include <iostream>

using namespace::std;
// setting up access to information properly.
class BankAccount {
    private:
    string name {};     
    float balance {0};

    public:

    void set_name(string n) {   //setter methods, because all they do is set a value
        name = n;               //of a member variable.
    }

    string get_name() {     //called getter methods, because all they do is return a value
        return name;        //of a member variable.
    }

    void set_balance(float b) {
        balance = b;
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
    claudia_account.set_name("Claudia");
    claudia_account.set_balance(10000.34f); 
   
    cout << claudia_account.get_name() << endl;       
    cout << claudia_account.get_balance() << endl;      
                                                
    cout << "-------Peter's account-------" << endl;
    peter_account.set_name("Peter");
    peter_account.set_balance(5555.55f);

    cout << peter_account.get_name() << endl;
    cout << peter_account.get_balance() << endl;

    return 0;
}