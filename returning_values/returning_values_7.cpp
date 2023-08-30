#include <iostream>
#include <string>
// example showing compilier confusion of different return types.
using std::cout;    // auto will never deduce auto to be a reference type.
using std::endl;    // unless we give it a clue.
using std::string;

auto get_larger_string(string& first, string& second) {

    return first.length() > second.length() ? first : second;
}

int main()
{
    string first = "One string";
    string second = "Another string";
// compilier will never deduce auto to be a refenece type.
    string& larger_string = get_larger_string(first, second);

    cout << larger_string << endl;
    return 0;
}
