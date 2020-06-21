#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Aeroport
{
	int id_aeroport;
	string libelle_aeroport;
	float surface;
public:
	Aeroport();
	void saisir_aeroport();
	void afficher_aeroport();
	int get_id_aeropport() { return id_aeroport; }
	float get_surface() { return surface; };
	string get_libelle() { return libelle_aeroport; };
	int rechercher_aeroport(const vector <Aeroport>, int);
	~Aeroport();
};