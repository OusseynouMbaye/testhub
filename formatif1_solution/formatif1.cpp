#include <string>
#include <conio.h>
#include <stdio.h>
#include <iostream>
#include <iomanip>
#include "..\screen\screen.h"
using namespace std;

#include "activite.h" 
#include "eleve.h" 
#include "donnees.h"


//const int maxActivites = 10;
//const int maxEleves = 25;
//partie 1 question 2
//Activite lesActivites[maxActivites];
//**** partie 2-question 7
//Eleve lesEleves[maxEleves];

Donnees lesDonnesduProgramme;
int nombreActivitesReelles = 0;
int nombreElevesReels = 0;

char AfficherMenu();
//partie 1
void AjouterActivite();
void AfficherLesActivites();
//question
void Afficher(Activite inActivite);

//partie 2 question 8
void AjouterLesEleves();
void AfficherLesEleves();
void InscrireUnEleve(string, string, string);
//question 9
void Afficher(Eleve inEleve);

//partie 3
void InscrireEleveActivite();
int RechercherEleve(string eleveVoulu);
int RechercherActivite(string activiteVoulu);
void AfficherLesInscriptions();


int main()
{
	char choix = ' ';

	while (choix != '0')
	{
		choix = AfficherMenu();
		switch (choix)
		{
		case '1': AjouterActivite();
			break;
		case '2': AfficherLesActivites();
			break;
		case '3': AjouterLesEleves();
			break;
		case '4': AfficherLesEleves();
			break;
		case '5': InscrireEleveActivite();
			break;
		case '6': AfficherLesInscriptions();
			break;
		}
	}
}

//----------------------------------------------------------------------------------------
char AfficherMenu()
{
	char choix;
	ClrScr();
	Gotoxy(15, 4);
	cout << "1- Ajouter une activite";
	Gotoxy(15, 6);
	cout << "2- Afficher toutes les activites";
	Gotoxy(15, 8);
	cout << "3- Ajouter des eleves";
	Gotoxy(15, 10);
	cout << "4- Afficher les eleves";
	Gotoxy(15, 12);
	cout << "5- Inscrire un eleve a une activite";
	Gotoxy(15, 14);
	cout << "6- Afficher les inscriptions d'une activite";
	Gotoxy(15, 16);
	cout << "0- Arreter";
	Gotoxy(15, 18);
	cout << "Choix: ";
	cin >> choix;
	return choix;
}

//----------------------------------------------------------------------------------------
void AjouterActivite()
{
	string code;
	string titre;
	string responsable;
	ClrScr();
	cout << "Code activite: ";
	cin >> code;
	cout << "Titre: ";
	cin >> titre;
	cout << "Responsable: ";
	cin >> responsable;
	//ajoutez les instructions permettant d'inscrire la nouvelle activité dans le tableau des activités
	//utilisez nombreActivitesReelles comme indice pour le tableau
	
	//exercice partie 1 question 2

	lesDonnesduProgramme.lesActivites[nombreActivitesReelles].InitialiserActivite(code, titre);
	lesDonnesduProgramme.lesActivites[nombreActivitesReelles].AssignerResponsable(responsable);

	nombreActivitesReelles++;
}

//----------------------------------------------------------------------------------------
void AfficherLesActivites()
{
	ClrScr();
	for (int i = 0; i < nombreActivitesReelles ; i++)
	{
		Afficher(lesDonnesduProgramme.lesActivites[i]);
	}
	_getch();
}

void Afficher(Activite inActivite)
{
	cout << "\n\n\t\t Code activite :  ";
	cout << inActivite.getCodeActivite();
	
	cout << "\n\n\t\t Titre :  ";
	cout << inActivite.getTitre();

	cout << "\n\n\t\t Responsable :  ";
	cout << inActivite.getResponsable();


}
//----------------------------------------------------------------------------------------
void AjouterLesEleves()
{
	InscrireUnEleve("111", "Laroche", "Arthur");
	InscrireUnEleve("222", "Cailloux", "Fred");
	InscrireUnEleve("333", "Cailloux", "Delima");
	InscrireUnEleve("444", "Laroche", "Bertha");
	InscrireUnEleve("555", "Cailloux", "Agathe");
	InscrireUnEleve("666", "Laroche", "Boumboum");
	InscrireUnEleve("777", "Mirock", "Pierre");
	InscrireUnEleve("888", "Roche", "Onezime");
	InscrireUnEleve("999", "Roche", "Alfreda");
	InscrireUnEleve("112", "Cailloux", "Dino");
}

