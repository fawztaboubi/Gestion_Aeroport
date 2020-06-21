#include "Ingenieur.h"



Ingenieur::Ingenieur():Employ�()
{
	specialit� = "";
}

void Ingenieur::saisir_ingenieur()
{
	Employ�::saisir_employe();
	cout << " Saisir la specialite de l'ingenieur : " << endl;
	cin >> specialit�;
}

void Ingenieur::afficher_ingenieur()
{
	Employ�::afficher_employe();
	cout << "____ Sa specialit� est : " << specialit� << endl;
}

int Ingenieur::rechercher_ing(const vector <Ingenieur> ing, int pos)
{
	vector <Employ�> emp;
	Employ�::rechercher_emp(emp, pos);
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
