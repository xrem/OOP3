#pragma once
#include "Figure.h"
class Circle : public Figure
{
private:
	double radius;
public:
	explicit Circle(double r);
	~Circle() override;
	double GetP() override;
	double GetS() override;
};

