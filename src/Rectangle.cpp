#include "Rectangle.h"

Rectangle::Rectangle() : Point()
{
	m_width = 0;
	m_height = 0;
}

Rectangle::Rectangle(int width, int height, int x, int y) : Point(x, y)
{
	m_width = width;
	m_height = height;
}

Rectangle::~Rectangle()
{
}

int Rectangle::getArea()
{
	return m_width * m_height;
}
