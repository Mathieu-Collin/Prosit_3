#pragma once
#include "Point2D.h"
#include "Point3D.h"
#include <iostream>
#include <vector>
using namespace std;

class Stock : public Point2D, public Point3D
{
	public:
	vector<int> tableau;
	Stock();
	~Stock();
	virtual void ajouterPoint();
	void afficher();

};
