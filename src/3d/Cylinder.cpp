#include "3d/Cylinder.h"

Cylinder::Cylinder() : Circle()
{
    m_height = 1;
}

Cylinder::Cylinder(int x, int y, int radius, int height) : Circle(x, y, radius)
{
    m_height = height;
}

Cylinder::~Cylinder()
{
}

int Cylinder::getVolume()
{
    return getArea() * m_height;
}
