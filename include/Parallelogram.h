#pragma once

#include "Rectangle.h"

class Parallelogram : Rectangle
{
	int m_height;
public:
	Parallelogram();
	Parallelogram(int x, int y, int w, int h, int m_height);
	~Parallelogram();

	int getArea() override;
};