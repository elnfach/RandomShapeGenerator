#ifndef RANDOM_SHAPE_GENERATOR_INCLUDE_3D_CONE_H
#define RANDOM_SHAPE_GENERATOR_INCLUDE_3D_CONE_H

#include "Circle.h"

class Cone : public Circle
{
	int m_height;
public:
	Cone();
	Cone(int x, int y, int radius, int height);
	~Cone();

	int getVolume() override;
private:

};

#endif // !RANDOM_SHAPE_GENERATOR_INCLUDE_3D_CONE_H