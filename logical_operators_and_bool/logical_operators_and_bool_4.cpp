#include <iostream>
// Demonstrates multiple relational expressions using logical operators.
using std::cout;
using std::endl;

int main()
{
    int a = 25;
    int b = 367;

    bool result = (a > 10) && (b < 1000); // && is logical AND operator
    cout << "(a > 10) && (b < 1000) = " << result << endl;

    result = (a < 10) || (b < 1000); // || is logical OR operator
    cout << "(a > 10) || (b < 1000) = " << result << endl;

    result = !(a < 100); // ! is the unary negation operator, unary takes in on operator, binary such as OR, AND, take in two operators.
    cout << "!(a < 100) = " << result << endl;

    return 0;
}
