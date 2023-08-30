#include <iostream>

using std::cout;
using std::endl;


int main()
{
    int balance = 1000.45; //Assignment notation. This might give a warning during build since implicit conversion from a double to an int
    //My current compilier doesn't give this warning.
    //int balance(1000.45); //Function notation. Will give same warning, depending on compilier.
    //int balance{1000.45}; //Braced initializer. This will throw an error during compilation. even on my compilier.
    cout << "My current account balance is: $" << balance << endl;

    return 0; 
}