#ifndef RANDOM_SHAPE_GENERATOR_INCLUDE_3D_SPHERE_H
#define RANDOM_SHAPE_GENERATOR_INCLUDE_3D_SPHERE_H

#include "Circle.h"

class Sphere : public Circle
{
	int m_diameter;
public:
	Sphere();
	Sphere(int x, int y, int radius);
	~Sphere();

	int getVolume() override;
};

#endif // !RANDOM_SHAPE_GENERATOR_INCLUDE_3D_SPHERE_H