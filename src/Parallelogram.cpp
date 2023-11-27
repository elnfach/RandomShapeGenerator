#include "Parallelogram.h"

Parallelogram::Parallelogram() : Rectangle()
{
	m_height = 1;
}

Parallelogram::Parallelogram(int x, int y, int w, int h, int m_height) : Rectangle(x, y, w, h)
{
	m_height = height;
}

Parallelogram::~Parallelogram()
{
}

int Parallelogram::getArea()
{
	return width * m_height;
}
