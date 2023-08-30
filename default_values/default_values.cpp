#include <iostream>
#include <string>
// no current default values yet
using std::cout;
using std::endl;
using std::string;

void greet(const string& greeting);

int main()
{
    greet("Hello, how are you?");
    greet("Good morning!");

    return 0;
}

void greet(const string& greeting) {
    cout << greeting << endl;
}