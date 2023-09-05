#include <string>
#include <iostream>

#include "Speakers.h"

using std::string;
using std::cout;
using std::endl;

Speakers::Speakers(string brand, float price, string dimensions) :
    AudioDevice(brand, price), dimensions(dimensions) {
}

string Speakers::get_dimensions() const {
    return dimensions;
}
