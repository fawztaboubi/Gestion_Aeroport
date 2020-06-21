#include "Pilote.h"
#include <exception>


Pilote::Pilote():Employé()
{
	nb_heure = 0;
}

void Pilote::ajouter_pilote()
{
	Employé::saisir_employe();
	cout << "saisir le nombre heure de travail de ce pilote " << endl;
	cin >> nb_heure;
}

void Pilote::afficher_pilote()
{
	Employé::afficher_employe();
	cout << "_____ le nombre d'heure de vol du pilote est : " << nb_heure << endl;
}

int Pilote::rechercher_pilote(const vector <Pilote> pil, int pos)
{
	vector <Employé> emp;
	Employé::rechercher_emp(emp, pos);
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

void checkPrénom(string prénom) {
	exception PRENOM_INVALIDE("Exception de prénom invalide", 1);
	for (char c : prénom) {
		if (isdigit(c)) {
			throw PRENOM_INVALIDE;
		}
	}
}

Pilote::~Pilote()
{
}
