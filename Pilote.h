#include <iostream>
#include <string>
#include <vector>
#include "Employ�.h"

using namespace std;
class Pilote : public Employ�
{
	int nb_heure;
public:
	Pilote();
	void ajouter_pilote();
	void afficher_pilote();
	int rechercher_pilote(const vector <Pilote>, int);
	~Pilote();
};

