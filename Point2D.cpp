#include "Point2D.h"
#include "Liste.h"
#include <string>
#include <vector>
#include <iostream>
using namespace std;

Point2D::Point2D()
{
	int x = 0;
	int y = 0;
}

Point2D::Point2D(int px, int py)
{
	this->x = px;
	this->y = py;
}

void Point2D::afficher()
{
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;
}

void Point2D::setZ(int pz)
{
	cout << "Le point ent en 2 dimentions et ne possède donc pas de valeur Z";
}

void Point2D::stock()
{
	string temp= to_string(x) + to_string(y);
	Stock::tableau.push_back(temp);

Point2D::~Point2D();
{
}