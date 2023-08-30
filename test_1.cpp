#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

int main()
{
    string str1, str2, str3;
    int n;
    str1= "C++ is an Object Oriented Language";
    str2=str1[12];
    str3=str1[str1.length()-3];
    str2=str2+str3;
    cout << "The new string is: " << str2;
    return 0;
}