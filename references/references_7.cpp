#include <iostream>
#include <string>
// to remove chance of modifying at all make variable const.
// just example, won't compile since code tries to modifiy const.
using std::cout;
using std::endl;
using std::string;

int main()
{
    const string name = "Della";
    const string& name_ref = name;

    cout << "Original name: " << name_ref << endl;

    name = "Della Street";

    cout << "Updated name: " << name_ref << endl;

}