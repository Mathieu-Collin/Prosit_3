#include "Point3D.h"
#include "Liste.h"
#include <iostream>
#include <string.h>
#include <vector>
using namespace std;

Point3D::Point3D()
{
	int x = 0;
	int y = 0;
	int z = 0;
}

Point3D::Point3D(int x, int y, int z)
{
	this->x = x;
	this->y = y;
	this->z = z;
}

int Point3D::getZ()
{
	return z;
}

Point3D::~Point3D()
{
}

void Point3D::ajouterPoint(int x, int y, int z)
{
	string temp = to_string(x) + to_string(y) + to_string(z);
	tableau.push_back(temp);
}