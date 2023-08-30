#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

int main()
{
    string proverb = "The harder you work, the luckier you get.";

    cout << "First character: " << proverb[0] << endl; // the [] allows use at access the character at that index postion.
    cout << "Character at index 21: " << proverb[21] << endl;
    cout << "Last character: " << proverb[proverb.length() - 1] << endl;

    cout << "Character at out of range index: " << proverb[proverb.length() + 10] << endl;
    // should return NULL, my current setup shows it as a strange character, but might be blank.
    return 0;
}

    