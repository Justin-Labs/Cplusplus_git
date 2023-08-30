#include <iostream>
// will run with warning ISO C++ forbids converting a string constant to 'char*'
using std::cout;
using std::endl;

int main()
{
    char* movie_ptr {"When Harry Met Sally"};
    cout << "Movie name: " << movie_ptr << endl;

    char movie[] {"Saving Private Ryan"};
    cout << "Movie name: " << movie << endl;
}