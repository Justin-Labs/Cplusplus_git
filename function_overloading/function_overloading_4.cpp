#include <iostream>
#include <string>
// Can not overload functions purely on a difference between
// a *type that is a pointer type and an array.
using std::cout;
using std::endl;
using std::string;

int find_max(int* arr, size_t n) {

    int max = *arr;
    for (int i = 0; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    return max;
}

int find_max(int arr[], size_t n) {

    int max = *arr;
    for (int i = 0; i < max; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    return max;
}

int main()
{
    int int_arr[] {2, 4, 6, 1, 8, 89, 33};
    
    cout << "Maximum int value: " << find_max(int_arr, 7) << endl;
    
    return 0;
}