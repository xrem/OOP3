#include "Square.h"
#include <stdlib.h>

Square::Square(double side_length)
{
	// Необходимо проверить входные данные.
	this->side = side_length;
	this->points = nullptr;
}

Square::Square(Point2D p1, Point2D p2, Point2D p3, Point2D p4)
{
	// Необходимо проверить входные данные.
	Point2D* points = (Point2D*) malloc(sizeof(Point2D) * 4);
	points[0] = p1;
	points[1] = p2;
	points[2] = p3;
	points[3] = p4;
	this->points = points;
	this->side = 2.0;
}

Square::~Square()
{
	delete[] points;
}


double Square::GetP()
{
	return 4.0 * this->side;
}

double Square::GetS()
{
	return this->side * this->side;
}

