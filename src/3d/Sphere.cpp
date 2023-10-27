#include "3d/Sphere.h"

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
    return (4.0/3) * 3.14 * m_radius * m_radius * m_radius;
}
