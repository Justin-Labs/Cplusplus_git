#include <iostream>
#include "AudioDevice.h"
#include "Headphones.h"
#include "Speakers.h"

using std::cout;
using std::endl;

int main()
{
    AudioDevice ad {"Samsung", 99.99};
    Headphones hp {"Apple", 129.99, 2.5};
    Speakers sp {"Bose", 399.99, "15in x 10in  x 10in"};

    AudioDevice* ad_ptr {&ad};
    AudioDevice* hp_ptr {&hp};
    AudioDevice* sp_ptr {&sp};

    cout << "------------- Audio Device ----------------" << endl;
    cout << "Brand: " << ad_ptr->get_brand() 
         << " price: " << ad_ptr->get_price() << endl;

    cout << "------------- Headphones ----------------" << endl;
    cout << "Brand: " << hp_ptr->get_brand() 
         << " price: " << hp_ptr->get_price()  << endl;

    cout << "------------- Speakers ----------------" << endl;
    cout << "Brand: " << sp_ptr->get_brand() 
         << " price: " << sp_ptr->get_price() << endl;
}

