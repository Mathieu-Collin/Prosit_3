#pragma once
#include "Liste.h"
#include <iostream>
#include <string.h>
#include <fstream>
#include <vector>

using namespace std;

Stock::Stock()
{
}

Stock::~Stock()
{
}

void Stock::ajouterPoint()
{
}

void Stock::afficher()
{
    cout << "Liste des points : " << endl;
	for (int i = 0; i < tableau.size(); i++)
	{
		cout << tableau[i] << endl;
	}
}