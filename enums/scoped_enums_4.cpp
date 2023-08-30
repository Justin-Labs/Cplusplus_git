# include <iostream>

using std::cout;
using std::endl;
//example of how strong type cast scoped enums are. It will not compile due to this.

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
{     
    //will not compile cause: connot initialize a variable of type 'int' with an rvalue of type 'FillColor'                           
    int fill_color = FillColor::RED;  
    int outline_color = OutlineColor::RED; 

    //will also throw error due to invalid operand comparing int and FillColor
    if (fill_color == FillColor::RED && outline_color == OutlineColor::RED) {
        cout << "Both fill and outline colors are RED" << endl;
    }
}