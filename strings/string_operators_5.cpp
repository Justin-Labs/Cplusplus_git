#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

int main()
{
    string part_2 = "another opens";
    
    string proverb = "When one door shuts " + part_2; //works because one of the two operands is a string object.

    cout << "Concatenated string: " << proverb << endl;

    return 0;
}

    