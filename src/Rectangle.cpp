#include "Rectangle.h"

Rectangle::Rectangle() : Point()
{
	width = 0;
	height = 0;
}

Rectangle::Rectangle(int width, int height, int x, int y) : Point(x, y)
{
	this->width = width;
	this->height = height;
}

Rectangle::~Rectangle()
{
}

int Rectangle::getArea()
{
	return width * height;
}
