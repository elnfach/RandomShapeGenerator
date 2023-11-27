#include "Circle.h"
#include <cmath>
Circle::Circle() : Point()
{
	radius = 1;
}

Circle::Circle(int x, int y, int radius) : Point(x, y)
{
	this->radius = radius;
}

Circle::~Circle()
{
}

int Circle::getArea()
{
	return 3.14 * pow(radius, 2);
}
