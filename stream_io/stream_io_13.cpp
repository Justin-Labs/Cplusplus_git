#include <iostream>

#include <iomanip>
#include <string>

using std::cout;
using std::endl;
using std::string;

int main()
{
    string student_names[] = {"James", "Deborah", "Josephine", "Greg", "Tom"};
        //std::setw() specifies the number of spaces that should be used to display names
        //gives uniform appearance and is defualt aligned to the right.
    cout << std::setw(10) << student_names[0] << endl;
    cout << std::setw(10) << student_names[1] << endl;
    cout << std::setw(10) << student_names[2] << endl;
    cout << std::setw(10) << student_names[3] << endl;
    cout << std::setw(10) << student_names[4] << endl;

    return 0;
}