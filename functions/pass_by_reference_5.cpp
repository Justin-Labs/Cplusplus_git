#include <iostream>
#include <string>
// another example of an implicit conversion performed by C for us
// since it would have to make a const double since the value int_var is
// an int. 
using std::cout;
using std::endl;

void print_value(const double& num);
double& square_value(double& num);

int main()
{
    int int_var = 555;

    print_value(int_var);
    //these two lines won't work since implicit conversion only works
    //when working with const types....
    //double result = square_value(int_var)   
    //cout << result << endl;

    return 0;
}

void print_value(const double& num) {
    cout << "--- Number is: " << num << "----" << endl;
}

double& square_value(double& num) {
    num = num * num;

    return num;
}