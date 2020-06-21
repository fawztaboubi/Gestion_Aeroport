#include "Vol.h"



Vol::Vol()
{
	num_vol == 0;
	origine = "";
	date_arr = "";
	date_dep = "";
	heure_arr = "";
	heure_dep = "";
}

Vol::Vol(int num_vol, string origine, string date_arr, string date_dep, string heure_arr, string heure_dep)
{
	this->num_vol = num_vol;
	this->origine = origine;
	this->date_arr = date_arr;
	this->date_dep = date_dep;
	this->heure_arr = heure_arr;
	this->heure_dep = heure_dep;
}

void Vol::ajouter_vol()
{
	cout << " Entrer le numero de vol " << endl;
	cin >> num_vol;
	cout << " Entrer la ville de départ du vol " << endl;
	cin >> origine;
	cout << " Entrer la date d'arrivee de vol " << endl;
	cin >> date_arr;
	cout << " Entrer la date de depart de vol " << endl;
	cin >> date_dep;
	cout << " Entrer l'heure d'arrivee de vol " << endl;
	cin >> heure_arr;
	cout << " Entrer l'heure dde depart de vol " << endl;
	cin >> heure_dep;
}

void Vol::afficher_vol()
{
	cout << "_____ num_vol: " << num_vol << endl;
	cout << "_____ origine: " << origine << endl;
	cout << "_____ date_arr: " << date_arr << endl;
	cout << "_____ date_dep: " << date_dep << endl;
	cout << "_____ heure_arr: " << heure_arr << endl;
	cout << "_____ heure_dep: " << heure_dep << endl;
}


int Vol::rechercher_vol(const vector <Vol> vol, int pos)
{
	int i = 0;
	unsigned trouve = false;
	while (i<vol.size() && trouve == false)
	{
		if (vol[i].num_vol == num_vol)
		{
			trouve = true;
			pos = i;
		}
		else
			i++;
	}
	return trouve;
}


Vol::~Vol()
{
}
