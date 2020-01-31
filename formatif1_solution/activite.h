#ifndef ACTIVITE_H 
#define ACTIVITE_H

#include "..\screen\screen.h"
#include <string>
#include <iostream>
using namespace std;
//partie 1 question 1 
class Activite
{
    private:
		string codeActivite;
		string titre;
		string responsable;
						
	public:
		//*****partie question 5***
		//constructeur par defaut
		Activite();
		//constructeur  avec parametre
		Activite(string inCodeActivite,string inTitre, string inResponsable);

		string getCodeActivite() const;
		string getTitre() const;
		string getResponsable()  const;

		void InitialiserActivite(string inCodeActivite,string inTitre);
		void AssignerResponsable(string inResponsable);

};
#endif