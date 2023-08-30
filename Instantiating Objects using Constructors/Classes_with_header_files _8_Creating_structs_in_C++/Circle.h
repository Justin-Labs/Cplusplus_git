#pragma once            //header file 
#include <cmath>
#define M_PI 3.14159265358979323846 //had to add this for some reason to please compiler.  
                                    //I don't know why cmath didn't take care of it.

class Circle {                      //no declarations of private or public so default is private.
        float radius;

        explicit Circle(float r);

        float get_area() {                  //Inline function. because it's implementation is in the .h file.
            return M_PI * radius * radius;  //An inline function is one where the code of the function is going to be 
        }                                   //expanded inline into the calling code.

        bool is_larger(Circle other_circle); //Another function.
};