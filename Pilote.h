#include <iostream>
#include <string>
#include <vector>
#include "Employé.h"

using namespace std;
class Pilote : public Employé
{
	int nb_heure;
public:
	Pilote();
	void ajouter_pilote();
	void afficher_pilote();
	int rechercher_pilote(const vector <Pilote>, int);
	~Pilote();
};

