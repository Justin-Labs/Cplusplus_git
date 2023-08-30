#include<iostream>

using std::cout;
using std::endl;


int main()
{
    int balance = 1000; //Declaring and initializing a variable
    int withdrawal = 200;
    int final_balance = balance - withdrawal; //Dedeclaring and intializing a function

    cout << "My account balance is: $" << balance << endl;
    cout << "I need to withdraw: $" << withdrawal << endl;
    cout << "My final account balance is: $" << final_balance << endl;

    return 0; 
}