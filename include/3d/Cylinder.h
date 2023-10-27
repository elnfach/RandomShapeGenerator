#ifndef RANDOM_SHAPE_GENERATOR_INCLUDE_3D_CYLINDER_H
#define RANDOM_SHAPE_GENERATOR_INCLUDE_3D_CYLINDER_H

#include "Circle.h"

class Cylinder : private Circle
{
	int m_height;
public:
	Cylinder();
	Cylinder(int x, int y, int radius, int height);
	~Cylinder();

	int getVolume() override;
};

#endif // !RANDOM_SHAPE_GENERATOR_INCLUDE_3D_CYLINDER_H