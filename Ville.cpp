#include "Ville.h"



Ville::Ville()
{
	id_ville == 0;
	nom_ville = "";
	pays = "";
}

Ville::Ville(int id_ville, string nom_ville, string pays)
{
	this->id_ville = id_ville;
	this->nom_ville = nom_ville;
	this->pays = pays;
}

void Ville::afficher_ville()
{
	cout << "id_ville :" << id_ville;
	cout << "nom_ville: " << nom_ville;
	cout << "pays: " << pays;
}

Ville::~Ville()
{
}
