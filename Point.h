#pragma once
class Point // D�finit ce qu'est un point
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
	void setX(int x); // Accesseur en �criture
	void setY(int y); // Accesseur en �criture
	virtual void setZ(int z); // Accesseur en �criture
	virtual void afficher(); // Affiche les coordonn�es du point
	virtual void ajouterPoint(); // Stocke les coordonn�es du point
};

