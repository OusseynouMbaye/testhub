#include "eleve.h"
#include <conio.h>

//partie 2 eleve

Eleve::Eleve()
{
	codeEleve = "";
	nom = "";
	prenom = "";
	ActivitePourInscrire = NULL;
}
Eleve::Eleve(string inCodeEleve, string inNom, string inPrenom)
{
	codeEleve = inCodeEleve;
	nom = inNom;
	prenom = inPrenom;
	ActivitePourInscrire = NULL;

}
string Eleve::getCodeEleve() const
{

	return codeEleve;
 }

string Eleve::getNom() const
{

	return nom;
}

string Eleve::getprenom() const
{

	return prenom;
}
Activite* Eleve::getActivitePourInscrire() const
{
	return ActivitePourInscrire;

}
void Eleve::InscrireEleve(string inCodeEleve, string inNom, string inPrenom)
{
	codeEleve = inCodeEleve;
	nom = inNom;
	prenom = inPrenom;

}


void Eleve::InscrireAUneActivite(Activite* inActivite)
{

	ActivitePourInscrire = inActivite;
}