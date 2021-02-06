#include "Circle.h"
#define _USE_MATH_DEFINES
#include <cmath>

Circle::Circle(double r)
{
	this->radius = r;
}

double Circle::GetP()
{
	return 2.0 * M_PI * this->radius;
}

double Circle::GetS()
{
	return M_PI * pow(this->radius, 2.0);
}

Circle::~Circle() = default;
