#include <iostream>
#include <string>
// another method to pass in literals without making more copies of the data
// included since C++17 string_view. however doesn't have all the overloaded
// operators like string, thats why we aren't concatenating using the + operator.
using std::cout;
using std::endl;
using std::string;

void format_and_print(std::string_view first_name,
                      std::string_view last_name,
                      std::string_view city);

int main()
{
    format_and_print("Chris", "Jackson", "San Jose");

    return 0;
}

void format_and_print(std::string_view first_name,
                      std::string_view last_name,
                      std::string_view city) {
    cout << "** " << first_name << " " << last_name << " (" << city << ") **" << endl;
}

