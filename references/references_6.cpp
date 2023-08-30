#include <iostream>
#include <string>
// using the variable name to change its contents which our const ref uses.
// referred to as bitwise constness.
using std::cout;
using std::endl;
using std::string;

int main()
{
    string name = "Della";
    const string& name_ref = name;

    cout << "Original name: " << name_ref << endl;

    name = "Della Street";

    cout << "Updated name: " << name_ref << endl;

}