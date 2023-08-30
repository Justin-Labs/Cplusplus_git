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
//if you would like to update the contents of your container, then you should use begin and end.
    auto it = std::find(cities.begin(), cities.end(), "Seattle");

    if (it != cities.end()) {
        *it = "SEATTLE";
    }
//if your working with an algorithm and you just want to access an element , you should use cbegin and cend.
    for (auto it = cities.cbegin(); it != cities.cend(); it++) {           //using iterator with auto 
        cout << *it << endl;  
    }
}