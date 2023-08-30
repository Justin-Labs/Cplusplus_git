#include <iostream>         //client file

#include "Circle.h"

using std::cout;
using std::endl;

int main() {

    Circle first_circle(10.0f);

    cout << "First circle's area: " << first_circle.get_area() << endl;

    cout << "----------------------" << endl;

    cout << "Is first_circle larger than second_circle?: " 
         << std::boolalpha << first_circle.is_larger(400.0f) << endl; //This is the question. will compiler
                                                                      //Accept a float instead of an object. (type Circle)
                                                                      //There are no compliants or errors produced.
                                                                      //Only when we added the explicit keyword to the header file
                                                                      //circle constructor.
         return 0;
}                        //Instead the compiler sees it as an implicit type converson.
// When C++ saw that we've tried to invoke is_larger passing in a float when a circle object was expected,
// it tried to look around in the header of the Circle class and see if there's some way to construct a Circle from a float. 
// And when it went there, it noted that there was indeed exactly such a constructor. Line 9 in header file. Then is passed in 
// 400.0f as the input radius to the constructor of type Circle.