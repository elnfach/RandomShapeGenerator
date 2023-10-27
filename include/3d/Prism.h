#ifndef RANDOM_SHAPE_GENERATOR_INCLUDE_3D_PRISM_H
#define RANDOM_SHAPE_GENERATOR_INCLUDE_3D_PRISM_H

#include "Rectangle.h"

class Prism : Rectangle
{
public:
	Prism();
	Prism(int x, int y);
	~Prism();

	int getVolume() override;
private:

};

#endif // !RANDOM_SHAPE_GENERATOR_INCLUDE_3D_PRISM_H