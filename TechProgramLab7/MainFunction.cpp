#include <iostream>
#include <string>
#include "Class.h"
#include "Maximum.h"
#include "FindName.h"

using namespace std;
using namespace Class;

void MainFunction()
{

    Watch<short>* watchShort;
    watchShort = new Watch<short>[4];

    Watch<double>* watchFloat;
    watchFloat = new Watch<double>[4];

    watchShort[0] = Watch<short>("Rolex", 16300);
    watchShort[1] = Watch<short>("Rolex", 27328);
    watchShort[2] = Watch<short>("Mi-band", 250);
    watchShort[3] = Watch<short>("MSF", 8000);

    watchFloat[0] = Watch<double>("Rolex", 3999.99);
    watchFloat[1] = Watch<double>("Rolex", 9731.55);
    watchFloat[2] = Watch<double>("Mi-band", 199.99);
    watchFloat[3] = Watch<double>("G-shock", 4525.75);

    FindName(watchShort, watchFloat);
    Maximum(watchShort, watchFloat);
}