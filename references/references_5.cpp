#include <iostream>
#include <string>
// demonstrates how by setting ref to a const type, we can't use it to change
// the value it points at.
using std::cout;
using std::endl;
using std::string;

int main()
{
    string name = "Della";
    const string& name_ref = name;

    cout << "Original name: " << name_ref << endl;

    name_ref = "Della Street";

    cout << "Updated name: " << name_ref << endl;

}