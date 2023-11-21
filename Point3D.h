#pragma once
#include "Point.h"
#include "Liste.h"
#include <iostream>
using namespace std;


class Point3D : public Point , public Stock
{
public:
	Point3D();
	Point3D(int x, int y, int z);
	~Point3D();
	void ajouterPoint(int x, int y, int z);
	int getZ();

};

