#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

int main()
{
    string proverb_1 = "a bad workman always blames his tools"; //assignment notation
    string proverb_2 {"A journey of thousand miles begins with a single step"}; // braced initializer

    const char* proverb_1_cstr = proverb_1.c_str(); //invoking the method c_str on the object proverb_1
    char* proverb_2_cstr_nonconst = (char*)proverb_2.data(); //invoking the method data on the C++ style string proverb_2
                                    //in example this (char*) wasn't included, but I was getting error of trying to
                                    //convert const char* to char*....maybe different version? .data is supposed to 
                                    //return a char* value for C++17 and later versions..
    cout << "C style string: " << proverb_1_cstr << endl;
    cout << "Another C style string: " << proverb_2_cstr_nonconst << endl;

    return 0;
}