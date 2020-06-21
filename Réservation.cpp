#include "Réservation.h"


Réservation::Réservation()
{
	num_res == 0;
	date_res = "";
	nb_place == 0;
	classe = "";
	place = new int[nb_place];
}

Réservation::Réservation(int num_res, string date_res, int nb_place, string classe, int nb_clt)
{
	this->num_res = num_res;
	this->date_res = date_res;
	this->nb_place = nb_place;
	this->classe = classe;
	place = new int[nb_place];
	this->nb_clt = nb_clt;
	for (int i = 0; i < nb_clt; i++)
	{
		Client* clt = new Client(*tab[i]);
		tab.push_back(clt);
	}
}

void Réservation::réserver(Client c, int i)
{
	cout << "_______ Numero de reservation______ : " << num_res << endl;
	cout << "_______ Date de reservation______ : " << date_res << endl;
	cout << "_______ Nombre de places reservees______ : " << nb_place << endl;
	cout << "_______ Classe reservee______ : " << classe << endl;
	cout << "_______ Les places reservees______" << endl;
	for (int i = 0; i<nb_place; i++)
	{
		cout << *(place + i) << "\t";
	}
	cout << endl;
	Client* clt = new Client(c);
	tab.insert(tab.begin() + i, clt);
	nb_clt++;
}

void Réservation::confirmer()
{
	string rep;
	bool confirme;
	cout << "est ce que vous voulez vraiment confirmer votre reservation (oui/non)";
	cin >> rep;
	if (rep == "oui")
		confirme = true;
}

void Réservation::ajouter_place(int p)
{
	nb_place = nb_place + 1;
	place[nb_place - 1] = p;
}

void Réservation::affiche_res()
{
	cout << " Numero de reservation : " << num_res << endl;
	cout << " Date de reservation : " << date_res << endl;
	cout << " Nombre de places reservees : " << nb_place << endl;
	cout << " Classe reservee : " << classe << endl;
	cout << " Les places reservees : " << endl;
	for (int i = 0; i<nb_place; i++)
	{
		cout << *(place + i) << "\t";
	}
	cout << endl;
	for (int i = 0; i < tab.size(); i++)
		tab[i]->afficher_clt();
}

int Réservation::recherche_res(const vector <Réservation> res, int pos)
{
	int i = 0;
	unsigned trouve = false;
	while (i<res.size() && trouve == false)
	{
		if (res[i].num_res == num_res)
		{
			trouve = true;
			pos = i;
		}
		else
			i++;
	}
	return trouve;
}

Réservation::~Réservation()
{
}