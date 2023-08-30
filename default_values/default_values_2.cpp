#include <iostream>
#include <string>
// here we've just placed the entire definition including default
// up above and removed the declaration. 
using std::cout;
using std::endl;
using std::string;
// we also changed default from a const string ref, to an ordinary 
// string. Both are ok.
void greet(string greeting = "How are you?") {
    cout << greeting << endl;
}

int main()
{   
    greet();
    greet("Good morning!");
    greet("Good day to you.");

    return 0;
}
