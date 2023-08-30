#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

int main()
{
    string name_alice = "Alice";
    string name_peter = "Peter";

    cout << "Is Alice > Peter: " << (name_alice > name_peter) << endl; 
    cout << "Is Alice < Peter: " << (name_alice < name_peter) << endl;
        //  this checks for lexicographical postion and gives logic answer. 
        // a little easier to interpert than the .compare method.
    cout << "Is Alice >= Peter: " << (name_alice >= name_peter) << endl;
    cout << "Is Alice <= Peter: " << (name_alice <= name_peter) << endl;
    cout << "Is Alice == Peter: " << (name_alice == name_peter) << endl;
    cout << "Is Alice != Peter: " << (name_alice != name_peter) << endl;

    return 0;
}

    