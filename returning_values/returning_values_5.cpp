#include <iostream>
#include <string>
// example showing compilier confusion of different return types.
using std::cout;
using std::endl;
using std::string;

auto get_larger_string(string first, string second) {

    if (first.length() > second.length()) {
        return first;
    } else if (second.length() > first.length()) {
        return second;
    }
// this is interperted as a const char *, while other returns are explicitly strings.
    return "";
}

int main()
{
    string larger_string = 
        get_larger_string("Smaller length string", "Much larger length string");

    cout << larger_string << endl;

    return 0;
}