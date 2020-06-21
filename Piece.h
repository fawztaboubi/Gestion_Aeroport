#include <string>
#include <iostream>
#include <vector>
using namespace std; 

class Piece
{
	int num_piece;
	string libelle_piece;
	double prix_piece;
	int  id_fournisseur_piece;
public:
	Piece();
	int getnum_piece() { return num_piece; };
	string getlibelle() { return libelle_piece; };
	double getprix_piece() { return prix_piece; };
	int  getid_fournisseur_piece() { return id_fournisseur_piece; };
	void setnum_piece(int a) { num_piece = a; };
	void setlibelle(string a) { libelle_piece = a; };
	void setprix_piece(double a) { prix_piece = a; };
	void setid_fournisseur(int a) { id_fournisseur_piece = a; };
	void afficher_piece();
	void saisir_piece();
	int recherche_piece(const vector <Piece>, int);
	~Piece();
};

