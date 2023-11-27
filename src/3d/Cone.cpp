#include "3d/Cone.h"

Cone::Cone() : Circle()
{
	m_height = 1;
}

Cone::Cone(int x, int y, int radius, int height) : Circle(x, y, radius)
{
	m_height = height;
}

Cone::~Cone()
{
}

int Cone::getVolume()
{
	return 1.0 / 3 * 3.14 * radius * radius * m_height; // radius = 2; height = 6; => 25
}
