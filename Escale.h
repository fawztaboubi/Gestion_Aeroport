#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Escale
{
	int id_escale;
	string date_arr;
	string date_dep;
	string heure_arr;
	string heure_dep;
public:
	Escale();
	Escale(int, string, string, string, string);
	void ajouter_escale();
	void afficher_esc();
	int rechercher_esc(const vector <Escale>, int);
	~Escale();
};