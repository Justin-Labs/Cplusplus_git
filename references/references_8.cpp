#include <iostream>
#include <string>
// just example, won't compile since code tries to make a string ref to a
// const string
using std::cout;
using std::endl;
using std::string;

int main()
{
    const string name = "Della";
    string& name_ref = name;

}