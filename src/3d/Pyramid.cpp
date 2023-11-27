#include "3d/Pyramid.h"
#include <cmath>

Pyramid::Pyramid() : Square()
{
	m_height = 1;
}

Pyramid::Pyramid(int x, int y, int side, int height) : Square(x, y, side)
{
	m_height = height;
}

Pyramid::~Pyramid()
{
}

int Pyramid::getArea()
{
	return side * (side + 2 * m_height);
}

int Pyramid::getVolume()
{
	return (1.0f / 3.0f) * pow(side, 2) * m_height;
}
