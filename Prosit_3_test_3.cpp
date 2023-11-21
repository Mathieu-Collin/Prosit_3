// Prosit_3_test_3.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "Point.h"
#include "Point2D.h"
#include "Point3D.h"
using namespace std;


int main()//The program ask the user if he wants to create a 2D or a 3D point and then ask for its coordonates. It then create the point and add it to the list of points. Finally it ask the user if he wants to create a new point, see all the existing points or exit the program
{
	cout << "Voulez vous créer un point 2D ou 3D ?" << endl;
	cout << "1. Point 2D" << endl;
	cout << "2. Point 3D" << endl;
	cout << "3. Quitter" << endl;

	int choix;
	cin >> choix;
	
	switch (choix)
	{
		case 1:
		{
			double x;
			double y;
			cout << "Entrez la valeur de x" << endl;
			cin >> x;
			cout << "Entrez la valeur de y" << endl;
			cin >> y;
			Point2D* point = new Point2D(x, y);
			point->afficher();
			break;
		}

		case 2:
		{
			double x;
			double y;
			double z;
			cout << "Entrez la valeur de x" << endl;
			cin >> x;
			cout << "Entrez la valeur de y" << endl;
			cin >> y;
			cout << "Entrez la valeur de z" << endl;
			cin >> z;
			Point3D* point = new Point3D(x, y, z);
			point->afficher();
			break;
		}

		case 3:
		{
			cout << "Au revoir" << endl;
			break;
		}
	default:
		break;
	}
}