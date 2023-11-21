#pragma once
#include "Liste.h"
#include "Point.h"
class Point2D : public Point , public Stock
{
public:
	Point2D();
	Point2D(int x, int y);
	~Point2D();
	void setZ(int z);
	void afficher();
	void stock();

};

