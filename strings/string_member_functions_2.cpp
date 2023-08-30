#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

int main()
{
    string proverb; //C++ will automatically initialize as an empty string

    cout << "empty string proverb" << proverb << endl;
    cout << "length of proverb: " << proverb.length() << endl;

    proverb.append("Once ").append("bitten ").append("twice ").append("shy"); //chaining of method invocations

    cout << "proverb (after update): " << proverb << endl;
    cout << "length of proverb (after update): " << proverb.length() << endl;

    return 0;
}

    