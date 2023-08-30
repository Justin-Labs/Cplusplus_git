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
    vector<string> cities {"New York", "Seattle", "San Francisco", "Boston", "Austin"};
    //crbegin, will start at the end "Austin" and go towards the beginning.
    auto it = cities.crbegin();

    do {
        cout << *it << endl;
        it++;
    } while (it != cities.crend()); 
}