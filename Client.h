#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Client
{
	int id_clt;
	string nom;
	string prénom;
	string nationalité;
	string adresse;

public:
	Client();
	void set_id(int id)
	{
		id_clt = id;
	}
	int get_id()
	{
		return id_clt;
	}
	void saisir_clt();
	void afficher_clt();
	int recherche_clt(const vector <Client>, int);
	~Client();
};
