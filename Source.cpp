#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <exception>
#include "Voyageur.h"
#include "Client.h"
#include "Réservation.h"
#include "Aeroport.h"
#include "Escale.h"
#include "Avion.h"
#include "Vol.h"
#include "Ville.h"
#include "Employé.h"
#include "Pilote.h"
#include "Ingenieur.h"
#include "Fournisseur.h"
#include "Piece.h"

using namespace std;

int main()
{
	fstream f;
	f.open("texte.txt", ios::in | ios::out | ios::trunc);
	if (!f.is_open()) exit(-1);
	int choix;
	vector <Avion> avn;
	Avion av;
	vector <Ingenieur> ing;
	Ingenieur in;
	vector <Client> clt;
	Client c;
	vector <Voyageur> liste;
	Voyageur v;
	vector <Pilote> pil;
	Pilote p;
	vector <Piece> pce;
	Piece pc;
	vector <Réservation> res;
	Réservation r;
	vector <Aeroport> arp;
	Aeroport a;
	vector <Escale> esc;
	Escale e;
	vector <Vol> vol;
	Vol vo;
	vector <Fournisseur> four;
	Fournisseur fo;
	while (1)
	{
		cout << endl;
		cout << "                ______________________     M E N U     ____________________" << endl;
		cout << "               |                                                           |" << endl;
		cout << "               |  1  ------------   Liste des voyageurs   ---------------  |" << endl;
		cout << "               |  2  ------------   rechercher un voyageur  ------------   |" << endl;
		cout << "               |  3  ------------- Enregistrer un voyageur -------------   |" << endl;
		cout << "               |                                                           |" << endl;
		cout << "               |  4  -------------   Liste des clients   ----------------  |" << endl;
		cout << "               |  5  -------------   rechercher un client  -------------   |" << endl;
		cout << "               |  6  -------------- Enregistrer un client --------------   |" << endl;
		cout << "               |                                                           |" << endl;
		cout << "               |  7  ------------   Liste des reservations   ------------  |" << endl;
		cout << "               |  8  ------------   rechercher reservation  ------------   |" << endl;
		cout << "               |  9  ------------ Enregistrer reservation --------------   |" << endl;
		cout << "               |                                                           |" << endl;
		cout << "               |  10  -------------   Liste des aeroports   -------------  |" << endl;
		cout << "               |  11  ------------  rechercher un aeroport  ------------   |" << endl;
		cout << "               |  12  ------------   Ajouter un aeroport  --------------   |" << endl;
		cout << "               |                                                           |" << endl;
		cout << "               |  13  --------------   Liste des escales   --------------  |" << endl;
		cout << "               |  14  ---------------  Trouver un escale  --------------   |" << endl;
		cout << "               |  15  --------------   Ajouter un escale  --------------   |" << endl;
		cout << "               |                                                           |" << endl;
		cout << "               |  16  --------------   Liste des avions    --------------  |" << endl;
		cout << "               |  17  -------------  Rechercher un avion  --------------   |" << endl;
		cout << "               |  18  --------------   Ajouter un avion   --------------   |" << endl;
		cout << "               |                                                           |" << endl;
		cout << "               |  19  --------------     Liste des vols    --------------  |" << endl;
		cout << "               |  20  -------------    Rechercher un vol  --------------   |" << endl;
		cout << "               |  21  --------------    Ajouter un vol    --------------   |" << endl;
		cout << "               |  22  -------------    Supprimer un vol    -------------   |" << endl;
		cout << "               |                                                           |" << endl;
		cout << "               |  23  -------------   Liste des pilotes    --------------  |" << endl;
		cout << "               |  24  ------------  Rechercher un pilote  --------------   |" << endl;
		cout << "               |  25  -------------   Ajouter un pilote   --------------   |" << endl;
		cout << "               |                                                           |" << endl;
		cout << "               |  26  ------------   Liste des ingenieurs    ------------  |" << endl;
		cout << "               |  27  ----------  Rechercher un ingenieur  -------------   |" << endl;
		cout << "               |  28  -----------   Ajouter un ingenieur    ------------   |" << endl;
		cout << "               |                                                           |" << endl;
		cout << "               |  29  ------------   Liste des fournisseurs   -----------  |" << endl;
		cout << "               |  30  ----------   Ajouter un fournisseur   ------------   |" << endl;
		cout << "               |                                                           |" << endl;
		cout << "               |  31  ----------------   Liste des pieces   -------------  |" << endl;
		cout << "               |  32  --------------   Ajouter une piece   -------------   |" << endl;
		cout << "               |  33  ----------     Rechercher une piece  -------------   |" << endl;
		cout << "               |  34  ------------        QUITTER       -------------------|" << endl;
		cout << "               |___________________________________________________________|" << endl;

		cout << "\n entrez votre choix :";
		cin >> choix;
		while (choix < 1 || choix>34)
		{
			cout << "\n votre choix est eronne \a\a !!!!!!" << endl;
			cout << "reentrez votre choix :";
			cin >> choix;
		}
		switch (choix)
		{
		case 1:
			if (liste.empty())
				cout << " Aucun voyageur n'est disponible maintenant !!!!" << endl;

			else
			{
				cout << "                     ***********  Les voyageurs disponibles  ************\n\n\n";
				for (int i = 0; i < liste.size(); i++)
				{
					liste[i].affiche();
				}
			}
			cout << endl;
			system("pause");
			break;
		case 2:
			if (liste.empty())
				cout << " Aucun voyageur n'est disponible maintenant !!!!" << endl;

			else
			{
				string nm;
				cout << "entrez le num de passport que vous voulez chercher : ";
				cin >> nm;
				int i = 0;
				v.recherche_Psg(liste, i);
				if (i == -1)
					cout << "\n\n ce voyageur n'existe pas dans la liste\n";
				else
					liste[i].affiche();

			}
			cout << endl;
			system("pause");
			break;
		case 3:
			v.ajout_voyageur();
			liste.push_back(v);
			for (int i = 0; i < liste.size(); i++)
			{
				liste[i].affiche();
			}
			system("pause");
			break;
		case 4:
			if (clt.empty())
				cout << " Aucun client n'est disponible maintenant !!!!" << endl;

			else 
			{
				cout << "                ***********  Les clients disponibles  ************\n\n\n";
				for (int i = 0; i < clt.size(); i++)
				{
					clt[i].afficher_clt();
				}
			}
			cout << endl;
			system("pause");
			break;
		case 5:
			if (clt.empty())
				cout << " Aucun client n'est disponible maintenant !!!!" << endl;

			else
			{
				int id;
				cout << "entrez l'id que vous voulez chercher : ";
				cin >> id;
				int i = 0;
				c.recherche_clt(clt, i);
				if (i == -1)
					cout << "\n\n ce voyageur n'existe pas dans la liste\n";
				else
					clt[i].afficher_clt();

			}
			cout << endl;
			system("pause");
			break;
		case 6:
			c.saisir_clt();
			clt.push_back(c);
			for (int i = 0; i < clt.size(); i++)
			{
				clt[i].afficher_clt();
			}
			system("pause");
			break;
		case 7:
			if (res.empty())
				cout << " Aucun reservation n'est disponible maintenant !!!!" << endl;

			else
			{
				cout << "                ***********  Les reservations disponibles  ************\n\n\n";
				for (int i = 0; i < res.size(); i++)
				{
					res[i].affiche_res();
				}
			}
			cout << endl;
			system("pause");
			break;
		case 8:
			if (res.empty())
				cout << " Aucune reservation n'est disponible maintenant !!!!" << endl;

			else
			{
				int numres;
				cout << "entrez l'id que vous voulez chercher : ";
				cin >> numres;
				int i = 0;
				r.recherche_res(res, i);
				if (i == -1)
					cout << "\n\n cette reservation n'existe pas dans la liste\n";
				else
					res[i].affiche_res();

			}
			cout << endl;
			system("pause");
			break;
		case 9:
			int i = 0;
			r.réserver(c, i);
			res.push_back(r);
			for (int i = 0; i < res.size(); i++)
			{
				res[i].affiche_res();
			}
			system("pause");
			break;
		case 10:
			if (arp.empty())
				cout << " Il n'existe aucun aeroport !!!!" << endl;

			else
			{
				cout << "                ***********  Les aeroports disponibles  ************\n\n\n";
				for (int i = 0; i < arp.size(); i++)
				{
					arp[i].afficher_aeroport();
				}
			}
			cout << endl;
			system("pause");
			break;
		case 11:
			if (arp.empty())
				cout << " Pas d'aeroport !!!!" << endl;

			else
			{
				int ida;
				cout << "entrez l'id de l'aeroport que vous voulez chercher : ";
				cin >> ida;
				int i = 0;
				a.rechercher_aeroport(arp, i);
				if (i == -1)
					cout << "\n\n cet aeroport n'existe pas dans la liste\n";
				else
					arp[i].afficher_aeroport();

			}
			cout << endl;
			system("pause");
			break;
		case 12:
			a.saisir_aeroport();
			arp.push_back(a);
			for (int i = 0; i < arp.size(); i++)
			{
				arp[i].afficher_aeroport();
			}
			system("pause");
			break;
		case 13:
			if (esc.empty())
				cout << " Aucun escale n'est disponible maintenant !!!!" << endl;

			else
			{
				cout << "         ***********  Les escales disponibles  ************\n\n\n";
				for (int i = 0; i < esc.size(); i++)
				{
					esc[i].afficher_esc();
				}
			}
			cout << endl;
			system("pause");
			break;
		case 14:
			if (esc.empty())
				cout << " Aucun escale n'est disponible maintenant !!!!" << endl;

			else
			{
				int ide;
				cout << "entrez l'id que vous voulez chercher : ";
				cin >> ide;
				int i = 0;
				e.rechercher_esc(esc, i);
				if (i == -1)
					cout << "\n\n cet escale n'existe pas dans la liste\n";
				else
					esc[i].afficher_esc();

			}
			cout << endl;
			system("pause");
			break;
		case 15:
			e.ajouter_escale();
			esc.push_back(e);
			for (int i = 0; i < esc.size(); i++)
			{
				esc[i].afficher_esc();
			}
			system("pause");
			break;
		case 16:
			if (avn.empty())
				cout << " Aucun avion n'est disponible maintenant !!!!" << endl;

			else
			{
				cout << "                ***********  Les avions disponibles  ************\n\n\n";
				for (int i = 0; i < avn.size(); i++)
				{
					avn[i].afficher_avion();
				}
			}
			cout << endl;
			system("pause");
			break;
		case 17:
			if (avn.empty())
				cout << " Aucun avion n'est disponible maintenant !!!!" << endl;

			else
			{
				int idav;
				cout << "entrez l'identifiant de l'avion que vous voulez chercher : ";
				cin >> idav;
				int i = 0;
				av.rechercher_avion(avn, i);
				if (i == -1)
					cout << "\n\n cet avion n'existe pas dans la liste\n";
				else
					avn[i].afficher_avion();

			}
			cout << endl;
			system("pause");
			break;
		case 18:
			av.ajouter_avion();
			avn.push_back(av);
			for (int i = 0; i < avn.size(); i++)
			{
				avn[i].afficher_avion();
			}
			system("pause");
			break;
		case 19:
			if (vol.empty())
				cout << " Il n'existe aucun vol !!!!" << endl;

			else
			{
				cout << "            ***********  Les vols disponibles  ************\n\n\n";
				for (int i = 0; i < vol.size(); i++)
				{
					vol[i].afficher_vol();
				}
			}
			cout << endl;
			system("pause");
			break;
		case 20:
			if (vol.empty())
				cout << " Pas de vol !!!!" << endl;

			else
			{
				int numv;
				cout << "entrez le numero de vol que vous voulez chercher : ";
				cin >> numv;
				int i = 0;
				vo.rechercher_vol(vol, i);
				if (i == -1)
					cout << "\n\n cet aeroport n'existe pas dans la liste\n";
				else
					vol[i].afficher_vol();

			}
			cout << endl;
			system("pause");
			break;
		case 21:
			vo.ajouter_vol();
			vol.push_back(vo);
			for (int i = 0; i < vol.size(); i++)
			{
				vol[i].afficher_vol();
			}
			system("pause");
			break;
		case 22:
			int numv;
			cout << " donner le numero de vol a annuler" << endl;
			cin >> numv;
			for (unsigned int i = 0; i<vol.size(); i++)
			{
				if (vol[i].get_um_vol == numv)
					vol.erase(vol[i]);
			}
		case 23:
			if (pil.empty())
				cout << " Aucun pilote n'est disponible maintenant !!!!" << endl;

			else
			{
				cout << "                 ***********  Les voyageurs disponibles  ************\n\n\n";
				for (int i = 0; i < pil.size(); i++)
				{
					pil[i].afficher_pilote();
				}
			}
			cout << endl;
			system("pause");
			break;
		case 24:
			if (pil.empty())
				cout << " Aucun pilote n'est disponible maintenant !!!!" << endl;

			else
			{
				string idpil;
				cout << "entrez l'id du pilote que vous voulez chercher : ";
				cin >> idpil;
				int i = 0;
				p.rechercher_pilote(pil, i);
				if (i == -1)
					cout << "\n\n ce voyageur n'existe pas dans la liste\n";
				else
					pil[i].afficher_pilote();

			}
			cout << endl;
			system("pause");
			break;
		case 25:
			p.ajouter_pilote();
			pil.push_back(p);
			for (int i = 0; i < pil.size(); i++)
			{
				pil[i].afficher_pilote();
			}
			system("pause");
			break;
		case 26:
			if (ing.empty())
				cout << " Aucun ingenieur n'est disponible maintenant !!!!" << endl;

			else
			{
				cout << "         ***********  Les ingenieurs disponibles  ************\n\n\n";
				for (int i = 0; i < ing.size(); i++)
				{
					ing[i].afficher_ingenieur();
				}
			}
			cout << endl;
			system("pause");
			break;
		case 27:
			if (ing.empty())
				cout << " Aucun ingenieur n'est disponible maintenant !!!!" << endl;

			else
			{
				string iding;
				cout << "entrez l'id de l'ingenieur que vous voulez chercher : ";
				cin >> iding;
				int i = 0;
				in.rechercher_ing(ing, i);
				if (i == -1)
					cout << "\n\n cet ingenieur n'existe pas dans la liste\n";
				else
					ing[i].afficher_ingenieur();

			}
			cout << endl;
			system("pause");
			break;
		case 28:
			in.saisir_ingenieur();
			ing.push_back(in);
			for (int i = 0; i < ing.size(); i++)
			{
				ing[i].afficher_ingenieur();
			}
			system("pause");
			break;
		case 29:
			if (four.empty())
				cout << " Aucun fournisseur n'est disponible maintenant !!!!" << endl;

			else
			{
				cout << "            ***********  Les fournisseurs disponibles  ************\n\n\n";
				for (int i = 0; i < liste.size(); i++)
				{
					four[i].afficher_fournisseur();
				}
			}
			cout << endl;
			system("pause");
			break;
		case 30:
			fo.saisir_fournisseur();
			four.push_back(fo);
			for (int i = 0; i < four.size(); i++)
			{
				four[i].afficher_fournisseur();
			}
			system("pause");
			break;
		case 31:
			if (pce.empty())
				cout << " Aucune piece n'est disponible maintenant !!!!" << endl;

			else
			{
				cout << "     ***********  Les pieces disponibles  ************\n\n\n";
				for (int i = 0; i < pce.size(); i++)
				{
					pce[i].afficher_piece();
				}
			}
			cout << endl;
			system("pause");
			break;
		case 32:
			pc.saisir_piece();
			pce.push_back(pc);
			for (int i = 0; i < pce.size(); i++)
			{
				pce[i].afficher_piece();
			}
			system("pause");
			break;
		case 33:
			if (pce.empty())
				cout << " Aucune piece n'est disponible maintenant !!!!" << endl;

			else
			{
				int numpc;
				cout << "entrez le numero de la piece que vous voulez chercher : ";
				cin >> numpc;
				int i = 0;
				pc.recherche_piece(pce, i);
				if (i == -1)
					cout << "\n\n cette piece n'existe pas dans la liste\n";
				else
					pce[i].afficher_piece();

			}
			cout << endl;
			system("pause");
			break;
		case 34:
			exit(-1);
		}
	}
	f.close();
	system("pause");
}