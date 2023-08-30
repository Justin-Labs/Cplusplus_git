#include <iostream>
//will not behave if you input the wrong data type.. ie floats or string.
//cin and extraction can result in unreliable behavior.if the user doesn't
//behave as expected.
using std::cin;
using std::cout;
using std::endl;

int main()
{
    int num_a, num_b;
        //<< insertion operator..inserting output values to screen
    cout << "Please enter the first integer: ";
    cin >> num_a;
        //>> extraction operator..extracting input values to program
    cout << "Please enter the second integer: ";
    cin >> num_b;

    cout << num_a << " + " << num_b << " = " << num_a + num_b << endl;
    cout << num_a << " - " << num_b << " = " << num_a - num_b << endl;

    return 0;
}