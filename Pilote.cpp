#include "Pilote.h"
#include <exception>


Pilote::Pilote():Employ�()
{
	nb_heure = 0;
}

void Pilote::ajouter_pilote()
{
	Employ�::saisir_employe();
	cout << "saisir le nombre heure de travail de ce pilote " << endl;
	cin >> nb_heure;
}

void Pilote::afficher_pilote()
{
	Employ�::afficher_employe();
	cout << "_____ le nombre d'heure de vol du pilote est : " << nb_heure << endl;
}

int Pilote::rechercher_pilote(const vector <Pilote> pil, int pos)
{
	vector <Employ�> emp;
	Employ�::rechercher_emp(emp, pos);
	int i = 0;
	unsigned trouve = false;
	while (i<pil.size() && trouve == false)
	{
		if (pil[i].id_employe == id_employe)
		{
			trouve = true;
			pos = i;
		}
		else
			i++;
	}
	return trouve;
}

// Exception
void checkNom(string nom) {
	exception NOM_INVALIDE("Exception de nom invalide", 1);
	for (char c : nom) {
		if (isdigit(c)) {
			throw NOM_INVALIDE;
		}
	}
}

void checkPr�nom(string pr�nom) {
	exception PRENOM_INVALIDE("Exception de pr�nom invalide", 1);
	for (char c : pr�nom) {
		if (isdigit(c)) {
			throw PRENOM_INVALIDE;
		}
	}
}

Pilote::~Pilote()
{
}
