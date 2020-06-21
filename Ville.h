#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Ville
{
	int id_ville;
	string nom_ville;
	string pays;
public:
	Ville(int, string, string);
	Ville();
	~Ville() {};
	int get_id_ville() { return id_ville; };
	string get_nom_ville() { return nom_ville; };
	string get_pays() { return pays; };
	void afficher_ville();
};
