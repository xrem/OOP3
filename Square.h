#pragma once

#include "Figure.h"
#include "Point2D.h"

class Square final : public Figure
{
private:
	double side;
	Point2D* points;
public:
	explicit Square(double side_length);
	explicit Square(Point2D p1, Point2D p2, Point2D p3, Point2D p4);
	~Square() override;
	double GetP() override;
	double GetS() override;
};

