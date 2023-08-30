#include <iostream>
#include <string>
// if you have separated the declaration and definition, the default
// values must be in the declaration.
using std::cout;
using std::endl;
using std::string;

void greet(const string& greeting = "How are you?");

int main()
{   
    greet();
    greet("Good morning!");
    greet("Good day to you.");

    return 0;
}

void greet(const string& greeting) {
    cout << greeting << endl;
}