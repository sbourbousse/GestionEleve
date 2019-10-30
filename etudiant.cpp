#include "etudiant.h"

Etudiant::Etudiant(string e_nomEtudiant, string e_prenomEtudiant, int e_numeroEtudiant)
{
	nomEtudiant = e_nomEtudiant;
	prenomEtudiant = e_prenomEtudiant;
	numeroEtudiant = e_numeroEtudiant;
}

void Etudiant::ajoutNoteEtudiant(float noteEtudiant)
{
	if (noteEtudiant<=20 && noteEtudiant>=0)
	{
		tabNotesEtudiant.push_back(noteEtudiant);
		cout<<"Note ajouté"<<endl;
	}
	else
	{
		cout<<"Note invalide"<<endl;
	}


}

float Etudiant::moyenneEtudiant()
{
	float moyenne;
	if(tabNotesEtudiant.size()>0)
	{
		float sommeNotes=0;
		
		for(int compteur=0;compteur<tabNotesEtudiant.size();compteur++)
		{
			sommeNotes=tabNotesEtudiant[compteur]+sommeNotes;
		}
		
		moyenne=sommeNotes/tabNotesEtudiant.size();

		return moyenne;
	}

	else
	{
		moyenne=-1;
		return moyenne;
	}
	

}

void Etudiant::infoEtudiant()
{
	cout<<endl;
	cout<<"         INFORMATION DE L'ETUDIANT "<<numeroEtudiant<<endl;
	cout<<"         Nom de l'eleve : "<<nomEtudiant<<endl;
	cout<<"         Prenom de l'eleve : "<<prenomEtudiant<<endl;
	cout<<"         Numero de l'eleve : "<<numeroEtudiant<<endl;
	cout<<"         Nombre de Notes de l'eleve : "<<tabNotesEtudiant.size()<<endl;
	if (tabNotesEtudiant.size() > 0)
	{
		float laMoyenne=moyenneEtudiant();
		cout<<"         Moyenne de l'eleve : "<<laMoyenne<<endl;
	}
	//afficher les notes tabNotes avec boucle for 
	cout<<endl<<endl;

}

int Etudiant::comparerNumEtudiant(int numEntree)
{
	if (numEntree==numeroEtudiant) return 1;
	else return -1;
}