#include <iostream>
#include <string>
// example using ref, warning, trying to return a ref from a stack
// location.
using std::cout;
using std::endl;
using std::string;

const string& get_formatted_string(const string& first_name,
                                   const string& last_name,
                                   const string& city);

int main()
{
    const string& formatted_string =
        get_formatted_string("Chris", "Jackson", "San Jose");

    cout << formatted_string << endl;

    return 0;
}

const string& get_formatted_string(const string& first_name,
                                   const string& last_name,
                                   const string& city) {

    string formatted_string = 
        "** " + first_name + " " + last_name + " (" + city + ") **";
    
    return formatted_string;
                                   }