#include "Client.h"



Client::Client()
{
	id_clt == 0;
	nom = "";
	pr�nom = "";
	nationalit� = "";
	adresse = "";
}

void Client::saisir_clt()
{
	cout << " Entrer l'id du client : " << endl;
	cin >> id_clt;
	cout << " Entrer le nom du client : " << endl;
	cin >> nom;
	cout << " Entrer le prenom du client : " << endl;
	cin >> pr�nom;
	cout << " Entrer la nationalite du client : " << endl;
	cin >> nationalit�;
	cout << " Entrer l'adresse du client : " << endl;
	cin >> adresse;
}

void Client::afficher_clt()
{
	cout << " _____ L'id du client ayant effectue la reservation est : " << id_clt << endl;
	cout << " _____ Le nom du client ayant effectue la reservation est : " << nom << endl;
	cout << " _____ Le pr�nom du client ayant effectue la reservation est : " << pr�nom << endl;
	cout << " _____ La nationalite du client ayant effectue la reservation est : " << nationalit� << endl;
	cout << " _____ L'adresse du client ayant effectue la reservation est : " << adresse << endl;
}

int Client::recherche_clt(const vector <Client> clt, int pos)
{
	int i = 0;
	unsigned trouve = false;
	while (i<clt.size() && trouve == false)
	{
		if (clt[i].id_clt == id_clt)
		{
			trouve = true;
			pos = i;
		}
		else
			i++;
	}
	return trouve;
}

Client::~Client()
{
}
