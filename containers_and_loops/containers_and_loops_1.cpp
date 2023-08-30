#include <iostream>
#include <string>
#include <vector>

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

    for (int i = 0; i < cities.size(); i++) {           //no longer using [] operator
        cout << "City at i = " << i << " is " << cities.at(i) << endl;
    }
    //  I like this .at method, it gave this "terminate called after throwing an instance of 'std::out_of_range'" performed bounds checking.
    // This is caught during runtime. which might slow down performance, but unless its super critical, use this.
    cout << "City at i = " << 10 << " is " << cities.at(10) << endl;
}