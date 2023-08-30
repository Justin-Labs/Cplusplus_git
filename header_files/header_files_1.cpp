#include <iostream>
#include "math_utility.h"

using std::cout;
using std::endl;

int main()
{
    cout << "7 to the power 3: " << power_of(7, 3) << endl;
    cout << "11 to the power 4: " << power_of(11, 4) << endl;

    cout << "is prime 19: " << std::boolalpha << is_prime(19) << endl;
    cout << "is prime 39: " << std::boolalpha << is_prime(39) << endl;

    return 0;
}

