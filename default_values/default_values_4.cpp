#include <iostream>
#include <string>
// any of those input arguments that have default values must be placed 
// together at the end of the parameter list.
// example to show compiler error.
using std::cout;
using std::endl;
using std::string;

void greet(const string& greeting = "Howdy",
           const string& name, const int& times);

int main()
{   
	greet("Hubert", 5);

	return 0;
}

void greet(const string& greeting = "Howdy",
           const string& name, const int& times) {
	for (int i = 0; i < times; i++) {
		cout << greeting << " " << name << endl;
	}
}