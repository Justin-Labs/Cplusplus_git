#include <iostream>
#include <typeinfo> //this isn't working for some reason..
                    // .name(), dont forget the () after..
using std::cout;
using std::endl;
// add c++filt  ./auto | c++filt -t     -t passing in type names
int main()
{
    auto int_var = 20;
    auto long_var = 24567L;

    auto float_var {12344.5F}; //braced intializer
    auto double_var (23098.456); //functional intializer

    auto string_var = "Hello world!";

    cout << "Type of interger: " << typeid(int_var).name() << endl;
    cout << "Type of long variable: " << typeid(long_var).name() << endl;
    cout << "Type of float variable: " << typeid(float_var).name() << endl;
    cout << "Type of double variable: " << typeid(double_var).name() << endl;
    cout << "Type of string variable: " << typeid(string_var).name() << endl;

    return 0;
}