#include <iostream>

using std::cout;
using std::endl;

int main()
{

    float num_a = 78.87f, num_b = 8.456f;

    cout << "num_a + num_b = " << num_a + num_b << endl;
    cout << "num_a - num_b = " << num_a - num_b << endl;
    cout << "num_a * num_b = " << num_a * num_b << endl;
    cout << "num_a / num_b = " << num_a / num_b << endl; // this gives us the quotient
    // cout << "num_a % num_b = " << num_a % num_b << endl; // This gives an error: invalid operand of types 'float' to binary operator.
                                                    
    return 0;
}