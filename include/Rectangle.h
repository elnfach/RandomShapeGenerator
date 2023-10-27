#ifndef RANDOM_SHAPE_GENERATOR_INCLUDE_RECTANGLE_H
#define RANDOM_SHAPE_GENERATOR_INCLUDE_RECTANGLE_H

#include "Point.h"

class Rectangle : private Point
{
protected:
	int m_width;
	int m_height;
public:
	Rectangle();
	Rectangle(int x, int y, int width, int height);
	~Rectangle();

	virtual int getVolume() = 0;

	int getArea() override;
};

#endif // !RANDOM_SHAPE_GENERATOR_INCLUDE_RECTANGLE_H
