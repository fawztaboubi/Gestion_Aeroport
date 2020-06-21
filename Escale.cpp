#include "Escale.h"



Escale::Escale()
{
	id_escale == 0;
	date_arr = "";
	date_dep = "";
	heure_arr = "";
	heure_dep = "";
}

Escale::Escale(int id_escale, string date_arr, string date_dep, string heure_arr, string heure_dep)
{
	this->id_escale = id_escale;
	this->date_arr = date_arr;
	this->date_dep = date_dep;
	this->heure_arr = heure_arr;
	this->heure_dep = heure_dep;
}

void Escale::ajouter_escale()
{
	cout << " Entrez l'id de l'escale " << endl;
	cin >> id_escale;
	cout << " Entrez la date d'arrivee de l'avion" << endl;
	cin >> date_arr;
	cout << " Entrez la date de depart de l'avion" << endl;
	cin >> date_dep;
	cout << " Entrez l'heure d'arrivee de l'avion" << endl;
	cin >> heure_arr;
	cout << " Entrez l'heure de depart de l'avion" << endl;
	cin >> heure_dep;
}

void Escale::afficher_esc()
{
	cout << "id_escale: " << id_escale << endl;
	cout << "date d'arrivée: " << date_arr << endl;
	cout << "date de départ: " << date_dep << endl;
	cout << "heure d'arrivée: " << heure_arr << endl;
	cout << "heure de départ: " << heure_dep << endl;
}

int Escale::rechercher_esc(const vector <Escale> esc, int pos)
{
	int i = 0;
	unsigned trouve = false;
	while (i<esc.size() && trouve == false)
	{
		if (esc[i].id_escale == id_escale)
		{
			trouve = true;
			pos = i;
		}
		else
			i++;
	}
	return trouve;
}

Escale::~Escale()
{
}