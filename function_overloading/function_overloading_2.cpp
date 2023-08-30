#include <iostream>
#include <string>
// Can not overload functions based on their return type alone.
using std::cout;
using std::endl;
using std::string;

int add(int num_a, int num_b) {
    return num_a + num_b;
}

float add(int num_a, int num_b) {
    return num_a + num_b;
}

int main()
{
    cout << "Adding 2 integers: " << add(23, 45) << endl;

    return 0;
}