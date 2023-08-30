#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

int main()
{
    string proverb = "Persuasion is better than force.";
    string first_word {proverb.substr(0,10)}; // .substr(index_postion,length)

    cout << "First word: " << first_word << endl;

    cout << "Second word: " << proverb.substr(11, 2) << endl;

    cout << "Second word onwards: " << proverb.substr(11, 100) << endl;

    cout << "Third word onwards: " << proverb.substr(14) << endl; //.substr(start_postion) then gives the rest of the string.
                                    //called method overloading.
    return 0;
}

    