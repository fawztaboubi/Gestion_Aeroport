#include "Piece.h"



Piece::Piece()
{
	num_piece == 0; 
	libelle_piece = "";
	prix_piece = 0;
	id_fournisseur_piece = 0;
}

void Piece::afficher_piece()
{
	cout << "____ numero piece : " << num_piece << endl;
	cout << "____ libelle : " << libelle_piece << endl;
	cout << "____ identifiant de fournisseur :" << id_fournisseur_piece << endl;
	cout << "____ prix :" << prix_piece << endl;

}
void   Piece::saisir_piece()
{
	cout << "saisir le num de la piece" << endl;
	cin >> num_piece;
	cout << "saisir le libellede la piece" << endl;
	cin >> libelle_piece;
	cout << "saisir le prix de la piece" << endl;
	cin >> prix_piece;
	cout << "saisir l'id de fournisseur de la piece" << endl;
	cin >> id_fournisseur_piece;
}

int Piece::recherche_piece(const vector <Piece> pce, int pos)
{
	int i = 0;
	unsigned trouve = false;
	while (i<pce.size() && trouve == false)
	{
		if (pce[i].num_piece == num_piece)
		{
			trouve = true;
			pos = i;
		}
		else
			i++;
	}
	return trouve;
}

Piece::~Piece()
{
}
