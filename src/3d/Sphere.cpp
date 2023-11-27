#include "3d/Sphere.h"
#include <cmath>

Sphere::Sphere() : Circle()
{
}

Sphere::Sphere(int x, int y, int radius) : Circle(x, y, radius)
{
}

Sphere::~Sphere()
{
}

int Sphere::getVolume()
{
    return (4.0/3) * 3.14 * pow(radius, 3);
}
