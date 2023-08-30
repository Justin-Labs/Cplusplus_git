#include <iostream>
#include <string>
// this time using the string* returned is fine because the memory
// that's returned by the called functioin is still in scope in the
// calling function.
using std::cout;
using std::endl;
using std::string;
// returns a pointer to a string
string* get_larger_string(string* first, string* second);

int main()
{
    string first = "One string";
    string second = "Another string";

    string* larger_string = get_larger_string(&first, &second);

    cout << *larger_string << endl;

    return 0;
}

string* get_larger_string(string* first, string* second) {
// just comparing the lengths of the two strings and returning larger.
    return first->length() > second->length() ? first : second;
}