#ifndef DEGREES_H
#define DEGREES_H
#include <QString>

class Degrees
{
public:
    double degrees = 0;
    double seconds = 0;
    double minutes = 0;
    Degrees();
    double convert(double d);
};

#endif // DEGREES_H
