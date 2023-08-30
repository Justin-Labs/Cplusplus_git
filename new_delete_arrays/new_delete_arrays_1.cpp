#include <iostream>

using std::cout;
using std::endl;
using std::string;

int main()
{
    const int size = 4;
    string* empty_string_arr = new string[size] {};

    for (int i = 0; i < size; i++) {
        cout << "Empty string at index " << i
             << ": " << empty_string_arr[i] << endl;
    }

    delete[] empty_string_arr;
    empty_string_arr = nullptr;

    return 0;
}