#include <iostream>
#include <string>
// Can not overload functions purely on a difference between
// a double and a double reference.
using std::cout;
using std::endl;
using std::string;

double find_square(double num) {
    return num * num;
}

double find_square(double& num) {
    return num * num;
}

int main()
{
    double num = 4;

    cout << find_square(num) << endl;
}