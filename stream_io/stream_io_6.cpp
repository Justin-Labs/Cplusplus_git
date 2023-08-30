#include <iostream>
//Read in a single character using cin.get()
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    char some_char;
        
    cout << "What's the first three letters in your name?: ";
    
    cin.get(some_char); //overloaded form
    cout << "First char in the stream " << some_char << endl;

    cin.get(some_char); //overloaded form
    cout << "Second char in the stream " << some_char << endl;

    cin.get(some_char); //overloaded form
    cout << "Third char in the stream " << some_char << endl;
 
    return 0;
}