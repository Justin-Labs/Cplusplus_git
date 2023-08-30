# include <iostream>

using std::cout;
using std::endl;
//These are unscoped enums, which is why there is a conflict of variable names
//in these two enums, since thier values are both stored globally.

enum FillColor {
    RED,
    GREEN,
    BLUE
};

enum OutlineColor {
    RED,
    YELLOW,
    BLACK
};

int main()
{
    FillColor fill_color = GREEN;
    FillColor alt_fill_color = BLUE;

    cout << "The fill color specified is: " << fill_color << endl;
    cout << "The alternate fill color specified is: " << alt_fill_color << endl;
}