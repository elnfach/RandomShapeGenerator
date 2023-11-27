#ifndef RANDOM_SHAPE_GENERATOR_INCLUDE_RECTANGLE_H
#define RANDOM_SHAPE_GENERATOR_INCLUDE_RECTANGLE_H

#include "Point.h"

class Rectangle : public Point
{
protected:
	int width;
	int height;
public:
	Rectangle();
	Rectangle(int x, int y, int width, int height);
	~Rectangle();

	int getArea() override;
};

#endif // !RANDOM_SHAPE_GENERATOR_INCLUDE_RECTANGLE_H
