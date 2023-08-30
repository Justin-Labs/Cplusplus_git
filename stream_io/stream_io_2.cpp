#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string name, city;
        
    cout << "What's your name?: ";
    cin >> name;

    cout << "Where do you live?: ";
    cin >> city;
        
    cout << "Hello " << name << " from " << city << "!" << endl;
    // this will cause issue if say they enter thier first and last name.
    // the space is interperted by the extraction tool as white space, delimiter,
    // and so it will treat it like user pressed the enter key. Use getline() 
    return 0;
}