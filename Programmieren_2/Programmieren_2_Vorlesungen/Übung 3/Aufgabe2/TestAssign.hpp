#include <iostream>
#include "Vector.h"

void testAssign()
{
	Vector v1;
	v1.push_back(1);
	v1.push_back(2);
	v1.push_back(3);
	std::cout << "V1: " << v1 << '\n';

	v1 = v1;
	std::cout << "V1: " << v1 << '\n';
}