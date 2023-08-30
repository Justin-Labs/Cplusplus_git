#include <iostream>
#include <string>
#include <vector>
//making use of a ranged for loop in this example: to print out names
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
    string name_1 {"Alice Smith"};
    string name_2 {"Bob McCarthy"};
    string name_3 {"Charles Babbage"};
    string name_4 {"Dora Jones"};

    vector<string*> names {&name_1, &name_2, &name_3, &name_4};

    for (auto name_ptr : names) {
        cout << *name_ptr << endl;
    }
//
    return 0;
}