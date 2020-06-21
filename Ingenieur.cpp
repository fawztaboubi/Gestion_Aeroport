#include "Ingenieur.h"



Ingenieur::Ingenieur():Employé()
{
	specialité = "";
}

void Ingenieur::saisir_ingenieur()
{
	Employé::saisir_employe();
	cout << " Saisir la specialite de l'ingenieur : " << endl;
	cin >> specialité;
}

void Ingenieur::afficher_ingenieur()
{
	Employé::afficher_employe();
	cout << "____ Sa specialité est : " << specialité << endl;
}

int Ingenieur::rechercher_ing(const vector <Ingenieur> ing, int pos)
{
	vector <Employé> emp;
	Employé::rechercher_emp(emp, pos);
	int i = 0;
	unsigned trouve = false;
	while (i<ing.size() && trouve == false)
	{
		if (ing[i].id_employe == id_employe)
		{
			trouve = true;
			pos = i;
		}
		else
			i++;
	}
	return trouve;
}

Ingenieur::~Ingenieur()
{
}
