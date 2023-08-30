#include <iostream>
#include <string>
// Can compile, but will note that line 23,24 do not act as might
// have been intended. tried to cast int to a long to use long func,
// but still used double function. 
using std::cout;
using std::endl;
using std::string;

double find_square(double num) {
    cout << "find_square(double num) called" << endl;
    return num * num;
}

long find_square(long& num) {
    cout << "find_squared(long& num)" << endl;
    return num * num;
}

int main()
{
    double double_num = 4;
    cout << find_square(double_num) << endl;

    int int_num = 5;
    cout << find_square(static_cast<long>(int_num)) << endl;

    long long_num = 6l;
    cout << find_square(long_num) << endl;
}