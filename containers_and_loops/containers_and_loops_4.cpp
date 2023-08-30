#include <iostream>
#include <string>
#include <vector>
#include <algorithm> // by the way this is where the "find" function lives. might look at errors, maybe std library one is off.

using std::cout;
using std::endl;
using std::size;
using std::string;
using std::vector;

int main()
{
    vector<string> cities;

    cities.push_back("New York");
    cities.push_back("Seattle");
    cities.push_back("San Francisco");
    cities.push_back("Boston");
    cities.push_back("Austin");
// find is a templated function.
    auto it = std::find(cities.begin(), cities.end(), "Seattle");

    if (it != cities.end()) {
        *it = "SEATTLE";
    }

    for (auto it = cities.begin(); it != cities.end(); it++) {           //using iterator with auto
        cout << *it << endl;  
    }
}