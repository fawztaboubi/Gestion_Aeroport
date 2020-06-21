#include "Voyageur.h"
#include <exception>
#include <vector>

using namespace std;

Voyageur::Voyageur()
{
	nom = "";
	prénom = "";
	num_passeport == 0;
	nationalité = "";
	date_naiss = "";
	adresse = "";
	nb_bagage == 0;
	bagage = new int[nb_bagage];
}

Voyageur::Voyageur(string n, string p, int nump, string nat, string d, string a, int b)
{
	nom = n;
	prénom = p;
	num_passeport = nump;
	nationalité = nat;
	date_naiss = d;
	adresse = a;
	nb_bagage = b;
	bagage = new int[nb_bagage];
}

Voyageur::Voyageur(const Voyageur& v)
{
	nom = v.nom;
	prénom = v.prénom;
	num_passeport = v.num_passeport;
	nationalité = v.nationalité;
	date_naiss = v.date_naiss;
	adresse = v.adresse;
	nb_bagage = v.nb_bagage;
	bagage = new int[nb_bagage];
	for (int i = 1; i < nb_bagage; i++)
		bagage[i] = v.bagage[i];
}

void Voyageur::ajout_voyageur()
{
	cout << " Entrer le numéro de passport du Voyageur : " << endl;
	cin >> num_passeport;
	cout << " Entrer le nom du passager : " << endl;
	cin >> nom;
	cout << " Entrer le prenom du passager : " << endl;
	cin >> prénom;
	cout << " Entrer la nationalite du client : " << endl;
	cin >> nationalité;
	cout << " Entrer l'adresse du client : " << endl;
	cin >> adresse;
	cout << " Entrer la date de naissance du passager : " << endl;
	cin >> date_naiss;
	cout << " Entrer le nombre de bagage du passager : " << endl;
	cin >> nb_bagage;
	cout << " Entrer le poids du bagage : " << endl;
	for (int i = 1; i < nb_bagage; i++)
		cin >> *(bagage + i);
}


void Voyageur::affiche()
{
	cout << "______ nom:" << nom << endl;
	cout << "______ prenom:" << prénom << endl;
	cout << "______ numero de passeport:" << num_passeport << endl;
	cout << "______ Adresse :" << adresse << endl;
	cout << "______ nationalite :" << nationalité << endl;
	cout << "______ Date de naissance :" << date_naiss << endl;
	cout << "______ Les bagages : " << endl;
	for (int i = 1; i<nb_bagage; i++)
	{
		cout << *(bagage + i) << "\t";
	}
	cout << endl;
}

void Voyageur::modifier(int indice, int poids)
{
	*(bagage + indice) = poids;
}

void Voyageur::ajouter(int poids)
{
	nb_bagage = nb_bagage + 1;
	bagage[nb_bagage - 1] = poids;
}

void Voyageur::supprimer(int indice) // supprimer le bagage
{
	int i = 0;
	int aux;
	switch (indice)
	{
	case 0: {
		aux = bagage[indice];
		bagage[indice] = bagage[nb_bagage - 1];
		bagage[nb_bagage - 1] = aux;
		nb_bagage = nb_bagage - 1;
		int m = nb_bagage;
		while (i<4)
		{
			aux = bagage[indice];
			bagage[indice] = bagage[m - 1];
			bagage[m - 1] = aux;
			i++;
			m = m - 1;
		}
	} break;
	case 1: {
		aux = bagage[indice];
		bagage[indice] = bagage[nb_bagage - 1];
		bagage[nb_bagage - 1] = aux;
		nb_bagage = nb_bagage - 1;
		int m = nb_bagage;
		while (i<3)
		{
			aux = bagage[indice];
			bagage[indice] = bagage[m - 1];
			bagage[m - 1] = aux;
			i++;
			m = m - 1;
		}
	} break;
	case 2: {
		aux = bagage[indice];
		bagage[indice] = bagage[nb_bagage - 1];
		bagage[nb_bagage - 1] = aux;
		nb_bagage = nb_bagage - 1;
		int m = nb_bagage;
		while (i<2)
		{
			aux = bagage[indice];
			bagage[indice] = bagage[m - 1];
			bagage[m - 1] = aux;
			i++;
			m = m - 1;
		}
	} break;
	case 3: {
		aux = bagage[indice];
		bagage[indice] = bagage[nb_bagage - 1];
		bagage[nb_bagage - 1] = aux;
		nb_bagage = nb_bagage - 1;
		int m = nb_bagage;
		while (i<1)
		{
			aux = bagage[indice];
			bagage[indice] = bagage[m - 1];
			bagage[m - 1] = aux;
			i++;
			m = m - 1;
		}
	} break;
	case 4: {
		nb_bagage = nb_bagage - 1;
	} break;
	}
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

int Voyageur::recherche_Psg(const vector <Voyageur> v, int pos)
{
	int i = 0;
	unsigned trouve = false;
	while (i<v.size() && trouve == false)
	{
		if (v[i].num_passeport == num_passeport)
		{
			trouve = true;
			pos = i;
		}
		else
			i++;
	}
	return trouve;
}




Voyageur::~Voyageur()
{
}