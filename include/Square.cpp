#include "Square.h"
#include <cmath>

Square::Square(int x, int y, int a) : Rectangle(x, y, a, a)
{
	side = a;
}

int Square::getArea()
{
	return pow(side, 2);
}

Square::Square()
{
	side = 1;
}
