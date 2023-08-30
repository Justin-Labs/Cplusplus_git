#include <iostream>
#include <string>
#include <vector>
// changes made in the for loop variable do change contents in original container.
using std::cout;  
using std::endl;
using std::string;
using std::vector;

int main()
{
    vector<string> countries {"India", "United States", "Singapore", "Nepal", "Senegal"};
  
    for (string& country : countries) {

        country[0] = std::tolower(country[0]);

        cout << country << endl;
    }
    return 0;
}