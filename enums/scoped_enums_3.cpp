# include <iostream>

using std::cout;
using std::endl;
//These are scoped enums..This is how it's declared: enum class

enum class FillColor {
    RED,
    GREEN,
    BLUE
};

enum class OutlineColor {
    RED,
    YELLOW,
    BLACK
};

int main()
{                                // :: is called the scope resolution operator
    FillColor fill_color = FillColor::RED;  //used to intialize fill_color with the value RED, but a specific RED from inside the scope FillColor 
    OutlineColor outline_color = OutlineColor::RED; //this RED from the OutlineColor enum class.

    if (fill_color == FillColor::RED && outline_color == OutlineColor::RED) {
        cout << "Both fill and outline colors are RED" << endl;
    }
}