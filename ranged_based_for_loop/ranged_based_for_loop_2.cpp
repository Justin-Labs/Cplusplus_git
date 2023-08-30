#include <iostream>
#include <string>
#include <vector>
// changes made in the for loop variable do not change contents in original container.
using std::cout;  //if we'd like to, we need to change the string variable to a string reference.
using std::endl;
using std::string;
using std::vector;

int main()
{
    vector<string> countries {"India", "United States", "Singapore", "Nepal", "Senegal"};
  
    for (string country : countries) {

        country[0] = std::tolower(country[0]);

        cout << country << endl;
    }
    return 0;
}