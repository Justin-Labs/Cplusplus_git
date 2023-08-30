#include <iostream>
//old school c style use of switch
using std::cout;
using std::cin;
using std::endl;

int main()
{
    char ch;
    cout << "Please enter a letter of the alphabet: ";

    cin >> ch;
// isalaph will check whatever is passed in is a valid alphabetic character according to the current C locale. True or False.
    if (std::isalpha(ch)) {
        switch (ch= std::tolower(ch); ch) {     //tolower converts to lowercase.
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            cout << "The character you enter is a vowel" << endl;
            break;      
        default:
            cout << "The character you entered is NOT a vowel" << endl;
        }
    } else {
        cout << "The character you entered is NOT a letter" << endl;
    }

    return 0;
}