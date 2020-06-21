#include "Employé.h"



Employé::Employé()
{
	id_employe == 0;
	nom_employe = "";
	prenom_employe = "";
	date_naiss_employe = "";
	adresse_employe = "";
	salaire_employe = 0;
	sexe_employe = "";
}

void   Employé::saisir_employe()
{
	cout << "saisir l identifiant d l employer" << endl;
	cin >> id_employe;
	cout << "saisir le nom d l employer " << endl;
	cin >> nom_employe;
	cout << "saisir le prenom d l employer " << endl;
	cin >> prenom_employe;
	cout << "saisir la date de naissance de l'employe" << endl;
	cin >> date_naiss_employe;
	cout << "saisir l adresse d l employer " << endl;
	cin >> adresse_employe;
	cout << "saisir le salaire d l employer " << endl;
	cin >> salaire_employe;
	cout << "saisir le sexe d l employer " << endl;
	cin >> sexe_employe;

}

void Employé::afficher_employe()
{
	cout << "____ identifiant : " << id_employe << endl;
	cout << "____ nom : " << nom_employe << endl;
	cout << "____ prenom : " << prenom_employe << endl;
	cout << "____ date_naiss : " << date_naiss_employe << endl;
	cout << "____ adresse : " << adresse_employe << endl;
	cout << "____ salaire : " << salaire_employe << endl;
	cout << "____ sexe : " << sexe_employe << endl;
}

int Employé::rechercher_emp(const vector <Employé> emp, int pos)
{
	int i = 0;
	unsigned trouve = false;
	while (i<emp.size() && trouve == false)
	{
		if (emp[i].id_employe == id_employe)
		{
			trouve = true;
			pos = i;
		}
		else
			i++;
	}
	return trouve;
}

Employé::~Employé()
{
}