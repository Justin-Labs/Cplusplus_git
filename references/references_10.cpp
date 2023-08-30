#include <iostream>
#include <string>
#include <vector>
// good ref for use of refenences to iterate over a vector without changing it.
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
    vector<string> cities {"New York", "Seattle", "Boston", "Austin"};

    for (const auto& city : cities) {
      //  city[0] = std::tolower(city[0]); //first letter in each to lowercase
      //  city[1] = std::toupper(city[1]); //2nd letter in each to uppercase

        cout << city << endl;
    }

    return 0;
}