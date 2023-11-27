#ifndef RANDOM_SHAPE_GENERATOR_INCLUDE_POINT_H
#define RANDOM_SHAPE_GENERATOR_INCLUDE_POINT_H

#include "Object.h"

class Point : public Object
{
protected:
	int m_x;
	int m_y;
	
public:
	Point();
	Point(int x, int y);
	~Point();
};

#endif // !RANDOM_SHAPE_GENERATOR_INCLUDE_POINT_H