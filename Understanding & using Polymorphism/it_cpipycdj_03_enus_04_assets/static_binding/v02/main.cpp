#include <iostream>
#include "AudioDevice.h"
#include "Speakers.h"

using std::cout;
using std::endl;

int main()
{
    AudioDevice ad {"Samsung", 99.99};
    Speakers sp {"Bose", 400, "15in x 10in  x 10in"};

    cout << "------ AudioDevice display_price() ------" << endl;
    ad.display_price();
    cout << "------ AudioDevice get_price() ------" << endl;
    cout << ad.get_price() << endl;

    cout << "------ Speakers display_price() ------" << endl;
    sp.display_price();
    cout << "------ Speakers get_price() ------" << endl;
    cout << sp.get_price() << endl;
}

