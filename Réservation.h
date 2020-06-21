#include <iostream>
#include <string>
#include <vector>
#include "Client.h"
using namespace std;

class R�servation
{
	string date_res;
	int nb_place;
	string classe;
	int* place;
	int nb_clt;
	vector<Client*> tab;

public:
	int num_res;
	R�servation();
	R�servation(int, string, int, string, int);
	int get_numRes()
	{
		return num_res;
	}
	void r�server(Client, int);
	void confirmer();
	void ajouter_place(int);
	void affiche_res();
	int recherche_res(const vector <R�servation>, int);
	~R�servation();
};
