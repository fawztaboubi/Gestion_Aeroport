#include <iostream>
#include <string>
#include <vector>
#include "Employ�.h"
using namespace std;

class Ingenieur :
	public Employ�
{
	string specialit�;
public:
	Ingenieur();
	void afficher_ingenieur();
	void saisir_ingenieur();
	string getspecialite() { return specialit�; };
	void setspecialte(string ch) { specialit� = ch; };
	int rechercher_ing(const vector<Ingenieur>, int);
	~Ingenieur();
};

