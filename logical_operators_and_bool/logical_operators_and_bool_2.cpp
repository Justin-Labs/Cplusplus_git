#include <iostream>
// Demonstrates how bool will implicitly convert all non-zero vaules to true "1"
using std::cout;
using std::endl;

int main()
{

    bool b1 = 0;
    bool b2 = 198;
    bool b3 = 435.98;  // may give warging: implicit conversion from 'double' to 'bool' depending on compiler
    bool b4 = -345.09; // may give warning: "" I think clang++ would give the warning, but g++ is not 

    cout <<"b1 = " << b1 << endl;
    cout <<"b2 = " << b2 << endl;
    cout <<"b3 = " << b3 << endl;
    cout <<"b4 = " << b4 << endl;

    return 0;
}
