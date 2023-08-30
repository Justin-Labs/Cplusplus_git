#include <iostream>

using namespace::std;
// setting up access to information properly.
class BankAccount {
    private:
    string name {};     
    float balance {0};

    public:
    

    BankAccount(string n, float b) {    //a special method. same name as the class itself.
        name = n;                       //constructor that takes in two input arguments.
        balance = b;

        cout << "BankAccount constructor for: " << name
            << " balance: " << balance << endl;
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
    BankAccount claudia_account("Claudia", 10000.45f);    
    BankAccount peter_account{"Peter", 5555.55f};      

    return 0;
}