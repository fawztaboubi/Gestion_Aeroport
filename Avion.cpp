#include "Avion.h"



Avion::Avion()
{
	id_avion == 0;
	type_avion = "";
	capacité == 0;
}

void Avion::ajouter_avion()
{
	cout << " Entrez l'id de l'avion " << endl;
	cin >> id_avion;
	cout << " Entrez le type de l'avion" << endl;
	cin >> type_avion;
	cout << " Entrez la capacité de l'avion" << endl;
	cin >> capacité;
}

void Avion::afficher_avion()
{
	cout << " _______id_avion : " << id_avion << endl;
	cout << " _______type de l'avion : " << type_avion << endl;
	cout << " _______capacite de l'avion : " << capacité << endl;
}

int Avion::rechercher_avion(const vector <Avion> av, int pos)
{
	int i = 0;
	unsigned trouve = false;
	while (i<av.size() && trouve == false)
	{
		if (av[i].id_avion == id_avion)
		{
			trouve = true;
			pos = i;
		}
		else
			i++;
	}
	return trouve;
}


Avion::~Avion()
{
}