//----------------------------------------------------------------------------------------
///***partie 2 question 9****
void AfficherLesEleves()
{
	ClrScr();
	for (int i = 0; i < nombreElevesReels; i++)
	{
		Afficher(lesDonnesduProgramme.lesEleves[i]);
	}

	_getch();
}
void Afficher(Eleve inEleve)
{
	cout << "\n\t\t Code Eleve : ";
	cout << inEleve.getCodeEleve();

	cout << "\n\t\t Nom : ";
	cout << inEleve.getNom();


	cout << "\n\t\t prenom : ";
	cout << inEleve.getprenom();
 }
//----------------------------------------------------------------------------------------
void InscrireUnEleve(string inCodeEleve, string inNom, string inPrenom)
{
	//***partie 2-question 8
	lesDonnesduProgramme.lesEleves[nombreElevesReels].InscrireEleve(inCodeEleve,inNom,inPrenom);

	nombreElevesReels++;
}

//----------------------------------------------------------------------------------------
void InscrireEleveActivite()
{
	string eleve;
	string activite;
	int cptEleve;
	int cptActivite;
	ClrScr();
	cout << "Code de l'eleve a inscrire: ";
	cin >> eleve;
	cptEleve = RechercherEleve(eleve);
	cout << "Activite desiree: ";
	cin >> activite;
	cptActivite = RechercherActivite(activite);
	//***partie 3-question 13-a
	if (cptEleve == maxEleves)
	{
		cout << "eleve non trouve";
	}
	else 
	{
		Afficher(lesDonnesduProgramme.lesEleves[cptEleve]);
	}
	//***partie 3-question 13-b
	if (cptActivite == maxActivites)
	{
		cout << "activite non trouve";
	}
	else
	{
		Afficher(lesDonnesduProgramme.lesActivites[cptActivite]);
	}
	//***partie 3-question 13-c
	if (cptEleve != maxEleves && cptActivite != maxActivites )
	{
	  lesDonnesduProgramme.lesEleves[cptEleve].InscrireAUneActivite(&lesDonnesduProgramme.lesActivites[cptActivite]);
	}

	_getch();
}

//----------------------------------------------------------------------------------------
int RechercherEleve(string inCodeVoulu)
{
	int cptEleve = 0;
	bool trouve = false;
	while (trouve == false && cptEleve < maxEleves)
	{
		//***partie 3-question 12

		if (lesDonnesduProgramme.lesEleves[cptEleve].getCodeEleve()==inCodeVoulu)
		{
			trouve = true;
		}
		else
		{
			cptEleve++;
		}
		
	}
	return cptEleve;
}

//----------------------------------------------------------------------------------------
int RechercherActivite(string inCodeActiviteVoulue)
{
	bool trouve = false;
	int cptActivite = 0;
	//***partie 3-question 12
	while (trouve == false && cptActivite < maxActivites/*nombreActivites*/)
	{

		if (lesDonnesduProgramme.lesActivites[cptActivite].getCodeActivite() == inCodeActiviteVoulue)
		{
			trouve = true;
		}
		else
		{
			cptActivite++;
		}
		
	}
	return cptActivite;
}
//----------------------------------------------------------------------------------------
void AfficherLesInscriptions()
{
	string activite;
	ClrScr();
	cout << "Code de l'activite: ";
	cin >> activite;

	for (int i = 0; i < maxEleves; i++)
	{
		if(lesDonnesduProgramme.lesEleves[i].getActivitePourInscrire() != NULL)
		{ 
			if (lesDonnesduProgramme.lesEleves[i].getActivitePourInscrire()->getCodeActivite()==activite)
			{
				Afficher( lesDonnesduProgramme.lesEleves[i]);
			
			}
		}
	}
	_getch();
}







