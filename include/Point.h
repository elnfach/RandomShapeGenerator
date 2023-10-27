#ifndef RANDOM_SHAPE_GENERATOR_INCLUDE_POINT_H
#define RANDOM_SHAPE_GENERATOR_INCLUDE_POINT_H

class Point
{
	int m_x;
	int m_y;
protected:
	
public:
	Point();
	Point(int x, int y);
	~Point();

	virtual int getArea() = 0;
};

#endif // !RANDOM_SHAPE_GENERATOR_INCLUDE_POINT_H