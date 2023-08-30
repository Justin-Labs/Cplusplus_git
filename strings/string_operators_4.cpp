#include <iostream>
#include <string>
// This is an example of the hazards of operator overloading.. will cause compiler error.
using std::cout;
using std::endl;
using std::string;

int main()
{
  //  string proverb = "When one door shuts " + "another opens"; //invalid operands of types 'const char [21]' and 'const char [14]' to binary 'operator+'
                                                                //string proverb = "When one door shuts " + "another opens";
    //This is because these are treated as string literals not string objects. Which is treated like a const char*, that is a char* array.
    // This is easily solved by storing these literals in string objects, then use + operator.
    cout << "Concatenated string: " << proverb << endl;

    return 0;
}

    