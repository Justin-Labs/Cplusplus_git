#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

int main()
{
    string proverb_1 = "a bad workman always blames his tools"; //assignment notation
    string proverb_2 {"A journey of thousand miles begins with a single step"}; // braced initializer
    string empty_string;

    cout << "C++ style string: " << proverb_1 << endl;
    cout << "Another C++ style string: " << proverb_2 << endl;
    cout << "Empty string: " << empty_string << endl;

    return 0;
}