#include <iostream>
#include <string>
// dealing with functions with more than one input argument.
// If we have a function with multiple input arguments, then any
// of those input arguments that have default values must be placed 
// together at the end of the parameter list.
using std::cout;
using std::endl;
using std::string;

void greet(const string& name, const int& times = 2,
					 const string& greeting = "How are you?");

int main()
{   
	cout << "--------------" << endl;
	greet("Hubert");

	cout << "--------------" << endl;
	greet("Melania", 3);

    cout <<  "-------------" << endl;
    greet("Laura", 3, "Hello!");

	return 0;
}

void greet(const string& name, const int& times,
					 const string& greeting) {
	for (int i = 0; i < times; i++) {
		cout << greeting << " " << name << endl;
	}
}