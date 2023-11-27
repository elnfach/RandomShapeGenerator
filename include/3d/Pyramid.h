#pragma once

#include "Square.h"

class Pyramid : public Square
{
	int m_height;

public:
	Pyramid();
	Pyramid(int x, int y, int side, int height);
	~Pyramid();

	int getArea() override;
	int getVolume() override;
};