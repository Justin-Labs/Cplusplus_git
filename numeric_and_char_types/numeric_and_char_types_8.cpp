#include <iostream>

using std::cout;
using std::endl;

int main()
{
    cout << "Size of char is " << sizeof(char) << " bytes."<<endl;

    int lowercase_vowel ='a';  //single quotes are used for character literals.
                                // Had we used double qoutes C++ would have expected a string literal.
    int uppercase_vowel ='A';
   
    cout << "The lowercase vowel is: " << lowercase_vowel << endl;
    cout << "The uppercase vowel is: " << uppercase_vowel << endl;

    return 0;
}