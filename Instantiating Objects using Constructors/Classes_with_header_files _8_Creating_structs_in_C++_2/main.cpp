#include <iostream>         //client file

#include "Circle.h"

using std::cout;
using std::endl;

int main() {

    Circle first_circle(10.0f);

    cout << "First circle's area: " << first_circle.get_area() << endl;

    cout << "----------------------" << endl;

         return 0;
}                        