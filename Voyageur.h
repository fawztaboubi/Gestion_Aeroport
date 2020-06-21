#include <iostream>
#include <string>
#include <list>
#include <vector>

using namespace std;

class Voyageur
{
	string nom;
	string prénom;
	int num_passeport;
	string nationalité;
	string date_naiss;
	string adresse;
	int nb_bagage;
	int* bagage;
	
public:
	Voyageur();
	Voyageur(string, string, int, string, string, string, int);
	Voyageur(const Voyageur&);
	void affiche();
	void modifier(int, int);
	void ajouter(int);
	void supprimer(int);
	int get_numPsg()
	{
		return num_passeport;
	}
	int recherche_Psg(const vector <Voyageur>, int);
	void ajout_voyageur();

	~Voyageur();
};