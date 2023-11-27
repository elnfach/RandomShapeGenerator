#ifndef RANDOM_SHAPE_GENERATOR_INCLUDE_CIRCLE_H
#define RANDOM_SHAPE_GENERATOR_INCLUDE_CIRCLE_H

#include "Point.h"

class Circle : public Point
{
protected:
	int m_radius;
public:
	Circle();
	Circle(int x, int y,int radius);
	~Circle();

	int getArea() override;
};

#endif // !RANDOM_SHAPE_GENERATOR_INCLUDE_CIRCLE_H
