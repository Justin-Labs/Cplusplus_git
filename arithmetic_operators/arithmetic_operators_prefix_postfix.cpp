#include <iostream>

using std::cout;
using std::endl;

int main()
{

    int apples_with_johnny = 6;
    cout << "prefix increment: " << ++apples_with_johnny << endl;
    cout << "Johnny now has: " << apples_with_johnny << " apples." << '\n';

    int apples_with_stevie = 12;
    cout << "postfix increment: " << apples_with_stevie++ << endl;
    cout << "Stevie now has: " << apples_with_stevie << " apples." << endl;

    int apples_with_tim = 6;
    cout << "prefix decrement: " << --apples_with_tim << endl;
    cout << "Tim now has: " << apples_with_tim << " apples." << '\n';

    int apples_with_bob = 12;
    cout << "postfix decrement: " << apples_with_bob-- << endl;
    cout << "Bob now has: " << apples_with_bob << " apples." << endl;
                                                    
    return 0;
}