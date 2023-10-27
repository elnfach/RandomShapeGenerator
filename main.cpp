#include <iostream>
#include "core.h"

using namespace std;

int main()
{
	Cone cone(0, 0, 2, 6);
	Cylinder cylinder(0, 0, 5, 10);


	cout << cone.getVolume() << endl;
	cout << cylinder.getVolume();
}