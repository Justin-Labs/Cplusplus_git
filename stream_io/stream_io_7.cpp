#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    int fav_num;
    char fav_letter;
        
    cout << "What is your favorite number?: ";
    cin >> fav_num;
    
    cout << "Favorite number is " << fav_num << endl;

    cin.ignore(); //this ensures program doesn't exit when you press enter to input fav number

    cout << "What is your favorite character (hit enter to quit): ";
    cin.get(fav_letter);

    if (fav_letter == '\n') {
        cout << "Exiting..." << endl;
    } else {
        cout << "Favorite letter is: " << fav_letter << endl;
    }

    return 0;
}