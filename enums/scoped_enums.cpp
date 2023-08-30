# include <iostream>
//unscoped enums
using std::cout;
using std::endl;

enum FillColor {
    RED,
    GREEN,
    BLUE
};

int main()
{
    FillColor fill_color = GREEN;
    FillColor alt_fill_color = BLUE;

    cout << "The fill color specified is: " << fill_color << endl;
    cout << "The alternate fill color specified is: " << alt_fill_color << endl;
}