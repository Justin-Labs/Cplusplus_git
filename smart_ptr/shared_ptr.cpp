#include <iostream>
#include <memory>
#include <string>

using std::cout;
using std::endl;
using std::string;
using std::shared_ptr;
using std::make_shared;

int main()
{
    // Pre C++14 style of initializing shared pointers
    shared_ptr<string> name_ptr_1{new string {"Justine"}};

    // Modern style of initilizing shared pointers- this function
    // prevents some subtle memory leaks, and is more efficient
    shared_ptr<string> name_ptr_2 {make_shared<string>("Mallory")};

    //Compact modern style of initilizing shared pointers
    auto name_ptr_3 {make_shared<string>("Rafael")};

    cout << "Name 1: " << *name_ptr_1 << endl;
    cout << "Name 2: " << *name_ptr_2 << endl;
    cout << "Name 3: " << *name_ptr_3 << endl;

    return 0;
}