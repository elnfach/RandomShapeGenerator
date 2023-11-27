#pragma once

#include "Rectangle.h"

class Square : Rectangle
{
protected:
	int side;
public:
	Square();
	Square(int x, int y, int a);
	~Square();

	getArea() override;
};