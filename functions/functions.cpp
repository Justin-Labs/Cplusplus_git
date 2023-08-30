#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

void print_hello() {
    cout << "Hello" << endl;
}

void print_goodbye() {
    cout << "Goodbye" << endl;

    return;
}

void print_greeting(string name) {
    cout << "Howdy " << name << endl;
}

string get_greeting(string name) {
    return "How do you do " + name;
}


int main()
{
    cout << "-------Invoking print_hello-------" << endl;
    print_hello();

    cout << "-------Invoking print_goodbye------" << endl;
    print_goodbye();

    cout << "-------Invoking print_greeting------" << endl;
    print_greeting("Donald Duck");

    cout << "-------Invoking get_greeting-------" << endl;
    string greeting = get_greeting("Mickey Mouse"); //greeting used to save the 
                                                    //return value from get_greeting
    cout << "Return value from get_greeting: " << greeting << endl;

    return 0;
}