#include <iostream>
#include "AudioDevice.h"
#include "Speakers.h"

using std::cout;
using std::endl;

int main()
{
    Speakers sp {"Bose", 400, "15in x 10in  x 10in"};
    Speakers& sp_ref {sp};
    AudioDevice& sp_through_base_ref {sp};

    cout << "------ Speakers (through derived class reference) ------" << endl;
    cout << "Brand: " << sp_ref.get_brand() 
         << " price: " << sp_ref.get_price() << endl;

    cout << "------ Speakers (through base class reference) ------" << endl;
    cout << "Brand: " << sp_through_base_ref.get_brand() 
         << " price: " << sp_through_base_ref.get_price() << endl;
}

