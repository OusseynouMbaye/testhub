#include "activite.h"

//*****partie 2 question 5*****
Activite::Activite()
{
   codeActivite="";
    titre="";
    responsable=""; 
}

Activite::Activite(string inCodeActivite, string inTitre, string inResponsable)
{
	codeActivite = inCodeActivite;
	titre = inTitre;
	responsable = inResponsable;

}
//partie 1 question 1
string Activite::getCodeActivite() const
{
	return codeActivite;
}
string Activite::getTitre() const
{
	return titre;

}
string Activite::getResponsable() const
{
	return responsable;
}
void Activite::InitialiserActivite(string inCodeActivite, string inTitre)
{

	codeActivite = inCodeActivite;
	titre = inTitre;
}

void Activite::AssignerResponsable(string inResponsable)
{
	responsable = inResponsable;

}

