#include <iostream>
//This removes the redundant code from last example.
using std::cout;
using std::endl;
using std::size;    //completely different than sizeof. doesn't suffer from any downsides.

int main()
{
    float student_scores[] {2.3, 4.1, 7.9, 8.2, 6.4};

    cout << "Size of array: " << size(student_scores) << endl;

    for (int i = 0; i < 5; i++) {
        cout << "student_score at index "
             << i << " = " << student_scores[i] << endl;
    }
}