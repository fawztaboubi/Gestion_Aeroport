#include <iostream>
#include <string>
#include <vector>
#include "Employé.h"
using namespace std;

class Ingenieur :
	public Employé
{
	string specialité;
public:
	Ingenieur();
	void afficher_ingenieur();
	void saisir_ingenieur();
	string getspecialite() { return specialité; };
	void setspecialte(string ch) { specialité = ch; };
	int rechercher_ing(const vector<Ingenieur>, int);
	~Ingenieur();
};

