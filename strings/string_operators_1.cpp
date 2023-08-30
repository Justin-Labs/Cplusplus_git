#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

int main()
{
    string proverb = "The harder you work, the luckier you get.";

    cout << "Original string: " << proverb << endl;

    proverb[1] = 'H'; //Using indexing operator to modify contents of a string.
    proverb[2] = 'E';

    cout << "Updated string: " << proverb << endl;

    return 0;
}

    