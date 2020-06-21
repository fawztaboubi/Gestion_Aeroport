#include "Aeroport.h"



Aeroport::Aeroport()
{
	id_aeroport == 0;
	libelle_aeroport = "";
	surface = 0.0;
}

void Aeroport::saisir_aeroport()
{
	cout << " Saisir l'identifiant de l'aeroport " << endl;
	cin >> id_aeroport;
	cout << " Saisir le nom de l'aeroport " << endl;
	cin >> libelle_aeroport;
	cout << " Saisir la surface de l'aeroport " << endl;
	cin >> surface;
}

void Aeroport::afficher_aeroport()
{
	cout << "_______ l'identifiant de l'aeroport est : " << id_aeroport << endl;
	cout << "_______ le libelle de l'aeroport est : " << libelle_aeroport << endl;
	cout << "_______ la surface de l'aeroport est : " << surface << endl;
}

int Aeroport::rechercher_aeroport(const vector <Aeroport> arp, int pos)
{
	int i = 0;
	unsigned trouve = false;
	while (i<arp.size() && trouve == false)
	{
		if (arp[i].id_aeroport == id_aeroport)
		{
			trouve = true;
			pos = i;
		}
		else
			i++;
	}
	return trouve;
}



Aeroport::~Aeroport()
{
}
