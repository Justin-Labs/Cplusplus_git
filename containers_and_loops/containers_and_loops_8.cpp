#include <iostream>
#include <string>
#include <vector>
//example of what not to do/ infinity loop caused by empty vector and do while loop "Exception has occurred. Segmentation fault"
using std::cout;
using std::endl;
using std::size;
using std::string;
using std::vector;

int main()
{           //example of what not to do/ infinity loop caused by empty vector and do while loop "Exception has occurred. Segmentation fault"
    vector<string> cities {};
    //crbegin, will start at the end "Austin" and go towards the beginning.
    auto it = cities.crbegin();

    do {
        cout << *it << endl;
        it++;
    } while (it != cities.crend()); 
}