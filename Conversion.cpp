#include "Conversion.h"

double Conversion::ConvertSpeed(double value, string unitA, string unitB)
{
    double result = 0;

    if (unitA == "ms")
    {
        if (unitB == "kmph") { result = value * 3.600; }
        else if (unitB == "mph") { result = value * 2.237; }
        else if (unitB == "kn") { result = value * 1.944; }
        else if (unitB == "ft") { result = value * 3.281; }
    }
    else if (unitA == "kmph")
    {
        if (unitB == "ms") { result = value / 3.600; }
        else if (unitB == "mph") { result = value / 1.609; }
        else if (unitB == "kn") { result = value / 1.852; }
        else if (unitB == "ft") { result = value / 1.097; }
    }
    else if (unitA == "mph")
    {
        if (unitB == "ms") { result = value / 2.237; }
        else if (unitB == "kmph") { result = value * 1.609; }
        else if (unitB == "kn") { result = value / 1.151; }
        else if (unitB == "ft") { result = value * 1.467; }
        else if (unitB == "sol") { result = (value / 6.706) / 10; }
    }
    else if (unitA == "kn")
    {
        if (unitB == "ms") { result = value / 1.944; }
        else if (unitB == "kmph") { result = value * 1.852; }
        else if (unitB == "mph") { result = value * 1.151; }
        else if (unitB == "ft") { result = value * 1.688; }
    }
    else if (unitA == "ft")
    {
        if (unitB == "ms") { result = value / 3.281; }
        else if (unitB == "kmph") { result = value * 1.097; }
        else if (unitB == "mph") { result = value / 1.467; }
        else if (unitB == "kn") { result = value / 1.688; }
    }
    else
    {
        cout << "ERROR: Unit of conversion is not recognised!\n";
    }
    return result;
}

/*
* 
*  VALUES:- 1.097, 1.151, 1.467, 1.609, 1.688, 1.852, 1.944, 2.237, 3.281, 3.600
*  m/s -> Meters per second
*  kmph -> Kilometers per hour
*  mph -> Miles per hour
*  kn -> Nautical Miles per hour
*  ft/s -> Feet per second
* 
*/