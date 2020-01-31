#ifndef EleveH 
#define EleveH
//---------------------------------------------------------------------------
#include <string>
#include <iostream>
#include "activite.h"
using namespace std;
//****partie 2 question 6*****
class Eleve
{
private:
		string codeEleve;
		string nom;
		string prenom;
		//***partie 3-question 11-a
		Activite* ActivitePourInscrire;
public:
	Eleve();
	Eleve(string inCodeEleve, string inNom, string inPrenom);
	string getCodeEleve() const;
	string getNom() const;
	string getprenom() const;
	//***partie 3-question 11-a
	Activite* getActivitePourInscrire() const;
	void InscrireEleve(string inCodeEleve, string inNom, string inPrenom);
	void InscrireAUneActivite(Activite* inActivite);
};
#endif

