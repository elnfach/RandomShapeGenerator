#include "Circle.h"

Circle::Circle() : Point()
{
	m_radius = 1;
}

Circle::Circle(int x, int y, int radius) : Point(x, y)
{
	m_radius = radius;
}

Circle::~Circle()
{
}

int Circle::getArea()
{
	return 3.14 * m_radius * m_radius;
}
