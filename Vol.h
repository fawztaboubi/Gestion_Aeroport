#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Vol
{

	int num_vol;
	string origine;
	string date_arr;
	string date_dep;
	string heure_arr;
	string heure_dep;
public:
	Vol();
	Vol(int, string, string, string, string, string);
	~Vol() ;
	int get_um_vol() { return num_vol; };
	string get_origine() { return origine; };
	void ajouter_vol();
	void afficher_vol();
	int rechercher_vol(const vector <Vol>, int);
};
