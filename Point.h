#pragma once
class Point // Définit ce qu'est un point
{
protected:
	// Attributs
	int x=0;
	int y=0;
	int z=0;
public:
	~Point(); // Destructeur
	int getX(); // Accesseur en lecture
	int getY(); // Accesseur en lecture
	virtual int getZ(); // Accesseur en lecture
	void setX(int x); // Accesseur en écriture
	void setY(int y); // Accesseur en écriture
	virtual void setZ(int z); // Accesseur en écriture
	virtual void afficher(); // Affiche les coordonnées du point
	virtual void ajouterPoint(); // Stocke les coordonnées du point
};

