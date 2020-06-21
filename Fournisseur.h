#include <iostream>
#include <string>
#include <vector>

using namespace std; 
class Fournisseur
{
	int id_fournisseur;
	string nom_fournisseur;
	string prenom_fournisseur;
	string adresse_fournisseur;
	string tel_fournisseur;
public:
	Fournisseur();
	int getid_fournisseur() { return id_fournisseur; };
	string getnom_fournisseur() { return nom_fournisseur; };
	string getprenom_fournisseur() { return prenom_fournisseur; };
	string getadresse_fournisseur() { return adresse_fournisseur; };
	string gettel_fournisseur() { return tel_fournisseur; };
	void setid_fournisseur(int a) { id_fournisseur = a; };
	void setnom_fournisseur(string a) { nom_fournisseur = a; };
	void setprenom_fournisseur(string a) { prenom_fournisseur = a; };
	void setadresse_fournisseur(string a) { adresse_fournisseur = a; };
	void settel_fournisseur(string a) { tel_fournisseur = a; };
	void afficher_fournisseur();
	void saisir_fournisseur();
	~Fournisseur();


};

