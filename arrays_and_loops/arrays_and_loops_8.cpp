#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::size;
using std::string;

int main()
{                   // you can leave first one blank and let compiler decide, not second and not both.
    string student_info[][3] {
        {"Joseph",  "Martin", "Nancy"}, //first row
        {"Janet", "Gregory", "Susan"}, //second row
    };

    for (int row = 0; row < size(student_info); row++) {
        for (int col = 0; col < size(student_info[row]); col++) {
            cout << "Student at row = " << row << " col =" << col
                 << " is " << student_info[row][col] << endl;
        }
    }
}