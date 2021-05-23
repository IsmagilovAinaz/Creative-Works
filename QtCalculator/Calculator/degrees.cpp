#include "degrees.h"
#include <QString>

Degrees::Degrees()
{
    degrees = 0;
    minutes = 0;
    seconds = 0;
}
double Degrees::convert(double d){
    degrees = degrees + d + minutes/60 + seconds/3600;
    minutes = 0;
    seconds = 0;
    return degrees;
}

