#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Avion
{
	int id_avion;
	string type_avion;
	int  capacit�;
public:
	Avion::Avion();
	~Avion();
	int get_id_avion() { return id_avion; };
	string get_type_avion() { return type_avion; };
	int get_capacit�() { return capacit�; };
	void ajouter_avion();
	void afficher_avion();
	int rechercher_avion(const vector <Avion>, int);
};

