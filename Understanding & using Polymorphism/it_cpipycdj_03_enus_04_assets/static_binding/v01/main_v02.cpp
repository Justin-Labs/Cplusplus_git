#include <iostream>
#include "AudioDevice.h"
#include "Speakers.h"

using std::cout;
using std::endl;

int main()
{
    Speakers sp {"Bose", 400, "15in x 10in  x 10in"};
    Speakers* sp_ptr {&sp};
    AudioDevice* sp_through_base_ptr {&sp};

    cout << "------ Speakers (through derived class pointer) ------" << endl;
    cout << "Brand: " << sp_ptr->get_brand() 
         << " price: " << sp_ptr->get_price() << endl;

    cout << "------ Speakers (through base class pointer) ------" << endl;
    cout << "Brand: " << sp_through_base_ptr->get_brand() 
         << " price: " << sp_through_base_ptr->get_price() << endl;
}

