#include "matiere.h"

Matiere::Matiere(int m_numeroMatiere, string m_libelleMatiere)
{
	numeroMatiere = m_numeroMatiere;
	libelleMatiere = m_libelleMatiere;
}


void Matiere::infoMatiere()
{
	cout<<endl;
	cout<<"         INFORMATION DE LA MATIERE "<<numeroMatiere<<endl;
	cout<<"         libelle de la matiere : "<<libelleMatiere<<endl;
	cout<<"         numero de la matiere : "<<numeroMatiere<<endl;
	cout<<endl<<endl;
}

int Matiere::compareNumMatiere(int numEntree)
{
	if(numEntree==numeroMatiere) return 1;
	else return -1;
}
