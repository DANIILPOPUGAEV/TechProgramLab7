#include <iostream>
#include <string>
#include "Class.h"

using namespace std;
using namespace Class;


void Maximum(Watch<short> watchShort[4], Watch<double> watchFloat[4])
{
    double max1 = 0;
    string NameOfWatch;
    for (char i = 0; i < 4; ++i)
    {
        if (watchShort[i].get_price() > max1)
        {
            max1 = watchShort[i].get_price();
            NameOfWatch = watchShort[i].get_name();
        }
    }for (char i = 0; i < 4; ++i)
    {
        if (watchFloat[i].get_price() > max1)
        {
            max1 = watchFloat[i].get_price();
            NameOfWatch = watchShort[i].get_name();
        }
    }
    cout << "Самый дорогой экземпляр: " << NameOfWatch << "\n";
}