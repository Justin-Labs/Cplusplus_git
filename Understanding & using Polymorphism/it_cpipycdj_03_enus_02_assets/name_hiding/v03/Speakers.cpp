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

float Speakers::get_price() const {
    return AudioDevice::get_price() - AudioDevice::get_price() * 0.15;
}
