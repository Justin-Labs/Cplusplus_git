#include <iostream>
//Read in a single character using cin.get()
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    char first_char;
        
    cout << "What's the first character in your name?: ";
    
    cin.get(first_char); //overloaded form

    cout << "You entered " << first_char << endl;
 
    return 0;
}