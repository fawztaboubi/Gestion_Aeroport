#include "Fournisseur.h"



Fournisseur::Fournisseur()
{
	id_fournisseur == 0;
	nom_fournisseur = "";
	prenom_fournisseur = "";
	adresse_fournisseur = "";
	tel_fournisseur = "";
}

void Fournisseur::afficher_fournisseur()
{
	cout << "_____ l'identifiant de ce fournisseur:" << id_fournisseur << endl;
	cout << "_____ le nom de ce fournisseur:" << nom_fournisseur << endl;
	cout << "_____ le prenom de ce fournisseur:" << prenom_fournisseur << endl;
	cout << "_____ l'adresse de ce fournisseur:" << adresse_fournisseur << endl;
	cout << "_____ le tel  de ce fournisseur:" << tel_fournisseur << endl;

}

void   Fournisseur::saisir_fournisseur()
{
	cout << "saisir l identifiant de fournisseur" << endl;
	cin >> id_fournisseur;
	cout << "saisir le nom d de fournisseur" << endl;
	cin >> nom_fournisseur;
	cout << "saisir le prenom de fournisseur " << endl;
	cin >> prenom_fournisseur;
	cout << "saisir l adresse de fournisseur " << endl;
	cin >> adresse_fournisseur;
	cout << "saisir le telephone de fournisseur " << endl;
	cin >> tel_fournisseur;


}

Fournisseur::~Fournisseur()
{
}
