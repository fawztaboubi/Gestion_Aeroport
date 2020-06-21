#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Employé
{
public:
	int id_employe;
	string nom_employe;
	string prenom_employe;
	string date_naiss_employe;
	string adresse_employe;
	double salaire_employe;
	string sexe_employe;
public:
	Employé();
	void   saisir_employe();
	void   afficher_employe();
	int    getid_emplye() { return (id_employe); };
	string getnom_employe() { return (nom_employe); };
	string getprenom_employe() { return (prenom_employe); };
	string getdate_naiss_employe() { return (date_naiss_employe); }
	string getadresse_employe() { return (adresse_employe); };
	double getsalair_emplye() { return (salaire_employe); };
	string getsexe_employe() { return (sexe_employe); };
	void setid_employe(int y) { id_employe = y; };
	void setnom_employe(string ch) { nom_employe = ch; };
	void setprenom_employe(string ch) { prenom_employe = ch; };
	void setadresse_employe(string y) { string adresse_employe = y; };
	void setsalaire_employe(double y) { salaire_employe = y; };
	void setsexe_employe(string y) { sexe_employe = y; };
	int rechercher_emp(const vector <Employé>, int);
	~Employé() {};

};