#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;
// returns a pointer to a string
string* get_formatted_string(const string& first_name,
														 const string& last_name,
														 const string& city);

int main()
{
	// whats returned is a string*
	string* formatted_string =
		get_formatted_string("Chris", "Jackson", "San Jose");
	// thats why we have the * here, so we can print out the string.
	cout << *formatted_string << endl;

	return 0;
}

string* get_formatted_string(const string& first_name,
														 const string& last_name,
														 const string& city) {
	
	string formatted_string =
		"** " + first_name + " " + last_name + " (" + city + ") **";
// this is bad, return value to a stack memory address that is going
// to be cleaned up and its memory location will no longer be valid.
		return &formatted_string; 
}
